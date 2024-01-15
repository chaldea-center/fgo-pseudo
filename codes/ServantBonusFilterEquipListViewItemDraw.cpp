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

  if ( (byte_40F9490 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9490 = 1;
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
  WebViewObject_o *Component_WebViewObject; // x0
  UILabel_o *v13; // x20
  __int64 *v14; // x8
  UILabel_o *buttonLabel; // x20
  __int64 *v16; // x8
  System_String_o *v17; // x0
  __int64 v18; // x1
  UILabel_o *v19; // x19
  LocalizationManager_c *v20; // x0
  struct LocalizationManager_StaticFields *v21; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  System_String_o *v26; // x0
  __int64 v27; // x1
  LocalizationManager_c *v28; // x0
  struct LocalizationManager_StaticFields *static_fields; // x8

  if ( (byte_40F9491 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_11860/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v4);
    sub_B16FFC(&StringLiteral_3270/*"COMMON_ON"*/, v5);
    sub_B16FFC(&StringLiteral_3269/*"COMMON_OFF"*/, v6);
    sub_B16FFC(&StringLiteral_11861/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v7);
    sub_B16FFC(&StringLiteral_16905/*"btn_bg_off"*/, v8);
    sub_B16FFC(&StringLiteral_16910/*"btn_bg_on"*/, v9);
    byte_40F9491 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_47;
  isButtonOn = this->fields.isButtonOn;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              changeDisplayButton,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !Component_WebViewObject )
    goto LABEL_47;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_16910/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( this->fields.isButtonLabelOnOff )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_3270/*"COMMON_ON"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_11860/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    }
    v26 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, v26, 0LL);
      v19 = this->fields.buttonLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_40F6255 )
      {
        sub_B16FFC(&LocalizationManager_TypeInfo, v27);
        byte_40F6255 = 1;
      }
      v28 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v28 = LocalizationManager_TypeInfo;
      }
      if ( v19 )
      {
        static_fields = v28->static_fields;
        r = static_fields->selectEffectColor.fields.r;
        g = static_fields->selectEffectColor.fields.g;
        b = static_fields->selectEffectColor.fields.b;
        a = static_fields->selectEffectColor.fields.a;
        goto LABEL_46;
      }
    }
LABEL_47:
    sub_B170D4();
  }
  UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, (System_String_o *)StringLiteral_16905/*"btn_bg_off"*/, 0LL);
  v13 = this->fields.buttonLabel;
  if ( this->fields.isButtonLabelOnOff )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_3269/*"COMMON_OFF"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_11861/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  }
  v17 = LocalizationManager__Get((System_String_o *)*v14, 0LL);
  if ( !v13 )
    goto LABEL_47;
  UILabel__set_text(v13, v17, 0LL);
  v19 = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    byte_40F6254 = 1;
  }
  v20 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_47;
  v21 = v20->static_fields;
  r = v21->normalEffectColor.fields.r;
  g = v21->normalEffectColor.fields.g;
  b = v21->normalEffectColor.fields.b;
  a = v21->normalEffectColor.fields.a;
LABEL_46:
  UILabel__set_effectColor(v19, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_B170D4();
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
    if ( UnityEngine_PlayerPrefs__GetInt_34836848(this->fields.saveKey, 0LL) == this->fields.saveId )
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
  if ( (byte_40F948C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2825/*"BonusFilterEquipId"*/, *(_QWORD *)&idx);
    byte_40F948C = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_43743732((System_String_o *)StringLiteral_2825/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_23829624(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_23829624(
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
  __int64 v31; // x3
  __int64 v32; // x4
  EquipTargetInfo_o *v33; // x24
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UILabel_o *equipNameLabel; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  System_String_o *v37; // x0
  int32_t v38; // w0
  ServantBonusFilterEquipListViewItemDraw_o *v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x22
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  SkillInfo_array *v56; // x13
  signed int max_length; // w9
  EventUpValInfo_array *v58; // x14
  il2cpp_array_size_t v59; // w26
  int v60; // w21
  char v61; // w8
  Il2CppClass **v62; // x24
  Il2CppClass *v63; // x11
  char *v64; // x24
  Il2CppClass *v65; // t1
  Il2CppClass **v66; // x25
  SkillIconComponent_o *skillIcon; // x0
  Il2CppClass *v68; // x8
  char *v69; // x25
  Il2CppClass *v70; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v72; // x0
  SkillInfo_o *v73; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  EventDropUpValInfo_o *current; // x23
  EventDropItemUpValInfo_o *v80; // x24
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  EventMargeItemUpValInfo_o *v85; // x25
  int v86; // w9
  ServantBonusFilterEquipListViewItemDraw___c_c *v87; // x0
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v90; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UILabel_o *v98; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  EventMargeItemUpValInfo_array *v100; // x0
  _BYTE v104[28]; // [xsp+20h] [xbp-90h] BYREF
  int v105; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v106; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  if ( (byte_40F948D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, equipEntity);
    sub_B16FFC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v11);
    sub_B16FFC(&EquipTargetInfo_TypeInfo, v12);
    sub_B16FFC(&EventDropItemUpValInfo_TypeInfo, v13);
    sub_B16FFC(&EventMargeItemUpValInfo_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22);
    sub_B16FFC(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__, v23);
    sub_B16FFC(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_114/*" + "*/, v25);
    byte_40F948D = 1;
  }
  memset(&v106, 0, sizeof(v106));
  v105 = 0;
  if ( !equipEntity )
    goto LABEL_62;
  v27 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v26 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v107.fields.currentCryptoKey = v27;
  *(_QWORD *)&v107.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v107, 0LL);
  v33 = (EquipTargetInfo_o *)sub_B170CC(EquipTargetInfo_TypeInfo, v29, v30, v31, v32);
  EquipTargetInfo___ctor_29330048(v33, v28, 0, 1, 0, 0LL);
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_62;
  ServantFaceIconComponent__Set_30710412(servantFaceIcon, v33, 0LL, 0LL, 0LL);
  equipNameLabel = this->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(Name, 0LL);
  if ( !equipNameLabel )
    goto LABEL_62;
  UILabel__set_text(equipNameLabel, v37, 0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(equipEntity->fields.id, 0LL);
  v39 = this;
  this->fields.saveKey = saveKey;
  this->fields.saveId = v38;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.saveKey,
    (System_Int32_array **)saveKey,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  v46,
                                                                                                  v47,
                                                                                                  v48,
                                                                                                  v49);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v56 = skillInfos;
  if ( !skillInfos )
    goto LABEL_62;
  max_length = skillInfos->max_length;
  v58 = eventUpValInfos;
  if ( max_length >= 1 )
  {
    v59 = 0;
    v60 = 0;
    v61 = 1;
    while ( v58 )
    {
      if ( v59 >= v58->max_length )
        goto LABEL_63;
      v62 = &v58->obj.klass + (int)v59;
      v65 = v62[4];
      v64 = (char *)(v62 + 4);
      v63 = v65;
      if ( !v65 )
        break;
      if ( LODWORD(v63->_1.namespaze) == v39->fields.saveId )
      {
        if ( (v61 & 1) != 0 )
        {
          if ( v59 >= max_length )
            goto LABEL_63;
          v66 = &v56->obj.klass + (int)v59;
          skillIcon = v39->fields.skillIcon;
          v70 = v66[4];
          v69 = (char *)(v66 + 4);
          v68 = v70;
          if ( !v70 )
            break;
          if ( !skillIcon )
            break;
          SkillIconComponent__Set(skillIcon, (int32_t)v68->_1.name, 0LL);
          skillTextLabel = v39->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v59 >= skillInfos->max_length )
            goto LABEL_63;
          if ( !*(_QWORD *)v69 )
            break;
          v72 = System_String__Concat_43743732(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v69 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v39->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v59 >= max_length )
          {
LABEL_63:
            sub_B17100(v51, v52, v53);
            sub_B170A0();
          }
          v73 = v56->m_Items[v59];
          if ( !v73 )
            break;
          v72 = System_String__Concat_43746016(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_114/*" + "*/,
                  v73->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v72, 0LL);
        if ( v59 >= eventUpValInfos->max_length )
          goto LABEL_63;
        if ( !*(_QWORD *)v64 )
          break;
        v74 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)(*(_QWORD *)v64 + 48LL);
        if ( !v74 )
          break;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v104,
          v74,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v106 = *(System_Collections_Generic_List_Enumerator_T__o *)v104;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v106,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = (EventDropUpValInfo_o *)v106.fields.current;
          v80 = (EventDropItemUpValInfo_o *)sub_B170CC(EventDropItemUpValInfo_TypeInfo, v75, v76, v77, v78);
          EventDropItemUpValInfo___ctor(v80, 1, current, 0, 0LL);
          v85 = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v81, v82, v83, v84);
          EventMargeItemUpValInfo___ctor(v85, v80, 0LL);
          if ( !current )
            sub_B170D4();
          if ( !v85 )
            sub_B170D4();
          v85->fields.addCount = current->fields.addCount;
          v85->fields.rateCount = current->fields.rateCount;
          if ( !v50 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v50,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        *(_DWORD *)&v104[4 * v60 + 24] = 312;
        v60 = ++v105;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v106,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v56 = skillInfos;
        v58 = eventUpValInfos;
        if ( v60 )
        {
          v86 = v60--;
          v39 = this;
          v61 = 0;
          if ( *(_DWORD *)&v104[4 * v60 + 24] == 312 )
            v105 = v60;
          else
            v60 = v86;
        }
        else
        {
          v39 = this;
          v61 = 0;
        }
      }
      max_length = v56->max_length;
      if ( (int)++v59 >= max_length )
        goto LABEL_50;
    }
LABEL_62:
    sub_B170D4();
  }
