void EffectMovieEntity___ctor(EffectMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3085D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D3085D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t EffectMovieEntity__CreatePrimaryKey(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *EffectMovieEntity__GetFilePath(
        EffectMovieEntity_o *this,
        int32_t additionalId,
        int32_t effectFolder,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  EffectMovieMaster_c *v8; // x0
  System_String_o *NOBLE_PATH; // x21
  System_Int32_c *v10; // x0
  EffectMovieMaster_c *v11; // x0
  struct EffectMovieMaster_StaticFields *static_fields; // x8
  System_String_o *WEAPON_SUB_PATH; // x22
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  EffectMovieMaster_c *v17; // x0
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D3085C & 1) == 0 )
  {
    sub_1C93AD4(&EffectMovieMaster_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D3085C = 1;
  }
  switch ( this->fields.folderType )
  {
    case 1:
      result = this->fields.name;
      break;
    case 2:
      v8 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v8 = EffectMovieMaster_TypeInfo;
      }
      NOBLE_PATH = v8->static_fields->NOBLE_PATH;
      v10 = int_TypeInfo;
      goto LABEL_17;
    case 3:
      v11 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v11 = EffectMovieMaster_TypeInfo;
      }
      static_fields = v11->static_fields;
      if ( effectFolder < 1 )
      {
        NOBLE_PATH = static_fields->WEAPON_PATH;
        v10 = int_TypeInfo;
LABEL_17:
        v20 = additionalId;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(v10, &v20);
        v16 = System_String__Format(NOBLE_PATH, v18, 0);
      }
      else
      {
        WEAPON_SUB_PATH = static_fields->WEAPON_SUB_PATH;
        v20 = additionalId;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
        v19 = effectFolder;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
        v16 = System_String__Format_64467032(WEAPON_SUB_PATH, v14, v15, 0);
      }
      result = System_String__Concat_64425724(v16, this->fields.name, 0);
      break;
    case 5:
      v17 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v17 = EffectMovieMaster_TypeInfo;
      }
      result = System_String__Concat_64425724(v17->static_fields->BATTLECOMMON_PATH, this->fields.name, 0);
      break;
    default:
      result = string_TypeInfo->static_fields->Empty;
      break;
  }
  return result;
}


int32_t EffectMovieEntity__GetFolderType(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.folderType;
}