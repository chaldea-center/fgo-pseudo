void __fastcall EffectSoundPlayerComponent___ctor(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSoundPlayerComponent__ChangeVolumeBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Char_array *BgmName; // x0
  System_Char_array *v8; // x1
  System_Char_array *v9; // x19
  System_String_o *v10; // x20
  System_String_o *v11; // x19
  float v12; // s8
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  float v15; // s0
  float v16; // s8
  float v17; // s9
  __int64 v18; // x0

  if ( (byte_418BD52 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, name);
    sub_B2C35C(&char___TypeInfo, v4);
    sub_B2C35C(&System_Convert_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418BD52 = 1;
  }
  BgmName = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !BgmName )
    goto LABEL_31;
  v8 = BgmName;
  if ( !BgmName->max_length )
    goto LABEL_32;
  BgmName->m_Items[2] = 58;
  if ( !name || (BgmName = (System_Char_array *)System_String__Split(name, BgmName, 0LL)) == 0LL )
LABEL_31:
    sub_B2C434(BgmName, v8);
  v9 = BgmName;
  if ( (int)BgmName->max_length < 2 )
  {
    if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    }
    BgmName = (System_Char_array *)BgmManager__GetBgmName(0LL);
    if ( v9->max_length )
    {
      v10 = (System_String_o *)BgmName;
      v11 = *(System_String_o **)&v9->m_Items[2];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v12 = System_Convert__ToSingle_42137972(v11, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm_24806576(v10, v12, 0LL);
      return;
    }
LABEL_32:
    v18 = sub_B2C460(BgmName);
    sub_B2C400(v18, 0LL);
  }
  if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = (System_Char_array *)BgmManager__GetBgmName(0LL);
  if ( !v9->max_length )
    goto LABEL_32;
  v13 = (System_String_o *)BgmName;
  v14 = *(System_String_o **)&v9->m_Items[2];
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v15 = System_Convert__ToSingle_42137972(v14, 0LL);
  if ( v9->max_length <= 1 )
    goto LABEL_32;
  v16 = v15;
  v17 = System_Convert__ToSingle_42137972(*(System_String_o **)&v9->m_Items[6], 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_24806704(v13, v16, v17, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418BD50 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    byte_418BD50 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(1, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PlayBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *bgmId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v9; // x1
  System_String_o *age; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418BD4E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BgmMaster___, bgmId);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418BD4E = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  IsNullOrEmpty = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    Master_WarQuestSelectionMaster,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_16;
  IsNullOrEmpty = System_String__IsNullOrEmpty(entity->fields.age, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_16:
    sub_B2C434(IsNullOrEmpty, v9);
  age = entity->fields.age;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(age, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PlaySe(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  int max_length; // w8
  System_String_o *v8; // x19
  System_String_o *v9; // x20
  __int64 v10; // x0

  if ( (byte_418BD4C & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, name);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418BD4C = 1;
  }
  v5 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_17;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_18;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !name || (v5 = System_String__Split(name, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_17:
    sub_B2C434(v5, v6);
  max_length = v5->max_length;
  if ( !max_length )
  {
LABEL_18:
    v10 = sub_B2C460(v5);
    sub_B2C400(v10, 0LL);
  }
  v8 = v5->m_Items[0];
  if ( max_length >= 2 )
  {
    v9 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe_24786276(v8, v9, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v8, 0LL);
  }
}


void __fastcall EffectSoundPlayerComponent__PlaySeContinue(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  int max_length; // w8
  System_String_o *v8; // x19
  System_String_o *v9; // x20
  __int64 v10; // x0

  if ( (byte_418BD4D & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, name);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418BD4D = 1;
  }
  v5 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_17;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_18;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !name || (v5 = System_String__Split(name, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_17:
    sub_B2C434(v5, v6);
  max_length = v5->max_length;
  if ( !max_length )
  {
LABEL_18:
    v10 = sub_B2C460(v5);
    sub_B2C400(v10, 0LL);
  }
  v8 = v5->m_Items[0];
  if ( max_length >= 2 )
  {
    v9 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue_24809436(v8, v9, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue(v8, 0LL);
  }
}


void __fastcall EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418BD51 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    byte_418BD51 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418BD4F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418BD4F = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
}