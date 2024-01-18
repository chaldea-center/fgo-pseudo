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

  if ( (byte_4187BFF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187BFF = 1;
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
  UILabel_o *v16; // x19
  _DWORD *v17; // x8
  int v18; // s0
  int v19; // s1
  int v20; // s2
  int v21; // s3
  _DWORD *v22; // x8

  if ( (byte_4187C00 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_11910/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v4);
    sub_B2C35C(&StringLiteral_3279/*"COMMON_ON"*/, v5);
    sub_B2C35C(&StringLiteral_3278/*"COMMON_OFF"*/, v6);
    sub_B2C35C(&StringLiteral_11911/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v7);
    sub_B2C35C(&StringLiteral_16971/*"btn_bg_off"*/, v8);
    sub_B2C35C(&StringLiteral_16976/*"btn_bg_on"*/, v9);
    byte_4187C00 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_47;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_47;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_16976/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( this->fields.isButtonLabelOnOff )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_3279/*"COMMON_ON"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_11910/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    }
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v16 = this->fields.buttonLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_4184964 )
      {
        sub_B2C35C(&LocalizationManager_TypeInfo, method);
        byte_4184964 = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v16 )
      {
        v22 = *(_DWORD **)&changeDisplayButton[7].fields.m_CachedPtr;
        v18 = v22[24];
        v19 = v22[25];
        v20 = v22[26];
        v21 = v22[27];
        goto LABEL_46;
      }
    }
LABEL_47:
    sub_B2C434(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_16971/*"btn_bg_off"*/, 0LL);
  v12 = this->fields.buttonLabel;
  if ( this->fields.isButtonLabelOnOff )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_3278/*"COMMON_OFF"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = &StringLiteral_11911/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v13, 0LL);
  if ( !v12 )
    goto LABEL_47;
  UILabel__set_text(v12, (System_String_o *)changeDisplayButton, 0LL);
  v16 = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4184963 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_4184963 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_47;
  v17 = *(_DWORD **)&changeDisplayButton[7].fields.m_CachedPtr;
  v18 = v17[20];
  v19 = v17[21];
  v20 = v17[22];
  v21 = v17[23];
LABEL_46:
  UILabel__set_effectColor(v16, *(UnityEngine_Color_o *)&v18, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_B2C434(0LL, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_35342280(this->fields.saveKey, 0LL) == this->fields.saveId )
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
  if ( (byte_4187BFB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2837/*"BonusFilterEquipId"*/, *(_QWORD *)&idx);
    byte_4187BFB = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_44305532((System_String_o *)StringLiteral_2837/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_25359972(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_25359972(
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
  EquipTargetInfo_o *v29; // x24
  UILabel_o *equipNameLabel; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v32; // w0
  ServantBonusFilterEquipListViewItemDraw_o *v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x22
  SkillInfo_array *v41; // x13
  signed int max_length; // w9
  EventUpValInfo_array *v43; // x14
  il2cpp_array_size_t v44; // w26
  int v45; // w21
  char v46; // w8
  Il2CppClass **v47; // x24
  Il2CppClass *v48; // x11
  char *v49; // x24
  Il2CppClass *v50; // t1
  Il2CppClass **v51; // x25
  Il2CppClass *v52; // x8
  char *v53; // x25
  Il2CppClass *v54; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v56; // x0
  SkillInfo_o *v57; // x8
  EventDropUpValInfo_o *current; // x23
  EventDropItemUpValInfo_o *v59; // x24
  EventMargeItemUpValInfo_o *v60; // x25
  __int64 v61; // x0
  __int64 v62; // x1
  int v63; // w9
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v66; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  __int64 v75; // x0
  ServantBonusFilterEquipListViewItemDraw_o *v76; // [xsp+8h] [xbp-A8h]
  _BYTE v79[28]; // [xsp+20h] [xbp-90h] BYREF
  int v80; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  v76 = this;
  if ( (byte_4187BFC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, equipEntity);
    sub_B2C35C(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v11);
    sub_B2C35C(&EquipTargetInfo_TypeInfo, v12);
    sub_B2C35C(&EventDropItemUpValInfo_TypeInfo, v13);
    sub_B2C35C(&EventMargeItemUpValInfo_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22);
    sub_B2C35C(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__, v23);
    sub_B2C35C(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v24);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_B2C35C(&StringLiteral_114/*" + "*/, v25);
    byte_4187BFC = 1;
  }
  memset(&v81, 0, sizeof(v81));
  v80 = 0;
  if ( !equipEntity )
    goto LABEL_62;
  v27 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v26 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v82.fields.currentCryptoKey = v27;
  *(_QWORD *)&v82.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v82, 0LL);
  v29 = (EquipTargetInfo_o *)sub_B2C42C(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_29550540(v29, v28, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v76->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_62;
  ServantFaceIconComponent__Set_30798084((ServantFaceIconComponent_o *)this, v29, 0LL, 0LL, 0LL);
  equipNameLabel = v76->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_62;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(equipEntity->fields.id, 0LL);
  v33 = v76;
  v76->fields.saveKey = saveKey;
  v76->fields.saveId = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v76->fields.saveKey,
    (System_Int32_array **)saveKey,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v41 = skillInfos;
  if ( !skillInfos )
    goto LABEL_62;
  max_length = skillInfos->max_length;
  v43 = eventUpValInfos;
  if ( max_length >= 1 )
  {
    v44 = 0;
    v45 = 0;
    v46 = 1;
    while ( v43 )
    {
      if ( v44 >= v43->max_length )
        goto LABEL_63;
      v47 = &v43->obj.klass + (int)v44;
      v50 = v47[4];
      v49 = (char *)(v47 + 4);
      v48 = v50;
      if ( !v50 )
        break;
      if ( LODWORD(v48->_1.namespaze) == v33->fields.saveId )
      {
        if ( (v46 & 1) != 0 )
        {
          if ( v44 >= max_length )
            goto LABEL_63;
          v51 = &v41->obj.klass + (int)v44;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v33->fields.skillIcon;
          v54 = v51[4];
          v53 = (char *)(v51 + 4);
          v52 = v54;
          if ( !v54 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v52->_1.name, 0LL);
          skillTextLabel = v33->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v44 >= skillInfos->max_length )
            goto LABEL_63;
          if ( !*(_QWORD *)v53 )
            break;
          v56 = System_String__Concat_44305532(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v53 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v33->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v44 >= max_length )
          {
LABEL_63:
            v75 = sub_B2C460(this);
            sub_B2C400(v75, 0LL);
          }
          v57 = v41->m_Items[v44];
          if ( !v57 )
            break;
          v56 = System_String__Concat_44307816(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_114/*" + "*/,
                  v57->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v56, 0LL);
        if ( v44 >= eventUpValInfos->max_length )
          goto LABEL_63;
        if ( !*(_QWORD *)v49 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v49 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v79,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v81 = *(System_Collections_Generic_List_Enumerator_T__o *)v79;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v81,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = (EventDropUpValInfo_o *)v81.fields.current;
          v59 = (EventDropItemUpValInfo_o *)sub_B2C42C(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v59, 1, current, 0, 0LL);
          v60 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor(v60, v59, 0LL);
          if ( !current )
            sub_B2C434(v61, v62);
          if ( !v60 )
            sub_B2C434(v61, v62);
          v60->fields.addCount = current->fields.addCount;
          v60->fields.rateCount = current->fields.rateCount;
          if ( !v40 )
            sub_B2C434(v61, v62);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v40,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        *(_DWORD *)&v79[4 * v45 + 24] = 312;
        v45 = ++v80;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v81,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v41 = skillInfos;
        v43 = eventUpValInfos;
        if ( v45 )
        {
          v63 = v45--;
          v33 = v76;
          v46 = 0;
          if ( *(_DWORD *)&v79[4 * v45 + 24] == 312 )
            v80 = v45;
          else
            v45 = v63;
        }
        else
        {
          v33 = v76;
          v46 = 0;
        }
      }
      max_length = v41->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_50;
    }
LABEL_62:
    sub_B2C434(this, equipEntity);
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
    v66 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v66,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v67 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v67->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__12_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v67->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !v40 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v40,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v33->fields.skillTextLabel;
  if ( !this )
    goto LABEL_62;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    *(System_String_o **)&this[3].fields.isButtonLabelOnOff,
    (int32_t)this[4].klass,
    0,
    0,
    0LL);
  eventUpValIcon = v33->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_62;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_25361644(
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
  if ( (byte_4187BFD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2839/*"BonusFilterGroupId"*/, *(_QWORD *)&idx);
    byte_4187BFD = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_44305532((System_String_o *)StringLiteral_2839/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_25361792(this, eventIdList, filterGroupId, v9, v10);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_25361792(
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
  __int64 v32; // x1
  WarEntity_o *Entity; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  WarEntity_o *v40; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x20
  struct System_String_o *longName; // x8
  unsigned __int64 v43; // x27
  EventUpValInfo_o *v44; // x24
  struct System_String_o *v45; // x8
  EventDropUpValInfo_o *current; // x24
  EventDropItemUpValInfo_o *v47; // x25
  EventMargeItemUpValInfo_o *v48; // x26
  __int64 v49; // x0
  __int64 v50; // x1
  int v51; // w19
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x21
  Il2CppObject *v54; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  __int64 v63; // x0
  ServantBonusFilterEquipListViewItemDraw_o *v64; // [xsp+8h] [xbp-B8h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-B0h]
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-A8h]
  int v67; // [xsp+24h] [xbp-9Ch]
  _BYTE v68[28]; // [xsp+30h] [xbp-90h] BYREF
  int v69; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4187BFE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, eventIdList);
    sub_B2C35C(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_B2C35C(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v16);
    sub_B2C35C(&EventDropItemUpValInfo_TypeInfo, v17);
    sub_B2C35C(&EventMargeItemUpValInfo_TypeInfo, v18);
    sub_B2C35C(&EventUpValInfo_TypeInfo, v19);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v26);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__, v29);
    sub_B2C35C(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v30);
    byte_4187BFE = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v70, 0, sizeof(v70));
  v69 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             filterGroupId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v40 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.saveKey,
    (System_Int32_array **)saveKey,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_50;
  ServantFaceIconComponent__SetEventBonus(
    (ServantFaceIconComponent_o *)Instance,
    (int32_t)v40->fields.name,
    HIDWORD(v40->fields.name),
    0LL);
  Instance = this->fields.equipNameLabel;
  if ( !Instance )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)Instance, v40->fields.age, 0LL);
  Instance = this->fields.skillIcon;
  if ( !Instance )
    goto LABEL_50;
  SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, v40->fields.parentWarId, 0LL);
  Instance = this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v40->fields.bannerId, 0LL);
  Instance = this->fields.skillTextLabel;
  v64 = this;
  if ( !Instance )
    goto LABEL_50;
  WrapControlText__textAdjust(
    (UILabel_o *)Instance,
    *((System_String_o **)Instance + 51),
    *((_DWORD *)Instance + 104),
    0,
    0,
    0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_26087716(setupInfo, eventIdList, 0, 0LL);
  longName = v40->fields.longName;
  if ( !longName )
    goto LABEL_50;
  v67 = 0;
  v43 = 0LL;
  while ( (__int64)v43 < SLODWORD(longName[1].klass) )
  {
    v44 = (EventUpValInfo_o *)sub_B2C42C(EventUpValInfo_TypeInfo);
    EventUpValInfo___ctor(v44, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v44;
    v45 = v40->fields.longName;
    if ( v45 )
    {
      if ( v43 >= LODWORD(v45[1].klass) )
      {
        v63 = sub_B2C460(Instance);
        sub_B2C400(v63, 0LL);
      }
      Instance = MasterData_WarQuestSelectionMaster;
      if ( MasterData_WarQuestSelectionMaster )
      {
        Instance = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     *((_DWORD *)&v45[1].monitor + v43),
                     1,
                     0LL);
        if ( Instance )
        {
          Instance = (void *)SkillLvEntity__getEventUpVal_23801352(
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
                  (System_Collections_Generic_List_Enumerator_T__o *)v68,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
                  (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v70 = *(System_Collections_Generic_List_Enumerator_T__o *)v68;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v70,
                          (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = (EventDropUpValInfo_o *)v70.fields.current;
                  v47 = (EventDropItemUpValInfo_o *)sub_B2C42C(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v47, 1, current, 0, 0LL);
                  v48 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor(v48, v47, 0LL);
                  if ( !current )
                    sub_B2C434(v49, v50);
                  if ( !v48 )
                    sub_B2C434(v49, v50);
                  v48->fields.addCount = current->fields.addCount;
                  v48->fields.rateCount = current->fields.rateCount;
                  if ( !v41 )
                    sub_B2C434(v49, v50);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v41,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                }
                *(_DWORD *)&v68[4 * v67 + 24] = 345;
                v51 = ++v69;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v70,
                  (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
                if ( v51 )
                {
                  v67 = v51;
                  if ( *(_DWORD *)&v68[4 * v51 + 20] == 345 )
                  {
                    v69 = v51 - 1;
                    v67 = v51 - 1;
                  }
                }
                else
                {
                  v67 = 0;
                }
              }
              ++v43;
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
    v54 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v54,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v55 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v55->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__14_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v55->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !v41
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v41,
          (System_Comparison_T__o *)_9__14_0,
          (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = v64->fields.eventUpValIcon,
        Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v41,
                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_50:
    sub_B2C434(Instance, v32);
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
  Il2CppObject *v2; // x19
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_41853C6 & 1) == 0 )
  {
    sub_B2C35C(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1);
    byte_41853C6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B2C434(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}