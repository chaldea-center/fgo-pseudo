void __fastcall EffectMovieEntity___ctor(EffectMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C385 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1C385 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EffectMovieEntity__CreatePrimaryKey(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EffectMovieEntity__GetFilePath(
        EffectMovieEntity_o *this,
        int32_t additionalId,
        int32_t effectFolder,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *result; // x0
  EffectMovieMaster_c *v11; // x0
  System_String_o *NOBLE_PATH; // x21
  System_Int32_c *v13; // x0
  EffectMovieMaster_c *v14; // x0
  struct EffectMovieMaster_StaticFields *static_fields; // x8
  System_String_o *WEAPON_SUB_PATH; // x22
  Il2CppObject *v17; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  EffectMovieMaster_c *v23; // x0
  Il2CppObject *v24; // x0
  int32_t v25; // [xsp+8h] [xbp-38h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1C384 & 1) == 0 )
  {
    sub_1BCAFF8(&EffectMovieMaster_TypeInfo, *(_QWORD *)&additionalId);
    sub_1BCAFF8(&int_TypeInfo, v8);
    sub_1BCAFF8(&string_TypeInfo, v9);
    byte_4B1C384 = 1;
  }
  switch ( this->fields.folderType )
  {
    case 1:
      result = this->fields.name;
      break;
    case 2:
      v11 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v11 = EffectMovieMaster_TypeInfo;
      }
      NOBLE_PATH = v11->static_fields->NOBLE_PATH;
      v13 = int_TypeInfo;
      goto LABEL_17;
    case 3:
      v14 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v14 = EffectMovieMaster_TypeInfo;
      }
      static_fields = v14->static_fields;
      if ( effectFolder < 1 )
      {
        NOBLE_PATH = static_fields->WEAPON_PATH;
        v13 = int_TypeInfo;
LABEL_17:
        v26 = additionalId;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(v13, &v26, *(_QWORD *)&effectFolder, method, v4);
        v22 = System_String__Format(NOBLE_PATH, v24, 0LL);
      }
      else
      {
        WEAPON_SUB_PATH = static_fields->WEAPON_SUB_PATH;
        v26 = additionalId;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, *(_QWORD *)&effectFolder, method, v4);
        v25 = effectFolder;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v18, v19, v20);
        v22 = System_String__Format_62491716(WEAPON_SUB_PATH, v17, v21, 0LL);
      }
      result = System_String__Concat_62450424(v22, this->fields.name, 0LL);
      break;
    case 5:
      v23 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v23 = EffectMovieMaster_TypeInfo;
      }
      result = System_String__Concat_62450424(v23->static_fields->BATTLECOMMON_PATH, this->fields.name, 0LL);
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