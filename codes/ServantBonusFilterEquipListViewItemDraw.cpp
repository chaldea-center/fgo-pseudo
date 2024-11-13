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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1195F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__, method, v2);
    byte_4B1195F = 1;
  }
  v4 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  this->fields.isButtonOn ^= 1u;
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Component_o *changeDisplayButton; // x0
  _BOOL4 isButtonOn; // w20
  __int64 v20; // x1
  UILabel_o *v21; // x20
  _BOOL4 v22; // w24
  System_String_o **v23; // x8
  __int64 v24; // x2
  UILabel_o *v25; // x19
  float *v26; // x11
  float *v27; // x8
  float *v28; // x9
  float *v29; // x10
  float *v30; // x11
  __int64 v31; // x1
  UILabel_o *buttonLabel; // x20
  _BOOL4 isButtonLabelOnOff; // w22
  System_String_o **v34; // x8
  __int64 v35; // x2
  float *v36; // x11
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11960 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_11944/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3807/*"COMMON_ON"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3806/*"COMMON_OFF"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_11945/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17662/*"btn_bg_off"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17667/*"btn_bg_on"*/, v16, v17);
    byte_4B11960 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_34;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_34;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17667/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
    v34 = (System_String_o **)&StringLiteral_11944/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    if ( isButtonLabelOnOff )
      v34 = (System_String_o **)&StringLiteral_3807/*"COMMON_ON"*/;
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v34, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v25 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
      if ( !byte_4B11134 )
      {
        sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v35);
        byte_4B11134 = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v25 )
      {
        v36 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
        v27 = v36 + 27;
        v28 = v36 + 26;
        v29 = v36 + 25;
        v30 = v36 + 24;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1BCAA3C(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17662/*"btn_bg_off"*/, 0LL);
  v21 = this->fields.buttonLabel;
  v22 = this->fields.isButtonLabelOnOff;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  if ( v22 )
    v23 = (System_String_o **)&StringLiteral_3806/*"COMMON_OFF"*/;
  else
    v23 = (System_String_o **)&StringLiteral_11945/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v23, 0LL);
  if ( !v21 )
    goto LABEL_34;
  UILabel__set_text(v21, (System_String_o *)changeDisplayButton, 0LL);
  v25 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v24);
    byte_4B11133 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v25 )
    goto LABEL_34;
  v26 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
  v27 = v26 + 23;
  v28 = v26 + 22;
  v29 = v26 + 21;
  v30 = v26 + 20;
