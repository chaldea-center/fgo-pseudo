// local variable allocation has failed, the output may be wrong!
int64_t __fastcall Interop__CheckIo(
        int64_t result,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x0
  const MethodInfo *v11; // x4
  Interop_ErrorInfo_o LastErrorInfo; // 0:x0.8

  if ( (byte_4B0915F & 1) == 0 )
  {
    sub_1BC3008(&Interop_Sys_TypeInfo, path);
    byte_4B0915F = 1;
  }
  if ( (result & 0x8000000000000000LL) != 0 )
  {
    v10 = (const MethodInfo *)sub_1A15704(Interop_Sys_TypeInfo, path, isDirectory, errorRewriter, method);
    LastErrorInfo = Interop_Sys__GetLastErrorInfo(v10);
    Interop__ThrowExceptionForIoErrno(LastErrorInfo, path, isDirectory, errorRewriter, v11);
  }
  return result;
}


int32_t __fastcall Interop__CheckIo_62262728(
        int32_t result,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  Interop__CheckIo(result, path, isDirectory, errorRewriter, method);
  return result;
}


System_Exception_o *__fastcall Interop__GetExceptionForIoErrno(
        Interop_ErrorInfo_o errorInfo,
        System_String_o *path,
        bool isDirectory,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  bool IsNullOrEmpty; // w0
  const MethodInfo *v27; // x2
  System_IO_DirectoryNotFoundException_o *v28; // x0
  System_Exception_o *v29; // x20
  System_String_o *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  int32_t RawErrno; // w19
  System_IO_IOException_o *v34; // x0
  int32_t v35; // w2
  System_String_o *v36; // x1
  System_Exception_o *IOException; // x21
  const MethodInfo *v38; // x2
  System_UnauthorizedAccessException_o *v39; // x0
  System_String_o *v40; // x1
  System_String_o *v41; // x19
  const MethodInfo *v43; // x2
  System_IO_PathTooLongException_o *v44; // x0
  System_String_o *v45; // x1
  __int64 *v46; // x8
  System_String_o *v47; // x19
  const MethodInfo *v48; // x1
  int32_t v49; // w21
  System_String_o *v50; // x19
  System_String_o *v51; // x19
  System_String_o *v52; // x21
  Interop_ErrorInfo_o v53; // [xsp+8h] [xbp-28h] BYREF
  Interop_ErrorInfo_o v54; // 0:x0.8
  Interop_ErrorInfo_o v55; // 0:x0.8
  Interop_ErrorInfo_o v56; // 0:x0.8
  Interop_ErrorInfo_o v57; // 0:x0.8

  v53 = errorInfo;
  if ( (byte_4B09160 & 1) == 0 )
  {
    sub_1BC3008(&System_ArgumentOutOfRangeException_TypeInfo, path);
    sub_1BC3008(&System_IO_DirectoryNotFoundException_TypeInfo, v7);
    sub_1BC3008(&System_IO_FileNotFoundException_TypeInfo, v8);
    sub_1BC3008(&System_IO_IOException_TypeInfo, v9);
    sub_1BC3008(&System_OperationCanceledException_TypeInfo, v10);
    sub_1BC3008(&System_IO_PathTooLongException_TypeInfo, v11);
    sub_1BC3008(&System_UnauthorizedAccessException_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_4745/*"Could not find file '{0}'."*/, v13);
    sub_1BC3008(&StringLiteral_24395/*"value"*/, v14);
    sub_1BC3008(&StringLiteral_14013/*"The process cannot access the file '{0}' because it is being used by another process."*/, v15);
    sub_1BC3008(&StringLiteral_14014/*"The process cannot access the file because it is being used by another process."*/, v16);
    sub_1BC3008(&StringLiteral_4742/*"Could not find a part of the path."*/, v17);
    sub_1BC3008(&StringLiteral_2095/*"Access to the path is denied."*/, v18);
    sub_1BC3008(&StringLiteral_14783/*"Unable to find the specified file."*/, v19);
    sub_1BC3008(&StringLiteral_14078/*"The specified file name or path is too long, or a component of the specified path is too long."*/, v20);
    sub_1BC3008(&StringLiteral_12851/*"Specified file length was too large for the file system."*/, v21);
    sub_1BC3008(&StringLiteral_2094/*"Access to the path '{0}' is denied."*/, v22);
    sub_1BC3008(&StringLiteral_14006/*"The path '{0}' is too long, or a component of the specified path is too long."*/, v23);
    sub_1BC3008(&StringLiteral_4741/*"Could not find a part of the path '{0}'."*/, v24);
    sub_1BC3008(&StringLiteral_13904/*"The file '{0}' already exists."*/, v25);
    byte_4B09160 = 1;
  }
  if ( errorInfo.fields._error > 65547 )
  {
    if ( errorInfo.fields._error > 65558 )
    {
      if ( errorInfo.fields._error == 65573 )
      {
        if ( System_String__IsNullOrEmpty(path, 0LL) )
        {
          v44 = (System_IO_PathTooLongException_o *)sub_1BC3254(System_IO_PathTooLongException_TypeInfo);
          v29 = (System_Exception_o *)v44;
          v45 = (System_String_o *)StringLiteral_14078/*"The specified file name or path is too long, or a component of the specified path is too long."*/;
        }
        else
        {
          v50 = SR__Format((System_String_o *)StringLiteral_14006/*"The path '{0}' is too long, or a component of the specified path is too long."*/, (Il2CppObject *)path, v43);
          v44 = (System_IO_PathTooLongException_o *)sub_1BC3254(System_IO_PathTooLongException_TypeInfo);
          v29 = (System_Exception_o *)v44;
          v45 = v50;
        }
        System_IO_PathTooLongException___ctor_63181632(v44, v45, 0LL);
        return v29;
      }
      if ( errorInfo.fields._error != 65602 )
      {
        if ( errorInfo.fields._error == 65581 )
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0LL);
          if ( isDirectory )
          {
            if ( IsNullOrEmpty )
            {
              v28 = (System_IO_DirectoryNotFoundException_o *)sub_1BC3254(System_IO_DirectoryNotFoundException_TypeInfo);
              v29 = (System_Exception_o *)v28;
              v30 = (System_String_o *)StringLiteral_4742/*"Could not find a part of the path."*/;
            }
            else
            {
              v51 = SR__Format((System_String_o *)StringLiteral_4741/*"Could not find a part of the path '{0}'."*/, (Il2CppObject *)path, v27);
              v28 = (System_IO_DirectoryNotFoundException_o *)sub_1BC3254(System_IO_DirectoryNotFoundException_TypeInfo);
              v29 = (System_Exception_o *)v28;
              v30 = v51;
            }
            System_IO_DirectoryNotFoundException___ctor_63166400(v28, v30, 0LL);
          }
          else if ( IsNullOrEmpty )
          {
            v29 = (System_Exception_o *)sub_1BC3254(System_IO_FileNotFoundException_TypeInfo);
            System_IO_FileNotFoundException___ctor_63168376(
              (System_IO_FileNotFoundException_o *)v29,
              (System_String_o *)StringLiteral_14783/*"Unable to find the specified file."*/,
              0LL);
          }
          else
          {
            v52 = SR__Format((System_String_o *)StringLiteral_4745/*"Could not find file '{0}'."*/, (Il2CppObject *)path, v27);
            v29 = (System_Exception_o *)sub_1BC3254(System_IO_FileNotFoundException_TypeInfo);
            System_IO_FileNotFoundException___ctor_63168412((System_IO_FileNotFoundException_o *)v29, v52, path, 0LL);
          }
          return v29;
        }
LABEL_27:
        v56 = errorInfo;
        return Interop__GetIOException(v56, (const MethodInfo *)path);
      }
LABEL_22:
      v55 = errorInfo;
      IOException = Interop__GetIOException(v55, (const MethodInfo *)path);
      if ( System_String__IsNullOrEmpty(path, 0LL) )
      {
        v39 = (System_UnauthorizedAccessException_o *)sub_1BC3254(System_UnauthorizedAccessException_TypeInfo);
        v29 = (System_Exception_o *)v39;
        v40 = (System_String_o *)StringLiteral_2095/*"Access to the path is denied."*/;
      }
      else
      {
        v41 = SR__Format((System_String_o *)StringLiteral_2094/*"Access to the path '{0}' is denied."*/, (Il2CppObject *)path, v38);
        v39 = (System_UnauthorizedAccessException_o *)sub_1BC3254(System_UnauthorizedAccessException_TypeInfo);
        v29 = (System_Exception_o *)v39;
        v40 = v41;
      }
      System_UnauthorizedAccessException___ctor_63991188(v39, v40, IOException, 0LL);
      return v29;
    }
    if ( errorInfo.fields._error != 65556 )
    {
      if ( errorInfo.fields._error != 65558 )
        goto LABEL_27;
      v29 = (System_Exception_o *)sub_1BC3254(System_ArgumentOutOfRangeException_TypeInfo);
      System_ArgumentOutOfRangeException___ctor_63374032(
        (System_ArgumentOutOfRangeException_o *)v29,
        (System_String_o *)StringLiteral_24395/*"value"*/,
        (System_String_o *)StringLiteral_12851/*"Specified file length was too large for the file system."*/,
        0LL);
      return v29;
    }
    if ( System_String__IsNullOrEmpty(path, 0LL) )
      goto LABEL_27;
    v46 = &StringLiteral_13904/*"The file '{0}' already exists."*/;
    goto LABEL_32;
  }
  if ( errorInfo.fields._error <= 65542 )
  {
    if ( errorInfo.fields._error == 65538 )
      goto LABEL_22;
    if ( errorInfo.fields._error != 65542 )
      goto LABEL_27;
    if ( System_String__IsNullOrEmpty(path, 0LL) )
    {
      v54 = (Interop_ErrorInfo_o)&v53;
      RawErrno = Interop_ErrorInfo__get_RawErrno(v54, v31);
      v34 = (System_IO_IOException_o *)sub_1BC3254(System_IO_IOException_TypeInfo);
      v29 = (System_Exception_o *)v34;
      v35 = RawErrno;
      v36 = (System_String_o *)StringLiteral_14014/*"The process cannot access the file because it is being used by another process."*/;
LABEL_33:
      System_IO_IOException___ctor_63169708(v34, v36, v35, 0LL);
      return v29;
    }
    v46 = &StringLiteral_14013/*"The process cannot access the file '{0}' because it is being used by another process."*/;
LABEL_32:
    v47 = SR__Format((System_String_o *)*v46, (Il2CppObject *)path, v32);
    v57 = (Interop_ErrorInfo_o)&v53;
    v49 = Interop_ErrorInfo__get_RawErrno(v57, v48);
    v34 = (System_IO_IOException_o *)sub_1BC3254(System_IO_IOException_TypeInfo);
    v29 = (System_Exception_o *)v34;
    v36 = v47;
    v35 = v49;
    goto LABEL_33;
  }
  if ( errorInfo.fields._error == 65544 )
    goto LABEL_22;
  if ( errorInfo.fields._error != 65547 )
    goto LABEL_27;
  v29 = (System_Exception_o *)sub_1BC3254(System_OperationCanceledException_TypeInfo);
  System_OperationCanceledException___ctor((System_OperationCanceledException_o *)v29, 0LL);
  return v29;
}


