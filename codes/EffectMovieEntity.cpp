void __fastcall EffectMovieEntity___ctor(EffectMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AFE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5AFE2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EffectMovieEntity__CreatePrimaryKey(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall EffectMovieEntity__GetFilePath(
        EffectMovieEntity_o *this,
        int32_t additionalId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  System_String_o *result; // x0
  EffectMovieMaster_c *v8; // x0
  int32_t *v9; // x1
  System_String_o *NOBLE_PATH; // x21
  System_Int32_c *v11; // x0
  EffectMovieMaster_c *v12; // x0
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  EffectMovieMaster_c *v15; // x0
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5AFE1 & 1) == 0 )
  {
    sub_1B885B0(&EffectMovieMaster_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5AFE1 = 1;
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
      v9 = &v17;
      NOBLE_PATH = v8->static_fields->NOBLE_PATH;
      v11 = int_TypeInfo;
      v17 = additionalId;
      goto LABEL_11;
    case 3:
      v12 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v12 = EffectMovieMaster_TypeInfo;
      }
      v9 = &v16;
      NOBLE_PATH = v12->static_fields->WEAPON_PATH;
      v11 = int_TypeInfo;
      v16 = additionalId;
LABEL_11:
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(v11, v9, method, v3, v4);
      v14 = System_String__Format(NOBLE_PATH, v13, 0LL);
      result = System_String__Concat_61707032(v14, this->fields.name, 0LL);
      break;
    case 5:
      v15 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v15 = EffectMovieMaster_TypeInfo;
      }
      result = System_String__Concat_61707032(v15->static_fields->BATTLECOMMON_PATH, this->fields.name, 0LL);
      break;
    default:
      result = string_TypeInfo->static_fields->Empty;
      break;
  }
  return result;
}


int32_t __fastcall EffectMovieEntity__GetFolderType(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.folderType;
}


int32_t __fastcall EffectMovieEntity__GetLayerType(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.layerType;
}