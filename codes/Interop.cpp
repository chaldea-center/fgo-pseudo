// local variable allocation has failed, the output may be wrong!
int64_t Interop__CheckIo(
        int64_t result,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x0
  Interop_ErrorInfo_o LastErrorInfo; // x0
  const MethodInfo *v12; // x4

  if ( (byte_4D33B63 & 1) == 0 )
  {
    sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B63 = 1;
  }
  if ( result < 0 )
  {
    v10 = (const MethodInfo *)sub_1AD0CC8(Interop_Sys_TypeInfo, path, isDirectory, errorRewriter, method);
    LastErrorInfo = Interop_Sys__GetLastErrorInfo(v10);
    Interop__ThrowExceptionForIoErrno(LastErrorInfo, path, isDirectory, errorRewriter, v12);
  }
  return result;
}


int32_t Interop__CheckIo_64331824(
        int32_t result,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  Interop__CheckIo(result, path, isDirectory, errorRewriter, method);
  return result;
}


System_Exception_o *Interop__GetExceptionForIoErrno(
        Interop_ErrorInfo_o errorInfo,
        System_String_o *path,
        bool isDirectory,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  const MethodInfo *v8; // x2
  System_IO_DirectoryNotFoundException_o *v9; // x0
  System_Exception_o *v10; // x20
  System_String_o *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  Interop_ErrorInfo_o v14; // x0
  int32_t RawErrno; // w19
  System_IO_IOException_o *v16; // x0
  int32_t v17; // w2
  System_String_o *v18; // x1
  Interop_ErrorInfo_o v19; // x0
  System_Exception_o *IOException; // x21
  const MethodInfo *v21; // x2
  System_UnauthorizedAccessException_o *v22; // x0
  System_String_o *v23; // x1
  System_String_o *v24; // x19
  Interop_ErrorInfo_o v25; // x0
  const MethodInfo *v27; // x2
  System_IO_PathTooLongException_o *v28; // x0
  System_String_o *v29; // x1
  __int64 *v30; // x8
  System_String_o *v31; // x19
  Interop_ErrorInfo_o v32; // x0
  const MethodInfo *v33; // x1
  int32_t v34; // w21
  System_String_o *v35; // x19
  System_String_o *v36; // x19
  System_String_o *v37; // x21
  Interop_ErrorInfo_o v38; // [xsp+8h] [xbp-28h] BYREF

  v38 = errorInfo;
  if ( (byte_4D33B64 & 1) == 0 )
  {
    sub_1C94098(&System_ArgumentOutOfRangeException_TypeInfo);
    sub_1C94098(&System_IO_DirectoryNotFoundException_TypeInfo);
    sub_1C94098(&System_IO_FileNotFoundException_TypeInfo);
    sub_1C94098(&System_IO_IOException_TypeInfo);
    sub_1C94098(&System_OperationCanceledException_TypeInfo);
    sub_1C94098(&System_IO_PathTooLongException_TypeInfo);
    sub_1C94098(&System_UnauthorizedAccessException_TypeInfo);
    sub_1C94098(&StringLiteral_4788/*"Could not find file '{0}'."*/);
    sub_1C94098(&StringLiteral_24879/*"value"*/);
    sub_1C94098(&StringLiteral_14199/*"The process cannot access the file '{0}' because it is being used by another process."*/);
    sub_1C94098(&StringLiteral_14200/*"The process cannot access the file because it is being used by another process."*/);
    sub_1C94098(&StringLiteral_4785/*"Could not find a part of the path."*/);
    sub_1C94098(&StringLiteral_2107/*"Access to the path is denied."*/);
    sub_1C94098(&StringLiteral_14973/*"Unable to find the specified file."*/);
    sub_1C94098(&StringLiteral_14264/*"The specified file name or path is too long, or a component of the specified path is too long."*/);
    sub_1C94098(&StringLiteral_13030/*"Specified file length was too large for the file system."*/);
    sub_1C94098(&StringLiteral_2106/*"Access to the path '{0}' is denied."*/);
    sub_1C94098(&StringLiteral_14192/*"The path '{0}' is too long, or a component of the specified path is too long."*/);
    sub_1C94098(&StringLiteral_4784/*"Could not find a part of the path '{0}'."*/);
    sub_1C94098(&StringLiteral_14090/*"The file '{0}' already exists."*/);
    byte_4D33B64 = 1;
  }
  if ( errorInfo.fields._error > 65547 )
  {
    if ( errorInfo.fields._error > 65558 )
    {
      if ( errorInfo.fields._error == 65573 )
      {
        if ( System_String__IsNullOrEmpty(path, 0) )
        {
          v28 = (System_IO_PathTooLongException_o *)sub_1C942E4(System_IO_PathTooLongException_TypeInfo);
          v10 = (System_Exception_o *)v28;
          v29 = (System_String_o *)StringLiteral_14264/*"The specified file name or path is too long, or a component of the specified path is too long."*/;
        }
        else
        {
          v35 = SR__Format((System_String_o *)StringLiteral_14192/*"The path '{0}' is too long, or a component of the specified path is too long."*/, (Il2CppObject *)path, v27);
          v28 = (System_IO_PathTooLongException_o *)sub_1C942E4(System_IO_PathTooLongException_TypeInfo);
          v10 = (System_Exception_o *)v28;
          v29 = v35;
        }
        System_IO_PathTooLongException___ctor_65250132(v28, v29, 0);
        return v10;
      }
      if ( errorInfo.fields._error != 65602 )
      {
        if ( errorInfo.fields._error == 65581 )
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0);
          if ( isDirectory )
          {
            if ( IsNullOrEmpty )
            {
              v9 = (System_IO_DirectoryNotFoundException_o *)sub_1C942E4(System_IO_DirectoryNotFoundException_TypeInfo);
              v10 = (System_Exception_o *)v9;
              v11 = (System_String_o *)StringLiteral_4785/*"Could not find a part of the path."*/;
            }
            else
            {
              v36 = SR__Format((System_String_o *)StringLiteral_4784/*"Could not find a part of the path '{0}'."*/, (Il2CppObject *)path, v8);
              v9 = (System_IO_DirectoryNotFoundException_o *)sub_1C942E4(System_IO_DirectoryNotFoundException_TypeInfo);
              v10 = (System_Exception_o *)v9;
              v11 = v36;
            }
            System_IO_DirectoryNotFoundException___ctor_65234900(v9, v11, 0);
          }
          else if ( IsNullOrEmpty )
          {
            v10 = (System_Exception_o *)sub_1C942E4(System_IO_FileNotFoundException_TypeInfo);
            System_IO_FileNotFoundException___ctor_65236876(
              (System_IO_FileNotFoundException_o *)v10,
              (System_String_o *)StringLiteral_14973/*"Unable to find the specified file."*/,
              0);
          }
          else
          {
            v37 = SR__Format((System_String_o *)StringLiteral_4788/*"Could not find file '{0}'."*/, (Il2CppObject *)path, v8);
            v10 = (System_Exception_o *)sub_1C942E4(System_IO_FileNotFoundException_TypeInfo);
            System_IO_FileNotFoundException___ctor_65236912((System_IO_FileNotFoundException_o *)v10, v37, path, 0);
          }
          return v10;
        }
LABEL_27:
        v25 = errorInfo;
        return Interop__GetIOException(v25, (const MethodInfo *)path);
      }
LABEL_22:
      v19 = errorInfo;
      IOException = Interop__GetIOException(v19, (const MethodInfo *)path);
      if ( System_String__IsNullOrEmpty(path, 0) )
      {
        v22 = (System_UnauthorizedAccessException_o *)sub_1C942E4(System_UnauthorizedAccessException_TypeInfo);
        v10 = (System_Exception_o *)v22;
        v23 = (System_String_o *)StringLiteral_2107/*"Access to the path is denied."*/;
      }
      else
      {
        v24 = SR__Format((System_String_o *)StringLiteral_2106/*"Access to the path '{0}' is denied."*/, (Il2CppObject *)path, v21);
        v22 = (System_UnauthorizedAccessException_o *)sub_1C942E4(System_UnauthorizedAccessException_TypeInfo);
        v10 = (System_Exception_o *)v22;
        v23 = v24;
      }
      System_UnauthorizedAccessException___ctor_66059856(v22, v23, IOException, 0);
      return v10;
    }
    if ( errorInfo.fields._error != 65556 )
    {
      if ( errorInfo.fields._error != 65558 )
        goto LABEL_27;
      v10 = (System_Exception_o *)sub_1C942E4(System_ArgumentOutOfRangeException_TypeInfo);
      System_ArgumentOutOfRangeException___ctor_65442584(
        (System_ArgumentOutOfRangeException_o *)v10,
        (System_String_o *)StringLiteral_24879/*"value"*/,
        (System_String_o *)StringLiteral_13030/*"Specified file length was too large for the file system."*/,
        0);
      return v10;
    }
    if ( System_String__IsNullOrEmpty(path, 0) )
      goto LABEL_27;
    v30 = &StringLiteral_14090/*"The file '{0}' already exists."*/;
    goto LABEL_32;
  }
  if ( errorInfo.fields._error <= 65542 )
  {
    if ( errorInfo.fields._error == 65538 )
      goto LABEL_22;
    if ( errorInfo.fields._error != 65542 )
      goto LABEL_27;
    if ( System_String__IsNullOrEmpty(path, 0) )
    {
      v14 = (Interop_ErrorInfo_o)&v38;
      RawErrno = Interop_ErrorInfo__get_RawErrno(v14, v12);
      v16 = (System_IO_IOException_o *)sub_1C942E4(System_IO_IOException_TypeInfo);
      v10 = (System_Exception_o *)v16;
      v17 = RawErrno;
      v18 = (System_String_o *)StringLiteral_14200/*"The process cannot access the file because it is being used by another process."*/;
LABEL_33:
      System_IO_IOException___ctor_65238208(v16, v18, v17, 0);
      return v10;
    }
    v30 = &StringLiteral_14199/*"The process cannot access the file '{0}' because it is being used by another process."*/;
LABEL_32:
    v31 = SR__Format((System_String_o *)*v30, (Il2CppObject *)path, v13);
    v32 = (Interop_ErrorInfo_o)&v38;
    v34 = Interop_ErrorInfo__get_RawErrno(v32, v33);
    v16 = (System_IO_IOException_o *)sub_1C942E4(System_IO_IOException_TypeInfo);
    v10 = (System_Exception_o *)v16;
    v18 = v31;
    v17 = v34;
    goto LABEL_33;
  }
  if ( errorInfo.fields._error == 65544 )
    goto LABEL_22;
  if ( errorInfo.fields._error != 65547 )
    goto LABEL_27;
  v10 = (System_Exception_o *)sub_1C942E4(System_OperationCanceledException_TypeInfo);
  System_OperationCanceledException___ctor((System_OperationCanceledException_o *)v10, 0);
  return v10;
}


