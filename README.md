# ECOLE 42 COMMON CORE CIRCLE0 - CIRCLE1 PROJECTS

## 📁 1. libft (Circle0)

Goal: Recreate basic C library functions.

Implements string (ft_strlen, ft_strcpy), memory (ft_memset, ft_memcpy), and character checks (ft_isalpha, ft_isdigit).

**Build with:**
```
git clone https://github.com/cgdskrb/42_Common_Core_CIRCLE0_-_CIRCLE1.git repoo
```
```
cd repoo
```
```
cd libft
```
```
make
```

## 📁 2. get_next_line (Circle1)

Amaç: Dosya veya standart girişi satır satır okumak.

Dosyalar: get_next_line.c, get_next_line_utils.c, get_next_line.h

Ana Fonksiyon: char *get_next_line(int fd)

Mantık:

Buffer kullanarak belirli boyutlarda okuma.

"\n" gördüğünde satırı geri döndürme.

Birden çok fd için ayrı buffer tutulur.

Test: Örnek .txt dosyalarıyla çalışan örnekler.

## 📁 3. ft_printf (Circle1)

Amaç: Kısıtlı bir printf klonunu oluşturmak.

Dosyalar: ft_printf.c, parser.c, handlers.c, utils.c, ft_printf.h

Desteklenen Specifierlar: %c, %s, %d, %i, %u, %x, %X, %p, %%

Özellikler:

Alan genişliği ve precision

Sol/sağ hizalama

Çalışma Prensibi:

Format string parse edilir.

va_list ile argümanlar okunur.

Karakter dizisi formatlanır ve yazdırılır.

## 📁 4. born2beroot (Circle1)

Amaç: Linux sistem yöneticiliği temellerini öğrenmek.

Kapsam: Ubuntu üzerinde:

SSH ile root erişimi ve güvenlik ayarları

Yeni kullanıcı ve izin yönetimi

Paket yükleme (apt) ve temel servis yönetimi

FTP, Firewall (ufw) konfigürasyonu

Cron ile zamanlanmış görevler

Adımlar:

VM üzerinde Ubuntu kurulumu

sudo yapılandırması ve SSH anahtar yönetimi

useradd, passwd, usermod ile kullanıcı işlemleri

apt install komutlarıyla gerekli araçların kurulumu

ufw ile temel firewall kuralları oluşturma

vsftpd ya da pure-ftpd ile FTP server kurulumu

crontab ile günlük log arşivleme veya yedekleme görevleri

Kontrol: Her adım için How2 dosyası veya bash script ile otomasyon.

## 🚀 Kullanım & Test

Tüm projelerde dizinlere gidip make komutunu çalıştırın.

libft: make && make clean && make fclean

get_next_line ve ft_printf: Örnek main dosyaları ile test edin.

born2beroot: Adımları izleyerek VM üzerinde terminal komutlarını uygulayın.


