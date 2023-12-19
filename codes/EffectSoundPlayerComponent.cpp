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
  __int64 v8; // x2
  System_Char_array *v9; // x1
  System_String_array *v10; // x0
  System_String_array *v11; // x19
  System_String_o *v12; // x20
  System_String_o *v13; // x19
  float v14; // s8
  System_String_o *v15; // x20
  System_String_o *v16; // x21
  float v17; // s0
  float v18; // s8
  float v19; // s9

  if ( (byte_40FE270 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, name);
    sub_B16FFC(&char___TypeInfo, v4);
    sub_B16FFC(&System_Convert_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FE270 = 1;
  }
  BgmName = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !BgmName )
    goto LABEL_31;
  v9 = BgmName;
  if ( !BgmName->max_length )
    goto LABEL_32;
  BgmName->m_Items[2] = 58;
  if ( !name || (v10 = System_String__Split(name, BgmName, 0LL)) == 0LL )
LABEL_31:
    sub_B170D4();
  v11 = v10;
  if ( (int)v10->max_length < 2 )
  {
    if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    }
    BgmName = (System_Char_array *)BgmManager__GetBgmName(0LL);
    if ( v11->max_length )
    {
      v12 = (System_String_o *)BgmName;
      v13 = v11->m_Items[0];
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v14 = System_Convert__ToSingle_41752420(v13, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm_24843780(v12, v14, 0LL);
      return;
    }
LABEL_32:
    sub_B17100(BgmName, v9, v8);
    sub_B170A0();
  }
  if ( (WORD1(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = (System_Char_array *)BgmManager__GetBgmName(0LL);
  if ( !v11->max_length )
    goto LABEL_32;
  v15 = (System_String_o *)BgmName;
  v16 = v11->m_Items[0];
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v17 = System_Convert__ToSingle_41752420(v16, 0LL);
  if ( v11->max_length <= 1 )
    goto LABEL_32;
  v18 = v17;
  v19 = System_Convert__ToSingle_41752420(v11->m_Items[1], 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_24843908(v15, v18, v19, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FE26E & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40FE26E = 1;
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
  int32_t v8; // w0
  System_String_o *age; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FE26C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BgmMaster___, bgmId);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FE26C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BgmMaster___);
  v8 = System_Int32__Parse(bgmId, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          v8,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
    return;
  if ( !entity )
    goto LABEL_16;
  if ( System_String__IsNullOrEmpty(entity->fields.age, 0LL) )
    return;
  if ( !entity )
LABEL_16:
    sub_B170D4();
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
  __int64 v6; // x2
  System_String_array *v7; // x1
  int max_length; // w8
  System_String_o *v9; // x19
  System_String_o *v10; // x20

  if ( (byte_40FE26A & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, name);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FE26A = 1;
  }
  v5 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v5 )
    goto LABEL_17;
  v7 = v5;
  if ( !v5->max_length )
    goto LABEL_18;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !name || (v5 = System_String__Split(name, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_17:
    sub_B170D4();
  max_length = v5->max_length;
  if ( !max_length )
  {
LABEL_18:
    sub_B17100(v5, v7, v6);
    sub_B170A0();
  }
  v9 = v5->m_Items[0];
  if ( max_length >= 2 )
  {
    v10 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe_24823480(v9, v10, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v9, 0LL);
  }
}


void __fastcall EffectSoundPlayerComponent__PlaySeContinue(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x0
  __int64 v6; // x2
  System_String_array *v7; // x1
  int max_length; // w8
  System_String_o *v9; // x19
  System_String_o *v10; // x20

  if ( (byte_40FE26B & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, name);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FE26B = 1;
  }
  v5 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v5 )
    goto LABEL_17;
  v7 = v5;
  if ( !v5->max_length )
    goto LABEL_18;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !name || (v5 = System_String__Split(name, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_17:
    sub_B170D4();
  max_length = v5->max_length;
  if ( !max_length )
  {
LABEL_18:
    sub_B17100(v5, v7, v6);
    sub_B170A0();
  }
  v9 = v5->m_Items[0];
  if ( max_length >= 2 )
  {
    v10 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue_24846640(v9, v10, 0LL);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSeContinue(v9, 0LL);
  }
}


void __fastcall EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FE26F & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40FE26F = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FE26D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FE26D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
}