System_Exception_o *Interop__GetIOException(Interop_ErrorInfo_o errorInfo, const MethodInfo *method)
{
  Interop_ErrorInfo_o v2; // x0
  System_String_o *ErrorMessage; // x19
  Interop_ErrorInfo_o v4; // x0
  const MethodInfo *v5; // x1
  int32_t RawErrno; // w20
  System_IO_IOException_o *v7; // x21
  Interop_ErrorInfo_o v9; // [xsp+8h] [xbp-28h] BYREF

  v9 = errorInfo;
  if ( (byte_4D33B65 & 1) == 0 )
  {
    sub_1C94098(&System_IO_IOException_TypeInfo);
    byte_4D33B65 = 1;
  }
  v2 = (Interop_ErrorInfo_o)&v9;
  ErrorMessage = Interop_ErrorInfo__GetErrorMessage(v2, method);
  v4 = (Interop_ErrorInfo_o)&v9;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v4, v5);
  v7 = (System_IO_IOException_o *)sub_1C942E4(System_IO_IOException_TypeInfo);
  System_IO_IOException___ctor_65238208(v7, ErrorMessage, RawErrno, 0);
  return (System_Exception_o *)v7;
}


void Interop__GetRandomBytes(uint8_t *buffer, int32_t length, const MethodInfo *method)
{
  if ( (byte_4D33B66 & 1) == 0 )
  {
    sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B66 = 1;
  }
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  SystemNative_GetNonCryptographicallySecureRandomBytes(buffer, (unsigned int)length, method);
}