System_Exception_o *__fastcall Interop__GetIOException(Interop_ErrorInfo_o errorInfo, const MethodInfo *method)
{
  System_String_o *ErrorMessage; // x19
  const MethodInfo *v3; // x1
  int32_t RawErrno; // w20
  System_IO_IOException_o *v5; // x21
  Interop_ErrorInfo_o v7; // [xsp+8h] [xbp-28h] BYREF
  Interop_ErrorInfo_o v8; // 0:x0.8
  Interop_ErrorInfo_o v9; // 0:x0.8

  v7 = errorInfo;
  if ( (byte_4B09161 & 1) == 0 )
  {
    sub_1BC3008(&System_IO_IOException_TypeInfo, method);
    byte_4B09161 = 1;
  }
  v8 = (Interop_ErrorInfo_o)&v7;
  ErrorMessage = Interop_ErrorInfo__GetErrorMessage(v8, method);
  v9 = (Interop_ErrorInfo_o)&v7;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v9, v3);
  v5 = (System_IO_IOException_o *)sub_1BC3254(System_IO_IOException_TypeInfo);
  System_IO_IOException___ctor_63169708(v5, ErrorMessage, RawErrno, 0LL);
  return (System_Exception_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Interop__GetRandomBytes(uint8_t *buffer, int32_t length, const MethodInfo *method)
{
  if ( (byte_4B09162 & 1) == 0 )
  {
    sub_1BC3008(&Interop_Sys_TypeInfo, *(_QWORD *)&length);
    byte_4B09162 = 1;
  }
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  SystemNative_GetNonCryptographicallySecureRandomBytes(buffer, (unsigned int)length, method);
}


void __fastcall __noreturn Interop__ThrowExceptionForIoErrno(
        Interop_ErrorInfo_o errorInfo,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Exception_o *ExceptionForIoErrno; // x19
  __int64 v9; // x0
  Interop_ErrorInfo_o v10; // 0:x0.8

  v7 = (__int64)errorInfo;
  if ( errorRewriter )
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))errorRewriter->fields.m_target)(
           errorRewriter->fields.original_method_info,
           errorInfo,
           *(_QWORD *)&errorRewriter->fields.extra_arg);
  v10 = (Interop_ErrorInfo_o)v7;
  ExceptionForIoErrno = Interop__GetExceptionForIoErrno(v10, path, isDirectory, (const MethodInfo *)errorRewriter);
  v9 = sub_1BC301C(&Method_Interop_ThrowExceptionForIoErrno__);
  sub_1BC3130(ExceptionForIoErrno, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Interop_ErrorInfo___ctor(Interop_ErrorInfo_o this, int32_t errno, const MethodInfo *method)
{
  if ( (byte_4B09163 & 1) == 0 )
  {
    sub_1BC3008(&Interop_Sys_TypeInfo, *(_QWORD *)&errno);
    byte_4B09163 = 1;
  }
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  *(_DWORD *)this.fields._error = SystemNative_ConvertErrorPlatformToPal((unsigned int)errno, *(_QWORD *)&errno, method);
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = errno;
}


void __fastcall Interop_ErrorInfo___ctor_62263424(Interop_ErrorInfo_o this, int32_t error, const MethodInfo *method)
{
  *(_DWORD *)this.fields._error = error;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = -1;
}


System_String_o *__fastcall Interop_ErrorInfo__GetErrorMessage(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t RawErrno; // w19
  Interop_ErrorInfo_o v6; // 0:x0.8

  if ( (byte_4B09165 & 1) == 0 )
  {
    sub_1BC3008(&Interop_Sys_TypeInfo, method);
    byte_4B09165 = 1;
  }
  v6 = this;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v6, method);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  return Interop_Sys__StrError(RawErrno, v3);
}


