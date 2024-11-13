void __fastcall EffectMovieEntity___ctor(EffectMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1606F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B1606F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EffectMovieEntity__CreatePrimaryKey(EffectMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EffectMovieEntity__GetFilePath(
        EffectMovieEntity_o *this,
        int32_t additionalId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *result; // x0
  EffectMovieMaster_c *v10; // x0
  int32_t *v11; // x1
  System_String_o *NOBLE_PATH; // x21
  System_Int32_c *v13; // x0
  EffectMovieMaster_c *v14; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  EffectMovieMaster_c *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1606E & 1) == 0 )
  {
    sub_1BCA7E0(&EffectMovieMaster_TypeInfo, *(_QWORD *)&additionalId, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&string_TypeInfo, v7, v8);
    byte_4B1606E = 1;
  }
  switch ( this->fields.folderType )
  {
    case 1:
      result = this->fields.name;
      break;
    case 2:
      v10 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&additionalId);
        v10 = EffectMovieMaster_TypeInfo;
      }
      v11 = &v19;
      NOBLE_PATH = v10->static_fields->NOBLE_PATH;
      v13 = int_TypeInfo;
      v19 = additionalId;
      goto LABEL_11;
    case 3:
      v14 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&additionalId);
        v14 = EffectMovieMaster_TypeInfo;
      }
      v11 = &v18;
      NOBLE_PATH = v14->static_fields->WEAPON_PATH;
      v13 = int_TypeInfo;
      v18 = additionalId;
LABEL_11:
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(v13, v11);
      v16 = System_String__Format(NOBLE_PATH, v15, 0LL);
      result = System_String__Concat_62401220(v16, this->fields.name, 0LL);
      break;
    case 5:
      v17 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo, *(_QWORD *)&additionalId);
        v17 = EffectMovieMaster_TypeInfo;
      }
      result = System_String__Concat_62401220(v17->static_fields->BATTLECOMMON_PATH, this->fields.name, 0LL);
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