void __noreturn Interop__ThrowExceptionForIoErrno(
        Interop_ErrorInfo_o errorInfo,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Interop_ErrorInfo_o v8; // x0
  System_Exception_o *ExceptionForIoErrno; // x19
  __int64 v10; // x0

  v7 = (__int64)errorInfo;
  if ( errorRewriter )
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))errorRewriter->fields.invoke_impl)(
           errorRewriter->fields.method_code,
           errorInfo,
           errorRewriter->fields.method);
  v8 = (Interop_ErrorInfo_o)v7;
  ExceptionForIoErrno = Interop__GetExceptionForIoErrno(v8, path, isDirectory, (const MethodInfo *)errorRewriter);
  v10 = sub_1C940AC(&Method_Interop_ThrowExceptionForIoErrno__);
  sub_1C941C0(ExceptionForIoErrno, v10);
}


// local variable allocation has failed, the output may be wrong!
void Interop_ErrorInfo___ctor(Interop_ErrorInfo_o this, int32_t errno, const MethodInfo *method)
{
  if ( (byte_4D33B67 & 1) == 0 )
  {
    sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B67 = 1;
  }
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  *(_DWORD *)this.fields._error = SystemNative_ConvertErrorPlatformToPal((unsigned int)errno, *(_QWORD *)&errno, method);
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = errno;
}


