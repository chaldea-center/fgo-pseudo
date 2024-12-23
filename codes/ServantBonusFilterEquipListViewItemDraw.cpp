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

  if ( (byte_4B622BC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__, method);
    byte_4B622BC = 1;
  }
  v3 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BE4AE4(Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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
  _BOOL4 v13; // w24
  System_String_o **v14; // x8
  UILabel_o *v15; // x19
  float *v16; // x11
  float *v17; // x8
  float *v18; // x9
  float *v19; // x10
  float *v20; // x11
  UILabel_o *buttonLabel; // x20
  _BOOL4 isButtonLabelOnOff; // w22
  System_String_o **v23; // x8
  float *v24; // x11
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B622BD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v3);
    sub_1BE4ACC(&StringLiteral_11976/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v4);
    sub_1BE4ACC(&StringLiteral_3816/*"COMMON_ON"*/, v5);
    sub_1BE4ACC(&StringLiteral_3815/*"COMMON_OFF"*/, v6);
    sub_1BE4ACC(&StringLiteral_11977/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v7);
    sub_1BE4ACC(&StringLiteral_17709/*"btn_bg_off"*/, v8);
    sub_1BE4ACC(&StringLiteral_17714/*"btn_bg_on"*/, v9);
    byte_4B622BD = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_34;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_34;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17714/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = (System_String_o **)&StringLiteral_11976/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    if ( isButtonLabelOnOff )
      v23 = (System_String_o **)&StringLiteral_3816/*"COMMON_ON"*/;
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v23, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v15 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4B61A56 )
      {
        sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
        byte_4B61A56 = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v15 )
      {
        v24 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
        v17 = v24 + 27;
        v18 = v24 + 26;
        v19 = v24 + 25;
        v20 = v24 + 24;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1BE4D28(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17709/*"btn_bg_off"*/, 0LL);
  v12 = this->fields.buttonLabel;
  v13 = this->fields.isButtonLabelOnOff;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v13 )
    v14 = (System_String_o **)&StringLiteral_3815/*"COMMON_OFF"*/;
  else
    v14 = (System_String_o **)&StringLiteral_11977/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v14, 0LL);
  if ( !v12 )
    goto LABEL_34;
  UILabel__set_text(v12, (System_String_o *)changeDisplayButton, 0LL);
  v15 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B61A55 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    byte_4B61A55 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_34;
  v16 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
  v17 = v16 + 23;
  v18 = v16 + 22;
  v19 = v16 + 21;
  v20 = v16 + 20;