LABEL_33:
  v37.fields.a = *v27;
  v37.fields.b = *v28;
  v37.fields.g = *v29;
  v37.fields.r = *v30;
  UILabel__set_effectColor(v25, v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_1BCAA3C(0LL, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_70111952(this->fields.saveKey, 0LL) == this->fields.saveId )
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
  if ( (byte_4B1195B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3334/*"BonusFilterEquipId"*/, *(_QWORD *)&idx, equipEntity);
    byte_4B1195B = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_62401220((System_String_o *)StringLiteral_3334/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_31922200(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_31922200(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x24
  __int64 v45; // x25
  int32_t v46; // w25
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  EquipTargetInfo_o *v50; // x24
  UILabel_o *equipNameLabel; // x24
  __int64 v52; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v54; // w0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_object__o *v58; // x22
  __int64 v59; // x2
  __int64 v60; // x3
  signed int max_length; // w8
  ServantBonusFilterEquipListViewItemDraw_o *v62; // x13
  il2cpp_array_size_t v63; // w27
  char v64; // w9
  Il2CppClass **v65; // x24
  Il2CppClass *v66; // x11
  char *v67; // x24
  Il2CppClass *v68; // t1
  Il2CppClass **v69; // x25
  Il2CppClass *v70; // x8
  char *v71; // x25
  Il2CppClass *v72; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v74; // x0
  SkillInfo_o *v75; // x8
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  Il2CppObject *current; // x24
  EventDropItemUpValInfo_o *v80; // x25
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x23
  __int64 v85; // x0
  __int64 v86; // x1
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 size; // x10
  Il2CppClass **v90; // x0
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v95; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  v95 = this;
  if ( (byte_4B1195C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, equipEntity, eventUpValInfos);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v14, v15);
    sub_1BCA7E0(&EquipTargetInfo_TypeInfo, v16, v17);
    sub_1BCA7E0(&EventDropItemUpValInfo_TypeInfo, v18, v19);
    sub_1BCA7E0(&EventMargeItemUpValInfo_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v32, v33);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__, v38, v39);
    sub_1BCA7E0(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v40, v41);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_156/*" + "*/, v42, v43);
    byte_4B1195C = 1;
  }
  memset(&v97, 0, sizeof(v97));
  if ( !equipEntity )
    goto LABEL_58;
  v45 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v44 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipEntity);
  *(_QWORD *)&v98.fields.currentCryptoKey = v45;
  *(_QWORD *)&v98.fields.fakeValue = v44;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v98, 0LL);
  v50 = (EquipTargetInfo_o *)sub_1BCAA2C(EquipTargetInfo_TypeInfo, v47, v48, v49);
  EquipTargetInfo___ctor_39602340(v50, v46, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v95->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_58;
  ServantFaceIconComponent__Set_38936924((ServantFaceIconComponent_o *)this, v50, 0LL, 0LL, 0LL);
  equipNameLabel = v95->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v52);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_58;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(equipEntity->fields.id, 0LL);
  v95->fields.saveKey = saveKey;
  v95->fields.saveId = v54;
  sub_1BCA784(&v95->fields.saveKey, saveKey);
  v58 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       v55,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !skillInfos )
    goto LABEL_58;
  max_length = skillInfos->max_length;
  v62 = v95;
  if ( max_length >= 1 )
  {
    v63 = 0;
    v64 = 1;
    while ( eventUpValInfos )
    {
      if ( v63 >= eventUpValInfos->max_length )
        goto LABEL_59;
      v65 = &eventUpValInfos->obj.klass + (int)v63;
      v68 = v65[4];
      v67 = (char *)(v65 + 4);
      v66 = v68;
      if ( !v68 )
        break;
      if ( LODWORD(v66->_1.namespaze) == v62->fields.saveId )
      {
        if ( (v64 & 1) != 0 )
        {
          if ( v63 >= max_length )
            goto LABEL_59;
          v69 = &skillInfos->obj.klass + (int)v63;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v62->fields.skillIcon;
          v72 = v69[4];
          v71 = (char *)(v69 + 4);
          v70 = v72;
          if ( !v72 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v70->_1.name, 0LL);
          skillTextLabel = v95->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v63 >= skillInfos->max_length )
            goto LABEL_59;
          if ( !*(_QWORD *)v71 )
            break;
          v74 = System_String__Concat_62401220(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v71 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v62->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v63 >= max_length )
LABEL_59:
            sub_1BCAA44(this, equipEntity);
          v75 = skillInfos->m_Items[v63];
          if ( !v75 )
            break;
          v74 = System_String__Concat_62412480(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_156/*" + "*/,
                  v75->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v74, 0LL);
        if ( v63 >= eventUpValInfos->max_length )
          goto LABEL_59;
        if ( !*(_QWORD *)v67 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v67 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v96,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v97 = v96;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v97,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v97.fields._current;
          v80 = (EventDropItemUpValInfo_o *)sub_1BCAA2C(EventDropItemUpValInfo_TypeInfo, v76, v77, v78);
          EventDropItemUpValInfo___ctor(v80, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
          v84 = sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v81, v82, v83);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v84, v80, 0LL);
          if ( !current )
            sub_1BCAA3C(v85, v86);
          if ( !v84 )
            sub_1BCAA3C(v85, v86);
          *(_QWORD *)(v84 + 92) = current[2].monitor;
          if ( !v58 )
            sub_1BCAA3C(v85, v86);
          items = v58->fields._items;
          v88 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v58->fields._version;
          if ( !items )
            sub_1BCAA3C(v85, v86);
          size = v58->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v58,
              (Il2CppObject *)v84,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v90 = &items->obj.klass + size;
            v58->fields._size = size + 1;
            v90[4] = (Il2CppClass *)v84;
            sub_1BCA784(v90 + 4, v84);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v97,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v62 = v95;
        v64 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v63 >= max_length )
        goto LABEL_48;
    }
LABEL_58:
    sub_1BCAA3C(this, equipEntity);
  }
