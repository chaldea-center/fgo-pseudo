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

  if ( (byte_42B1037 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1037 = 1;
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
  UnityEngine_Component_o *changeDisplayButton; // x0
  _BOOL4 isButtonOn; // w20
  UILabel_o *v5; // x20
  __int64 *v6; // x8
  UILabel_o *buttonLabel; // x20
  __int64 *v8; // x8
  UILabel_o *v9; // x19
  _DWORD *v10; // x8
  int v11; // s0
  int v12; // s1
  int v13; // s2
  int v14; // s3
  _DWORD *v15; // x8

  if ( (byte_42B1038 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12002/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/);
    sub_B52984(&StringLiteral_3312/*"COMMON_ON"*/);
    sub_B52984(&StringLiteral_3311/*"COMMON_OFF"*/);
    sub_B52984(&StringLiteral_12003/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/);
    sub_B52984(&StringLiteral_17089/*"btn_bg_off"*/);
    sub_B52984(&StringLiteral_17094/*"btn_bg_on"*/);
    byte_42B1038 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_47;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_47;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17094/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    if ( this->fields.isButtonLabelOnOff )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_3312/*"COMMON_ON"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_12002/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    }
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v8, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v9 = this->fields.buttonLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      if ( !byte_42ACC23 )
      {
        sub_B52984(&LocalizationManager_TypeInfo);
        byte_42ACC23 = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v9 )
      {
        v15 = *(_DWORD **)&changeDisplayButton[7].fields.m_CachedPtr;
        v11 = v15[24];
        v12 = v15[25];
        v13 = v15[26];
        v14 = v15[27];
        goto LABEL_46;
      }
    }
LABEL_47:
    sub_B52A5C(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17089/*"btn_bg_off"*/, 0LL);
  v5 = this->fields.buttonLabel;
  if ( this->fields.isButtonLabelOnOff )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_3311/*"COMMON_OFF"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12003/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v6, 0LL);
  if ( !v5 )
    goto LABEL_47;
  UILabel__set_text(v5, (System_String_o *)changeDisplayButton, 0LL);
  v9 = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ACC22 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ACC22 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_47;
  v10 = *(_DWORD **)&changeDisplayButton[7].fields.m_CachedPtr;
  v11 = v10[20];
  v12 = v10[21];
  v13 = v10[22];
  v14 = v10[23];
LABEL_46:
  UILabel__set_effectColor(v9, *(UnityEngine_Color_o *)&v11, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_B52A5C(0LL, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_35644340(this->fields.saveKey, 0LL) == this->fields.saveId )
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
  if ( (byte_42B1033 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2867/*"BonusFilterEquipId"*/);
    byte_42B1033 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_44568316((System_String_o *)StringLiteral_2867/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_26830320(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_26830320(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v8; // x24
  __int64 v9; // x25
  int32_t v10; // w25
  EquipTargetInfo_o *v11; // x24
  UILabel_o *equipNameLabel; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v14; // w0
  ServantBonusFilterEquipListViewItemDraw_o *v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  SkillInfo_array *v23; // x13
  signed int max_length; // w9
  EventUpValInfo_array *v25; // x14
  il2cpp_array_size_t v26; // w26
  int v27; // w21
  char v28; // w8
  Il2CppClass **v29; // x24
  Il2CppClass *v30; // x11
  char *v31; // x24
  Il2CppClass *v32; // t1
  Il2CppClass **v33; // x25
  Il2CppClass *v34; // x8
  char *v35; // x25
  Il2CppClass *v36; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v38; // x0
  SkillInfo_o *v39; // x8
  EventDropUpValInfo_o *current; // x23
  EventDropItemUpValInfo_o *v41; // x24
  EventMargeItemUpValInfo_o *v42; // x25
  __int64 v43; // x0
  __int64 v44; // x1
  int v45; // w9
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x20
  Il2CppObject *v48; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  __int64 v57; // x0
  ServantBonusFilterEquipListViewItemDraw_o *v58; // [xsp+8h] [xbp-A8h]
  _BYTE v61[28]; // [xsp+20h] [xbp-90h] BYREF
  int v62; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v58 = this;
  if ( (byte_42B1034 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    sub_B52984(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_B52984(&EquipTargetInfo_TypeInfo);
    sub_B52984(&EventDropItemUpValInfo_TypeInfo);
    sub_B52984(&EventMargeItemUpValInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__);
    sub_B52984(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_B52984(&StringLiteral_115/*" + "*/);
    byte_42B1034 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
  if ( !equipEntity )
    goto LABEL_62;
  v9 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v9;
  *(_QWORD *)&v64.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v64, 0LL);
  v11 = (EquipTargetInfo_o *)sub_B52A54(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_29473128(v11, v10, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v58->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_62;
  ServantFaceIconComponent__Set_30474972((ServantFaceIconComponent_o *)this, v11, 0LL, 0LL, 0LL);
  equipNameLabel = v58->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_62;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(equipEntity->fields.id, 0LL);
  v15 = v58;
  v58->fields.saveKey = saveKey;
  v58->fields.saveId = v14;
  sub_B52920(
    (BattleServantConfConponent_o *)&v58->fields.saveKey,
    (System_Int32_array **)saveKey,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v23 = skillInfos;
  if ( !skillInfos )
    goto LABEL_62;
  max_length = skillInfos->max_length;
  v25 = eventUpValInfos;
  if ( max_length >= 1 )
  {
    v26 = 0;
    v27 = 0;
    v28 = 1;
    while ( v25 )
    {
      if ( v26 >= v25->max_length )
        goto LABEL_63;
      v29 = &v25->obj.klass + (int)v26;
      v32 = v29[4];
      v31 = (char *)(v29 + 4);
      v30 = v32;
      if ( !v32 )
        break;
      if ( LODWORD(v30->_1.namespaze) == v15->fields.saveId )
      {
        if ( (v28 & 1) != 0 )
        {
          if ( v26 >= max_length )
            goto LABEL_63;
          v33 = &v23->obj.klass + (int)v26;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v15->fields.skillIcon;
          v36 = v33[4];
          v35 = (char *)(v33 + 4);
          v34 = v36;
          if ( !v36 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v34->_1.name, 0LL);
          skillTextLabel = v15->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v26 >= skillInfos->max_length )
            goto LABEL_63;
          if ( !*(_QWORD *)v35 )
            break;
          v38 = System_String__Concat_44568316(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v35 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v15->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v26 >= max_length )
          {
LABEL_63:
            v57 = sub_B52A88(this);
            sub_B52A28(v57, 0LL);
          }
          v39 = v23->m_Items[v26];
          if ( !v39 )
            break;
          v38 = System_String__Concat_44570600(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_115/*" + "*/,
                  v39->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v38, 0LL);
        if ( v26 >= eventUpValInfos->max_length )
          goto LABEL_63;
        if ( !*(_QWORD *)v31 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v31 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v61,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v63 = *(System_Collections_Generic_List_Enumerator_T__o *)v61;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v63,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = (EventDropUpValInfo_o *)v63.fields.current;
          v41 = (EventDropItemUpValInfo_o *)sub_B52A54(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v41, 1, current, 0, 0LL);
          v42 = (EventMargeItemUpValInfo_o *)sub_B52A54(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor(v42, v41, 0LL);
          if ( !current )
            sub_B52A5C(v43, v44);
          if ( !v42 )
            sub_B52A5C(v43, v44);
          v42->fields.addCount = current->fields.addCount;
          v42->fields.rateCount = current->fields.rateCount;
          if ( !v22 )
            sub_B52A5C(v43, v44);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        }
        *(_DWORD *)&v61[4 * v27 + 24] = 312;
        v27 = ++v62;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v63,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v23 = skillInfos;
        v25 = eventUpValInfos;
        if ( v27 )
        {
          v45 = v27--;
          v15 = v58;
          v28 = 0;
          if ( *(_DWORD *)&v61[4 * v27 + 24] == 312 )
            v62 = v27;
          else
            v27 = v45;
        }
        else
        {
          v15 = v58;
          v28 = 0;
        }
      }
      max_length = v23->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_50;
    }
LABEL_62:
    sub_B52A5C(this, equipEntity);
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
    v48 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v48,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v49 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v49->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__12_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v49->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v22 )
    goto LABEL_62;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v15->fields.skillTextLabel;
  if ( !this )
    goto LABEL_62;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    *(System_String_o **)&this[3].fields.isButtonLabelOnOff,
    (int32_t)this[4].klass,
    0,
    0,
    0LL);
  eventUpValIcon = v15->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_62;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_26831992(
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
  if ( (byte_42B1035 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2869/*"BonusFilterGroupId"*/);
    byte_42B1035 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_44568316((System_String_o *)StringLiteral_2869/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_26832140(this, eventIdList, filterGroupId, v9, v10);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_26832140(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  WarEntity_o *Entity; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  WarEntity_o *v18; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  struct System_String_o *longName; // x8
  unsigned __int64 v21; // x27
  EventUpValInfo_o *v22; // x24
  struct System_String_o *v23; // x8
  EventDropUpValInfo_o *current; // x24
  EventDropItemUpValInfo_o *v25; // x25
  EventMargeItemUpValInfo_o *v26; // x26
  __int64 v27; // x0
  __int64 v28; // x1
  int v29; // w19
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__14_0; // x21
  Il2CppObject *v32; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  __int64 v41; // x0
  ServantBonusFilterEquipListViewItemDraw_o *v42; // [xsp+8h] [xbp-B8h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-B0h]
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-A8h]
  int v45; // [xsp+24h] [xbp-9Ch]
  _BYTE v46[28]; // [xsp+30h] [xbp-90h] BYREF
  int v47; // [xsp+4Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+50h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42B1036 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    sub_B52984(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_B52984(&EventDropItemUpValInfo_TypeInfo);
    sub_B52984(&EventMargeItemUpValInfo_TypeInfo);
    sub_B52984(&EventUpValInfo_TypeInfo);
    sub_B52984(&EventUpValSetupInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    sub_B52984(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__);
    sub_B52984(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    byte_42B1036 = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v48, 0, sizeof(v48));
  v47 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             filterGroupId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v18 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.saveKey,
    (System_Int32_array **)saveKey,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_50;
  ServantFaceIconComponent__SetEventBonus(
    (ServantFaceIconComponent_o *)Instance,
    (int32_t)v18->fields.name,
    HIDWORD(v18->fields.name),
    0LL);
  Instance = this->fields.equipNameLabel;
  if ( !Instance )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)Instance, v18->fields.age, 0LL);
  Instance = this->fields.skillIcon;
  if ( !Instance )
    goto LABEL_50;
  SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, v18->fields.parentWarId, 0LL);
  Instance = this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)Instance, *(System_String_o **)&v18->fields.bannerId, 0LL);
  Instance = this->fields.skillTextLabel;
  v42 = this;
  if ( !Instance )
    goto LABEL_50;
  WrapControlText__textAdjust(
    (UILabel_o *)Instance,
    *((System_String_o **)Instance + 51),
    *((_DWORD *)Instance + 104),
    0,
    0,
    0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_B52A54(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24343028(setupInfo, eventIdList, 0, 0, 0, 0LL);
  longName = v18->fields.longName;
  if ( !longName )
    goto LABEL_50;
  v45 = 0;
  v21 = 0LL;
  while ( (__int64)v21 < SLODWORD(longName[1].klass) )
  {
    v22 = (EventUpValInfo_o *)sub_B52A54(EventUpValInfo_TypeInfo);
    EventUpValInfo___ctor(v22, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v22;
    v23 = v18->fields.longName;
    if ( v23 )
    {
      if ( v21 >= LODWORD(v23[1].klass) )
      {
        v41 = sub_B52A88(Instance);
        sub_B52A28(v41, 0LL);
      }
      Instance = MasterData_WarQuestSelectionMaster;
      if ( MasterData_WarQuestSelectionMaster )
      {
        Instance = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     *((_DWORD *)&v23[1].monitor + v21),
                     1,
                     0LL);
        if ( Instance )
        {
          Instance = (void *)SkillLvEntity__getEventUpVal_26552708(
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
                  (System_Collections_Generic_List_Enumerator_T__o *)v46,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
                  (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v48 = *(System_Collections_Generic_List_Enumerator_T__o *)v46;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v48,
                          (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = (EventDropUpValInfo_o *)v48.fields.current;
                  v25 = (EventDropItemUpValInfo_o *)sub_B52A54(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v25, 1, current, 0, 0LL);
                  v26 = (EventMargeItemUpValInfo_o *)sub_B52A54(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor(v26, v25, 0LL);
                  if ( !current )
                    sub_B52A5C(v27, v28);
                  if ( !v26 )
                    sub_B52A5C(v27, v28);
                  v26->fields.addCount = current->fields.addCount;
                  v26->fields.rateCount = current->fields.rateCount;
                  if ( !v19 )
                    sub_B52A5C(v27, v28);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v19,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                }
                *(_DWORD *)&v46[4 * v45 + 24] = 347;
                v29 = ++v47;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v48,
                  (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
                if ( v29 )
                {
                  v45 = v29;
                  if ( *(_DWORD *)&v46[4 * v29 + 20] == 347 )
                  {
                    v47 = v29 - 1;
                    v45 = v29 - 1;
                  }
                }
                else
                {
                  v45 = 0;
                }
              }
              ++v21;
              longName = v18->fields.longName;
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
    v32 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__14_0,
      v32,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v33 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v33->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__14_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v33->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v19
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
          (System_Comparison_T__o *)_9__14_0,
          (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = v42->fields.eventUpValIcon,
        Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_50:
    sub_B52A5C(Instance, v10);
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
  Il2CppObject *v1; // x19
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_42AD31E & 1) == 0 )
  {
    sub_B52984(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    byte_42AD31E = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B52A5C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}