void __fastcall ServantBonusFilterEquipListViewItemDraw___ctor(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall ServantBonusFilterEquipListViewItemDraw__IsSetFilter(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.isButtonOn;
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__OnClickChangeDisplay(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42158F1 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42158F1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isButtonOn ^= 1u;
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, v3);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__ResetDisplayButton(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonOn = 0;
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButton(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *changeDisplayButton; // x0
  _BOOL4 isButtonOn; // w20
  UILabel_o *v12; // x20
  __int64 *v13; // x8
  UILabel_o *buttonLabel; // x20
  __int64 *v15; // x8
  __int64 v16; // x1
  UILabel_o *v17; // x19
  _DWORD *v18; // x8
  int v19; // s0
  int v20; // s1
  int v21; // s2
  int v22; // s3
  __int64 v23; // x1
  _DWORD *v24; // x8

  if ( (byte_42158F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_11947/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v4);
    sub_B0D8A4(&StringLiteral_3292/*"COMMON_ON"*/, v5);
    sub_B0D8A4(&StringLiteral_3291/*"COMMON_OFF"*/, v6);
    sub_B0D8A4(&StringLiteral_11948/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v7);
    sub_B0D8A4(&StringLiteral_17022/*"btn_bg_off"*/, v8);
    sub_B0D8A4(&StringLiteral_17027/*"btn_bg_on"*/, v9);
    byte_42158F2 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_47;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_47;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17027/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( this->fields.isButtonLabelOnOff )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_3292/*"COMMON_ON"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_11947/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    }
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v17 = this->fields.buttonLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_4211436 )
      {
        sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
        byte_4211436 = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v17 )
      {
        v24 = *(_DWORD **)&changeDisplayButton[7].fields.m_CachedPtr;
        v19 = v24[24];
        v20 = v24[25];
        v21 = v24[26];
        v22 = v24[27];
        goto LABEL_46;
      }
    }
LABEL_47:
    sub_B0D97C(changeDisplayButton);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17022/*"btn_bg_off"*/, 0LL);
  v12 = this->fields.buttonLabel;
  if ( this->fields.isButtonLabelOnOff )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_3291/*"COMMON_OFF"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_11948/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v13, 0LL);
  if ( !v12 )
    goto LABEL_47;
  UILabel__set_text(v12, (System_String_o *)changeDisplayButton, 0LL);
  v17 = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4211435 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    byte_4211435 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v17 )
    goto LABEL_47;
  v18 = *(_DWORD **)&changeDisplayButton[7].fields.m_CachedPtr;
  v19 = v18[20];
  v20 = v18[21];
  v21 = v18[22];
  v22 = v18[23];
LABEL_46:
  UILabel__set_effectColor(v17, *(UnityEngine_Color_o *)&v19, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_B0D97C(0LL);
  UnityEngine_Behaviour__set_enabled(changeDisplayButton, isEnable, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonOnOffLabel(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isButtonLabelOnOff = flag;
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetInitButtonSelect(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_o *saveKey; // x0
  const MethodInfo *v4; // x1

  saveKey = this->fields.saveKey;
  this->fields.isButtonOn = 0;
  if ( UnityEngine_PlayerPrefs__HasKey(saveKey, 0LL) )
  {
    if ( UnityEngine_PlayerPrefs__GetInt_34962660(this->fields.saveKey, 0LL) == this->fields.saveId )
      this->fields.isButtonOn = 1;
    else
      UnityEngine_PlayerPrefs__DeleteKey(this->fields.saveKey, 0LL);
  }
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        int32_t idx,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        const MethodInfo *method)
{
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x5
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = idx;
  if ( (byte_42158ED & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2848/*"BonusFilterEquipId"*/, *(_QWORD *)&idx);
    byte_42158ED = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_43849904((System_String_o *)StringLiteral_2848/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_26516256(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_26516256(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x24
  __int64 v27; // x25
  int32_t v28; // w25
  __int64 v29; // x1
  __int64 v30; // x2
  EquipTargetInfo_o *v31; // x24
  UILabel_o *equipNameLabel; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v34; // w0
  ServantBonusFilterEquipListViewItemDraw_o *v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  SkillInfo_array *v47; // x13
  signed int max_length; // w9
  EventUpValInfo_array *v49; // x14
  il2cpp_array_size_t v50; // w26
  int v51; // w21
  char v52; // w8
  Il2CppClass **v53; // x24
  Il2CppClass *v54; // x11
  char *v55; // x24
  Il2CppClass *v56; // t1
  Il2CppClass **v57; // x25
  Il2CppClass *v58; // x8
  char *v59; // x25
  Il2CppClass *v60; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v62; // x0
  SkillInfo_o *v63; // x8
  __int64 v64; // x1
  __int64 v65; // x2
  EventDropUpValInfo_o *current; // x23
  EventDropItemUpValInfo_o *v67; // x24
  __int64 v68; // x1
  __int64 v69; // x2
  EventMargeItemUpValInfo_o *v70; // x25
  __int64 v71; // x0
  int v72; // w9
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v75; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  __int64 v84; // x0
  ServantBonusFilterEquipListViewItemDraw_o *v85; // [xsp+8h] [xbp-A8h]
  _BYTE v88[28]; // [xsp+20h] [xbp-90h] BYREF
  int v89; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  v85 = this;
  if ( (byte_42158EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, equipEntity);
    sub_B0D8A4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v11);
    sub_B0D8A4(&EquipTargetInfo_TypeInfo, v12);
    sub_B0D8A4(&EventDropItemUpValInfo_TypeInfo, v13);
    sub_B0D8A4(&EventMargeItemUpValInfo_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22);
    sub_B0D8A4(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__, v23);
    sub_B0D8A4(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v24);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_114/*" + "*/, v25);
    byte_42158EE = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v89 = 0;
  if ( !equipEntity )
    goto LABEL_62;
  v27 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v26 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v91.fields.currentCryptoKey = v27;
  *(_QWORD *)&v91.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v91, 0LL);
  v31 = (EquipTargetInfo_o *)sub_B0D974(EquipTargetInfo_TypeInfo, v29, v30);
  EquipTargetInfo___ctor_28810548(v31, v28, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v85->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_62;
  ServantFaceIconComponent__Set_29631364((ServantFaceIconComponent_o *)this, v31, 0LL, 0LL, 0LL);
  equipNameLabel = v85->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_62;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(equipEntity->fields.id, 0LL);
  v35 = v85;
  v85->fields.saveKey = saveKey;
  v85->fields.saveId = v34;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v85->fields.saveKey,
    (System_Int32_array **)saveKey,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  v42,
                                                                                                  v43);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v47 = skillInfos;
  if ( !skillInfos )
    goto LABEL_62;
  max_length = skillInfos->max_length;
  v49 = eventUpValInfos;
  if ( max_length >= 1 )
  {
    v50 = 0;
    v51 = 0;
    v52 = 1;
    while ( v49 )
    {
      if ( v50 >= v49->max_length )
        goto LABEL_63;
      v53 = &v49->obj.klass + (int)v50;
      v56 = v53[4];
      v55 = (char *)(v53 + 4);
      v54 = v56;
      if ( !v56 )
        break;
      if ( LODWORD(v54->_1.namespaze) == v35->fields.saveId )
      {
        if ( (v52 & 1) != 0 )
        {
          if ( v50 >= max_length )
            goto LABEL_63;
          v57 = &v47->obj.klass + (int)v50;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v35->fields.skillIcon;
          v60 = v57[4];
          v59 = (char *)(v57 + 4);
          v58 = v60;
          if ( !v60 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v58->_1.name, 0LL);
          skillTextLabel = v35->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v50 >= skillInfos->max_length )
            goto LABEL_63;
          if ( !*(_QWORD *)v59 )
            break;
          v62 = System_String__Concat_43849904(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v59 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v35->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v50 >= max_length )
          {
LABEL_63:
            v84 = sub_B0D9A8(this);
            sub_B0D948(v84, 0LL);
          }
          v63 = v47->m_Items[v50];
          if ( !v63 )
            break;
          v62 = System_String__Concat_43852188(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_114/*" + "*/,
                  v63->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v62, 0LL);
        if ( v50 >= eventUpValInfos->max_length )
          goto LABEL_63;
        if ( !*(_QWORD *)v55 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v55 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v88,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v90 = *(System_Collections_Generic_List_Enumerator_T__o *)v88;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v90,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = (EventDropUpValInfo_o *)v90.fields.current;
          v67 = (EventDropItemUpValInfo_o *)sub_B0D974(EventDropItemUpValInfo_TypeInfo, v64, v65);
          EventDropItemUpValInfo___ctor(v67, 1, current, 0, 0LL);
          v70 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v68, v69);
          EventMargeItemUpValInfo___ctor(v70, v67, 0LL);
          if ( !current )
            sub_B0D97C(v71);
          if ( !v70 )
            sub_B0D97C(v71);
          v70->fields.addCount = current->fields.addCount;
          v70->fields.rateCount = current->fields.rateCount;
          if ( !v44 )
            sub_B0D97C(v71);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        *(_DWORD *)&v88[4 * v51 + 24] = 312;
        v51 = ++v89;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v90,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v47 = skillInfos;
        v49 = eventUpValInfos;
        if ( v51 )
        {
          v72 = v51--;
          v35 = v85;
          v52 = 0;
          if ( *(_DWORD *)&v88[4 * v51 + 24] == 312 )
            v89 = v51;
          else
            v51 = v72;
        }
        else
        {
          v35 = v85;
          v52 = 0;
        }
      }
      max_length = v47->max_length;
      if ( (int)++v50 >= max_length )
        goto LABEL_50;
    }
LABEL_62:
    sub_B0D97C(this);
  }
LABEL_50:
  this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  static_fields = *(struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields **)&this[1].fields.isButtonOn;
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*(&this[2].fields.isButtonLabelOnOff + 3) & 4) != 0 && !this[2].fields.m_CachedPtr )
    {
      j_il2cpp_runtime_class_init_0(this);
      static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                                                           v45,
                                                                           v46);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v75,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v76 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v76->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__12_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v76->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
  if ( !v44 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v44,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v35->fields.skillTextLabel;
  if ( !this )
    goto LABEL_62;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    *(System_String_o **)&this[3].fields.isButtonLabelOnOff,
    (int32_t)this[4].klass,
    0,
    0,
    0LL);
  eventUpValIcon = v35->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_62;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_26517928(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x4
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = idx;
  if ( (byte_42158EF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2850/*"BonusFilterGroupId"*/, *(_QWORD *)&idx);
    byte_42158EF = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_43849904((System_String_o *)StringLiteral_2850/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_26518076(this, eventIdList, filterGroupId, v9, v10);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_26518076(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  void *Instance; // x0
  WarEntity_o *Entity; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WarEntity_o *v39; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  struct System_String_o *longName; // x8
  unsigned __int64 v48; // x27
  EventUpValInfo_o *v49; // x24
  struct System_String_o *v50; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  EventDropUpValInfo_o *current; // x24
  EventDropItemUpValInfo_o *v54; // x25
  __int64 v55; // x1
  __int64 v56; // x2
  EventMargeItemUpValInfo_o *v57; // x26
  __int64 v58; // x0
  int v59; // w19
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x21
  Il2CppObject *v62; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  __int64 v71; // x0
  ServantBonusFilterEquipListViewItemDraw_o *v72; // [xsp+8h] [xbp-B8h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-B0h]
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-A8h]
  int v75; // [xsp+24h] [xbp-9Ch]
  _BYTE v76[28]; // [xsp+30h] [xbp-90h] BYREF
  int v77; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42158F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, eventIdList);
    sub_B0D8A4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_B0D8A4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v16);
    sub_B0D8A4(&EventDropItemUpValInfo_TypeInfo, v17);
    sub_B0D8A4(&EventMargeItemUpValInfo_TypeInfo, v18);
    sub_B0D8A4(&EventUpValInfo_TypeInfo, v19);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v26);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__, v29);
    sub_B0D8A4(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v30);
    byte_42158F0 = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v78, 0, sizeof(v78));
  v77 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             filterGroupId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v39 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.saveKey,
    (System_Int32_array **)saveKey,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  v40,
                                                                                                  v41);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_50;
  ServantFaceIconComponent__SetEventBonus(
    (ServantFaceIconComponent_o *)Instance,
    (int32_t)v39->fields.name,
    HIDWORD(v39->fields.name),
    0LL);
  Instance = this->fields.equipNameLabel;
  if ( !Instance )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)Instance, v39->fields.age, 0LL);
  Instance = this->fields.skillIcon;
  if ( !Instance )
    goto LABEL_50;
  SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, v39->fields.parentWarId, 0LL);
  Instance = this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v39->fields.bannerId, 0LL);
  Instance = this->fields.skillTextLabel;
  v72 = this;
  if ( !Instance )
    goto LABEL_50;
  WrapControlText__textAdjust(
    (UILabel_o *)Instance,
    *((System_String_o **)Instance + 51),
    *((_DWORD *)Instance + 104),
    0,
    0,
    0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v43, v44);
  EventUpValSetupInfo___ctor_25655088(setupInfo, eventIdList, 0, 0, 0, 0LL);
  longName = v39->fields.longName;
  if ( !longName )
    goto LABEL_50;
  v75 = 0;
  v48 = 0LL;
  while ( (__int64)v48 < SLODWORD(longName[1].klass) )
  {
    v49 = (EventUpValInfo_o *)sub_B0D974(EventUpValInfo_TypeInfo, v45, v46);
    EventUpValInfo___ctor(v49, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v49;
    v50 = v39->fields.longName;
    if ( v50 )
    {
      if ( v48 >= LODWORD(v50[1].klass) )
      {
        v71 = sub_B0D9A8(Instance);
        sub_B0D948(v71, 0LL);
      }
      Instance = MasterData_WarQuestSelectionMaster;
      if ( MasterData_WarQuestSelectionMaster )
      {
        Instance = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     *((_DWORD *)&v50[1].monitor + v48),
                     1,
                     0LL);
        if ( Instance )
        {
          Instance = (void *)SkillLvEntity__getEventUpVal_26144328(
                               (SkillLvEntity_o *)Instance,
                               &eventUpVallInfo,
                               1,
                               1,
                               0,
                               1,
                               0LL);
          if ( eventUpVallInfo )
          {
            Instance = eventUpVallInfo->fields.dropList;
            if ( Instance )
            {
              if ( *((_DWORD *)Instance + 6) )
              {
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v76,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
                  (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v78 = *(System_Collections_Generic_List_Enumerator_T__o *)v76;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v78,
                          (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = (EventDropUpValInfo_o *)v78.fields.current;
                  v54 = (EventDropItemUpValInfo_o *)sub_B0D974(EventDropItemUpValInfo_TypeInfo, v51, v52);
                  EventDropItemUpValInfo___ctor(v54, 1, current, 0, 0LL);
                  v57 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v55, v56);
                  EventMargeItemUpValInfo___ctor(v57, v54, 0LL);
                  if ( !current )
                    sub_B0D97C(v58);
                  if ( !v57 )
                    sub_B0D97C(v58);
                  v57->fields.addCount = current->fields.addCount;
                  v57->fields.rateCount = current->fields.rateCount;
                  if ( !v42 )
                    sub_B0D97C(v58);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v42,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                }
                *(_DWORD *)&v76[4 * v75 + 24] = 347;
                v59 = ++v77;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v78,
                  (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
                if ( v59 )
                {
                  v75 = v59;
                  if ( *(_DWORD *)&v76[4 * v59 + 20] == 347 )
                  {
                    v77 = v59 - 1;
                    v75 = v59 - 1;
                  }
                }
                else
                {
                  v75 = 0;
                }
              }
              ++v48;
              longName = v39->fields.longName;
              if ( longName )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_50;
  }
  Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  static_fields = (struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                                                           v45,
                                                                           v46);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v62,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v63 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v63->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__14_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v63->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !v42
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
          (System_Comparison_T__o *)_9__14_0,
          (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = v72->fields.eventUpValIcon,
        Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v42,
                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_50:
    sub_B0D97C(Instance);
  }
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)Instance, -1, -1, -1, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w8
  System_String_o *saveKey; // x0

  isButtonOn = this->fields.isButtonOn;
  saveKey = this->fields.saveKey;
  if ( isButtonOn )
  {
    UnityEngine_PlayerPrefs__SetInt(saveKey, this->fields.saveId, 0LL);
  }
  else if ( UnityEngine_PlayerPrefs__HasKey(saveKey, 0LL) )
  {
    UnityEngine_PlayerPrefs__DeleteKey(this->fields.saveKey, 0LL);
  }
}


void __fastcall ServantBonusFilterEquipListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_421220D & 1) == 0 )
  {
    sub_B0D8A4(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1);
    byte_421220D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw___c___ctor(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__12_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B0D97C(this);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B0D97C(this);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}