LABEL_48:
  this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, equipEntity);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  monitor = (System_Comparison_T__o *)this[1].fields.changeDisplayButton->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[2].klass) )
    {
      j_il2cpp_runtime_class_init_0(this, equipEntity);
      this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[1].fields.changeDisplayButton->klass;
    monitor = (System_Comparison_T__o *)sub_1BCAA2C(
                                          System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                          equipEntity,
                                          v59,
                                          v60);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)monitor;
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1BCA784(&static_fields->__9__12_0, monitor);
  }
  if ( !v58 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_56244000(
    v58,
    monitor,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v95->fields.skillTextLabel;
  if ( !this )
    goto LABEL_58;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    (System_String_o *)this[3].fields.buttonLabel,
    *(_DWORD *)&this[3].fields.isButtonOn,
    0,
    0,
    0LL);
  eventUpValIcon = v95->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v58,
                                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_58;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_31923832(
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
  if ( (byte_4B1195D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3336/*"BonusFilterGroupId"*/, *(_QWORD *)&idx, eventIdList);
    byte_4B1195D = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_62401220((System_String_o *)StringLiteral_3336/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_31923976(this, eventIdList, filterGroupId, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_31923976(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 Instance; // x0
  __int64 v52; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v54; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_List_object__o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x2
  __int64 v64; // x3
  int *monitor; // x8
  unsigned __int64 v66; // x28
  EventUpValInfo_o *v67; // x24
  _DWORD *v68; // x8
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v73; // x26
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x24
  __int64 v78; // x0
  __int64 v79; // x1
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  System_Comparison_T__o *v84; // x21
  Il2CppObject *v85; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+30h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4B1195E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, eventIdList, *(_QWORD *)&filterGroupId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v13, v14);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v15,
      v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v21, v22);
    sub_1BCA7E0(&EventDropItemUpValInfo_TypeInfo, v23, v24);
    sub_1BCA7E0(&EventMargeItemUpValInfo_TypeInfo, v25, v26);
    sub_1BCA7E0(&EventUpValInfo_TypeInfo, v27, v28);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v41, v42);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46);
    sub_1BCA7E0(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__, v47, v48);
    sub_1BCA7E0(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v49, v50);
    byte_4B1195E = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v90, 0, sizeof(v90));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_49;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v54 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_1BCA784(&this->fields.saveKey, saveKey);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v59 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       v56,
                                                       v57,
                                                       v58);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (__int64)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_49;
  ServantFaceIconComponent__SetEventBonus(
    (ServantFaceIconComponent_o *)Instance,
    (int32_t)v54[2].klass,
    HIDWORD(v54[2].klass),
    0LL);
  Instance = (__int64)this->fields.equipNameLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v54[1].monitor, 0LL);
  Instance = (__int64)this->fields.skillIcon;
  if ( !Instance )
    goto LABEL_49;
  SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v54[3].monitor, 0LL);
  Instance = (__int64)this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v54[3].klass, 0LL);
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
  setupInfo = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v60, v61, v62);
  EventUpValSetupInfo___ctor_39629568(setupInfo, eventIdList, 0, 0, 0, 0LL);
  monitor = (int *)v54[2].monitor;
  if ( !monitor )
    goto LABEL_49;
  v66 = 0LL;
  while ( (__int64)v66 < monitor[6] )
  {
    v67 = (EventUpValInfo_o *)sub_1BCAA2C(EventUpValInfo_TypeInfo, v52, v63, v64);
    EventUpValInfo___ctor(v67, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v67;
    v68 = v54[2].monitor;
    if ( v68 )
    {
      if ( v66 >= (unsigned int)v68[6] )
        sub_1BCAA44(Instance, v52);
      if ( MasterData_object )
      {
        Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v68[v66 + 8], 1, 0LL);
        if ( Instance )
        {
          Instance = SkillLvEntity__getEventUpVal_40683416(
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
                  (System_Collections_Generic_List_Enumerator_T__o *)&v89,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v90 = v89;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v90,
                          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v90.fields._current;
                  v73 = (EventDropItemUpValInfo_o *)sub_1BCAA2C(EventDropItemUpValInfo_TypeInfo, v69, v70, v71);
                  EventDropItemUpValInfo___ctor(v73, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
                  v77 = sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v74, v75, v76);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v77, v73, 0LL);
                  if ( !current )
                    sub_1BCAA3C(v78, v79);
                  if ( !v77 )
                    sub_1BCAA3C(v78, v79);
                  *(_QWORD *)(v77 + 92) = current[2].monitor;
                  if ( !v59 )
                    sub_1BCAA3C(v78, v79);
                  items = v59->fields._items;
                  v81 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                  ++v59->fields._version;
                  if ( !items )
                    sub_1BCAA3C(v78, v79);
                  size = v59->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v59,
                      (Il2CppObject *)v77,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v83 = &items->obj.klass + size;
                    v59->fields._size = size + 1;
                    v83[4] = (Il2CppClass *)v77;
                    sub_1BCA784(v83 + 4, v77);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v90,
                  (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v54[2].monitor;
              ++v66;
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
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v52);
    Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  v84 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v84 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v52);
      Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v85 = **(Il2CppObject ***)(Instance + 184);
    v84 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMargeItemUpValInfo__TypeInfo, v52, v63, v64);
    System_Comparison_object____ctor(
      v84,
      v85,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v84;
    Instance = sub_1BCA784(&static_fields->__9__14_0, v84);
  }
  if ( !v59
    || (System_Collections_Generic_List_object___Sort_56244000(
          v59,
          v84,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = this->fields.eventUpValIcon,
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v59,
                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_49:
    sub_1BCAA3C(Instance, v52);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11961 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1, v2);
    byte_4B11961 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v4;
  sub_1BCA784(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCAA3C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}