void Interop_ErrorInfo___ctor_64332520(Interop_ErrorInfo_o this, int32_t error, const MethodInfo *method)
{
  *(_DWORD *)this.fields._error = error;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = -1;
}


System_String_o *Interop_ErrorInfo__GetErrorMessage(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  Interop_ErrorInfo_o v3; // x0
  const MethodInfo *v4; // x1
  int32_t RawErrno; // w19

  if ( (byte_4D33B69 & 1) == 0 )
  {
    sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B69 = 1;
  }
  v3 = this;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v3, method);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  return Interop_Sys__StrError(RawErrno, v4);
}


System_String_o *Interop_ErrorInfo__ToString(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  Interop_ErrorInfo_o v3; // x0
  Il2CppObject *v4; // x20
  Il2CppObject *v5; // x21
  Interop_ErrorInfo_o v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *ErrorMessage; // x0
  int v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t RawErrno; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D33B6A & 1) == 0 )
  {
    sub_1C94098(&Interop_Error_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_11239/*"RawErrno: {0} Error: {1} GetErrorMessage: {2}"*/);
    byte_4D33B6A = 1;
  }
  v3 = this;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v3, method);
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &RawErrno);
  v10 = *(_DWORD *)this.fields._error;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(Interop_Error_TypeInfo, &v10);
  v6 = this;
  ErrorMessage = (Il2CppObject *)Interop_ErrorInfo__GetErrorMessage(v6, v7);
  return System_String__Format_64459120((System_String_o *)StringLiteral_11239/*"RawErrno: {0} Error: {1} GetErrorMessage: {2}"*/, v4, v5, ErrorMessage, 0);
}


int32_t Interop_ErrorInfo__get_Error(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  return *(_DWORD *)this.fields._error;
}


int32_t Interop_ErrorInfo__get_RawErrno(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  int32_t result; // w0
  unsigned int v4; // w20

  if ( (byte_4D33B68 & 1) == 0 )
  {
    sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B68 = 1;
  }
  result = *(_DWORD *)(*(_QWORD *)&this + 4LL);
  if ( result == -1 )
  {
    v4 = *(_DWORD *)this.fields._error;
    if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
    result = SystemNative_ConvertErrorPalToPlatform(v4, method);
    *(_DWORD *)(*(_QWORD *)&this + 4LL) = result;
  }
  return result;
}


void Interop_Sys___cctor(const MethodInfo *method)
{
  if ( (byte_4D33B70 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B70 = 1;
  }
  Interop_Sys_TypeInfo->static_fields->CanSetHiddenFlag = (unsigned int)SystemNative_LChflagsCanSetHiddenFlag(method) != 0;
}


int32_t Interop_Sys__CloseDir(intptr_t dir, const MethodInfo *method)
{
  int32_t v2; // w19

  v2 = SystemNative_CloseDir(dir, method);
  sub_1C94048();
  return v2;
}


int32_t Interop_Sys__CopyFile(
        Microsoft_Win32_SafeHandles_SafeFileHandle_o *source,
        Microsoft_Win32_SafeHandles_SafeFileHandle_o *destination,
        const MethodInfo *method)
{
  intptr_t handle; // x21
  int32_t v6; // w21
  const char *v8; // x0
  __int64 exception_argument_null_0; // x0
  bool v10; // [xsp+8h] [xbp-28h] BYREF
  bool success; // [xsp+Ch] [xbp-24h] BYREF

  if ( !source )
  {
    v8 = "source";
    goto LABEL_10;
  }
  success = 0;
  System_Runtime_InteropServices_SafeHandle__DangerousAddRef(
    (System_Runtime_InteropServices_SafeHandle_o *)source,
    &success,
    0);
  if ( !destination )
  {
    v8 = "destination";
LABEL_10:
    exception_argument_null_0 = j_il2cpp_get_exception_argument_null_0(v8, destination, method);
    sub_1C941C0(exception_argument_null_0, 0);
  }
  handle = source->fields.handle;
  v10 = 0;
  System_Runtime_InteropServices_SafeHandle__DangerousAddRef(
    (System_Runtime_InteropServices_SafeHandle_o *)destination,
    &v10,
    0);
  v6 = SystemNative_CopyFile(handle, destination->fields.handle);
  sub_1C94048();
  if ( success )
    System_Runtime_InteropServices_SafeHandle__DangerousRelease(
      (System_Runtime_InteropServices_SafeHandle_o *)source,
      0);
  if ( v10 )
    System_Runtime_InteropServices_SafeHandle__DangerousRelease(
      (System_Runtime_InteropServices_SafeHandle_o *)destination,
      0);
  return v6;
}


Interop_ErrorInfo_o Interop_Sys__GetLastErrorInfo(const MethodInfo *method)
{
  int32_t LastWin32Error; // w1
  Interop_ErrorInfo_o v2; // x0
  const MethodInfo *v3; // x2
  Interop_ErrorInfo_o v5; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D33B6B & 1) == 0 )
  {
    sub_1C94098(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_4D33B6B = 1;
  }
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
  LastWin32Error = System_Runtime_InteropServices_Marshal__GetLastWin32Error(0);
  v2 = (Interop_ErrorInfo_o)&v5;
  v5 = 0;
  Interop_ErrorInfo___ctor(v2, LastWin32Error, v3);
  return v5;
}