LABEL_33:
  v25.fields.a = *v17;
  v25.fields.b = *v18;
  v25.fields.g = *v19;
  v25.fields.r = *v20;
  UILabel__set_effectColor(v15, v25, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_1BE4D28(0LL, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_70409708(this->fields.saveKey, 0LL) == this->fields.saveId )
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
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = idx;
  if ( (byte_4B622B8 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3342/*"BonusFilterEquipId"*/, *(_QWORD *)&idx);
    byte_4B622B8 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_62698808((System_String_o *)StringLiteral_3342/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_32053012(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_32053012(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
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
  __int64 v27; // x24
  __int64 v28; // x25
  int32_t v29; // w25
  EquipTargetInfo_o *v30; // x24
  UILabel_o *equipNameLabel; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v33; // w0
  System_Collections_Generic_List_object__o *v34; // x22
  signed int max_length; // w8
  ServantBonusFilterEquipListViewItemDraw_o *v36; // x13
  il2cpp_array_size_t v37; // w27
  char v38; // w9
  Il2CppClass **v39; // x24
  Il2CppClass *v40; // x11
  char *v41; // x24
  Il2CppClass *v42; // t1
  Il2CppClass **v43; // x25
  Il2CppClass *v44; // x8
  char *v45; // x25
  Il2CppClass *v46; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v48; // x0
  SkillInfo_o *v49; // x8
  Il2CppObject *current; // x24
  EventDropItemUpValInfo_o *v51; // x25
  __int64 v52; // x23
  __int64 v53; // x0
  __int64 v54; // x1
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v63; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v63 = this;
  if ( (byte_4B622B9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, equipEntity);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v12);
    sub_1BE4ACC(&EquipTargetInfo_TypeInfo, v13);
    sub_1BE4ACC(&EventDropItemUpValInfo_TypeInfo, v14);
    sub_1BE4ACC(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v20);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v21);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v23);
    sub_1BE4ACC(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__, v24);
    sub_1BE4ACC(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v25);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1BE4ACC(&StringLiteral_156/*" + "*/, v26);
    byte_4B622B9 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  if ( !equipEntity )
    goto LABEL_58;
  v28 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v27 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v66, 0LL);
  v30 = (EquipTargetInfo_o *)sub_1BE4D18(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_39799056(v30, v29, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v63->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_58;
  ServantFaceIconComponent__Set_39131180((ServantFaceIconComponent_o *)this, v30, 0LL, 0LL, 0LL);
  equipNameLabel = v63->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_58;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(equipEntity->fields.id, 0LL);
  v63->fields.saveKey = saveKey;
  v63->fields.saveId = v33;
  sub_1BE4A70(&v63->fields.saveKey);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !skillInfos )
    goto LABEL_58;
  max_length = skillInfos->max_length;
  v36 = v63;
  if ( max_length >= 1 )
  {
    v37 = 0;
    v38 = 1;
    while ( eventUpValInfos )
    {
      if ( v37 >= eventUpValInfos->max_length )
        goto LABEL_59;
      v39 = &eventUpValInfos->obj.klass + (int)v37;
      v42 = v39[4];
      v41 = (char *)(v39 + 4);
      v40 = v42;
      if ( !v42 )
        break;
      if ( LODWORD(v40->_1.namespaze) == v36->fields.saveId )
      {
        if ( (v38 & 1) != 0 )
        {
          if ( v37 >= max_length )
            goto LABEL_59;
          v43 = &skillInfos->obj.klass + (int)v37;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v36->fields.skillIcon;
          v46 = v43[4];
          v45 = (char *)(v43 + 4);
          v44 = v46;
          if ( !v46 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v44->_1.name, 0LL);
          skillTextLabel = v63->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v37 >= skillInfos->max_length )
            goto LABEL_59;
          if ( !*(_QWORD *)v45 )
            break;
          v48 = System_String__Concat_62698808(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v45 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v36->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v37 >= max_length )
LABEL_59:
            sub_1BE4D30(this, equipEntity);
          v49 = skillInfos->m_Items[v37];
          if ( !v49 )
            break;
          v48 = System_String__Concat_62710068(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_156/*" + "*/,
                  v49->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v48, 0LL);
        if ( v37 >= eventUpValInfos->max_length )
          goto LABEL_59;
        if ( !*(_QWORD *)v41 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v41 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v64,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v65 = v64;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v65,
                  (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v65.fields._current;
          v51 = (EventDropItemUpValInfo_o *)sub_1BE4D18(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v51, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
          v52 = sub_1BE4D18(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v52, v51, 0LL);
          if ( !current )
            sub_1BE4D28(v53, v54);
          if ( !v52 )
            sub_1BE4D28(v53, v54);
          *(_QWORD *)(v52 + 92) = current[2].monitor;
          if ( !v34 )
            sub_1BE4D28(v53, v54);
          items = v34->fields._items;
          v56 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v34->fields._version;
          if ( !items )
            sub_1BE4D28(v53, v54);
          size = v34->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)v52,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &items->obj.klass + size;
            v34->fields._size = size + 1;
            v58[4] = (Il2CppClass *)v52;
            sub_1BE4A70(v58 + 4);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v65,
          (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v36 = v63;
        v38 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_48;
    }
LABEL_58:
    sub_1BE4D28(this, equipEntity);
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
    monitor = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)monitor;
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1BE4A70(&static_fields->__9__12_0);
  }
  if ( !v34 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_56548584(
    v34,
    monitor,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v63->fields.skillTextLabel;
  if ( !this )
    goto LABEL_58;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    (System_String_o *)this[3].fields.buttonLabel,
    *(_DWORD *)&this[3].fields.isButtonOn,
    0,
    0LL);
  eventUpValIcon = v63->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v34,
                                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_58;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_32054640(
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
  if ( (byte_4B622BA & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_3344/*"BonusFilterGroupId"*/, *(_QWORD *)&idx);
    byte_4B622BA = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_62698808((System_String_o *)StringLiteral_3344/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_32054784(this, eventIdList, filterGroupId, v9, v10);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_32054784(
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
  __int64 Instance; // x0
  __int64 v31; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v33; // x21
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v35; // x20
  int *monitor; // x8
  unsigned __int64 v37; // x28
  EventUpValInfo_o *v38; // x24
  _DWORD *v39; // x8
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v41; // x26
  __int64 v42; // x24
  __int64 v43; // x0
  __int64 v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Comparison_T__o *v49; // x21
  Il2CppObject *v50; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+30h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B622BB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, eventIdList);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1BE4ACC(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v15);
    sub_1BE4ACC(&EventDropItemUpValInfo_TypeInfo, v16);
    sub_1BE4ACC(&EventMargeItemUpValInfo_TypeInfo, v17);
    sub_1BE4ACC(&EventUpValInfo_TypeInfo, v18);
    sub_1BE4ACC(&EventUpValSetupInfo_TypeInfo, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v24);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v25);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1BE4ACC(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__, v28);
    sub_1BE4ACC(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v29);
    byte_4B622BB = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v55, 0, sizeof(v55));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_49;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v33 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_1BE4A70(&this->fields.saveKey);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (__int64)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_49;
  ServantFaceIconComponent__SetEventBonus(
    (ServantFaceIconComponent_o *)Instance,
    (int32_t)v33[2].klass,
    HIDWORD(v33[2].klass),
    0LL);
  Instance = (__int64)this->fields.equipNameLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v33[1].monitor, 0LL);
  Instance = (__int64)this->fields.skillIcon;
  if ( !Instance )
    goto LABEL_49;
  SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v33[3].monitor, 0LL);
  Instance = (__int64)this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v33[3].klass, 0LL);
  Instance = (__int64)this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_49;
  WrapControlText__textAdjust(
    (UILabel_o *)Instance,
    *(System_String_o **)(Instance + 416),
    *(_DWORD *)(Instance + 424),
    0,
    0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_1BE4D18(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_39826336(setupInfo, eventIdList, 0, 0, 0, 0LL);
  monitor = (int *)v33[2].monitor;
  if ( !monitor )
    goto LABEL_49;
  v37 = 0LL;
  while ( (__int64)v37 < monitor[6] )
  {
    v38 = (EventUpValInfo_o *)sub_1BE4D18(EventUpValInfo_TypeInfo);
    EventUpValInfo___ctor(v38, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v38;
    v39 = v33[2].monitor;
    if ( v39 )
    {
      if ( v37 >= (unsigned int)v39[6] )
        sub_1BE4D30(Instance, v31);
      if ( MasterData_object )
      {
        Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v39[v37 + 8], 1, 0LL);
        if ( Instance )
        {
          Instance = SkillLvEntity__getEventUpVal_40907544(
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
                  (System_Collections_Generic_List_Enumerator_T__o *)&v54,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v55 = v54;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v55,
                          (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v55.fields._current;
                  v41 = (EventDropItemUpValInfo_o *)sub_1BE4D18(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v41, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
                  v42 = sub_1BE4D18(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v42, v41, 0LL);
                  if ( !current )
                    sub_1BE4D28(v43, v44);
                  if ( !v42 )
                    sub_1BE4D28(v43, v44);
                  *(_QWORD *)(v42 + 92) = current[2].monitor;
                  if ( !v35 )
                    sub_1BE4D28(v43, v44);
                  items = v35->fields._items;
                  v46 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                  ++v35->fields._version;
                  if ( !items )
                    sub_1BE4D28(v43, v44);
                  size = v35->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v35,
                      (Il2CppObject *)v42,
                      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v48 = &items->obj.klass + size;
                    v35->fields._size = size + 1;
                    v48[4] = (Il2CppClass *)v42;
                    sub_1BE4A70(v48 + 4);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v55,
                  (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v33[2].monitor;
              ++v37;
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
  v49 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v49 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v50 = **(Il2CppObject ***)(Instance + 184);
    v49 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(
      v49,
      v50,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v49;
    Instance = sub_1BE4A70(&static_fields->__9__14_0);
  }
  if ( !v35
    || (System_Collections_Generic_List_object___Sort_56548584(
          v35,
          v49,
          (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = this->fields.eventUpValIcon,
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v35,
                              (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_49:
    sub_1BE4D28(Instance, v31);
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

  if ( (byte_4B622BE & 1) == 0 )
  {
    sub_1BE4ACC(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1);
    byte_4B622BE = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v2;
  sub_1BE4A70(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields);
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
    sub_1BE4D28(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BE4D28(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}