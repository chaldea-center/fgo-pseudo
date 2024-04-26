void __fastcall EffectSoundPlayerComponent___ctor(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSoundPlayerComponent__ChangeVolumeBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Char_array *BgmName; // x0
  System_Char_array *v5; // x1
  System_Char_array *v6; // x19
  System_String_o *v7; // x20
  System_String_o *v8; // x19
  float v9; // s8
  System_String_o *v10; // x20
  System_String_o *v11; // x21
  float v12; // s0
  float v13; // s8
  float v14; // s9
  __int64 v15; // x0

  if ( (byte_43563D9 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_43563D9 = 1;
  }
  BgmName = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !BgmName )
    goto LABEL_31;
  v5 = BgmName;
  if ( !BgmName->max_length )
    goto LABEL_32;
  BgmName->m_Items[2] = 58;
  if ( !name || (BgmName = (System_Char_array *)System_String__Split(name, BgmName, 0LL)) == 0LL )
LABEL_31:
    sub_B7076C(BgmName, v5);
  v6 = BgmName;
  if ( (int)BgmName->max_length < 2 )
  {
    if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    }
    BgmName = (System_Char_array *)BgmManager__GetBgmName(0LL);
    if ( v6->max_length )
    {
      v7 = (System_String_o *)BgmName;
      v8 = *(System_String_o **)&v6->m_Items[2];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v9 = System_Convert__ToSingle_42440160(v8, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm_23203284(v7, v9, 0LL);
      return;
    }
LABEL_32:
    v15 = sub_B70798(BgmName);
    sub_B70738(v15, 0LL);
  }
  if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = (System_Char_array *)BgmManager__GetBgmName(0LL);
  if ( !v6->max_length )
    goto LABEL_32;
  v10 = (System_String_o *)BgmName;
  v11 = *(System_String_o **)&v6->m_Items[2];
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v12 = System_Convert__ToSingle_42440160(v11, 0LL);
  if ( v6->max_length <= 1 )
    goto LABEL_32;
  v13 = v12;
  v14 = System_Convert__ToSingle_42440160(*(System_String_o **)&v6->m_Items[6], 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_23203412(v10, v13, v14, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_43563D7 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_43563D7 = 1;
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_String_o *age; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43563D5 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_43563D5 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  IsNullOrEmpty = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    Master_WarQuestSelectionMaster,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_21C049C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_16;
  IsNullOrEmpty = System_String__IsNullOrEmpty(entity->fields.age, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_16:
    sub_B7076C(IsNullOrEmpty, v6);
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
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  int max_length; // w8
  System_String_o *v7; // x19
  System_String_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_43563D3 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_43563D3 = 1;
  }
  v4 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_17;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_18;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !name || (v4 = System_String__Split(name, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_17:
    sub_B7076C(v4, v5);
  max_length = v4->max_length;
  if ( !max_length )
  {
LABEL_18:
    v9 = sub_B70798(v4);
    sub_B70738(v9, 0LL);
  }
  v7 = v4->m_Items[0];
  if ( max_length >= 2 )
  {
    v8 = v4->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe_23182708(v7, v8, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v7, 0LL);
  }
}


void __fastcall EffectSoundPlayerComponent__PlaySeContinue(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  int max_length; // w8
  System_String_o *v7; // x19
  System_String_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_43563D4 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_43563D4 = 1;
  }
  v4 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_17;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_18;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !name || (v4 = System_String__Split(name, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_17:
    sub_B7076C(v4, v5);
  max_length = v4->max_length;
  if ( !max_length )
  {
LABEL_18:
    v9 = sub_B70798(v4);
    sub_B70738(v9, 0LL);
  }
  v7 = v4->m_Items[0];
  if ( max_length >= 2 )
  {
    v8 = v4->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue_23206044(v7, v8, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue(v7, 0LL);
  }
}


void __fastcall EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_43563D8 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_43563D8 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_43563D6 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_43563D6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
}