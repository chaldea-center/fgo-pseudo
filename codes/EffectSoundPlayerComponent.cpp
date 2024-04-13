void __fastcall EffectSoundPlayerComponent___ctor(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSoundPlayerComponent__ChangeVolumeBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Char_array *BgmName; // x0
  System_Char_array *v15; // x1
  System_Char_array *v16; // x19
  System_String_o *v17; // x20
  System_String_o *v18; // x19
  float v19; // s8
  System_String_o *v20; // x20
  System_String_o *v21; // x21
  float v22; // s0
  float v23; // s8
  float v24; // s9
  __int64 v25; // x0

  if ( (byte_42ECFBA & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&char___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Convert_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42ECFBA = 1;
  }
  BgmName = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !BgmName )
    goto LABEL_31;
  v15 = BgmName;
  if ( !BgmName->max_length )
    goto LABEL_32;
  BgmName->m_Items[2] = 58;
  if ( !name || (BgmName = (System_Char_array *)System_String__Split(name, BgmName, 0LL)) == 0LL )
LABEL_31:
    sub_B5D69C(BgmName, v15);
  v16 = BgmName;
  if ( (int)BgmName->max_length < 2 )
  {
    if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    }
    BgmName = (System_Char_array *)BgmManager__GetBgmName(0LL);
    if ( v16->max_length )
    {
      v17 = (System_String_o *)BgmName;
      v18 = *(System_String_o **)&v16->m_Items[2];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v19 = System_Convert__ToSingle_42791924(v18, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm_23411160(v17, v19, 0LL);
      return;
    }
LABEL_32:
    v25 = sub_B5D6C8(BgmName);
    sub_B5D668(v25, 0LL);
  }
  if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = (System_Char_array *)BgmManager__GetBgmName(0LL);
  if ( !v16->max_length )
    goto LABEL_32;
  v20 = (System_String_o *)BgmName;
  v21 = *(System_String_o **)&v16->m_Items[2];
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v22 = System_Convert__ToSingle_42791924(v21, 0LL);
  if ( v16->max_length <= 1 )
    goto LABEL_32;
  v23 = v22;
  v24 = System_Convert__ToSingle_42791924(*(System_String_o **)&v16->m_Items[6], 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_23411288(v20, v23, v24, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECFB8 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECFB8 = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v16; // x1
  System_String_o *age; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ECFB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, (_DWORD)bgmId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42ECFB6 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  IsNullOrEmpty = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    Master_WarQuestSelectionMaster,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_16;
  IsNullOrEmpty = System_String__IsNullOrEmpty(entity->fields.age, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_16:
    sub_B5D69C(IsNullOrEmpty, v16);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x0
  System_String_array *v9; // x1
  int max_length; // w8
  System_String_o *v11; // x19
  System_String_o *v12; // x20
  __int64 v13; // x0

  if ( (byte_42ECFB4 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42ECFB4 = 1;
  }
  v8 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_17;
  v9 = v8;
  if ( !v8->max_length )
    goto LABEL_18;
  LOWORD(v8->m_Items[0]) = 58;
  if ( !name || (v8 = System_String__Split(name, (System_Char_array *)v8, 0LL)) == 0LL )
LABEL_17:
    sub_B5D69C(v8, v9);
  max_length = v8->max_length;
  if ( !max_length )
  {
LABEL_18:
    v13 = sub_B5D6C8(v8);
    sub_B5D668(v13, 0LL);
  }
  v11 = v8->m_Items[0];
  if ( max_length >= 2 )
  {
    v12 = v8->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe_23390804(v11, v12, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v11, 0LL);
  }
}


void __fastcall EffectSoundPlayerComponent__PlaySeContinue(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x0
  System_String_array *v9; // x1
  int max_length; // w8
  System_String_o *v11; // x19
  System_String_o *v12; // x20
  __int64 v13; // x0

  if ( (byte_42ECFB5 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42ECFB5 = 1;
  }
  v8 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_17;
  v9 = v8;
  if ( !v8->max_length )
    goto LABEL_18;
  LOWORD(v8->m_Items[0]) = 58;
  if ( !name || (v8 = System_String__Split(name, (System_Char_array *)v8, 0LL)) == 0LL )
LABEL_17:
    sub_B5D69C(v8, v9);
  max_length = v8->max_length;
  if ( !max_length )
  {
LABEL_18:
    v13 = sub_B5D6C8(v8);
    sub_B5D668(v13, 0LL);
  }
  v11 = v8->m_Items[0];
  if ( max_length >= 2 )
  {
    v12 = v8->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue_23413920(v11, v12, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue(v11, 0LL);
  }
}


void __fastcall EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECFB9 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECFB9 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECFB7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECFB7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
}