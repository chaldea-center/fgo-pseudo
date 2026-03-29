void ServantBonusFilterEquipListViewItemDraw___ctor(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool ServantBonusFilterEquipListViewItemDraw__IsSetFilter(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.isButtonOn;
}


void ServantBonusFilterEquipListViewItemDraw__OnClickChangeDisplay(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D2B8B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
    byte_4D2B8B6 = 1;
  }
  v3 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.isButtonOn ^= 1u;
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, v5);
}


void ServantBonusFilterEquipListViewItemDraw__ResetDisplayButton(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonOn = 0;
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, method);
}


void ServantBonusFilterEquipListViewItemDraw__SetButton(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *changeDisplayButton; // x0
  _BOOL4 isButtonOn; // w20
  UILabel_o *v5; // x20
  _BOOL4 v6; // w24
  System_String_o **v7; // x8
  UILabel_o *v8; // x19
  float *v9; // x11
  float *v10; // x8
  float *v11; // x9
  float *v12; // x10
  float *v13; // x11
  UILabel_o *buttonLabel; // x20
  _BOOL4 isButtonLabelOnOff; // w22
  System_String_o **v16; // x8
  float *m_CachedPtr; // x11
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2B8B8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_11941/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/);
    sub_1C93AD4(&StringLiteral_3728/*"COMMON_ON"*/);
    sub_1C93AD4(&StringLiteral_3727/*"COMMON_OFF"*/);
    sub_1C93AD4(&StringLiteral_11942/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/);
    sub_1C93AD4(&StringLiteral_17589/*"btn_bg_off"*/);
    sub_1C93AD4(&StringLiteral_17594/*"btn_bg_on"*/);
    byte_4D2B8B8 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_34;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_34;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17594/*"btn_bg_on"*/, 0);
    buttonLabel = this->fields.buttonLabel;
    isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = (System_String_o **)&StringLiteral_11941/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    if ( isButtonLabelOnOff )
      v16 = (System_String_o **)&StringLiteral_3728/*"COMMON_ON"*/;
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v16, 0);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0);
      v8 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4D2AFE0 )
      {
        sub_1C93AD4(&LocalizationManager_TypeInfo);
        byte_4D2AFE0 = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v8 )
      {
        m_CachedPtr = (float *)changeDisplayButton[7].fields.m_CachedPtr;
        v10 = m_CachedPtr + 27;
        v11 = m_CachedPtr + 26;
        v12 = m_CachedPtr + 25;
        v13 = m_CachedPtr + 24;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1C93D2C(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17589/*"btn_bg_off"*/, 0);
  v5 = this->fields.buttonLabel;
  v6 = this->fields.isButtonLabelOnOff;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v6 )
    v7 = (System_String_o **)&StringLiteral_3727/*"COMMON_OFF"*/;
  else
    v7 = (System_String_o **)&StringLiteral_11942/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v7, 0);
  if ( !v5 )
    goto LABEL_34;
  UILabel__set_text(v5, (System_String_o *)changeDisplayButton, 0);
  v8 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D2AFDF )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2AFDF = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_34;
  v9 = (float *)changeDisplayButton[7].fields.m_CachedPtr;
  v10 = v9 + 23;
  v11 = v9 + 22;
  v12 = v9 + 21;
  v13 = v9 + 20;
LABEL_33:
  v18.fields.a = *v10;
  v18.fields.b = *v11;
  v18.fields.g = *v12;
  v18.fields.r = *v13;
  UILabel__set_effectColor(v8, v18, 0);
}


void ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_1C93D2C(0, isEnable);
  UnityEngine_Behaviour__set_enabled(changeDisplayButton, isEnable, 0);
}


void ServantBonusFilterEquipListViewItemDraw__SetButtonOnOffLabel(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isButtonLabelOnOff = flag;
}


