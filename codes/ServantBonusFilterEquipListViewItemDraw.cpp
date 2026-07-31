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

  if ( (byte_5932FA3 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
    byte_5932FA3 = 1;
  }
  v3 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *v6; // x20
  _BOOL4 v7; // w24
  System_String_o **v8; // x8
  __int64 v9; // x2
  UILabel_o *v10; // x19
  float *v11; // x11
  float *v12; // x8
  float *v13; // x9
  float *v14; // x10
  float *v15; // x11
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *buttonLabel; // x20
  _BOOL4 isButtonLabelOnOff; // w22
  System_String_o **v20; // x8
  __int64 v21; // x2
  float *m_CachedPtr; // x11
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5932FA5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12342/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/);
    sub_21FFC50(&StringLiteral_3844/*"COMMON_ON"*/);
    sub_21FFC50(&StringLiteral_3843/*"COMMON_OFF"*/);
    sub_21FFC50(&StringLiteral_12343/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/);
    sub_21FFC50(&StringLiteral_18184/*"btn_bg_off"*/);
    sub_21FFC50(&StringLiteral_18189/*"btn_bg_on"*/);
    byte_5932FA5 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !this->fields.isButtonOn )
  {
    if ( changeDisplayButton )
    {
      changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         changeDisplayButton,
                                                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( changeDisplayButton )
      {
        UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_18189/*"btn_bg_on"*/, 0);
        buttonLabel = this->fields.buttonLabel;
        isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
        v20 = (System_String_o **)&StringLiteral_12342/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
        if ( isButtonLabelOnOff )
          v20 = (System_String_o **)&StringLiteral_3844/*"COMMON_ON"*/;
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v20, 0);
        if ( buttonLabel )
        {
          UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0);
          v10 = this->fields.buttonLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v21);
          if ( !byte_5932AD4 )
          {
            sub_21FFC50(&LocalizationManager_TypeInfo);
            byte_5932AD4 = 1;
          }
          changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v21);
            changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
          }
          if ( v10 )
          {
            m_CachedPtr = (float *)changeDisplayButton[7].fields.m_CachedPtr;
            v12 = m_CachedPtr + 27;
            v13 = m_CachedPtr + 24;
            v14 = m_CachedPtr + 26;
            v15 = m_CachedPtr + 25;
            goto LABEL_35;
          }
        }
      }
    }
LABEL_36:
    sub_21FFECC(changeDisplayButton, method);
  }
  if ( !changeDisplayButton )
    goto LABEL_36;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_36;
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_18184/*"btn_bg_off"*/, 0);
  v6 = this->fields.buttonLabel;
  v7 = this->fields.isButtonLabelOnOff;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  v8 = (System_String_o **)(v7 ? &StringLiteral_3843/*"COMMON_OFF"*/ : &StringLiteral_12343/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/);
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v8, 0);
  if ( !v6 )
    goto LABEL_36;
  UILabel__set_text(v6, (System_String_o *)changeDisplayButton, 0);
  v10 = this->fields.buttonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v9);
  if ( !byte_5932AD3 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD3 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v9);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_36;
  v11 = (float *)changeDisplayButton[7].fields.m_CachedPtr;
  v12 = v11 + 23;
  v13 = v11 + 20;
  v14 = v11 + 22;
  v15 = v11 + 21;
