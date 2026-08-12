void EffectMovieEntity___ctor(EffectMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970696 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970696 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
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
  int32_t folderType; // w8
  EffectMovieMaster_c *v8; // x0
  System_String_o *NOBLE_PATH; // x21
  EffectMovieMaster_c *v10; // x0
  EffectMovieMaster_c *v12; // x0
  int v13; // w8
  struct EffectMovieMaster_StaticFields *static_fields; // x8
  System_String_o *WEAPON_SUB_PATH; // x22
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5970695 & 1) == 0 )
  {
    sub_2213A60(&EffectMovieMaster_TypeInfo);
    byte_5970695 = 1;
  }
  folderType = this->fields.folderType;
  if ( folderType <= 2 )
  {
    if ( folderType == 1 )
      return this->fields.name;
    if ( folderType == 2 )
    {
      v8 = EffectMovieMaster_TypeInfo;
      if ( !*(&EffectMovieMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&additionalId);
        v8 = EffectMovieMaster_TypeInfo;
      }
      NOBLE_PATH = v8->static_fields->NOBLE_PATH;
      goto LABEL_23;
    }
    return **(System_String_o ***)(qword_5984390 + 184);
  }
  if ( folderType == 3 )
  {
    v12 = EffectMovieMaster_TypeInfo;
    v13 = *(&EffectMovieMaster_TypeInfo->_2.cctor_finished + 1);
    if ( effectFolder >= 1 )
    {
      if ( !v13 )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&additionalId);
        v12 = EffectMovieMaster_TypeInfo;
      }
      static_fields = v12->static_fields;
      v21 = additionalId;
      WEAPON_SUB_PATH = static_fields->WEAPON_SUB_PATH;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
      v20 = effectFolder;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
      v18 = System_String__Format_75697880(WEAPON_SUB_PATH, v16, v17, 0);
      return System_String__Concat_75651716(v18, this->fields.name, 0);
    }
    if ( !v13 )
    {
      j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&additionalId);
      v12 = EffectMovieMaster_TypeInfo;
    }
    NOBLE_PATH = v12->static_fields->WEAPON_PATH;
LABEL_23:
    v21 = additionalId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v21);
    v18 = System_String__Format(NOBLE_PATH, v19, 0);
    return System_String__Concat_75651716(v18, this->fields.name, 0);
  }
  if ( folderType != 5 )
    return **(System_String_o ***)(qword_5984390 + 184);
  v10 = EffectMovieMaster_TypeInfo;
  if ( !*(&EffectMovieMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&additionalId);
    v10 = EffectMovieMaster_TypeInfo;
  }
  return System_String__Concat_75651716(v10->static_fields->BATTLECOMMON_PATH, this->fields.name, 0);
}


int32_t EffectMovieEntity__GetFolderType(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.folderType;
}