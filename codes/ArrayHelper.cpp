// local variable allocation has failed, the output may be wrong!
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o ArrayHelper__GetClampedValueSafely___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *self,
        int32_t index,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue,
        const MethodInfo_37CEE18 *method)
{
  const MethodInfo_37CEE18_RGCTXs *rgctx_data; // x8
  void *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  size_t actualSize; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v12; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v13; // x1
  __int64 v14; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v15; // x0
  void *v16; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v17; // [xsp+8h] [xbp-38h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o result; // 0:x0.16

  rgctx_data = method->rgctx_data;
  monitor = defaultValue.monitor;
  klass = defaultValue.klass;
  v17 = defaultValue.klass;
  if ( !rgctx_data )
  {
    sub_224B964(method);
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_1_T->_2.actualSize;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)self, 0);
  if ( IsNullOrEmpty )
  {
    if ( (method->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
      v13 = &v17;
    else
      v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  }
  else
  {
    if ( !self )
      sub_2213CDC(IsNullOrEmpty, v12);
    v14 = BasicHelper__Clamp(index, 0, LODWORD(self->max_length) - 1, 0);
    if ( (unsigned int)v14 >= LODWORD(self->max_length) )
      sub_2213CE4(v14);
    v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&self->m_Items[0].klass
                                                                    + (unsigned int)self->obj.klass->_2.native_size
                                                                    * (__int64)(int)v14);
  }
  v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)memmove(monitor, v13, actualSize);
  result.monitor = v16;
  result.klass = v15;
  return result;
}


Il2CppObject *ArrayHelper__GetClampedValueSafely_object_(
        System_Object_array *self,
        int32_t index,
        Il2CppObject *defaultValue,
        const MethodInfo_37CEDB0 *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x0

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)self, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !self )
      sub_2213CDC(IsNullOrEmpty, v8);
    v9 = BasicHelper__Clamp(index, 0, LODWORD(self->max_length) - 1, 0);
    if ( (unsigned int)v9 >= LODWORD(self->max_length) )
      sub_2213CE4(v9);
    return self->m_Items[(int)v9];
  }
  return defaultValue;
}