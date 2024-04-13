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
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42E991D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E991D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.isButtonOn ^= 1u;
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, v5);
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
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UnityEngine_Component_o *changeDisplayButton; // x0
  _BOOL4 isButtonOn; // w20
  UILabel_o *v28; // x20
  __int64 *v29; // x8
  UILabel_o *buttonLabel; // x20
  __int64 *v31; // x8
  int v32; // w2
  __int64 v33; // x3
  UILabel_o *v34; // x19
  _DWORD *v35; // x8
  int v36; // s0
  int v37; // s1
  int v38; // s2
  int v39; // s3
  int v40; // w2
  __int64 v41; // x3
  _DWORD *v42; // x8

  if ( (byte_42E991E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12059/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3345/*"COMMON_ON"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_3344/*"COMMON_OFF"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12060/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17180/*"btn_bg_off"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17185/*"btn_bg_on"*/, v23, v24, v25);
    byte_42E991E = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_47;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_47;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17185/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( this->fields.isButtonLabelOnOff )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_3345/*"COMMON_ON"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_12059/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    }
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v34 = this->fields.buttonLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_42E563D )
      {
        sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v40, v41);
        byte_42E563D = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v34 )
      {
        v42 = *(_DWORD **)&changeDisplayButton[7].fields.m_CachedPtr;
        v36 = v42[24];
        v37 = v42[25];
        v38 = v42[26];
        v39 = v42[27];
        goto LABEL_46;
      }
    }
LABEL_47:
    sub_B5D69C(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17180/*"btn_bg_off"*/, 0LL);
  v28 = this->fields.buttonLabel;
  if ( this->fields.isButtonLabelOnOff )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = &StringLiteral_3344/*"COMMON_OFF"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = &StringLiteral_12060/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v29, 0LL);
  if ( !v28 )
    goto LABEL_47;
  UILabel__set_text(v28, (System_String_o *)changeDisplayButton, 0LL);
  v34 = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v32, v33);
    byte_42E563C = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v34 )
    goto LABEL_47;
  v35 = *(_DWORD **)&changeDisplayButton[7].fields.m_CachedPtr;
  v36 = v35[20];
  v37 = v35[21];
  v38 = v35[22];
  v39 = v35[23];
LABEL_46:
  UILabel__set_effectColor(v34, *(UnityEngine_Color_o *)&v36, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_B5D69C(0LL, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_35647620(this->fields.saveKey, 0LL) == this->fields.saveId )
      this->fields.isButtonOn = 1;
    else
      UnityEngine_PlayerPrefs__DeleteKey(this->fields.saveKey, 0LL);
  }
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, v4);
}


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
  if ( (byte_42E9919 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2892/*"BonusFilterEquipId"*/, idx, (_DWORD)equipEntity, eventUpValInfos);
    byte_42E9919 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_44577788((System_String_o *)StringLiteral_2892/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_26927704(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_26927704(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  __int64 v62; // x24
  __int64 v63; // x25
  int32_t v64; // w25
  EquipTargetInfo_o *v65; // x24
  UILabel_o *equipNameLabel; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v68; // w0
  ServantBonusFilterEquipListViewItemDraw_o *v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x22
  SkillInfo_array *v77; // x13
  signed int max_length; // w9
  EventUpValInfo_array *v79; // x14
  il2cpp_array_size_t v80; // w26
  int v81; // w21
  char v82; // w8
  Il2CppClass **v83; // x24
  Il2CppClass *v84; // x11
  char *v85; // x24
  Il2CppClass *v86; // t1
  Il2CppClass **v87; // x25
  Il2CppClass *v88; // x8
  char *v89; // x25
  Il2CppClass *v90; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v92; // x0
  SkillInfo_o *v93; // x8
  EventDropUpValInfo_o *current; // x23
  EventDropItemUpValInfo_o *v95; // x24
  EventMargeItemUpValInfo_o *v96; // x25
  __int64 v97; // x0
  __int64 v98; // x1
  int v99; // w9
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v102; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  __int64 v111; // x0
  ServantBonusFilterEquipListViewItemDraw_o *v112; // [xsp+8h] [xbp-A8h]
  _BYTE v115[28]; // [xsp+20h] [xbp-90h] BYREF
  int v116; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v117; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  v112 = this;
  if ( (byte_42E991A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Comparison_EventMargeItemUpValInfo___ctor__,
      (_DWORD)equipEntity,
      (_DWORD)eventUpValInfos,
      skillInfos);
    sub_B5D5C4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v17, v18, v19);
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&EventDropItemUpValInfo_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&EventMargeItemUpValInfo_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__, v53, v54, v55);
    sub_B5D5C4(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v56, v57, v58);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_115/*" + "*/, v59, v60, v61);
    byte_42E991A = 1;
  }
  memset(&v117, 0, sizeof(v117));
  v116 = 0;
  if ( !equipEntity )
    goto LABEL_62;
  v63 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v62 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v118.fields.currentCryptoKey = v63;
  *(_QWORD *)&v118.fields.fakeValue = v62;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v118, 0LL);
  v65 = (EquipTargetInfo_o *)sub_B5D694(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_30730304(v65, v64, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v112->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_62;
  ServantFaceIconComponent__Set_30854332((ServantFaceIconComponent_o *)this, v65, 0LL, 0LL, 0LL);
  equipNameLabel = v112->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_62;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(equipEntity->fields.id, 0LL);
  v69 = v112;
  v112->fields.saveKey = saveKey;
  v112->fields.saveId = v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v112->fields.saveKey,
    (System_Int32_array **)saveKey,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v76,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v77 = skillInfos;
  if ( !skillInfos )
    goto LABEL_62;
  max_length = skillInfos->max_length;
  v79 = eventUpValInfos;
  if ( max_length >= 1 )
  {
    v80 = 0;
    v81 = 0;
    v82 = 1;
    while ( v79 )
    {
      if ( v80 >= v79->max_length )
        goto LABEL_63;
      v83 = &v79->obj.klass + (int)v80;
      v86 = v83[4];
      v85 = (char *)(v83 + 4);
      v84 = v86;
      if ( !v86 )
        break;
      if ( LODWORD(v84->_1.namespaze) == v69->fields.saveId )
      {
        if ( (v82 & 1) != 0 )
        {
          if ( v80 >= max_length )
            goto LABEL_63;
          v87 = &v77->obj.klass + (int)v80;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v69->fields.skillIcon;
          v90 = v87[4];
          v89 = (char *)(v87 + 4);
          v88 = v90;
          if ( !v90 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v88->_1.name, 0LL);
          skillTextLabel = v69->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v80 >= skillInfos->max_length )
            goto LABEL_63;
          if ( !*(_QWORD *)v89 )
            break;
          v92 = System_String__Concat_44577788(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v89 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v69->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v80 >= max_length )
          {
LABEL_63:
            v111 = sub_B5D6C8(this);
            sub_B5D668(v111, 0LL);
          }
          v93 = v77->m_Items[v80];
          if ( !v93 )
            break;
          v92 = System_String__Concat_44580072(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_115/*" + "*/,
                  v93->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v92, 0LL);
        if ( v80 >= eventUpValInfos->max_length )
          goto LABEL_63;
        if ( !*(_QWORD *)v85 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v85 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v115,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v117 = *(System_Collections_Generic_List_Enumerator_T__o *)v115;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v117,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = (EventDropUpValInfo_o *)v117.fields.current;
          v95 = (EventDropItemUpValInfo_o *)sub_B5D694(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v95, 1, current, 0, 0LL);
          v96 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor(v96, v95, 0LL);
          if ( !current )
            sub_B5D69C(v97, v98);
          if ( !v96 )
            sub_B5D69C(v97, v98);
          v96->fields.addCount = current->fields.addCount;
          v96->fields.rateCount = current->fields.rateCount;
          if ( !v76 )
            sub_B5D69C(v97, v98);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v76,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v96,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        *(_DWORD *)&v115[4 * v81 + 24] = 312;
        v81 = ++v116;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v117,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v77 = skillInfos;
        v79 = eventUpValInfos;
        if ( v81 )
        {
          v99 = v81--;
          v69 = v112;
          v82 = 0;
          if ( *(_DWORD *)&v115[4 * v81 + 24] == 312 )
            v116 = v81;
          else
            v81 = v99;
        }
        else
        {
          v69 = v112;
          v82 = 0;
        }
      }
      max_length = v77->max_length;
      if ( (int)++v80 >= max_length )
        goto LABEL_50;
    }
LABEL_62:
    sub_B5D69C(this, equipEntity);
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
    v102 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v102,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v103 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v103->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__12_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v103->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
  }
  if ( !v76 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v76,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v69->fields.skillTextLabel;
  if ( !this )
    goto LABEL_62;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    *(System_String_o **)&this[3].fields.isButtonLabelOnOff,
    (int32_t)this[4].klass,
    0,
    0,
    0LL);
  eventUpValIcon = v69->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v76,
                                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_62;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_26929376(
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
  if ( (byte_42E991B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2894/*"BonusFilterGroupId"*/, idx, (_DWORD)eventIdList, *(_QWORD *)&filterGroupId);
    byte_42E991B = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_44577788((System_String_o *)StringLiteral_2894/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_26929524(this, eventIdList, filterGroupId, v9, v10);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_26929524(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  void *Instance; // x0
  __int64 v76; // x1
  WarEntity_o *Entity; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  WarEntity_o *v84; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // x20
  struct System_String_o *longName; // x8
  unsigned __int64 v87; // x27
  EventUpValInfo_o *v88; // x24
  struct System_String_o *v89; // x8
  EventDropUpValInfo_o *current; // x24
  EventDropItemUpValInfo_o *v91; // x25
  EventMargeItemUpValInfo_o *v92; // x26
  __int64 v93; // x0
  __int64 v94; // x1
  int v95; // w19
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x21
  Il2CppObject *v98; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  __int64 v107; // x0
  ServantBonusFilterEquipListViewItemDraw_o *v108; // [xsp+8h] [xbp-B8h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-B0h]
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-A8h]
  int v111; // [xsp+24h] [xbp-9Ch]
  _BYTE v112[28]; // [xsp+30h] [xbp-90h] BYREF
  int v113; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v114; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42E991C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, (_DWORD)eventIdList, filterGroupId, saveKey);
    sub_B5D5C4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v18, v19, v20);
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v30, v31, v32);
    sub_B5D5C4(&EventDropItemUpValInfo_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&EventMargeItemUpValInfo_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&EventUpValInfo_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v60, v61, v62);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v63, v64, v65);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v66, v67, v68);
    sub_B5D5C4(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__, v69, v70, v71);
    sub_B5D5C4(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v72, v73, v74);
    byte_42E991C = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v114, 0, sizeof(v114));
  v113 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             filterGroupId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v84 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.saveKey,
    (System_Int32_array **)saveKey,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v85,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_50;
  ServantFaceIconComponent__SetEventBonus(
    (ServantFaceIconComponent_o *)Instance,
    (int32_t)v84->fields.name,
    HIDWORD(v84->fields.name),
    0LL);
  Instance = this->fields.equipNameLabel;
  if ( !Instance )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)Instance, v84->fields.age, 0LL);
  Instance = this->fields.skillIcon;
  if ( !Instance )
    goto LABEL_50;
  SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, v84->fields.parentWarId, 0LL);
  Instance = this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v84->fields.bannerId, 0LL);
  Instance = this->fields.skillTextLabel;
  v108 = this;
  if ( !Instance )
    goto LABEL_50;
  WrapControlText__textAdjust(
    (UILabel_o *)Instance,
    *((System_String_o **)Instance + 51),
    *((_DWORD *)Instance + 104),
    0,
    0,
    0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(setupInfo, eventIdList, 0, 0, 0, 0LL);
  longName = v84->fields.longName;
  if ( !longName )
    goto LABEL_50;
  v111 = 0;
  v87 = 0LL;
  while ( (__int64)v87 < SLODWORD(longName[1].klass) )
  {
    v88 = (EventUpValInfo_o *)sub_B5D694(EventUpValInfo_TypeInfo);
    EventUpValInfo___ctor(v88, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v88;
    v89 = v84->fields.longName;
    if ( v89 )
    {
      if ( v87 >= LODWORD(v89[1].klass) )
      {
        v107 = sub_B5D6C8(Instance);
        sub_B5D668(v107, 0LL);
      }
      Instance = MasterData_WarQuestSelectionMaster;
      if ( MasterData_WarQuestSelectionMaster )
      {
        Instance = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     *((_DWORD *)&v89[1].monitor + v87),
                     1,
                     0LL);
        if ( Instance )
        {
          Instance = (void *)SkillLvEntity__getEventUpVal_26836992(
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
                  (System_Collections_Generic_List_Enumerator_T__o *)v112,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
                  (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v114 = *(System_Collections_Generic_List_Enumerator_T__o *)v112;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v114,
                          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = (EventDropUpValInfo_o *)v114.fields.current;
                  v91 = (EventDropItemUpValInfo_o *)sub_B5D694(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v91, 1, current, 0, 0LL);
                  v92 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor(v92, v91, 0LL);
                  if ( !current )
                    sub_B5D69C(v93, v94);
                  if ( !v92 )
                    sub_B5D69C(v93, v94);
                  v92->fields.addCount = current->fields.addCount;
                  v92->fields.rateCount = current->fields.rateCount;
                  if ( !v85 )
                    sub_B5D69C(v93, v94);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v85,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                }
                *(_DWORD *)&v112[4 * v111 + 24] = 347;
                v95 = ++v113;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v114,
                  (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
                if ( v95 )
                {
                  v111 = v95;
                  if ( *(_DWORD *)&v112[4 * v95 + 20] == 347 )
                  {
                    v113 = v95 - 1;
                    v111 = v95 - 1;
                  }
                }
                else
                {
                  v111 = 0;
                }
              }
              ++v87;
              longName = v84->fields.longName;
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
    v98 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v98,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v99 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v99->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__14_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v99->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
  }
  if ( !v85
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v85,
          (System_Comparison_T__o *)_9__14_0,
          (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = v108->fields.eventUpValIcon,
        Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v85,
                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_50:
    sub_B5D69C(Instance, v76);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D36 & 1) == 0 )
  {
    sub_B5D5C4(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1, v2, v3);
    byte_42E5D36 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B5D69C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}