int32_t Interop_Sys__LStat(System_String_o *path, Interop_Sys_FileStatus_o *output, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  Interop_Sys_FileStatus_o *v8; // x19
  __int64 v9; // x20
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = output;
  v9 = sub_1C94728((int)path, (int)output, (int)method, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  LODWORD(v8) = SystemNative_LStat2(v9, v8);
  sub_1C94048();
  sub_1C94740(v9);
  return (int)v8;
}


int32_t Interop_Sys__LStat_64334728(uint8_t *path, Interop_Sys_FileStatus_o *output, const MethodInfo *method)
{
  int32_t v3; // w19

  v3 = SystemNative_LStat2(path, output);
  sub_1C94048();
  return v3;
}


int32_t Interop_Sys__LStat_64334756(
        System_ReadOnlySpan_char__o path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  __int64 v4; // x20
  intptr_t value; // x21
  uint8_t *Reference_byte; // x20
  int32_t v7; // w19
  _BYTE v9[256]; // [xsp-100h] [xbp-120h] BYREF
  System_Text_ValueUtf8Converter_o v10; // [xsp+0h] [xbp-20h] BYREF
  __int64 v11; // [xsp+18h] [xbp-8h]
  System_Span_T__o v12; // 0:x0.16
  System_Span_byte__o v13; // 0:x1.16
  System_ReadOnlySpan_char__o v14; // 0:x1.16

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)&path.fields._length;
  value = path.fields._pointer.fields._value;
  if ( (byte_4D33B6F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____79126968);
    sub_1C94098(&Method_System_Span_byte___ctor___79032120);
    sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B6F = 1;
  }
  memset(&v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  *(_QWORD *)&v13.fields._length = 256;
  v13.fields._pointer.fields._value = (intptr_t)v9;
  System_Text_ValueUtf8Converter___ctor(&v10, v13, 0);
  v14.fields._pointer.fields._value = value;
  *(_QWORD *)&v14.fields._length = v4;
  v12 = (System_Span_T__o)System_Text_ValueUtf8Converter__ConvertAndTerminateString(&v10, v14, 0);
  Reference_byte = System_Runtime_InteropServices_MemoryMarshal__GetReference_byte_(
                     v12,
                     (const MethodInfo_3221A24 *)Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____79126968);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  v7 = SystemNative_LStat2(Reference_byte, output);
  sub_1C94048();
  System_Text_ValueUtf8Converter__Dispose(&v10, 0);
  return v7;
}


int32_t Interop_Sys__Link(System_String_o *source, System_String_o *link, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w19
  char *v9; // x20
  int v10; // w1
  int v11; // w2
  int v12; // w3
  int v13; // w4
  int v14; // w5
  int v15; // w6
  int v16; // w7
  char *v17; // x19
  int32_t v18; // w21
  int v20; // [xsp+0h] [xbp-20h]
  int v21; // [xsp+0h] [xbp-20h]
  char v22; // [xsp+8h] [xbp-18h]
  char v23; // [xsp+8h] [xbp-18h]
  int v24; // [xsp+10h] [xbp-10h]
  int v25; // [xsp+10h] [xbp-10h]
  void *v26; // [xsp+18h] [xbp-8h]
  void *v27; // [xsp+18h] [xbp-8h]

  v8 = (int)link;
  v9 = (char *)sub_1C94728((int)source, (int)link, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = (char *)sub_1C94728(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Link(v9, v17);
  sub_1C94048();
  sub_1C94740(v9);
  sub_1C94740(v17);
  return v18;
}


int32_t Interop_Sys__MkDir(System_String_o *path, int32_t mode, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  char *v9; // x20
  int32_t v10; // w19
  int v12; // [xsp+0h] [xbp-20h]
  char v13; // [xsp+8h] [xbp-18h]
  int v14; // [xsp+10h] [xbp-10h]
  void *v15; // [xsp+18h] [xbp-8h]

  v9 = (char *)sub_1C94728((int)path, mode, (int)method, v3, v4, v5, v6, v7, v12, v13, v14, v15);
  v10 = SystemNative_MkDir(v9, mode);
  sub_1C94048();
  sub_1C94740(v9);
  return v10;
}


intptr_t Interop_Sys__OpenDir(System_String_o *path, const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  __int64 v8; // x19
  intptr_t v9; // x20
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = sub_1C94728((int)path, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_OpenDir();
  sub_1C94048();
  sub_1C94740(v8);
  return v9;
}


int32_t Interop_Sys__ReadLink(
        System_String_o *path,
        System_Byte_array *buffer,
        int32_t bufferSize,
        const MethodInfo *method)
{
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  __int64 v10; // x0
  int v11; // w1
  __int64 v12; // x21
  int32_t Link; // w19
  int v15; // [xsp+0h] [xbp-20h]
  char v16; // [xsp+8h] [xbp-18h]
  int v17; // [xsp+10h] [xbp-10h]
  void *v18; // [xsp+18h] [xbp-8h]

  v10 = sub_1C94728((int)path, (int)buffer, bufferSize, (int)method, v4, v5, v6, v7, v15, v16, v17, v18);
  if ( buffer )
    v11 = (_DWORD)buffer + 32;
  else
    v11 = 0;
  v12 = v10;
  Link = SystemNative_ReadLink(v10, v11, (unsigned int)bufferSize);
  sub_1C94048();
  sub_1C94740(v12);
  return Link;
}


System_String_o *Interop_Sys__ReadLink_64333176(System_String_o *path, const MethodInfo *method)
{
  unsigned int v3; // w20
  _QWORD *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  __int64 v13; // x21
  __int64 Link; // x0
  __int64 v15; // x1
  unsigned int v16; // w21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v18; // x1
  System_String_o *v19; // x21
  _QWORD v21[2]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v22; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D33B6D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Buffers_ArrayPool_byte__get_Shared__);
    sub_1C94098(&System_Buffers_ArrayPool_byte__TypeInfo);
    sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B6D = 1;
  }
  v3 = 256;
  v22 = 0;
  while ( 1 )
  {
    if ( !System_Buffers_ArrayPool_byte__TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Buffers_ArrayPool_byte__TypeInfo);
    v4 = Method_System_Buffers_ArrayPool_byte__get_Shared__;
    v5 = *((_QWORD *)Method_System_Buffers_ArrayPool_byte__get_Shared__ + 4);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C6A12C();
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1C6A12C();
    if ( !*(_DWORD *)(v6 + 224) )
      j_il2cpp_runtime_class_init_0(v6);
    v7 = v4[4];
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C6A12C();
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 8LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C6A12C();
    v9 = **(_QWORD **)(v8 + 184);
    if ( !v9 )
      sub_1C942F0(0, method);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 376LL))(
            v9,
            v3,
            *(_QWORD *)(*(_QWORD *)v9 + 384LL));
    v21[1] = &v22;
    v22 = v10;
    v21[0] = 0;
    if ( !v10 )
      sub_1C942F0(0, v11);
    v13 = v10;
    if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
    Link = Interop_Sys__ReadLink(path, (System_Byte_array *)v13, *(_DWORD *)(v13 + 24), v12);
    v16 = Link;
    if ( (Link & 0x80000000) != 0 )
    {
      v19 = 0;
      goto LABEL_29;
    }
    if ( !v22 )
      sub_1C942F0(Link, v15);
    if ( (int)Link < *(_DWORD *)((char *)&off_18 + v22) )
      break;
    sub_1C2DA18(v21);
    v3 *= 2;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C942F0(0, v18);
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, _QWORD, _QWORD, const MethodInfo *))UTF8->klass->vtable._36_GetString.methodPtr)(
                             UTF8,
                             v22,
                             0,
                             v16,
                             UTF8->klass->vtable._36_GetString.method);
