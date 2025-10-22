void EffectMovieEntity___ctor(EffectMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C56BC6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_int___ctor__);
    byte_4C56BC6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33B0A74 *)Method_DataEntityBase_int___ctor__);
}


int32_t EffectMovieEntity__CreatePrimaryKey(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EffectMovieEntity__GetFilePath(
        EffectMovieEntity_o *this,
        int32_t additionalId,
        int32_t effectFolder,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  System_String_o *result; // x0
  EffectMovieMaster_c *v12; // x0
  System_String_o *NOBLE_PATH; // x21
  System_Int32_c *v14; // x0
  EffectMovieMaster_c *v15; // x0
  struct EffectMovieMaster_StaticFields *static_fields; // x8
  System_String_o *WEAPON_SUB_PATH; // x22
  Il2CppObject *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  EffectMovieMaster_c *v27; // x0
  Il2CppObject *v28; // x0
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C56BC5 & 1) == 0 )
  {
    sub_1C3E564(&EffectMovieMaster_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    byte_4C56BC5 = 1;
  }
  switch ( this->fields.folderType )
  {
    case 1:
      result = this->fields.name;
      break;
    case 2:
      v12 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v12 = EffectMovieMaster_TypeInfo;
      }
      NOBLE_PATH = v12->static_fields->NOBLE_PATH;
      v14 = int_TypeInfo;
      goto LABEL_17;
    case 3:
      v15 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v15 = EffectMovieMaster_TypeInfo;
      }
      static_fields = v15->static_fields;
      if ( effectFolder < 1 )
      {
        NOBLE_PATH = static_fields->WEAPON_PATH;
        v14 = int_TypeInfo;
LABEL_17:
        v30 = additionalId;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(v14, &v30, *(_QWORD *)&effectFolder, method, v4, v5, v6, v7);
        v26 = System_String__Format(NOBLE_PATH, v28, 0);
      }
      else
      {
        WEAPON_SUB_PATH = static_fields->WEAPON_SUB_PATH;
        v30 = additionalId;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, *(_QWORD *)&effectFolder, method, v4, v5, v6, v7);
        v29 = effectFolder;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v19, v20, v21, v22, v23, v24);
        v26 = System_String__Format_63677760(WEAPON_SUB_PATH, v18, v25, 0);
      }
      result = System_String__Concat_63636468(v26, this->fields.name, 0);
      break;
    case 5:
      v27 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v27 = EffectMovieMaster_TypeInfo;
      }
      result = System_String__Concat_63636468(v27->static_fields->BATTLECOMMON_PATH, this->fields.name, 0);
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


int32_t EffectMovieEntity__GetLayerType(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.layerType;
}