System_String_o *__fastcall Interop_ErrorInfo__ToString(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x21
  const MethodInfo *v7; // x1
  Il2CppObject *ErrorMessage; // x0
  int v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t RawErrno; // [xsp+Ch] [xbp-34h] BYREF
  Interop_ErrorInfo_o v12; // 0:x0.8
  Interop_ErrorInfo_o v13; // 0:x0.8

  if ( (byte_4B09166 & 1) == 0 )
  {
    sub_1BC3008(&Interop_Error_TypeInfo, method);
    sub_1BC3008(&int_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_11079/*"RawErrno: {0} Error: {1} GetErrorMessage: {2}"*/, v4);
    byte_4B09166 = 1;
  }
  v12 = this;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v12, method);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &RawErrno);
  v10 = *(_DWORD *)this.fields._error;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(Interop_Error_TypeInfo, &v10);
  v13 = this;
  ErrorMessage = (Il2CppObject *)Interop_ErrorInfo__GetErrorMessage(v13, v7);
  return System_String__Format_62390008((System_String_o *)StringLiteral_11079/*"RawErrno: {0} Error: {1} GetErrorMessage: {2}"*/, v5, v6, ErrorMessage, 0LL);
}


int32_t __fastcall Interop_ErrorInfo__get_Error(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  return *(_DWORD *)this.fields._error;
}


