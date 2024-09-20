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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A56316 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
    byte_4A56316 = 1;
  }
  v3 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8();
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButton(
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
  float *v17; // x11
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A56317 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11806/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/);
    sub_1B885B0(&StringLiteral_3775/*"COMMON_ON"*/);
    sub_1B885B0(&StringLiteral_3774/*"COMMON_OFF"*/);
    sub_1B885B0(&StringLiteral_11807/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/);
    sub_1B885B0(&StringLiteral_17489/*"btn_bg_off"*/);
    sub_1B885B0(&StringLiteral_17494/*"btn_bg_on"*/);
    byte_4A56317 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_34;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_34;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17494/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = (System_String_o **)&StringLiteral_11806/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    if ( isButtonLabelOnOff )
      v16 = (System_String_o **)&StringLiteral_3775/*"COMMON_ON"*/;
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v16, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v8 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4A5638D )
      {
        sub_1B885B0(&LocalizationManager_TypeInfo);
        byte_4A5638D = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v8 )
      {
        v17 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
        v10 = v17 + 27;
        v11 = v17 + 26;
        v12 = v17 + 25;
        v13 = v17 + 24;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1B8880C(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17489/*"btn_bg_off"*/, 0LL);
  v5 = this->fields.buttonLabel;
  v6 = this->fields.isButtonLabelOnOff;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v6 )
    v7 = (System_String_o **)&StringLiteral_3774/*"COMMON_OFF"*/;
  else
    v7 = (System_String_o **)&StringLiteral_11807/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v7, 0LL);
  if ( !v5 )
    goto LABEL_34;
  UILabel__set_text(v5, (System_String_o *)changeDisplayButton, 0LL);
  v8 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A5638C )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5638C = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_34;
  v9 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
  v10 = v9 + 23;
  v11 = v9 + 22;
  v12 = v9 + 21;
  v13 = v9 + 20;