void ServantBonusFilterEquipListViewItemDraw__SetInitButtonSelect(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_o *saveKey; // x0
  const MethodInfo *v4; // x1

  saveKey = this->fields.saveKey;
  this->fields.isButtonOn = 0;
  if ( UnityEngine_PlayerPrefs__HasKey(saveKey, 0) )
  {
    if ( UnityEngine_PlayerPrefs__GetInt_72077644(this->fields.saveKey, 0) == this->fields.saveId )
      this->fields.isButtonOn = 1;
    else
      UnityEngine_PlayerPrefs__DeleteKey(this->fields.saveKey, 0);
  }
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, v4);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem(
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
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = idx;
  if ( (byte_4D2B8B2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3209/*"BonusFilterEquipId"*/);
    byte_4D2B8B2 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0);
  v11 = System_String__Concat_64425724((System_String_o *)StringLiteral_3209/*"BonusFilterEquipId"*/, v10, 0);
  ServantBonusFilterEquipListViewItemDraw__SetItem_33710184(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem_33710184(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v10; // x24
  __int64 v11; // x25
  int32_t v12; // w25
  EquipTargetInfo_o *v13; // x24
  UILabel_o *equipNameLabel; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v16; // w0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x22
  int max_length; // w8
  ServantBonusFilterEquipListViewItemDraw_o *v25; // x13
  unsigned int v26; // w27
  char v27; // w9
  Il2CppClass **v28; // x24
  Il2CppClass *v29; // x11
  char *v30; // x24
  Il2CppClass *v31; // t1
  Il2CppClass **v32; // x25
  Il2CppClass *v33; // x8
  char *v34; // x25
  Il2CppClass *v35; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v37; // x0
  SkillInfo_o *v38; // x8
  Il2CppObject *current; // x24
  EventDropItemUpValInfo_o *v40; // x25
  __int64 v41; // x23
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Comparison_T__o *v54; // x20
  Il2CppObject *v55; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v64; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v64 = this;
  if ( (byte_4D2B8B3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C93AD4(&EquipTargetInfo_TypeInfo);
    sub_1C93AD4(&EventDropItemUpValInfo_TypeInfo);
    sub_1C93AD4(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__);
    sub_1C93AD4(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_147/*" + "*/);
    byte_4D2B8B3 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  if ( !equipEntity )
    goto LABEL_58;
  v11 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v11;
  *(_QWORD *)&v67.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v67, 0);
  v13 = (EquipTargetInfo_o *)sub_1C93D20(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_42440412(v13, v12, 0, 1, 0, 0);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v64->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_58;
  ServantFaceIconComponent__Set_41818028((ServantFaceIconComponent_o *)this, v13, 0, 0, 0);
  equipNameLabel = v64->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(
                                                        Name,
                                                        0);
  if ( !equipNameLabel )
    goto LABEL_58;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(equipEntity->fields.id, 0);
  v64->fields.saveKey = saveKey;
  v64->fields.saveId = v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->fields.saveKey, (int32_t)saveKey, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !skillInfos )
    goto LABEL_58;
  max_length = skillInfos->max_length;
  v25 = v64;
  if ( max_length >= 1 )
  {
    v26 = 0;
    v27 = 1;
    while ( eventUpValInfos )
    {
      if ( v26 >= LODWORD(eventUpValInfos->max_length) )
        goto LABEL_59;
      v28 = &eventUpValInfos->obj.klass + (int)v26;
      v31 = v28[4];
      v30 = (char *)(v28 + 4);
      v29 = v31;
      if ( !v31 )
        break;
      if ( LODWORD(v29->_1.namespaze) == v25->fields.saveId )
      {
        if ( (v27 & 1) != 0 )
        {
          if ( v26 >= max_length )
            goto LABEL_59;
          v32 = &skillInfos->obj.klass + (int)v26;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v25->fields.skillIcon;
          v35 = v32[4];
          v34 = (char *)(v32 + 4);
          v33 = v35;
          if ( !v35 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v33->_1.name, 0);
          skillTextLabel = v64->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v26 >= LODWORD(skillInfos->max_length) )
            goto LABEL_59;
          if ( !*(_QWORD *)v34 )
            break;
          v37 = System_String__Concat_64425724(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v34 + 32LL),
                  0);
        }
        else
        {
          skillTextLabel = v25->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v26 >= max_length )
LABEL_59:
            sub_1C93D34(this);
          v38 = skillInfos->m_Items[v26];
          if ( !v38 )
            break;
          v37 = System_String__Concat_64463988(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_147/*" + "*/,
                  v38->fields.title,
                  0);
        }
        UILabel__set_text(skillTextLabel, v37, 0);
        if ( v26 >= LODWORD(eventUpValInfos->max_length) )
          goto LABEL_59;
        if ( !*(_QWORD *)v30 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v30 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v65,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v66 = v65;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v66,
                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v66.fields._current;
          v40 = (EventDropItemUpValInfo_o *)sub_1C93D20(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v40, 1, (EventDropUpValInfo_o *)current, 0, 0);
          v41 = sub_1C93D20(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v41, v40, 0);
          if ( !current )
            sub_1C93D2C(v42, v43);
          if ( !v41 )
            sub_1C93D2C(v42, v43);
          *(_QWORD *)(v41 + 92) = current[2].monitor;
          if ( !v23 )
            sub_1C93D2C(v42, v43);
          items = v23->fields._items;
          v51 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v23->fields._version;
          if ( !items )
            sub_1C93D2C(v42, v43);
          size = v23->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)v41,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v53[4] = (Il2CppClass *)v41;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v53 + 4), v41, v44, v45, v46, v47, v48, v49);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v66,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v25 = v64;
        v27 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_48;
    }
LABEL_58:
    sub_1C93D2C(this, equipEntity);
  }
