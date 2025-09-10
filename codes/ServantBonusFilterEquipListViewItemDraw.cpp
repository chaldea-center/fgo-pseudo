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

  if ( (byte_4C21D52 & 1) == 0 )
  {
    sub_1C2D490(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
    byte_4C21D52 = 1;
  }
  v3 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C21D54 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11847/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/);
    sub_1C2D490(&StringLiteral_3699/*"COMMON_ON"*/);
    sub_1C2D490(&StringLiteral_3698/*"COMMON_OFF"*/);
    sub_1C2D490(&StringLiteral_11848/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/);
    sub_1C2D490(&StringLiteral_17452/*"btn_bg_off"*/);
    sub_1C2D490(&StringLiteral_17457/*"btn_bg_on"*/);
    byte_4C21D54 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_34;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_34;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17457/*"btn_bg_on"*/, 0);
    buttonLabel = this->fields.buttonLabel;
    isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = (System_String_o **)&StringLiteral_11847/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    if ( isButtonLabelOnOff )
      v16 = (System_String_o **)&StringLiteral_3699/*"COMMON_ON"*/;
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v16, 0);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0);
      v8 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4C21AC6 )
      {
        sub_1C2D490(&LocalizationManager_TypeInfo);
        byte_4C21AC6 = 1;
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
    sub_1C2D6EC(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17452/*"btn_bg_off"*/, 0);
  v5 = this->fields.buttonLabel;
  v6 = this->fields.isButtonLabelOnOff;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v6 )
    v7 = (System_String_o **)&StringLiteral_3698/*"COMMON_OFF"*/;
  else
    v7 = (System_String_o **)&StringLiteral_11848/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v7, 0);
  if ( !v5 )
    goto LABEL_34;
  UILabel__set_text(v5, (System_String_o *)changeDisplayButton, 0);
  v8 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C21AC5 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C21AC5 = 1;
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
    sub_1C2D6EC(0, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_71121948(this->fields.saveKey, 0) == this->fields.saveId )
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
  if ( (byte_4C21D4E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3191/*"BonusFilterEquipId"*/);
    byte_4C21D4E = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0);
  v11 = System_String__Concat_63457864((System_String_o *)StringLiteral_3191/*"BonusFilterEquipId"*/, v10, 0);
  ServantBonusFilterEquipListViewItemDraw__SetItem_32371480(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem_32371480(
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
  System_Collections_Generic_List_object__o *v17; // x22
  __int64 v18; // x2
  int max_length; // w8
  ServantBonusFilterEquipListViewItemDraw_o *v20; // x13
  unsigned int v21; // w27
  char v22; // w9
  Il2CppClass **v23; // x24
  Il2CppClass *v24; // x11
  char *v25; // x24
  Il2CppClass *v26; // t1
  Il2CppClass **v27; // x25
  Il2CppClass *v28; // x8
  char *v29; // x25
  Il2CppClass *v30; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v32; // x0
  SkillInfo_o *v33; // x8
  Il2CppObject *current; // x24
  EventDropItemUpValInfo_o *v35; // x25
  __int64 v36; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v47; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v47 = this;
  if ( (byte_4C21D4F & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C2D490(&EquipTargetInfo_TypeInfo);
    sub_1C2D490(&EventDropItemUpValInfo_TypeInfo);
    sub_1C2D490(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__);
    sub_1C2D490(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1C2D490(&StringLiteral_146/*" + "*/);
    byte_4C21D4F = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !equipEntity )
    goto LABEL_58;
  v11 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v50.fields.currentCryptoKey = v11;
  *(_QWORD *)&v50.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v50, 0);
  v13 = (EquipTargetInfo_o *)sub_1C2D6DC(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_41488412(v13, v12, 0, 1, 0, 0);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v47->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_58;
  ServantFaceIconComponent__Set_40789832((ServantFaceIconComponent_o *)this, v13, 0, 0, 0);
  equipNameLabel = v47->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(
                                                        Name,
                                                        0);
  if ( !equipNameLabel )
    goto LABEL_58;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(equipEntity->fields.id, 0);
  v47->fields.saveKey = saveKey;
  v47->fields.saveId = v16;
  sub_1C2D434(&v47->fields.saveKey);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !skillInfos )
    goto LABEL_58;
  max_length = skillInfos->max_length;
  v20 = v47;
  if ( max_length >= 1 )
  {
    v21 = 0;
    v22 = 1;
    while ( eventUpValInfos )
    {
      if ( v21 >= LODWORD(eventUpValInfos->max_length) )
        goto LABEL_59;
      v23 = &eventUpValInfos->obj.klass + (int)v21;
      v26 = v23[4];
      v25 = (char *)(v23 + 4);
      v24 = v26;
      if ( !v26 )
        break;
      if ( LODWORD(v24->_1.namespaze) == v20->fields.saveId )
      {
        if ( (v22 & 1) != 0 )
        {
          if ( v21 >= max_length )
            goto LABEL_59;
          v27 = &skillInfos->obj.klass + (int)v21;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v20->fields.skillIcon;
          v30 = v27[4];
          v29 = (char *)(v27 + 4);
          v28 = v30;
          if ( !v30 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v28->_1.name, 0);
          skillTextLabel = v47->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v21 >= LODWORD(skillInfos->max_length) )
            goto LABEL_59;
          if ( !*(_QWORD *)v29 )
            break;
          v32 = System_String__Concat_63457864(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v29 + 32LL),
                  0);
        }
        else
        {
          skillTextLabel = v20->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v21 >= max_length )
LABEL_59:
            sub_1C2D6F4(this, equipEntity, v18);
          v33 = skillInfos->m_Items[v21];
          if ( !v33 )
            break;
          v32 = System_String__Concat_63496112(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_146/*" + "*/,
                  v33->fields.title,
                  0);
        }
        UILabel__set_text(skillTextLabel, v32, 0);
        if ( v21 >= LODWORD(eventUpValInfos->max_length) )
          goto LABEL_59;
        if ( !*(_QWORD *)v25 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v25 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v48,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v49 = v48;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v49,
                  (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v49.fields._current;
          v35 = (EventDropItemUpValInfo_o *)sub_1C2D6DC(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v35, 1, (EventDropUpValInfo_o *)current, 0, 0);
          v36 = sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v36, v35, 0);
          if ( !current )
            sub_1C2D6EC(v37, v38);
          if ( !v36 )
            sub_1C2D6EC(v37, v38);
          *(_QWORD *)(v36 + 92) = current[2].monitor;
          if ( !v17 )
            sub_1C2D6EC(v37, v38);
          items = v17->fields._items;
          v40 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v17->fields._version;
          if ( !items )
            sub_1C2D6EC(v37, v38);
          size = v17->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v36,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v36;
            sub_1C2D434(v42 + 4);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v49,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v20 = v47;
        v22 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_48;
    }
LABEL_58:
    sub_1C2D6EC(this, equipEntity);
  }
LABEL_48:
  this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  monitor = (System_Comparison_T__o *)this[1].fields.skillTextLabel->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[1].fields.saveGroupEquipKeys) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[1].fields.skillTextLabel->klass;
    monitor = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__,
      0);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)monitor;
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1C2D434(&static_fields->__9__13_0);
  }
  if ( !v17 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_58242632(
    v17,
    monitor,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v47->fields.skillTextLabel;
  if ( !this )
    goto LABEL_58;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    (System_String_o *)this[3].fields.skillIcon,
    (int32_t)this[3].fields.skillTextLabel,
    0,
    0);
  eventUpValIcon = v47->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v17,
                                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_58;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem_32373108(
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
  if ( (byte_4C21D50 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3193/*"BonusFilterGroupId"*/);
    byte_4C21D50 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0);
  v11 = System_String__Concat_63457864((System_String_o *)StringLiteral_3193/*"BonusFilterGroupId"*/, v10, 0);
  ServantBonusFilterEquipListViewItemDraw__SetItem_32373260(this, eventIdList, filterGroupId, v11, equipIdx, v12);
}


void ServantBonusFilterEquipListViewItemDraw__SetItem_32373260(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        int32_t equipIdx,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  System_Int32_array *v11; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v13; // x21
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_Generic_Dictionary_object__int__o *v16; // x28
  EventBonusFilterGroupMemberEntity_array *EntitiesByGroupId; // x26
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  ServantBonusFilterEquipListViewItemDraw___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x27
  System_Func_object__bool__o *_9__15_1; // x28
  Il2CppObject *v22; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x27
  System_Comparison_T__o *v26; // x28
  Il2CppObject *v27; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v28; // x0
  unsigned __int64 v29; // x19
  Il2CppObject *v30; // x29
  __int64 v31; // x2
  Il2CppObject *v32; // x24
  System_Func_object__bool__o *v33; // x23
  struct System_Collections_Generic_Dictionary_string__int__o *saveGroupEquipKeys; // x29
  System_String_o *v35; // x0
  EventUpValSetupInfo_o *v36; // x24
  int *monitor; // x8
  unsigned __int64 v38; // x27
  EventUpValInfo_o *v39; // x23
  _DWORD *v40; // x8
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v42; // x26
  __int64 v43; // x23
  __int64 v44; // x0
  __int64 v45; // x1
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Comparison_T__o *v50; // x21
  Il2CppObject *v51; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v52; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  System_String_o *str0; // [xsp+8h] [xbp-C8h]
  ServantBonusFilterEquipListViewItemDraw_o *v55; // [xsp+10h] [xbp-C0h]
  SkillLvMaster_o *v56; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+40h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+60h] [xbp-70h] BYREF
  int32_t v60; // [xsp+6Ch] [xbp-64h] BYREF

  v60 = equipIdx;
  if ( (byte_4C21D51 & 1) == 0 )
  {
    sub_1C2D490(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_EventBonusFilterEntity___);
    sub_1C2D490(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C2D490(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C2D490(&EventDropItemUpValInfo_TypeInfo);
    sub_1C2D490(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C2D490(&EventUpValInfo_TypeInfo);
    sub_1C2D490(&EventUpValSetupInfo_TypeInfo);
    sub_1C2D490(&System_Func_EventBonusFilterEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__);
    sub_1C2D490(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__);
    sub_1C2D490(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__);
    sub_1C2D490(&Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__);
    sub_1C2D490(&ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo);
    sub_1C2D490(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    sub_1C2D490(&StringLiteral_3191/*"BonusFilterEquipId"*/);
    byte_4C21D51 = 1;
  }
  eventUpVallInfo = 0;
  memset(&v58, 0, sizeof(v58));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_85;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( Entity )
  {
    v13 = Entity;
    this->fields.saveKey = saveKey;
    this->fields.saveId = filterGroupId;
    sub_1C2D434(&this->fields.saveKey);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_85;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_85;
    v56 = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v16 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
    System_Collections_Generic_Dictionary_object__int____ctor(
      v16,
      (const MethodInfo_3440C44 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    v55 = this;
    this->fields.saveGroupEquipKeys = (struct System_Collections_Generic_Dictionary_string__int__o *)v16;
    Instance = sub_1C2D434(&this->fields.saveGroupEquipKeys);
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
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
      v11 = eventIdList;
      if ( !Instance )
        goto LABEL_85;
      FilterList = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 0, 0);
      v19 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)FilterList;
      if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
        v19 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      }
      _9__15_1 = (System_Func_object__bool__o *)v19->static_fields->__9__15_1;
      if ( !_9__15_1 )
      {
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v19->static_fields->__9;
        _9__15_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventBonusFilterEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__15_1,
          v22,
          Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__,
          0);
        static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__15_1 = (struct System_Func_EventBonusFilterEntity__bool__o *)_9__15_1;
        sub_1C2D434(&static_fields->__9__15_1);
      }
      v24 = System_Linq_Enumerable__Where_object_(
              v20,
              (System_Func_TSource__bool__o *)_9__15_1,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___);
      v25 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v24,
                                                           (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v25, 0) )
      {
        Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
          Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        }
        v26 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 24LL);
        if ( !v26 )
        {
          if ( !*(_DWORD *)(Instance + 224) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
          }
          v27 = **(Il2CppObject ***)(Instance + 184);
          v26 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventBonusFilterEntity__TypeInfo);
          System_Comparison_object____ctor(
            v26,
            v27,
            Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__,
            0);
          v28 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
          v28->__9__15_2 = (struct System_Comparison_EventBonusFilterEntity__o *)v26;
          Instance = sub_1C2D434(&v28->__9__15_2);
        }
        if ( !v25 )
          goto LABEL_85;
        System_Collections_Generic_List_object___Sort_58242632(
          v25,
          v26,
          (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
        Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        str0 = (System_String_o *)StringLiteral_3191/*"BonusFilterEquipId"*/;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        if ( !saveKey )
          goto LABEL_85;
        Instance = System_String__Contains(
                     saveKey,
                     AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
                     0);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
            Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          }
          str0 = **(System_String_o ***)(Instance + 184);
        }
        if ( !EntitiesByGroupId )
          goto LABEL_85;
        if ( SLODWORD(EntitiesByGroupId->max_length) >= 1 )
        {
          v29 = 0;
          while ( 1 )
          {
            v30 = (Il2CppObject *)sub_1C2D6DC(ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo);
            System_Object___ctor(v30, 0);
            if ( v29 >= LODWORD(EntitiesByGroupId->max_length) )
LABEL_86:
              sub_1C2D6F4(Instance, v11, v31);
            if ( !v30 )
              break;
            v30[1].klass = (Il2CppClass *)EntitiesByGroupId->m_Items[v29];
            v32 = v30 + 1;
            sub_1C2D434(&v30[1]);
            v33 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventBonusFilterEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v33,
              v30,
              Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__,
              0);
            if ( BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)v25,
                   (System_Func_T__bool__o *)v33,
                   (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_EventBonusFilterEntity___) )
            {
              saveGroupEquipKeys = this->fields.saveGroupEquipKeys;
              v35 = System_Int32__ToString((int32_t)&v60, 0);
              Instance = (__int64)System_String__Concat_63457864(str0, v35, 0);
              if ( !v32->klass || !saveGroupEquipKeys )
                break;
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
                (Il2CppObject *)Instance,
                HIDWORD(v32->klass->_1.name),
                (const MethodInfo_34415F8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              ++v60;
            }
            if ( (__int64)++v29 >= SLODWORD(EntitiesByGroupId->max_length) )
              goto LABEL_44;
          }
LABEL_85:
          sub_1C2D6EC(Instance, v11);
        }
      }
    }
