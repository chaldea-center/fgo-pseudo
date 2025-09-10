void EffectMovieEntity___ctor(EffectMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27131 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27131 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
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
  System_String_o *result; // x0
  EffectMovieMaster_c *v9; // x0
  System_String_o *NOBLE_PATH; // x21
  System_Int32_c *v11; // x0
  EffectMovieMaster_c *v12; // x0
  struct EffectMovieMaster_StaticFields *static_fields; // x8
  System_String_o *WEAPON_SUB_PATH; // x22
  Il2CppObject *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  EffectMovieMaster_c *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C27130 & 1) == 0 )
  {
    sub_1C2D490(&EffectMovieMaster_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    byte_4C27130 = 1;
  }
  switch ( this->fields.folderType )
  {
    case 1:
      result = this->fields.name;
      break;
    case 2:
      v9 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v9 = EffectMovieMaster_TypeInfo;
      }
      NOBLE_PATH = v9->static_fields->NOBLE_PATH;
      v11 = int_TypeInfo;
      goto LABEL_17;
    case 3:
      v12 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v12 = EffectMovieMaster_TypeInfo;
      }
      static_fields = v12->static_fields;
      if ( effectFolder < 1 )
      {
        NOBLE_PATH = static_fields->WEAPON_PATH;
        v11 = int_TypeInfo;
LABEL_17:
        v24 = additionalId;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(v11, &v24, *(_QWORD *)&effectFolder, method, v4);
        v20 = System_String__Format(NOBLE_PATH, v22, 0);
      }
      else
      {
        WEAPON_SUB_PATH = static_fields->WEAPON_SUB_PATH;
        v24 = additionalId;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, *(_QWORD *)&effectFolder, method, v4);
        v23 = effectFolder;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v16, v17, v18);
        v20 = System_String__Format_63499156(WEAPON_SUB_PATH, v15, v19, 0);
      }
      result = System_String__Concat_63457864(v20, this->fields.name, 0);
      break;
    case 5:
      v21 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v21 = EffectMovieMaster_TypeInfo;
      }
      result = System_String__Concat_63457864(v21->static_fields->BATTLECOMMON_PATH, this->fields.name, 0);
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