LABEL_48:
  this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  v54 = *(System_Comparison_T__o **)(*((_QWORD *)this + 23) + 8LL);
  if ( !v54 )
  {
    if ( !*((_DWORD *)this + 56) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v55 = (Il2CppObject *)**((_QWORD **)this + 23);
    v54 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v54, v55, Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__, 0);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v54;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0, (int32_t)v54, v57, v58, v59, v60, v61, v62);
  }
  if ( !v23 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_59225184(
    v23,
    v54,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v64->fields.skillTextLabel;
  if ( !this )
    goto LABEL_58;
  WrapControlText__textAdjust((UILabel_o *)this, *((System_String_o **)this + 52), *((_DWORD *)this + 106), 0, 0);
  eventUpValIcon = v64->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v23,
                                                        (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_58;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem_33711812(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        int32_t equipIdx,
        const MethodInfo *method)
{
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x5
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = idx;
  if ( (byte_4D2B8B4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3211/*"BonusFilterGroupId"*/);
    byte_4D2B8B4 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0);
  v11 = System_String__Concat_64425724((System_String_o *)StringLiteral_3211/*"BonusFilterGroupId"*/, v10, 0);
  ServantBonusFilterEquipListViewItemDraw__SetItem_33711964(this, eventIdList, filterGroupId, v11, equipIdx, v12);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem_33711964(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        int32_t equipIdx,
        const MethodInfo *method)
{
  void *Instance; // x0
  System_Int32_array *v11; // x1
  Il2CppObject *Entity; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x21
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v21; // x20
  System_Collections_Generic_Dictionary_object__int__o *v22; // x28
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  EventBonusFilterGroupMemberEntity_array *EntitiesByGroupId; // x26
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  ServantBonusFilterEquipListViewItemDraw___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x27
  System_Func_object__bool__o *_9__15_1; // x28
  Il2CppObject *v34; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Collections_Generic_List_object__o *v43; // x27
  System_Comparison_T__o *v44; // x28
  Il2CppObject *v45; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  unsigned __int64 v53; // x19
  __int64 v54; // x29
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  EventBonusFilterGroupMemberEntity_o *v61; // x1
  __int64 v62; // x24
  System_Func_object__bool__o *v63; // x23
  struct System_Collections_Generic_Dictionary_string__int__o *saveGroupEquipKeys; // x29
  System_String_o *v65; // x0
  EventUpValSetupInfo_o *v66; // x24
  int *monitor; // x8
  unsigned __int64 v68; // x27
  EventUpValInfo_o *v69; // x23
  _DWORD *v70; // x8
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v72; // x26
  __int64 v73; // x23
  __int64 v74; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  System_Comparison_T__o *v86; // x21
  Il2CppObject *v87; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  System_String_o *str0; // [xsp+18h] [xbp-C8h]
  ServantBonusFilterEquipListViewItemDraw_o *v97; // [xsp+20h] [xbp-C0h]
  SkillLvMaster_o *v98; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+50h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+70h] [xbp-70h] BYREF
  int32_t v102; // [xsp+7Ch] [xbp-64h] BYREF

  v102 = equipIdx;
  if ( (byte_4D2B8B5 & 1) == 0 )
  {
    sub_1C93AD4(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_Any_EventBonusFilterEntity___);
    sub_1C93AD4(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C93AD4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C93AD4(&EventDropItemUpValInfo_TypeInfo);
    sub_1C93AD4(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C93AD4(&EventUpValInfo_TypeInfo);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&System_Func_EventBonusFilterEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__);
    sub_1C93AD4(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__);
    sub_1C93AD4(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__);
    sub_1C93AD4(&Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__);
    sub_1C93AD4(&ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo);
    sub_1C93AD4(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_3209/*"BonusFilterEquipId"*/);
    byte_4D2B8B5 = 1;
  }
  eventUpVallInfo = 0;
  memset(&v100, 0, sizeof(v100));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_85;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( Entity )
  {
    v19 = Entity;
    this->fields.saveKey = saveKey;
    this->fields.saveId = filterGroupId;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.saveKey, (int32_t)saveKey, v13, v14, v15, v16, v17, v18);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_85;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_85;
    v98 = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v21 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v22 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__int__TypeInfo);
    System_Collections_Generic_Dictionary_object__int____ctor(
      v22,
      (const MethodInfo_3525324 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    v97 = this;
    this->fields.saveGroupEquipKeys = (struct System_Collections_Generic_Dictionary_string__int__o *)v22;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.saveGroupEquipKeys,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    if ( !MasterData_object )
      goto LABEL_85;
    EntitiesByGroupId = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                          (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                          filterGroupId,
                          0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
      v11 = eventIdList;
      if ( !Instance )
        goto LABEL_85;
      FilterList = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 0, 0);
      v31 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)FilterList;
      if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
        v31 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      }
      _9__15_1 = (System_Func_object__bool__o *)v31->static_fields->__9__15_1;
      if ( !_9__15_1 )
      {
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        }
        v34 = (Il2CppObject *)v31->static_fields->__9;
        _9__15_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventBonusFilterEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__15_1,
          v34,
          Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__,
          0);
        static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__15_1 = (struct System_Func_EventBonusFilterEntity__bool__o *)_9__15_1;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__15_1,
          (int32_t)_9__15_1,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      v42 = System_Linq_Enumerable__Where_object_(
              v32,
              (System_Func_TSource__bool__o *)_9__15_1,
              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___);
      v43 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v42,
                                                           (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v43, 0) )
      {
        Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
          Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        }
        v44 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 24LL);
        if ( !v44 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
          }
          v45 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v44 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventBonusFilterEntity__TypeInfo);
          System_Comparison_object____ctor(
            v44,
            v45,
            Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__,
            0);
          v46 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
          v46->__9__15_2 = (struct System_Comparison_EventBonusFilterEntity__o *)v44;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->__9__15_2, (int32_t)v44, v47, v48, v49, v50, v51, v52);
        }
        if ( !v43 )
          goto LABEL_85;
        System_Collections_Generic_List_object___Sort_59225184(
          v43,
          v44,
          (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
        Instance = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        str0 = (System_String_o *)StringLiteral_3209/*"BonusFilterEquipId"*/;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        if ( !saveKey )
          goto LABEL_85;
        Instance = (void *)System_String__Contains(
                             saveKey,
                             AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
                             0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
            Instance = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          }
          str0 = (System_String_o *)**((_QWORD **)Instance + 23);
        }
        if ( !EntitiesByGroupId )
          goto LABEL_85;
        if ( SLODWORD(EntitiesByGroupId->max_length) >= 1 )
        {
          v53 = 0;
          while ( 1 )
          {
            v54 = sub_1C93D20(ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v54, 0);
            if ( v53 >= LODWORD(EntitiesByGroupId->max_length) )
LABEL_86:
              sub_1C93D34(Instance);
            if ( !v54 )
              break;
            v61 = EntitiesByGroupId->m_Items[v53];
            *(_QWORD *)(v54 + 16) = v61;
            v62 = v54 + 16;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v54 + 16), (int32_t)v61, v55, v56, v57, v58, v59, v60);
            v63 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventBonusFilterEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v63,
              (Il2CppObject *)v54,
              Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__,
              0);
            if ( BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)v43,
                   (System_Func_T__bool__o *)v63,
                   (const MethodInfo_318DB78 *)Method_BasicHelper_Any_EventBonusFilterEntity___) )
            {
              saveGroupEquipKeys = this->fields.saveGroupEquipKeys;
              v65 = System_Int32__ToString((int32_t)&v102, 0);
              Instance = System_String__Concat_64425724(str0, v65, 0);
              if ( !*(_QWORD *)v62 || !saveGroupEquipKeys )
                break;
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
                (Il2CppObject *)Instance,
                *(_DWORD *)(*(_QWORD *)v62 + 20LL),
                (const MethodInfo_3525CD8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              ++v102;
            }
            if ( (__int64)++v53 >= SLODWORD(EntitiesByGroupId->max_length) )
              goto LABEL_44;
          }