int32_t __fastcall Interop_ErrorInfo__get_RawErrno(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  int32_t result; // w0
  unsigned int v4; // w20

  if ( (byte_4B09164 & 1) == 0 )
  {
    sub_1BC3008(&Interop_Sys_TypeInfo, method);
    byte_4B09164 = 1;
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


void __fastcall Interop_Sys___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B0916C & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1BC3008(&Interop_Sys_TypeInfo, v1);
    byte_4B0916C = 1;
  }
  Interop_Sys_TypeInfo->static_fields->CanSetHiddenFlag = (unsigned int)SystemNative_LChflagsCanSetHiddenFlag(method) != 0;
}


int32_t __fastcall Interop_Sys__CloseDir(intptr_t dir, const MethodInfo *method)
{
  int32_t v2; // w19

  v2 = SystemNative_CloseDir(dir, method);
  sub_1BC2FB8();
  return v2;
}


int32_t __fastcall Interop_Sys__CopyFile(
        Microsoft_Win32_SafeHandles_SafeFileHandle_o *source,
        Microsoft_Win32_SafeHandles_SafeFileHandle_o *destination,
        const MethodInfo *method)
{
  __int64 v5; // x21
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
    0LL);
  if ( !destination )
  {
    v8 = "destination";
LABEL_10:
    exception_argument_null_0 = j_il2cpp_get_exception_argument_null_0(v8, destination, method);
    sub_1BC3130(exception_argument_null_0, 0LL);
  }
  v5 = *(_QWORD *)&source->fields.handle;
  v10 = 0;
  System_Runtime_InteropServices_SafeHandle__DangerousAddRef(
    (System_Runtime_InteropServices_SafeHandle_o *)destination,
    &v10,
    0LL);
  v6 = SystemNative_CopyFile(v5, *(_QWORD *)&destination->fields.handle);
  sub_1BC2FB8();
  if ( success )
    System_Runtime_InteropServices_SafeHandle__DangerousRelease(
      (System_Runtime_InteropServices_SafeHandle_o *)source,
      0LL);
  if ( v10 )
    System_Runtime_InteropServices_SafeHandle__DangerousRelease(
      (System_Runtime_InteropServices_SafeHandle_o *)destination,
      0LL);
  return v6;
}