LABEL_44:
    Instance = (__int64)this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_85;
    ServantFaceIconComponent__SetEventBonus(
      (ServantFaceIconComponent_o *)Instance,
      (int32_t)v13[2].klass,
      HIDWORD(v13[2].klass),
      0);
    Instance = (__int64)this->fields.equipNameLabel;
    if ( !Instance )
      goto LABEL_85;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v13[1].monitor, 0);
    Instance = (__int64)this->fields.skillIcon;
    if ( !Instance )
      goto LABEL_85;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v13[3].monitor, 0);
    Instance = (__int64)this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_85;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v13[3].klass, 0);
    Instance = (__int64)this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_85;
    WrapControlText__textAdjust(
      (UILabel_o *)Instance,
      *(System_String_o **)(Instance + 416),
      *(_DWORD *)(Instance + 424),
      0,
      0);
    v36 = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_41515380(v36, eventIdList, 0, 0, 0, 0);
    monitor = (int *)v13[2].monitor;
    if ( !monitor )
      goto LABEL_85;
    v38 = 0;
    while ( (__int64)v38 < monitor[6] )
    {
      v39 = (EventUpValInfo_o *)sub_1C2D6DC(EventUpValInfo_TypeInfo);
      EventUpValInfo___ctor(v39, v36, 0, 1, 1, 0, 0);
      eventUpVallInfo = v39;
      v40 = v13[2].monitor;
      if ( !v40 )
        goto LABEL_85;
      if ( v38 >= (unsigned int)v40[6] )
        goto LABEL_86;
      Instance = (__int64)v56;
      if ( v56 )
      {
        Instance = (__int64)SkillLvMaster__GetEntity(v56, v40[v38 + 8], 1, 0);
        if ( Instance )
        {
          Instance = SkillLvEntity__getEventUpVal_42665704(
                       (SkillLvEntity_o *)Instance,
                       &eventUpVallInfo,
                       1,
                       1,
                       0,
                       1,
                       0,
                       0);
          if ( eventUpVallInfo )
          {
            Instance = (__int64)eventUpVallInfo->fields.dropList;
            if ( Instance )
            {
              if ( *(_DWORD *)(Instance + 24) )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v57,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v58 = v57;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v58,
                          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v58.fields._current;
                  v42 = (EventDropItemUpValInfo_o *)sub_1C2D6DC(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v42, 1, (EventDropUpValInfo_o *)current, 0, 0);
                  v43 = sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v43, v42, 0);
                  if ( !current )
                    sub_1C2D6EC(v44, v45);
                  if ( !v43 )
                    sub_1C2D6EC(v44, v45);
                  *(_QWORD *)(v43 + 92) = current[2].monitor;
                  if ( !v15 )
                    sub_1C2D6EC(v44, v45);
                  items = v15->fields._items;
                  v47 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                  ++v15->fields._version;
                  if ( !items )
                    sub_1C2D6EC(v44, v45);
                  size = v15->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v15,
                      (Il2CppObject *)v43,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v49 = &items->obj.klass + size;
                    v15->fields._size = size + 1;
                    v49[4] = (Il2CppClass *)v43;
                    sub_1C2D434(v49 + 4);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v58,
                  (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v13[2].monitor;
              ++v38;
              if ( monitor )
                continue;
            }
          }
        }
      }
      goto LABEL_85;
    }
    Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
      Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v50 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 32LL);
    if ( !v50 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      }
      v51 = **(Il2CppObject ***)(Instance + 184);
      v50 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
      System_Comparison_object____ctor(
        v50,
        v51,
        Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__,
        0);
      v52 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
      v52->__9__15_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v50;
      Instance = sub_1C2D434(&v52->__9__15_0);
    }
    if ( !v15 )
      goto LABEL_85;
    System_Collections_Generic_List_object___Sort_58242632(
      v15,
      v50,
      (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    eventUpValIcon = v55->fields.eventUpValIcon;
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v15,
                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_4C21D53 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_4C21D53 = 1;
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
      sub_1C2D6EC(0, v4);
    System_Collections_Generic_Dictionary_object__int___GetEnumerator(
      &v7,
      (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
      (const MethodInfo_34419E8 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
              &v7,
              (const MethodInfo_3545250 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
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
      (const MethodInfo_3545374 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  }
}


void ServantBonusFilterEquipListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C21D55 & 1) == 0 )
  {
    sub_1C2D490(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    byte_4C21D55 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v1;
  sub_1C2D434(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields);
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
    sub_1C2D6EC(this, 0);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0);
}


int32_t ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C2D6EC(this, 0);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0);
}


bool ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_1(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
  return entity->fields.type == 1;
}


int32_t ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_2(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2D6EC(this, a);
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
    sub_1C2D6EC(this, filterEntity);
  return groupMemberEquip->fields.svtId == filterEntity->fields.value
      && !EventBonusFilterEntity__IsOpen(filterEntity, 0);
}