LABEL_29:
  sub_1C2DA18(v21);
  return v19;
}


int32_t Interop_Sys__Rename(System_String_o *oldPath, System_String_o *newPath, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w19
  char *v9; // x20
  int v10; // w1
  int v11; // w2
  int v12; // w3
  int v13; // w4
  int v14; // w5
  int v15; // w6
  int v16; // w7
  char *v17; // x19
  int32_t v18; // w21
  int v20; // [xsp+0h] [xbp-20h]
  int v21; // [xsp+0h] [xbp-20h]
  char v22; // [xsp+8h] [xbp-18h]
  char v23; // [xsp+8h] [xbp-18h]
  int v24; // [xsp+10h] [xbp-10h]
  int v25; // [xsp+10h] [xbp-10h]
  void *v26; // [xsp+18h] [xbp-8h]
  void *v27; // [xsp+18h] [xbp-8h]

  v8 = (int)newPath;
  v9 = (char *)sub_1C94728((int)oldPath, (int)newPath, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = (char *)sub_1C94728(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Rename(v9, v17);
  sub_1C94048();
  sub_1C94740(v9);
  sub_1C94740(v17);
  return v18;
}


int32_t Interop_Sys__RmDir(System_String_o *path, const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  char *v8; // x19
  int32_t v9; // w20
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = (char *)sub_1C94728((int)path, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_RmDir(v8);
  sub_1C94048();
  sub_1C94740(v8);
  return v9;
}


int32_t Interop_Sys__Stat(System_String_o *path, Interop_Sys_FileStatus_o *output, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  char *v8; // x20
  int32_t v9; // w19
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = (char *)sub_1C94728((int)path, (int)output, (int)method, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_Stat2(v8);
  sub_1C94048();
  sub_1C94740(v8);
  return v9;
}


int32_t Interop_Sys__Stat_64334388(uint8_t *path, Interop_Sys_FileStatus_o *output, const MethodInfo *method)
{
  int32_t v3; // w19

  v3 = SystemNative_Stat2((char *)path);
  sub_1C94048();
  return v3;
}


int32_t Interop_Sys__Stat_64334416(
        System_ReadOnlySpan_char__o path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  __int64 v3; // x20
  intptr_t value; // x21
  char *Reference_byte; // x20
  int32_t v6; // w19
  _BYTE v8[256]; // [xsp-100h] [xbp-120h] BYREF
  System_Text_ValueUtf8Converter_o v9; // [xsp+0h] [xbp-20h] BYREF
  __int64 v10; // [xsp+18h] [xbp-8h]
  System_Span_T__o v11; // 0:x0.16
  System_Span_byte__o v12; // 0:x1.16
  System_ReadOnlySpan_char__o v13; // 0:x1.16

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)&path.fields._length;
  value = path.fields._pointer.fields._value;
  if ( (byte_4D33B6E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____79126968);
    sub_1C94098(&Method_System_Span_byte___ctor___79032120);
    sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B6E = 1;
  }
  memset(&v9, 0, sizeof(v9));
  memset(v8, 0, sizeof(v8));
  *(_QWORD *)&v12.fields._length = 256;
  v12.fields._pointer.fields._value = (intptr_t)v8;
  System_Text_ValueUtf8Converter___ctor(&v9, v12, 0);
  v13.fields._pointer.fields._value = value;
  *(_QWORD *)&v13.fields._length = v3;
  v11 = (System_Span_T__o)System_Text_ValueUtf8Converter__ConvertAndTerminateString(&v9, v13, 0);
  Reference_byte = (char *)System_Runtime_InteropServices_MemoryMarshal__GetReference_byte_(
                             v11,
                             (const MethodInfo_3221A24 *)Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____79126968);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  v6 = SystemNative_Stat2(Reference_byte);
  sub_1C94048();
  System_Text_ValueUtf8Converter__Dispose(&v9, 0);
  return v6;
}


System_String_o *Interop_Sys__StrError(int32_t platformErrno, const MethodInfo *method)
{
  _QWORD *v3; // x0
  intptr_t v4; // x19
  _QWORD v6[130]; // [xsp-400h] [xbp-410h] BYREF

  v6[129] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4D33B6C & 1) == 0 )
  {
    sub_1C94098(&System_Runtime_InteropServices_Marshal_TypeInfo);
    sub_1C94098(&Interop_Sys_TypeInfo);
    byte_4D33B6C = 1;
  }
  memset(v6, 0, 0x400u);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  v3 = (_QWORD *)SystemNative_StrErrorR(platformErrno, (int)v6, 0x400u);
  if ( !v3 )
    v3 = v6;
  v4 = System_IntPtr__op_Explicit_66247520(v3, 0);
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
  return System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v4, 0);
}