Interop_ErrorInfo_o __fastcall Interop_Sys__GetLastErrorInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t LastWin32Error; // w1
  const MethodInfo *v3; // x2
  Interop_ErrorInfo_o v5; // [xsp+8h] [xbp-18h] BYREF
  Interop_ErrorInfo_o v6; // 0:x0.8

  if ( (byte_4B09167 & 1) == 0 )
  {
    sub_1BC3008(&System_Runtime_InteropServices_Marshal_TypeInfo, v1);
    byte_4B09167 = 1;
  }
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
  LastWin32Error = System_Runtime_InteropServices_Marshal__GetLastWin32Error(0LL);
  v6 = (Interop_ErrorInfo_o)&v5;
  v5 = 0LL;
  Interop_ErrorInfo___ctor(v6, LastWin32Error, v3);
  return v5;
}


int32_t __fastcall Interop_Sys__LStat(
        System_String_o *path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
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
  v9 = sub_1BC35C0((int)path, (int)output, (int)method, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  LODWORD(v8) = SystemNative_LStat2(v9, v8);
  sub_1BC2FB8();
  sub_1BC35D8(v9);
  return (int)v8;
}


int32_t __fastcall Interop_Sys__LStat_62265632(
        uint8_t *path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  int32_t v3; // w19

  v3 = SystemNative_LStat2(path, output);
  sub_1BC2FB8();
  return v3;
}


int32_t __fastcall Interop_Sys__LStat_62265660(
        System_ReadOnlySpan_char__o path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo_3082CC4 *v8; // x1
  uint8_t *Reference_byte; // x20
  int32_t v10; // w19
  const MethodInfo *v11; // x2
  _BYTE v13[256]; // [xsp-100h] [xbp-120h] BYREF
  __int64 v14[4]; // [xsp+0h] [xbp-20h] BYREF
  System_Span_T__o v15; // 0:x0.8
  System_Span_byte__o v16; // 0:x2.8
  System_ReadOnlySpan_char__o v17; // 0:x2.8
  System_Text_ValueUtf8Converter_o v18; // 0:x0.16
  System_Text_ValueUtf8Converter_o v19; // 0:x0.16
  System_Text_ValueUtf8Converter_o v20; // 0:x0.16

  v14[3] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B0916B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____76889376, output);
    sub_1BC3008(&Method_System_Span_byte___ctor___76797144, v6);
    sub_1BC3008(&Interop_Sys_TypeInfo, v7);
    byte_4B0916B = 1;
  }
  memset(v14, 0, 24);
  memset(v13, 0, sizeof(v13));
  v18.fields._arrayToReturnToPool = (struct System_Byte_array *)v14;
  v16 = (System_Span_byte__o)256LL;
  v18.fields._bytes = (struct System_Span_byte__o)v13;
  System_Text_ValueUtf8Converter___ctor(v18, v16, 0LL);
  v19.fields._arrayToReturnToPool = (struct System_Byte_array *)v14;
  v19.fields._bytes = (struct System_Span_byte__o)path;
  v17 = (System_ReadOnlySpan_char__o)output;
  v15 = (System_Span_T__o)System_Text_ValueUtf8Converter__ConvertAndTerminateString(v19, v17, 0LL);
  Reference_byte = System_Runtime_InteropServices_MemoryMarshal__GetReference_byte_(v15, v8);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  v10 = SystemNative_LStat2(Reference_byte, method);
  sub_1BC2FB8();
  v20.fields._arrayToReturnToPool = (struct System_Byte_array *)v14;
  v20.fields._bytes = 0LL;
  System_Text_ValueUtf8Converter__Dispose(v20, v11);
  return v10;
}