LABEL_35:
  v23.fields.g = *v15;
  v23.fields.r = *v13;
  v23.fields.a = *v12;
  v23.fields.b = *v14;
  UILabel__set_effectColor(v10, v23, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_21FFECC(0, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_83183516(this->fields.saveKey, 0) == this->fields.saveId )
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
  if ( (byte_5932F9F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3318/*"BonusFilterEquipId"*/);
    byte_5932F9F = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0);
  v11 = System_String__Concat_75438412((System_String_o *)StringLiteral_3318/*"BonusFilterEquipId"*/, v10, 0);
  ServantBonusFilterEquipListViewItemDraw__SetItem_39413564(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem_39413564(
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
  __int64 v15; // x1
  __int64 v16; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v18; // w0
  ServantBonusFilterEquipListViewItemDraw_o *v19; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *v26; // x22
  __int64 v27; // x2
  int max_length; // w8
  unsigned int v29; // w26
  char v30; // w9
  Il2CppClass **v31; // x24
  Il2CppClass *v32; // x11
  char *v33; // x24
  Il2CppClass *v34; // t1
  Il2CppClass **v35; // x25
  Il2CppClass *v36; // x8
  char *v37; // x25
  Il2CppClass *v38; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v40; // x0
  SkillInfo_o *v41; // x8
  Il2CppObject *current; // x24
  EventDropItemUpValInfo_o *v43; // x25
  __int64 v44; // x23
  __int64 v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  void *static_fields; // x8
  System_Comparison_T__o *v58; // x20
  Il2CppObject *v59; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v68; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  v68 = this;
  if ( (byte_5932FA0 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_21FFC50(&EquipTargetInfo_TypeInfo);
    sub_21FFC50(&EventDropItemUpValInfo_TypeInfo);
    sub_21FFC50(&EventMargeItemUpValInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__);
    sub_21FFC50(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_21FFC50(&StringLiteral_147/*" + "*/);
    byte_5932FA0 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  if ( !equipEntity )
    goto LABEL_57;
  v10 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipEntity, eventUpValInfos);
  *(_QWORD *)&v71.fields.currentCryptoKey = v10;
  *(_QWORD *)&v71.fields.fakeValue = v11;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v71, 0);
  v13 = (EquipTargetInfo_o *)sub_21FFEBC(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_48662504(v13, v12, 0, 1, 0, 0);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v68->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_57;
  ServantFaceIconComponent__Set_48024312((ServantFaceIconComponent_o *)this, v13, 0, 0, 0);
  equipNameLabel = v68->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0, 0);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15, v16);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(
                                                        Name,
                                                        0);
  if ( !equipNameLabel )
    goto LABEL_57;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(equipEntity->fields.id, 0);
  v19 = v68;
  v68->fields.saveKey = saveKey;
  v68->fields.saveId = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v68->fields.saveKey, (int32_t)saveKey, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !skillInfos )
    goto LABEL_57;
  max_length = skillInfos->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    v30 = 1;
    while ( eventUpValInfos )
    {
      if ( v29 >= LODWORD(eventUpValInfos->max_length) )
        goto LABEL_58;
      v31 = &eventUpValInfos->obj.klass + (int)v29;
      v34 = v31[4];
      v33 = (char *)(v31 + 4);
      v32 = v34;
      if ( !v34 )
        break;
      if ( LODWORD(v32->_1.namespaze) == v19->fields.saveId )
      {
        if ( (v30 & 1) != 0 )
        {
          if ( v29 >= max_length )
            goto LABEL_58;
          v35 = &skillInfos->obj.klass + (int)v29;
          v38 = v35[4];
          v37 = (char *)(v35 + 4);
          v36 = v38;
          if ( !v38 )
            break;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v19->fields.skillIcon;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v36->_1.name, 0);
          skillTextLabel = v19->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v29 >= LODWORD(skillInfos->max_length) )
            goto LABEL_58;
          if ( !*(_QWORD *)v37 )
            break;
          v40 = System_String__Concat_75438412(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v37 + 32LL),
                  0);
        }
        else
        {
          skillTextLabel = v19->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v29 >= max_length )
LABEL_58:
            sub_21FFED4(this);
          v41 = skillInfos->m_Items[v29];
          if ( !v41 )
            break;
          v40 = System_String__Concat_75481624(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_147/*" + "*/,
                  v41->fields.title,
                  0);
        }
        UILabel__set_text(skillTextLabel, v40, 0);
        if ( v29 >= LODWORD(eventUpValInfos->max_length) )
          goto LABEL_58;
        if ( !*(_QWORD *)v33 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v33 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v69,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v70 = v69;
        v69.fields._list = 0;
        *(_QWORD *)&v69.fields._index = &v70;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v70,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v70.fields._current;
          v43 = (EventDropItemUpValInfo_o *)sub_21FFEBC(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v43, 1, (EventDropUpValInfo_o *)current, 0, 0);
          v44 = sub_21FFEBC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v44, v43, 0);
          if ( !current )
            sub_21FFECC(v45, v46);
          if ( !v44 )
            sub_21FFECC(v45, v46);
          *(_QWORD *)(v44 + 92) = current[2].monitor;
          if ( !v26
            || (items = v26->fields._items,
                v54 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
                ++v26->fields._version,
                !items) )
          {
            sub_21FFECC(v45, v46);
          }
          size = v26->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)v44,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v56[4] = (Il2CppClass *)v44;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v56 + 4), v44, v47, v48, v49, v50, v51, v52);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v70,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v19 = v68;
        v30 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_47;
    }