LABEL_33:
  v18.fields.a = *v10;
  v18.fields.b = *v11;
  v18.fields.g = *v12;
  v18.fields.r = *v13;
  UILabel__set_effectColor(v8, v18, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_1B8880C(0LL, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_69417088(this->fields.saveKey, 0LL) == this->fields.saveId )
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
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = idx;
  if ( (byte_4A56312 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3309/*"BonusFilterEquipId"*/);
    byte_4A56312 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_61707032((System_String_o *)StringLiteral_3309/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_30663616(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_30663616(
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
  signed int max_length; // w8
  ServantBonusFilterEquipListViewItemDraw_o *v19; // x13
  il2cpp_array_size_t v20; // w27
  char v21; // w9
  Il2CppClass **v22; // x24
  Il2CppClass *v23; // x11
  char *v24; // x24
  Il2CppClass *v25; // t1
  Il2CppClass **v26; // x25
  Il2CppClass *v27; // x8
  char *v28; // x25
  Il2CppClass *v29; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v31; // x0
  SkillInfo_o *v32; // x8
  Il2CppObject *current; // x24
  EventDropItemUpValInfo_o *v34; // x25
  __int64 v35; // x23
  __int64 v36; // x0
  __int64 v37; // x1
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v46; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v46 = this;
  if ( (byte_4A56313 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1B885B0(&EquipTargetInfo_TypeInfo);
    sub_1B885B0(&EventDropItemUpValInfo_TypeInfo);
    sub_1B885B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__);
    sub_1B885B0(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1B885B0(&StringLiteral_157/*" + "*/);
    byte_4A56313 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !equipEntity )
    goto LABEL_58;
  v11 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v11;
  *(_QWORD *)&v49.fields.fakeValue = v10;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v49, 0LL);
  v13 = (EquipTargetInfo_o *)sub_1B887FC(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_38882840(v13, v12, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v46->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_58;
  ServantFaceIconComponent__Set_38225244((ServantFaceIconComponent_o *)this, v13, 0LL, 0LL, 0LL);
  equipNameLabel = v46->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_58;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(equipEntity->fields.id, 0LL);
  v46->fields.saveKey = saveKey;
  v46->fields.saveId = v16;
  sub_1B88554(&v46->fields.saveKey, saveKey);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !skillInfos )
    goto LABEL_58;
  max_length = skillInfos->max_length;
  v19 = v46;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = 1;
    while ( eventUpValInfos )
    {
      if ( v20 >= eventUpValInfos->max_length )
        goto LABEL_59;
      v22 = &eventUpValInfos->obj.klass + (int)v20;
      v25 = v22[4];
      v24 = (char *)(v22 + 4);
      v23 = v25;
      if ( !v25 )
        break;
      if ( LODWORD(v23->_1.namespaze) == v19->fields.saveId )
      {
        if ( (v21 & 1) != 0 )
        {
          if ( v20 >= max_length )
            goto LABEL_59;
          v26 = &skillInfos->obj.klass + (int)v20;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v19->fields.skillIcon;
          v29 = v26[4];
          v28 = (char *)(v26 + 4);
          v27 = v29;
          if ( !v29 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v27->_1.name, 0LL);
          skillTextLabel = v46->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v20 >= skillInfos->max_length )
            goto LABEL_59;
          if ( !*(_QWORD *)v28 )
            break;
          v31 = System_String__Concat_61707032(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v28 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v19->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v20 >= max_length )
LABEL_59:
            sub_1B88814(this, equipEntity);
          v32 = skillInfos->m_Items[v20];
          if ( !v32 )
            break;
          v31 = System_String__Concat_61718292(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_157/*" + "*/,
                  v32->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v31, 0LL);
        if ( v20 >= eventUpValInfos->max_length )
          goto LABEL_59;
        if ( !*(_QWORD *)v24 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v24 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v47,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v48 = v47;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v48,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v48.fields._current;
          v34 = (EventDropItemUpValInfo_o *)sub_1B887FC(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v34, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
          v35 = sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v35, v34, 0LL);
          if ( !current )
            sub_1B8880C(v36, v37);
          if ( !v35 )
            sub_1B8880C(v36, v37);
          *(_QWORD *)(v35 + 92) = current[2].monitor;
          if ( !v17 )
            sub_1B8880C(v36, v37);
          items = v17->fields._items;
          v39 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v17->fields._version;
          if ( !items )
            sub_1B8880C(v36, v37);
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v35,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v35;
            sub_1B88554(v41 + 4, v35);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v48,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v19 = v46;
        v21 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_48;
    }
LABEL_58:
    sub_1B8880C(this, equipEntity);
  }
LABEL_48:
  this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  monitor = (System_Comparison_T__o *)this[1].fields.changeDisplayButton->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[2].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[1].fields.changeDisplayButton->klass;
    monitor = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)monitor;
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1B88554(&static_fields->__9__12_0, monitor);
  }
  if ( !v17 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_55571192(
    v17,
    monitor,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v46->fields.skillTextLabel;
  if ( !this )
    goto LABEL_58;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    (System_String_o *)this[3].fields.buttonLabel,
    *(_DWORD *)&this[3].fields.isButtonOn,
    0,
    0,
    0LL);
  eventUpValIcon = v46->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v17,
                                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_58;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_30665244(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x4
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  v11 = idx;
  if ( (byte_4A56314 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3311/*"BonusFilterGroupId"*/);
    byte_4A56314 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_61707032((System_String_o *)StringLiteral_3311/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_30665388(this, eventIdList, filterGroupId, v9, v10);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_30665388(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v12; // x21
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v14; // x20
  int *monitor; // x8
  unsigned __int64 v16; // x28
  EventUpValInfo_o *v17; // x24
  _DWORD *v18; // x8
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v20; // x26
  __int64 v21; // x24
  __int64 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x21
  Il2CppObject *v29; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+30h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A56315 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1B885B0(&EventDropItemUpValInfo_TypeInfo);
    sub_1B885B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1B885B0(&EventUpValInfo_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__);
    sub_1B885B0(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    byte_4A56315 = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v34, 0, sizeof(v34));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_49;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v12 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_1B88554(&this->fields.saveKey, saveKey);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (__int64)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_49;
  ServantFaceIconComponent__SetEventBonus(
    (ServantFaceIconComponent_o *)Instance,
    (int32_t)v12[2].klass,
    HIDWORD(v12[2].klass),
    0LL);
  Instance = (__int64)this->fields.equipNameLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v12[1].monitor, 0LL);
  Instance = (__int64)this->fields.skillIcon;
  if ( !Instance )
    goto LABEL_49;
  SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v12[3].monitor, 0LL);
  Instance = (__int64)this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v12[3].klass, 0LL);
  Instance = (__int64)this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_49;
  WrapControlText__textAdjust(
    (UILabel_o *)Instance,
    *(System_String_o **)(Instance + 416),
    *(_DWORD *)(Instance + 424),
    0,
    0,
    0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(setupInfo, eventIdList, 0, 0, 0, 0LL);
  monitor = (int *)v12[2].monitor;
  if ( !monitor )
    goto LABEL_49;
  v16 = 0LL;
  while ( (__int64)v16 < monitor[6] )
  {
    v17 = (EventUpValInfo_o *)sub_1B887FC(EventUpValInfo_TypeInfo);
    EventUpValInfo___ctor(v17, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v17;
    v18 = v12[2].monitor;
    if ( v18 )
    {
      if ( v16 >= (unsigned int)v18[6] )
        sub_1B88814(Instance, v10);
      if ( MasterData_object )
      {
        Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v18[v16 + 8], 1, 0LL);
        if ( Instance )
        {
          Instance = SkillLvEntity__getEventUpVal_39954432(
                       (SkillLvEntity_o *)Instance,
                       &eventUpVallInfo,
                       1,
                       1,
                       0,
                       1,
                       0LL,
                       0LL);
          if ( eventUpVallInfo )
          {
            Instance = (__int64)eventUpVallInfo->fields.dropList;
            if ( Instance )
            {
              if ( *(_DWORD *)(Instance + 24) )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v33,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v34 = v33;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v34,
                          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v34.fields._current;
                  v20 = (EventDropItemUpValInfo_o *)sub_1B887FC(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v20, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
                  v21 = sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v21, v20, 0LL);
                  if ( !current )
                    sub_1B8880C(v22, v23);
                  if ( !v21 )
                    sub_1B8880C(v22, v23);
                  *(_QWORD *)(v21 + 92) = current[2].monitor;
                  if ( !v14 )
                    sub_1B8880C(v22, v23);
                  items = v14->fields._items;
                  v25 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                  ++v14->fields._version;
                  if ( !items )
                    sub_1B8880C(v22, v23);
                  size = v14->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v14,
                      (Il2CppObject *)v21,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27 = &items->obj.klass + size;
                    v14->fields._size = size + 1;
                    v27[4] = (Il2CppClass *)v21;
                    sub_1B88554(v27 + 4, v21);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v34,
                  (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v12[2].monitor;
              ++v16;
              if ( monitor )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_49;
  }
  Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v28 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v29 = **(Il2CppObject ***)(Instance + 184);
    v28 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(
      v28,
      v29,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v28;
    Instance = sub_1B88554(&static_fields->__9__14_0, v28);
  }
  if ( !v14
    || (System_Collections_Generic_List_object___Sort_55571192(
          v14,
          v28,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = this->fields.eventUpValIcon,
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v14,
                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_49:
    sub_1B8880C(Instance, v10);
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

  if ( (byte_4A56318 & 1) == 0 )
  {
    sub_1B885B0(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    byte_4A56318 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v1;
  sub_1B88554(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields, v1);
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
    sub_1B8880C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B8880C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}