int32_t __fastcall Interop_Sys__Link(System_String_o *source, System_String_o *link, const MethodInfo *method)
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
  v9 = (char *)sub_1BC35C0((int)source, (int)link, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = (char *)sub_1BC35C0(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Link(v9, v17);
  sub_1BC2FB8();
  sub_1BC35D8(v9);
  sub_1BC35D8(v17);
  return v18;
}


int32_t __fastcall Interop_Sys__MkDir(System_String_o *path, int32_t mode, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  __mode_t v8; // w19
  char *v9; // x20
  int32_t v10; // w19
  int v12; // [xsp+0h] [xbp-20h]
  char v13; // [xsp+8h] [xbp-18h]
  int v14; // [xsp+10h] [xbp-10h]
  void *v15; // [xsp+18h] [xbp-8h]

  v8 = mode;
  v9 = (char *)sub_1BC35C0((int)path, mode, (int)method, v3, v4, v5, v6, v7, v12, v13, v14, v15);
  v10 = SystemNative_MkDir(v9, v8);
  sub_1BC2FB8();
  sub_1BC35D8(v9);
  return v10;
}


intptr_t __fastcall Interop_Sys__OpenDir(System_String_o *path, const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  __int64 v8; // x19
  intptr_t v9; // w20
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = sub_1BC35C0((int)path, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_OpenDir();
  sub_1BC2FB8();
  sub_1BC35D8(v8);
  return v9;
}


int32_t __fastcall Interop_Sys__ReadLink(
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

  v10 = sub_1BC35C0((int)path, (int)buffer, bufferSize, (int)method, v4, v5, v6, v7, v15, v16, v17, v18);
  if ( buffer )
    v11 = (_DWORD)buffer + 32;
  else
    v11 = 0;
  v12 = v10;
  Link = SystemNative_ReadLink(v10, v11, bufferSize);
  sub_1BC2FB8();
  sub_1BC35D8(v12);
  return Link;
}


System_String_o *__fastcall Interop_Sys__ReadLink_62264080(System_String_o *path, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  unsigned int v5; // w20
  _QWORD *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Byte_array *v15; // x21
  __int64 Link; // x0
  __int64 v17; // x1
  unsigned int v18; // w21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v20; // x1
  System_String_o *v21; // x21
  __int64 v23[2]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v24; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B09169 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Buffers_ArrayPool_byte__get_Shared__, method);
    sub_1BC3008(&System_Buffers_ArrayPool_byte__TypeInfo, v3);
    sub_1BC3008(&Interop_Sys_TypeInfo, v4);
    byte_4B09169 = 1;
  }
  v5 = 256;
  v24 = 0LL;
  while ( 1 )
  {
    if ( !System_Buffers_ArrayPool_byte__TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Buffers_ArrayPool_byte__TypeInfo);
    v6 = Method_System_Buffers_ArrayPool_byte__get_Shared__;
    v7 = *((_QWORD *)Method_System_Buffers_ArrayPool_byte__get_Shared__ + 4);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C1346C();
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 8LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C1346C();
    if ( !*(_DWORD *)(v8 + 224) )
      j_il2cpp_runtime_class_init_0(v8);
    v9 = v6[4];
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C1346C();
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 8LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C1346C();
    v11 = **(_QWORD **)(v10 + 184);
    if ( !v11 )
      sub_1BC3264(0LL, method);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 376LL))(
            v11,
            v5,
            *(_QWORD *)(*(_QWORD *)v11 + 384LL));
    v23[1] = (__int64)&v24;
    v24 = v12;
    v23[0] = 0LL;
    if ( !v12 )
      sub_1BC3264(0LL, v13);
    v15 = (System_Byte_array *)v12;
    if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
    Link = Interop_Sys__ReadLink(path, v15, v15->max_length, v14);
    v18 = Link;
    if ( (Link & 0x80000000) != 0 )
    {
      v21 = 0LL;
      goto LABEL_29;
    }
    if ( !v24 )
      sub_1BC3264(Link, v17);
    if ( (int)Link < *(_DWORD *)(v24 + 24) )
      break;
    sub_1B68C54(v23);
    v5 *= 2;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BC3264(0LL, v20);
  v21 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))UTF8->klass->vtable._36_GetString.method)(
                             UTF8,
                             v24,
                             0LL,
                             v18,
                             UTF8->klass->vtable._37_GetBestFitUnicodeToBytesData.methodPtr);