int32_t Interop_Sys__Symlink(System_String_o *target, System_String_o *linkPath, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w19
  __int64 v9; // x20
  int v10; // w1
  int v11; // w2
  int v12; // w3
  int v13; // w4
  int v14; // w5
  int v15; // w6
  int v16; // w7
  __int64 v17; // x19
  int32_t v18; // w21
  int v20; // [xsp+0h] [xbp-20h]
  int v21; // [xsp+0h] [xbp-20h]
  char v22; // [xsp+8h] [xbp-18h]
  char v23; // [xsp+8h] [xbp-18h]
  int v24; // [xsp+10h] [xbp-10h]
  int v25; // [xsp+10h] [xbp-10h]
  void *v26; // [xsp+18h] [xbp-8h]
  void *v27; // [xsp+18h] [xbp-8h]

  v8 = (int)linkPath;
  v9 = sub_1C94728((int)target, (int)linkPath, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = sub_1C94728(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Symlink(v9, v17);
  sub_1C94048();
  sub_1C94740(v9);
  sub_1C94740(v17);
  return v18;
}


int32_t Interop_Sys__Unlink(System_String_o *pathname, const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  char *v8; // x19
  int32_t v9; // w20
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = (char *)sub_1C94728((int)pathname, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_Unlink(v8);
  sub_1C94048();
  sub_1C94740(v8);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
System_ReadOnlySpan_char__o Interop_Sys_DirectoryEntry__GetName(
        Interop_Sys_DirectoryEntry_o this,
        System_Span_char__o buffer,
        const MethodInfo *method)
{
  intptr_t value; // x20
  intptr_t v4; // x19
  uint8_t *Name; // x21
  unsigned int v6; // w22
  __int64 v7; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v9; // x1
  unsigned int v10; // w21
  intptr_t v11; // x0
  __int64 v12; // x1
  System_ReadOnlySpan_T__o v13; // kr00_16
  System_Span_T__o v14; // 0:x0.16
  System_ReadOnlySpan_char__o result; // 0:x0.16

  value = buffer.fields._pointer.fields._value;
  v4 = *(_QWORD *)&this.fields.NameLength;
  Name = this.fields.Name;
  if ( (byte_4D33B71 & 1) == 0 )
  {
    sub_1C94098(&Method_System_MemoryExtensions_IndexOf_byte___);
    sub_1C94098(&Method_System_ReadOnlySpan_byte___ctor___79030656);
    sub_1C94098(&Method_System_Span_char__Slice___79032256);
    sub_1C94098(&Method_System_Span_char__op_Implicit__);
    byte_4D33B71 = 1;
  }
  v6 = *((_DWORD *)Name + 2);
  v7 = *(_QWORD *)Name;
  if ( v6 == -1 )
  {
    v6 = sub_3D6BD30(v7, 256, 0, Method_System_MemoryExtensions_IndexOf_byte___, method);
    if ( (v6 & 0x80000000) != 0 )
LABEL_5:
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  else if ( (v6 & 0x80000000) != 0 )
  {
    goto LABEL_5;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0);
  if ( !UTF8 )
    sub_1C942F0(0, v9);
  v10 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, _QWORD, intptr_t, intptr_t, const MethodInfo *))UTF8->klass->vtable._29_GetChars.methodPtr)(
          UTF8,
          v7,
          v6,
          v4,
          value,
          UTF8->klass->vtable._29_GetChars.method);
  if ( v10 > (unsigned int)value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  if ( (*(_BYTE *)(*((_QWORD *)Method_System_Span_char__Slice___79032256 + 4) + 309LL) & 1) == 0 )
    sub_1C6A12C();
  *(_QWORD *)&v14.fields._length = v10;
  v14.fields._pointer.fields._value = v4;
  v13 = System_Span_char___op_Implicit(v14, (const MethodInfo_3ACAC5C *)Method_System_Span_char__op_Implicit__);
  v12 = *(_QWORD *)&v13.fields._length;
  v11 = v13.fields._pointer.fields._value;
  *(_QWORD *)&result.fields._length = v12;
  result.fields._pointer.fields._value = v11;
  return result;
}