LABEL_50:
  v87 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    v87 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  static_fields = v87->static_fields;
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v87->vtable._0_Equals.methodPtr) & 4) != 0 && !v87->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v87);
      static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    }
    v90 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                                                           v52,
                                                                           v53,
                                                                           v54,
                                                                           v55);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v90,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v91 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v91->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v91->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
  }
  if ( !v50 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v50,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  v98 = v39->fields.skillTextLabel;
  if ( !v98 )
    goto LABEL_62;
  WrapControlText__textAdjust(v98, v98->fields.mText, v98->fields.mFontSize, 0, 0, 0LL);
  eventUpValIcon = v39->fields.eventUpValIcon;
  v100 = (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v50,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_62;
  EventUpValIconComponent__Set(eventUpValIcon, v100, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_23831296(
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
  if ( (byte_40F948E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2827/*"BonusFilterGroupId"*/, *(_QWORD *)&idx);
    byte_40F948E = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_2827/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_23831444(this, eventIdList, filterGroupId, v9, v10);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_23831444(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WarEntity_o *v40; // x23
  WebViewManager_o *v41; // x0
  WebViewManager_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x20
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UILabel_o *equipNameLabel; // x0
  SkillIconComponent_o *skillIcon; // x0
  UILabel_o *skillTextLabel; // x0
  struct UILabel_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  struct System_String_o *longName; // x8
  unsigned __int64 v62; // x27
  EventUpValInfo_o *v63; // x24
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  struct System_String_o *v67; // x8
  SkillLvEntity_o *v68; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *dropList; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  EventDropUpValInfo_o *current; // x24
  EventDropItemUpValInfo_o *v75; // x25
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  EventMargeItemUpValInfo_o *v80; // x26
  int v81; // w19
  ServantBonusFilterEquipListViewItemDraw___c_c *v82; // x0
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x21
  Il2CppObject *v85; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  EventMargeItemUpValInfo_array *v94; // x0
  ServantBonusFilterEquipListViewItemDraw_o *v95; // [xsp+8h] [xbp-B8h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-B0h]
  SkillLvMaster_o *v97; // [xsp+18h] [xbp-A8h]
  int v98; // [xsp+24h] [xbp-9Ch]
  _BYTE v99[28]; // [xsp+30h] [xbp-90h] BYREF
  int v100; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v101; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40F948F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, eventIdList);
    sub_B16FFC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_B16FFC(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v16);
    sub_B16FFC(&EventDropItemUpValInfo_TypeInfo, v17);
    sub_B16FFC(&EventMargeItemUpValInfo_TypeInfo, v18);
    sub_B16FFC(&EventUpValInfo_TypeInfo, v19);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v26);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__, v29);
    sub_B16FFC(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v30);
    byte_40F948F = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v101, 0, sizeof(v101));
  v100 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             filterGroupId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v40 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.saveKey,
    (System_Int32_array **)saveKey,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_50;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v41,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v42 )
    goto LABEL_50;
  v97 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v42,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  v43,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_50;
  ServantFaceIconComponent__SetEventBonus(servantFaceIcon, (int32_t)v40->fields.name, HIDWORD(v40->fields.name), 0LL);
  equipNameLabel = this->fields.equipNameLabel;
  if ( !equipNameLabel )
    goto LABEL_50;
  UILabel__set_text(equipNameLabel, v40->fields.age, 0LL);
  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_50;
  SkillIconComponent__SetSpecifyIconId(skillIcon, v40->fields.parentWarId, 0LL);
  skillTextLabel = this->fields.skillTextLabel;
  if ( !skillTextLabel )
    goto LABEL_50;
  UILabel__set_text(skillTextLabel, *(System_String_o **)&v40->fields.bannerId, 0LL);
  v52 = this->fields.skillTextLabel;
  v95 = this;
  if ( !v52 )
    goto LABEL_50;
  WrapControlText__textAdjust(v52, v52->fields.mText, v52->fields.mFontSize, 0, 0, 0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v53, v54, v55, v56);
  EventUpValSetupInfo___ctor_24610352(setupInfo, eventIdList, 0, 0LL);
  longName = v40->fields.longName;
  if ( !longName )
    goto LABEL_50;
  v98 = 0;
  v62 = 0LL;
  while ( (__int64)v62 < SLODWORD(longName[1].klass) )
  {
    v63 = (EventUpValInfo_o *)sub_B170CC(EventUpValInfo_TypeInfo, v57, v58, v59, v60);
    EventUpValInfo___ctor(v63, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v63;
    v67 = v40->fields.longName;
    if ( v67 )
    {
      if ( v62 >= LODWORD(v67[1].klass) )
      {
        sub_B17100(v64, v65, v66);
        sub_B170A0();
      }
      if ( v97 )
      {
        v68 = SkillLvMaster__GetEntity(v97, *((_DWORD *)&v67[1].monitor + v62), 1, 0LL);
        if ( v68 )
        {
          SkillLvEntity__getEventUpVal_23627436(v68, &eventUpVallInfo, 1, 1, 0, 1, 0LL);
          if ( eventUpVallInfo )
          {
            dropList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventUpVallInfo->fields.dropList;
            if ( dropList )
            {
              if ( dropList->fields._size )
              {
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)v99,
                  dropList,
                  (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v101 = *(System_Collections_Generic_List_Enumerator_T__o *)v99;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v101,
                          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = (EventDropUpValInfo_o *)v101.fields.current;
                  v75 = (EventDropItemUpValInfo_o *)sub_B170CC(EventDropItemUpValInfo_TypeInfo, v70, v71, v72, v73);
                  EventDropItemUpValInfo___ctor(v75, 1, current, 0, 0LL);
                  v80 = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v76, v77, v78, v79);
                  EventMargeItemUpValInfo___ctor(v80, v75, 0LL);
                  if ( !current )
                    sub_B170D4();
                  if ( !v80 )
                    sub_B170D4();
                  v80->fields.addCount = current->fields.addCount;
                  v80->fields.rateCount = current->fields.rateCount;
                  if ( !v47 )
                    sub_B170D4();
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v47,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                }
                *(_DWORD *)&v99[4 * v98 + 24] = 345;
                v81 = ++v100;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v101,
                  (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
                if ( v81 )
                {
                  v98 = v81;
                  if ( *(_DWORD *)&v99[4 * v81 + 20] == 345 )
                  {
                    v100 = v81 - 1;
                    v98 = v81 - 1;
                  }
                }
                else
                {
                  v98 = 0;
                }
              }
              ++v62;
              longName = v40->fields.longName;
              if ( longName )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_50;
  }
  v82 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    v82 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  static_fields = v82->static_fields;
  _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v82);
      static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    }
    v85 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                                                           v57,
                                                                           v58,
                                                                           v59,
                                                                           v60);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v85,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v86 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v86->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__14_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v86->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
  }
  if ( !v47
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v47,
          (System_Comparison_T__o *)_9__14_0,
          (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = v95->fields.eventUpValIcon,
        v94 = (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_50:
    sub_B170D4();
  }
  EventUpValIconComponent__Set(eventUpValIcon, v94, -1, -1, -1, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F760A & 1) == 0 )
  {
    sub_B16FFC(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1);
    byte_40F760A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}