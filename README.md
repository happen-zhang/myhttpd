
```
Usage: ./a [OPTION] ...

Options:
  -D, --is-deubg        Is open debug mode, default No
  -d, --is-daemon       Is daemon running, default No
  -p, --port=PORT       Server listen port, default 80
  -m, --max-client=SIZE Max connection requests, default 100
  -L, --is-log          Is write access log, default No
  -l, --log-path=PATH   Access log path, default /tmp/tmhttpd.log
  -b, --is-browse       Is allow browse file/dir list, default No
  -r, --doc-root=PATH   Web document root directory, default programe current directory ./
  -i, --dir-index=FILE  Directory default index file name, default index.html
  -h, --help            Print help information

Example:
  ./a -d -p 8080 -L -l /tmp/access.log -b -r /var/www -i index.html
  ./a -d -p80 -m128 -L -l/tmp/access.log -b -r/var/www -iindex.html
  ./a --is-daemon --port=80 --max-client=128 --is-log --log-path=/tmp/access.log --is-browse --doc-root=/var/www --dir-index=index.html
```