LABEL_85:
          sub_1C93D2C(Instance, v11);
        }
      }
    }
LABEL_44:
    Instance = this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_85;
    ServantFaceIconComponent__SetEventBonus(
      (ServantFaceIconComponent_o *)Instance,
      (int32_t)v19[2].klass,
      HIDWORD(v19[2].klass),
      0);
    Instance = this->fields.equipNameLabel;
    if ( !Instance )
      goto LABEL_85;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v19[1].monitor, 0);
    Instance = this->fields.skillIcon;
    if ( !Instance )
      goto LABEL_85;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v19[3].monitor, 0);
    Instance = this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_85;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v19[3].klass, 0);
    Instance = this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_85;
    WrapControlText__textAdjust(
      (UILabel_o *)Instance,
      *((System_String_o **)Instance + 52),
      *((_DWORD *)Instance + 106),
      0,
      0);
    v66 = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_42466312(v66, eventIdList, 0, 0, 0, 0);
    monitor = (int *)v19[2].monitor;
    if ( !monitor )
      goto LABEL_85;
    v68 = 0;
    while ( (__int64)v68 < monitor[6] )
    {
      v69 = (EventUpValInfo_o *)sub_1C93D20(EventUpValInfo_TypeInfo);
      EventUpValInfo___ctor(v69, v66, 0, 1, 1, 0, 0);
      eventUpVallInfo = v69;
      v70 = v19[2].monitor;
      if ( !v70 )
        goto LABEL_85;
      if ( v68 >= (unsigned int)v70[6] )
        goto LABEL_86;
      Instance = v98;
      if ( v98 )
      {
        Instance = SkillLvMaster__GetEntity(v98, v70[v68 + 8], 1, 0);
        if ( Instance )
        {
          Instance = (void *)SkillLvEntity__getEventUpVal_43603724(
                               (SkillLvEntity_o *)Instance,
                               &eventUpVallInfo,
                               1,
                               1,
                               0,
                               1,
                               0,
                               -1,
                               0);
          if ( eventUpVallInfo )
          {
            Instance = eventUpVallInfo->fields.dropList;
            if ( Instance )
            {
              if ( *((_DWORD *)Instance + 6) )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v99,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v100 = v99;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v100,
                          (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v100.fields._current;
                  v72 = (EventDropItemUpValInfo_o *)sub_1C93D20(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v72, 1, (EventDropUpValInfo_o *)current, 0, 0);
                  v73 = sub_1C93D20(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v73, v72, 0);
                  if ( !current )
                    sub_1C93D2C(v74, v75);
                  if ( !v73 )
                    sub_1C93D2C(v74, v75);
                  *(_QWORD *)(v73 + 92) = current[2].monitor;
                  if ( !v21 )
                    sub_1C93D2C(v74, v75);
                  items = v21->fields._items;
                  v83 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                  ++v21->fields._version;
                  if ( !items )
                    sub_1C93D2C(v74, v75);
                  size = v21->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v21,
                      (Il2CppObject *)v73,
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v85 = &items->obj.klass + size;
                    v21->fields._size = size + 1;
                    v85[4] = (Il2CppClass *)v73;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v85 + 4), v73, v76, v77, v78, v79, v80, v81);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v100,
                  (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v19[2].monitor;
              ++v68;
              if ( monitor )
                continue;
            }
          }
        }
      }
      goto LABEL_85;
    }
    Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
      Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v86 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
    if ( !v86 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      }
      v87 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v86 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
      System_Comparison_object____ctor(
        v86,
        v87,
        Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__,
        0);
      v88 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
      v88->__9__15_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v86;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v88->__9__15_0, (int32_t)v86, v89, v90, v91, v92, v93, v94);
    }
    if ( !v21 )
      goto LABEL_85;
    System_Collections_Generic_List_object___Sort_59225184(
      v21,
      v86,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    eventUpValIcon = v97->fields.eventUpValIcon;
    Instance = System_Collections_Generic_List_object___ToArray(
                 v21,
                 (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    if ( !eventUpValIcon )
      goto LABEL_85;
    EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)Instance, -1, -1, -1, 0);
  }
}


void ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_o *saveKey; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *saveGroupEquipKeys; // x0
  Il2CppObject *key; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4D2B8B7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_4D2B8B7 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  saveKey = this->fields.saveKey;
  if ( this->fields.isButtonOn )
  {
    UnityEngine_PlayerPrefs__SetInt(saveKey, this->fields.saveId, 0);
  }
  else if ( UnityEngine_PlayerPrefs__HasKey(saveKey, 0) )
  {
    UnityEngine_PlayerPrefs__DeleteKey(this->fields.saveKey, 0);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.saveGroupEquipKeys, 0) )
  {
    saveGroupEquipKeys = this->fields.saveGroupEquipKeys;
    if ( !saveGroupEquipKeys )
      sub_1C93D2C(0, v4);
    System_Collections_Generic_Dictionary_object__int___GetEnumerator(
      &v7,
      (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
      (const MethodInfo_35260C8 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
              &v7,
              (const MethodInfo_362C6A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
    {
      key = v7.fields._current.fields.key;
      if ( this->fields.isButtonOn )
      {
        UnityEngine_PlayerPrefs__SetInt(
          (System_String_o *)v7.fields._current.fields.key,
          (int32_t)v7.fields._current.fields.value,
          0);
      }
      else if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)v7.fields._current.fields.key, 0) )
      {
        UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)key, 0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
      &v7,
      (const MethodInfo_362C7C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  }
}


void ServantBonusFilterEquipListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B8B9 & 1) == 0 )
  {
    sub_1C93AD4(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    byte_4D2B8B9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantBonusFilterEquipListViewItemDraw___c___ctor(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__13_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C93D2C(this, 0);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0);
}


int32_t ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C93D2C(this, 0);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0);
}


bool ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_1(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return entity->fields.type == 1;
}


int32_t ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_2(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


void ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0___ctor(
        ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0___SetItem_b__3(
        ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_o *this,
        EventBonusFilterEntity_o *filterEntity,
        const MethodInfo *method)
{
  struct EventBonusFilterGroupMemberEntity_o *groupMemberEquip; // x8

  groupMemberEquip = this->fields.groupMemberEquip;
  if ( !groupMemberEquip || !filterEntity )
    sub_1C93D2C(this, filterEntity);
  return groupMemberEquip->fields.svtId == filterEntity->fields.value
      && !EventBonusFilterEntity__IsOpen(filterEntity, 0);
}