LABEL_29:
  sub_1B68C54(v23);
  return v21;
}


int32_t __fastcall Interop_Sys__Rename(System_String_o *oldPath, System_String_o *newPath, const MethodInfo *method)
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
  v9 = (char *)sub_1BC35C0((int)oldPath, (int)newPath, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = (char *)sub_1BC35C0(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Rename(v9, v17);
  sub_1BC2FB8();
  sub_1BC35D8(v9);
  sub_1BC35D8(v17);
  return v18;
}


int32_t __fastcall Interop_Sys__RmDir(System_String_o *path, const MethodInfo *method)
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

  v8 = (char *)sub_1BC35C0((int)path, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_RmDir(v8);
  sub_1BC2FB8();
  sub_1BC35D8(v8);
  return v9;
}


int32_t __fastcall Interop_Sys__Stat(System_String_o *path, Interop_Sys_FileStatus_o *output, const MethodInfo *method)
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

  v8 = (char *)sub_1BC35C0((int)path, (int)output, (int)method, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_Stat2(v8);
  sub_1BC2FB8();
  sub_1BC35D8(v8);
  return v9;
}


int32_t __fastcall Interop_Sys__Stat_62265292(
        uint8_t *path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  int32_t v3; // w19

  v3 = SystemNative_Stat2((char *)path);
  sub_1BC2FB8();
  return v3;
}


int32_t __fastcall Interop_Sys__Stat_62265320(
        System_ReadOnlySpan_char__o path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo_3082CC4 *v7; // x1
  char *Reference_byte; // x20
  int32_t v9; // w19
  const MethodInfo *v10; // x2
  _BYTE v12[256]; // [xsp-100h] [xbp-120h] BYREF
  __int64 v13[4]; // [xsp+0h] [xbp-20h] BYREF
  System_Span_T__o v14; // 0:x0.8
  System_Span_byte__o v15; // 0:x2.8
  System_ReadOnlySpan_char__o v16; // 0:x2.8
  System_Text_ValueUtf8Converter_o v17; // 0:x0.16
  System_Text_ValueUtf8Converter_o v18; // 0:x0.16
  System_Text_ValueUtf8Converter_o v19; // 0:x0.16

  v13[3] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B0916A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____76889376, output);
    sub_1BC3008(&Method_System_Span_byte___ctor___76797144, v5);
    sub_1BC3008(&Interop_Sys_TypeInfo, v6);
    byte_4B0916A = 1;
  }
  memset(v13, 0, 24);
  memset(v12, 0, sizeof(v12));
  v17.fields._arrayToReturnToPool = (struct System_Byte_array *)v13;
  v15 = (System_Span_byte__o)256LL;
  v17.fields._bytes = (struct System_Span_byte__o)v12;
  System_Text_ValueUtf8Converter___ctor(v17, v15, 0LL);
  v18.fields._arrayToReturnToPool = (struct System_Byte_array *)v13;
  v18.fields._bytes = (struct System_Span_byte__o)path;
  v16 = (System_ReadOnlySpan_char__o)output;
  v14 = (System_Span_T__o)System_Text_ValueUtf8Converter__ConvertAndTerminateString(v18, v16, 0LL);
  Reference_byte = (char *)System_Runtime_InteropServices_MemoryMarshal__GetReference_byte_(v14, v7);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  v9 = SystemNative_Stat2(Reference_byte);
  sub_1BC2FB8();
  v19.fields._arrayToReturnToPool = (struct System_Byte_array *)v13;
  v19.fields._bytes = 0LL;
  System_Text_ValueUtf8Converter__Dispose(v19, v10);
  return v9;
}