LABEL_57:
    sub_21FFECC(this, equipEntity);
  }
LABEL_47:
  this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !*(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, equipEntity, v27);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  static_fields = this[1].fields.skillTextLabel;
  v58 = (System_Comparison_T__o *)*((_QWORD *)static_fields + 1);
  if ( !v58 )
  {
    if ( !HIDWORD(this[1].fields.saveGroupEquipKeys) )
    {
      j_il2cpp_runtime_class_init_0(this, equipEntity, v27);
      static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    }
    v59 = *(Il2CppObject **)static_fields;
    v58 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v58, v59, Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__, 0);
    v60 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    v60->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v58;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v60->__9__13_0, (int32_t)v58, v61, v62, v63, v64, v65, v66);
  }
  if ( !v26 )
    goto LABEL_57;
  System_Collections_Generic_List_object___Sort_71636404(
    v26,
    v58,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v19->fields.skillTextLabel;
  if ( !this )
    goto LABEL_57;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    (System_String_o *)this[3].fields.skillIcon,
    (int32_t)this[3].fields.skillTextLabel,
    0,
    0);
  eventUpValIcon = v19->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v26,
                                                        (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_57;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem_39415156(
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
  if ( (byte_5932FA1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3320/*"BonusFilterGroupId"*/);
    byte_5932FA1 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0);
  v11 = System_String__Concat_75438412((System_String_o *)StringLiteral_3320/*"BonusFilterGroupId"*/, v10, 0);
  ServantBonusFilterEquipListViewItemDraw__SetItem_39415308(this, eventIdList, filterGroupId, v11, equipIdx, v12);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem_39415308(
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x21
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v21; // x20
  System_Collections_Generic_Dictionary_object__int__o *v22; // x28
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  EventBonusFilterGroupMemberEntity_array *EntitiesByGroupId; // x26
  __int64 v30; // x2
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  ServantBonusFilterEquipListViewItemDraw___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x27
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__15_1; // x28
  Il2CppObject *v38; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_List_object__o *v47; // x27
  __int64 v48; // x2
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v49; // x8
  System_Comparison_T__o *_9__15_2; // x28
  Il2CppObject *v51; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x2
  __int64 v60; // x2
  unsigned __int64 v61; // x19
  __int64 v62; // x29
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  EventBonusFilterGroupMemberEntity_o *v69; // x1
  __int64 v70; // x24
  System_Func_object__bool__o *v71; // x23
  struct System_Collections_Generic_Dictionary_string__int__o *saveGroupEquipKeys; // x29
  System_String_o *v73; // x0
  EventUpValSetupInfo_o *v74; // x24
  __int64 v75; // x2
  int *monitor; // x8
  unsigned __int64 v77; // x29
  EventUpValInfo_o *v78; // x23
  _DWORD *v79; // x8
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v81; // x26
  __int64 v82; // x23
  __int64 v83; // x0
  __int64 v84; // x1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  struct System_Object_array *items; // x8
  _QWORD *v92; // x9
  __int64 size; // x10
  Il2CppClass **v94; // x0
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v95; // x8
  System_Comparison_T__o *_9__15_0; // x21
  Il2CppObject *v97; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v98; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  EventUpValIconComponent_o *eventUpValIcon; // x19
  System_String_o *str0; // [xsp+18h] [xbp-C8h]
  ServantBonusFilterEquipListViewItemDraw_o *v107; // [xsp+20h] [xbp-C0h]
  SkillLvMaster_o *v108; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+50h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+70h] [xbp-70h] BYREF
  int32_t v112; // [xsp+7Ch] [xbp-64h] BYREF

  v112 = equipIdx;
  if ( (byte_5932FA2 & 1) == 0 )
  {
    sub_21FFC50(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_EventBonusFilterEntity___);
    sub_21FFC50(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_21FFC50(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_21FFC50(&EventDropItemUpValInfo_TypeInfo);
    sub_21FFC50(&EventMargeItemUpValInfo_TypeInfo);
    sub_21FFC50(&EventUpValInfo_TypeInfo);
    sub_21FFC50(&EventUpValSetupInfo_TypeInfo);
    sub_21FFC50(&System_Func_EventBonusFilterEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__);
    sub_21FFC50(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__);
    sub_21FFC50(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__);
    sub_21FFC50(&Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__);
    sub_21FFC50(&ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo);
    sub_21FFC50(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    sub_21FFC50(&StringLiteral_3318/*"BonusFilterEquipId"*/);
    byte_5932FA2 = 1;
  }
  eventUpVallInfo = 0;
  memset(&v110, 0, sizeof(v110));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_84;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( Entity )
  {
    v19 = Entity;
    this->fields.saveKey = saveKey;
    this->fields.saveId = filterGroupId;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.saveKey,
      (int32_t)saveKey,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_84;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_84;
    v108 = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v21 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v22 = (System_Collections_Generic_Dictionary_object__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
    System_Collections_Generic_Dictionary_object__int____ctor(
      v22,
      (const MethodInfo_3FBFF60 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    v107 = this;
    this->fields.saveGroupEquipKeys = (struct System_Collections_Generic_Dictionary_string__int__o *)v22;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.saveGroupEquipKeys,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    if ( !MasterData_object )
      goto LABEL_84;
    EntitiesByGroupId = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                          (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                          filterGroupId,
                          0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v30);
      Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
      v11 = eventIdList;
      if ( !Instance )
        goto LABEL_84;
      FilterList = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 0, 0);
      v34 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)FilterList;
      if ( !*(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v32, v33);
        v34 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      }
      static_fields = v34->static_fields;
      _9__15_1 = (System_Func_object__bool__o *)static_fields->__9__15_1;
      if ( !_9__15_1 )
      {
        if ( !*(&v34->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v34, v32, v33);
          static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
        }
        v38 = (Il2CppObject *)static_fields->__9;
        _9__15_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventBonusFilterEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__15_1,
          v38,
          Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__,
          0);
        v39 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
        v39->__9__15_1 = (struct System_Func_EventBonusFilterEntity__bool__o *)_9__15_1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v39->__9__15_1,
          (int32_t)_9__15_1,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
      }
      v46 = System_Linq_Enumerable__Where_object_(
              v35,
              (System_Func_TSource__bool__o *)_9__15_1,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___);
      v47 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v46,
                                                           (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v47, 0) )
      {
        Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        if ( !*(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v11, v48);
          Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        }
        v49 = (struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *)*((_QWORD *)Instance + 23);
        _9__15_2 = (System_Comparison_T__o *)v49->__9__15_2;
        if ( !_9__15_2 )
        {
          if ( !*((_DWORD *)Instance + 57) )
          {
            j_il2cpp_runtime_class_init_0(Instance, v11, v48);
            v49 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
          }
          v51 = (Il2CppObject *)v49->__9;
          _9__15_2 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventBonusFilterEntity__TypeInfo);
          System_Comparison_object____ctor(
            _9__15_2,
            v51,
            Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__,
            0);
          v52 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
          v52->__9__15_2 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__15_2;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v52->__9__15_2,
            (int32_t)_9__15_2,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
        }
        if ( !v47 )
          goto LABEL_84;
        System_Collections_Generic_List_object___Sort_71636404(
          v47,
          _9__15_2,
          (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
        Instance = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        str0 = (System_String_o *)StringLiteral_3318/*"BonusFilterEquipId"*/;
        if ( !*(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v11, v59);
        if ( !saveKey )
          goto LABEL_84;
        Instance = (void *)System_String__Contains(
                             saveKey,
                             AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
                             0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          if ( !*(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, v11, v60);
            Instance = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          }
          str0 = (System_String_o *)**((_QWORD **)Instance + 23);
        }
        if ( !EntitiesByGroupId )
          goto LABEL_84;
        if ( SLODWORD(EntitiesByGroupId->max_length) >= 1 )
        {
          v61 = 0;
          while ( 1 )
          {
            v62 = sub_21FFEBC(ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v62, 0);
            if ( v61 >= LODWORD(EntitiesByGroupId->max_length) )
LABEL_85:
              sub_21FFED4(Instance);
            if ( !v62 )
              break;
            v69 = EntitiesByGroupId->m_Items[v61];
            *(_QWORD *)(v62 + 16) = v69;
            v70 = v62 + 16;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v62 + 16), (int32_t)v69, v63, v64, v65, v66, v67, v68);
            v71 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventBonusFilterEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v71,
              (Il2CppObject *)v62,
              Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__,
              0);
            if ( BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)v47,
                   (System_Func_T__bool__o *)v71,
                   (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_EventBonusFilterEntity___) )
            {
              saveGroupEquipKeys = this->fields.saveGroupEquipKeys;
              v73 = System_Int32__ToString((int32_t)&v112, 0);
              Instance = System_String__Concat_75438412(str0, v73, 0);
              if ( !*(_QWORD *)v70 || !saveGroupEquipKeys )
                break;
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
                (Il2CppObject *)Instance,
                *(_DWORD *)(*(_QWORD *)v70 + 20LL),
                (const MethodInfo_3FC08F4 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              ++v112;
            }
            if ( (__int64)++v61 >= SLODWORD(EntitiesByGroupId->max_length) )
              goto LABEL_44;
          }
LABEL_84:
          sub_21FFECC(Instance, v11);
        }
      }
    }
LABEL_44:
    Instance = this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_84;
    ServantFaceIconComponent__SetEventBonus(
      (ServantFaceIconComponent_o *)Instance,
      (int32_t)v19[2].klass,
      HIDWORD(v19[2].klass),
      0);
    Instance = this->fields.equipNameLabel;
    if ( !Instance )
      goto LABEL_84;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v19[1].monitor, 0);
    Instance = this->fields.skillIcon;
    if ( !Instance )
      goto LABEL_84;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v19[3].monitor, 0);
    Instance = this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_84;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v19[3].klass, 0);
    Instance = this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_84;
    WrapControlText__textAdjust(
      (UILabel_o *)Instance,
      *((System_String_o **)Instance + 52),
      *((_DWORD *)Instance + 106),
      0,
      0);
    v74 = (EventUpValSetupInfo_o *)sub_21FFEBC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_48687632(v74, eventIdList, 0, 0, 0, 0);
    monitor = (int *)v19[2].monitor;
    if ( !monitor )
      goto LABEL_84;
    v77 = 0;
    while ( (__int64)v77 < monitor[6] )
    {
      v78 = (EventUpValInfo_o *)sub_21FFEBC(EventUpValInfo_TypeInfo);
      EventUpValInfo___ctor(v78, v74, 0, 1, 1, 0, 0);
      v79 = v19[2].monitor;
      eventUpVallInfo = v78;
      if ( !v79 )
        goto LABEL_84;
      if ( v77 >= (unsigned int)v79[6] )
        goto LABEL_85;
      Instance = v108;
      if ( v108 )
      {
        Instance = SkillLvMaster__GetEntity(v108, v79[v77 + 8], 1, 0);
        if ( Instance )
        {
          Instance = (void *)SkillLvEntity__getEventUpVal_49857460(
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
                  (System_Collections_Generic_List_Enumerator_T__o *)&v109,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v110 = v109;
                v109.fields._list = 0;
                *(_QWORD *)&v109.fields._index = &v110;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v110,
                          (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v110.fields._current;
                  v81 = (EventDropItemUpValInfo_o *)sub_21FFEBC(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v81, 1, (EventDropUpValInfo_o *)current, 0, 0);
                  v82 = sub_21FFEBC(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v82, v81, 0);
                  if ( !current )
                    sub_21FFECC(v83, v84);
                  if ( !v82 )
                    sub_21FFECC(v83, v84);
                  *(_QWORD *)(v82 + 92) = current[2].monitor;
                  if ( !v21
                    || (items = v21->fields._items,
                        v92 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
                        ++v21->fields._version,
                        !items) )
                  {
                    sub_21FFECC(v83, v84);
                  }
                  size = v21->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v21,
                      (Il2CppObject *)v82,
                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v94 = &items->obj.klass + size;
                    v21->fields._size = size + 1;
                    v94[4] = (Il2CppClass *)v82;
                    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v94 + 4), v82, v85, v86, v87, v88, v89, v90);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v110,
                  (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v19[2].monitor;
              ++v77;
              if ( monitor )
                continue;
            }
          }
        }
      }
      goto LABEL_84;
    }
    Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    if ( !*(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v11, v75);
      Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v95 = (struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__15_0 = (System_Comparison_T__o *)v95->__9__15_0;
    if ( !_9__15_0 )
    {
      if ( !*((_DWORD *)Instance + 57) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v11, v75);
        v95 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
      }
      v97 = (Il2CppObject *)v95->__9;
      _9__15_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
      System_Comparison_object____ctor(
        _9__15_0,
        v97,
        Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__,
        0);
      v98 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
      v98->__9__15_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__15_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v98->__9__15_0,
        (int32_t)_9__15_0,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
    }
    if ( !v21 )
      goto LABEL_84;
    System_Collections_Generic_List_object___Sort_71636404(
      v21,
      _9__15_0,
      (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    eventUpValIcon = v107->fields.eventUpValIcon;
    Instance = System_Collections_Generic_List_object___ToArray(
                 v21,
                 (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    if ( !eventUpValIcon )
      goto LABEL_84;
    EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)Instance, -1, -1, -1, 0);
  }
}


void ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w8
  System_String_o *saveKey; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *saveGroupEquipKeys; // x0
  Il2CppObject *key; // x20
  __int64 v8; // [xsp+0h] [xbp-60h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v9; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+10h] [xbp-50h] BYREF

  if ( (byte_5932FA4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_5932FA4 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  saveKey = this->fields.saveKey;
  memset(&v10, 0, sizeof(v10));
  if ( isButtonOn )
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
      sub_21FFECC(0, v5);
    System_Collections_Generic_Dictionary_object__int___GetEnumerator(
      &v10,
      (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
      (const MethodInfo_3FC0CF0 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    v8 = 0;
    v9 = &v10;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
              &v10,
              (const MethodInfo_41338D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
    {
      key = v10.fields._current.fields.key;
      if ( this->fields.isButtonOn )
      {
        UnityEngine_PlayerPrefs__SetInt(
          (System_String_o *)v10.fields._current.fields.key,
          (int32_t)v10.fields._current.fields.value,
          0);
      }
      else if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)v10.fields._current.fields.key, 0) )
      {
        UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)key, 0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
      &v10,
      (const MethodInfo_41339F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  }
}


void ServantBonusFilterEquipListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932FA6 & 1) == 0 )
  {
    sub_21FFC50(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    byte_5932FA6 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0);
}


int32_t ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0);
}


bool ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_1(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.type == 1;
}


int32_t ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_2(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_21FFECC(this, a);
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
    sub_21FFECC(this, filterEntity);
  return groupMemberEquip->fields.svtId == filterEntity->fields.value
      && !EventBonusFilterEntity__IsOpen(filterEntity, 0);
}