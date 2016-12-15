libsm2
=======

    - 实现了sm2算法以及der编解码，具备sm2密钥生成、加密、解密、签名、验签等功能；
    - 包含sm2算法实现、sm2算法测试、sm2der编解码（基于国密sm2相关结构的asn定义）、sm2算法jni封装、大数库等；
    - 算法实现中调用了libtommath大数库、goldbar的sm3算法，以及asn1c等；
    - 可以在Mac/Linux/Windows/Android/iOS等平台编译；

    由Steven Yi基于simonpang的GM_SM2项目之上开发