System_String_o *__fastcall Interop_Sys__StrError(int32_t platformErrno, const MethodInfo *method)
{
  __int64 v3; // x1
  long double inited; // q0
  _QWORD *v5; // x0
  intptr_t v6; // w19
  _QWORD v8[130]; // [xsp-400h] [xbp-410h] BYREF

  v8[129] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B09168 & 1) == 0 )
  {
    sub_1BC3008(&System_Runtime_InteropServices_Marshal_TypeInfo, method);
    sub_1BC3008(&Interop_Sys_TypeInfo, v3);
    byte_4B09168 = 1;
  }
  memset(v8, 0, 0x400u);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  v5 = (_QWORD *)SystemNative_StrErrorR((unsigned int)platformErrno, v8, 1024LL, inited);
  if ( !v5 )
    v5 = v8;
  v6 = System_IntPtr__op_Explicit_64178796(v5, 0LL);
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
  return System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v6, 0LL);
}


int32_t __fastcall Interop_Sys__Symlink(System_String_o *target, System_String_o *linkPath, const MethodInfo *method)
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
  v9 = sub_1BC35C0((int)target, (int)linkPath, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = sub_1BC35C0(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Symlink(v9, v17);
  sub_1BC2FB8();
  sub_1BC35D8(v9);
  sub_1BC35D8(v17);
  return v18;
}


int32_t __fastcall Interop_Sys__Unlink(System_String_o *pathname, const MethodInfo *method)
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

  v8 = (char *)sub_1BC35C0((int)pathname, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_Unlink(v8);
  sub_1BC2FB8();
  sub_1BC35D8(v8);
  return v9;
}


System_ReadOnlySpan_char__o __fastcall Interop_Sys_DirectoryEntry__GetName(
        Interop_Sys_DirectoryEntry_o this,
        System_Span_char__o buffer,
        const MethodInfo *method)
{
  System_Span_T__o v4; // x19
  uint8_t *Name; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int v9; // w22
  __int64 v10; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v12; // x1
  unsigned int v13; // w21
  System_Span_T__o v15; // 0:x0.8

  v4 = *(System_Span_T__o *)&this.fields.NameLength;
  Name = this.fields.Name;
  if ( (byte_4B0916D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_MemoryExtensions_IndexOf_byte___, *(_QWORD *)&this.fields.NameLength);
    sub_1BC3008(&Method_System_ReadOnlySpan_byte___ctor___76795680, v6);
    sub_1BC3008(&Method_System_Span_char__Slice___76797280, v7);
    sub_1BC3008(&Method_System_Span_char__op_Implicit__, v8);
    byte_4B0916D = 1;
  }
  v9 = *((_DWORD *)Name + 2);
  v10 = *(_QWORD *)Name;
  if ( v9 == -1 )
  {
    v9 = sub_3B72AC8(v10, 256LL, 0LL, Method_System_MemoryExtensions_IndexOf_byte___);
    if ( (v9 & 0x80000000) != 0 )
LABEL_5:
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0LL);
  }
  else if ( (v9 & 0x80000000) != 0 )
  {
    goto LABEL_5;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BC3264(0LL, v12);
  v13 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, _QWORD, System_Span_T__o, System_Span_char__o, Il2CppMethodPointer))UTF8->klass->vtable._29_GetChars.method)(
          UTF8,
          v10,
          v9,
          v4,
          buffer,
          UTF8->klass->vtable._30_get_CodePage.methodPtr);
  if ( v13 > buffer.fields._pointer.fields._value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0LL);
  if ( (*(_BYTE *)(*((_QWORD *)Method_System_Span_char__Slice___76797280 + 4) + 309LL) & 1) == 0 )
    sub_1C1346C();
  v15 = v4;
  return *(System_ReadOnlySpan_char__o *)&System_Span_char___op_Implicit(v15, (const MethodInfo_38EFC00 *)v13);
}