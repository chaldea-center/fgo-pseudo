void __fastcall BattleCommandComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct BattleCommandComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct BattleCommandComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  BattleCommandComponent_c *v11; // x8
  int32_t v17; // w1
  struct BattleCommandComponent_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  struct BattleCommandComponent_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5DA18 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_20092/*"icon_cardsealed_quick"*/);
    sub_1B885B0(&StringLiteral_23061/*"se_"*/);
    sub_1B885B0(&StringLiteral_20089/*"icon_cardsealed_arts"*/);
    sub_1B885B0(&StringLiteral_20091/*"icon_cardsealed_buster"*/);
    sub_1B885B0(&StringLiteral_24500/*"v_"*/);
    byte_4A5DA18 = 1;
  }
  BattleCommandComponent_TypeInfo->static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_20089/*"icon_cardsealed_arts"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleCommandComponent_TypeInfo->static_fields,
    StringLiteral_20089/*"icon_cardsealed_arts"*/,
    v1,
    v2);
  v3 = StringLiteral_20091/*"icon_cardsealed_buster"*/;
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  static_fields->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_20091/*"icon_cardsealed_buster"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SEALED_CARDTYPE_ICON_BUSTER, v3, v5, v6);
  v7 = StringLiteral_20092/*"icon_cardsealed_quick"*/;
  v8 = BattleCommandComponent_TypeInfo->static_fields;
  v8->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_20092/*"icon_cardsealed_quick"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->SEALED_CARDTYPE_ICON_QUICK, v7, v9, v10);
  v11 = BattleCommandComponent_TypeInfo;
  __asm { FMOV            V0.4S, #1.0 }
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = _Q0;
  v11->static_fields->CriticalLabelGradientBottomOnDefault = (struct UnityEngine_Color_o)xmmword_BB5860;
  v11->static_fields->CriticalNumberLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_BB42E0;
  v11->static_fields->CriticalNumberLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_BB5930;
  v11->static_fields->CriticalPercentLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_BB4B40;
  v11->static_fields->CriticalPercentLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_BB4D30;
  v17 = StringLiteral_24500/*"v_"*/;
  v18 = v11->static_fields;
  v18->voiceIdPrefix = (struct System_String_o *)StringLiteral_24500/*"v_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->voiceIdPrefix, v17, v19, v20);
  v21 = StringLiteral_23061/*"se_"*/;
  v22 = BattleCommandComponent_TypeInfo->static_fields;
  v22->seIdPrefix = (struct System_String_o *)StringLiteral_23061/*"se_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->seIdPrefix, v21, v23, v24);
}


void __fastcall BattleCommandComponent___ctor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct UnityEngine_GameObject_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_Array_o *v9; // x0
  struct BuffList_TYPE_array *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_Array_o *v13; // x0
  struct BuffList_TYPE_array *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Array_o *v17; // x0
  struct BuffList_TYPE_array *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_Array_o *v21; // x0
  struct BuffList_TYPE_array *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_Dictionary_object__object__o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_RuntimeFieldHandle_o v31; // 0:w1.4
  System_RuntimeFieldHandle_o v32; // 0:w1.4
  System_RuntimeFieldHandle_o v33; // 0:w1.4
  System_RuntimeFieldHandle_o v34; // 0:w1.4

  if ( (byte_4A5DA17 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1B885B0(&BuffList_TYPE___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437);
    sub_1B885B0(&Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870);
    sub_1B885B0(&Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9);
    sub_1B885B0(&Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468);
    byte_4A5DA17 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 6LL);
  this->fields.effectobj = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectobj, (int32_t)v3, v4, v5);
  v6 = (struct UnityEngine_GameObject_array *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.addObjectList = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.addObjectList, (int32_t)v6, v7, v8);
  v9 = (System_Array_o *)sub_1B88658(BuffList_TYPE___TypeInfo, 13LL);
  v31.fields.value = Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870;
  v10 = (struct BuffList_TYPE_array *)v9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v9, v31, 0LL);
  this->fields.qabTypes = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.qabTypes, (int32_t)v10, v11, v12);
  v13 = (System_Array_o *)sub_1B88658(BuffList_TYPE___TypeInfo, 4LL);
  v32.fields.value = Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437;
  v14 = (struct BuffList_TYPE_array *)v13;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v13, v32, 0LL);
  this->fields.noneTdQabTypes = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.noneTdQabTypes, (int32_t)v14, v15, v16);
  v17 = (System_Array_o *)sub_1B88658(BuffList_TYPE___TypeInfo, 3LL);
  v33.fields.value = Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468;
  v18 = (struct BuffList_TYPE_array *)v17;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v17, v33, 0LL);
  this->fields.tdTypes = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tdTypes, (int32_t)v18, v19, v20);
  v21 = (System_Array_o *)sub_1B88658(BuffList_TYPE___TypeInfo, 15LL);
  v34.fields.value = Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9;
  v22 = (struct BuffList_TYPE_array *)v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v21, v34, 0LL);
  this->fields.otherTypes = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.otherTypes, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.specialCardBuffList, (int32_t)v25, v26, v27);
  this->fields.cardBuffAlphaFor = 1.0;
  v28 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v28,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cardEffectDict, (int32_t)v28, v29, v30);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__AddBoostedCriticalRate(
        BattleCommandComponent_o *this,
        int32_t toAdd,
        const MethodInfo *method)
{
  BattleCommandData_o *data; // x0
  int32_t CriticalPoint; // w0
  int32_t boostedCriticalRate; // w8
  int32_t v8; // w9
  int32_t v9; // w10
  int32_t v10; // w9
  const MethodInfo *v11; // x2

  data = this->fields.data;
  if ( data )
  {
    CriticalPoint = BattleCommandData__getCriticalPoint(data, 0LL);
    boostedCriticalRate = this->fields.boostedCriticalRate;
    v8 = 100 - (CriticalPoint + boostedCriticalRate);
    if ( v8 <= toAdd )
      v9 = 100 - (CriticalPoint + boostedCriticalRate);
    else
      v9 = toAdd;
    if ( v8 >= 0 )
      v10 = v9;
    else
      v10 = 0;
  }
  else
  {
    boostedCriticalRate = this->fields.boostedCriticalRate;
    if ( toAdd >= 100 )
      v10 = 100;
    else
      v10 = toAdd;
  }
  this->fields.boostedCriticalRate = v10 + boostedCriticalRate;
  BattleCommandComponent__ChangeCriticalLabelColor(this, *(const MethodInfo **)&toAdd);
  BattleCommandComponent__updateCount(this, 0, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__CardEffectSetActive(
        BattleCommandComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  bool v6; // w19
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5DA0F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_4A5DA0F = 1;
  }
  memset(&v8, 0, sizeof(v8));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_31C6FF8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_1B8880C(cardEffectDict, value);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_382E608 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v6 = value;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v8,
            (const MethodInfo_32C5290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v8.fields._currentValue )
      sub_1B8880C(0LL, v7);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8.fields._currentValue, v6, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v8,
    (const MethodInfo_32C528C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCardEffectMaskForInside(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  __int64 v4; // x1
  System_Object_array *ComponentsInChildren_object__49085148; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x19
  int max_length; // w8
  int i; // w23
  UnityEngine_ParticleSystemRenderer_o *v10; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5DA11 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_4A5DA11 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_31C6FF8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_1B8880C(cardEffectDict, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_382E608 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v12,
            (const MethodInfo_32C5290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v12.fields._currentValue )
      sub_1B8880C(0LL, v4);
    ComponentsInChildren_object__49085148 = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                              (UnityEngine_GameObject_o *)v12.fields._currentValue,
                                              (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v7 = ComponentsInChildren_object__49085148;
    if ( !ComponentsInChildren_object__49085148 )
      sub_1B8880C(0LL, v6);
    max_length = ComponentsInChildren_object__49085148->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1B88814(ComponentsInChildren_object__49085148, v6);
        v10 = (UnityEngine_ParticleSystemRenderer_o *)v7->m_Items[i];
        if ( !v10 )
          sub_1B8880C(0LL, v6);
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v10, 1, 0LL);
        max_length = v7->max_length;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v12,
    (const MethodInfo_32C528C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  void *criticallabel; // x0
  int v4; // w8
  void *v5; // x20
  unsigned int v6; // w23
  UILabel_o *v7; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4A5D9CA & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76107632);
    byte_4A5D9CA = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76107632);
  if ( !criticallabel )
    goto LABEL_17;
  v4 = *((_DWORD *)criticallabel + 6);
  v5 = criticallabel;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v4 )
        sub_1B88814(criticallabel, method);
      criticallabel = BattleCommandComponent_TypeInfo;
      v7 = (UILabel_o *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v7 )
        break;
      UILabel__set_gradientTop(v7, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 56LL), 0LL);
      UILabel__set_gradientBottom(
        v7,
        BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted,
        0LL);
      v4 = *((_DWORD *)v5 + 6);
      if ( (int)++v6 >= v4 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1B8880C(criticallabel, method);
  }
LABEL_12:
  criticallabel = BattleCommandComponent_TypeInfo;
  criticalPercentLabel = this->fields.criticalPercentLabel;
  if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    criticallabel = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_17;
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 88LL), 0LL);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_17;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientBottomOnBoosted,
    0LL);
}


void __fastcall BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_object__o *specialCardBuffList; // x0
  int32_t cardBuffListIndex; // w1
  int items; // w8

  if ( (byte_4A5DA0B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    byte_4A5DA0B = 1;
  }
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !specialCardBuffList )
    goto LABEL_11;
  cardBuffListIndex = this->fields.cardBuffListIndex;
  if ( specialCardBuffList->fields._size <= cardBuffListIndex )
  {
LABEL_9:
    BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v2);
    return;
  }
  specialCardBuffList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       specialCardBuffList,
                                                                       cardBuffListIndex,
                                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
  if ( !specialCardBuffList )
LABEL_11:
    sub_1B8880C(specialCardBuffList, method);
  items = (int)specialCardBuffList->fields._items;
  if ( items != 156 )
  {
    if ( items == 131 )
    {
      BattleCommandComponent__UpdateFixedCommandCard(this, method);
      return;
    }
    goto LABEL_9;
  }
  BattleCommandComponent__UpdateCommandCardTypeChange(this, method);
}


UISprite_o *__fastcall BattleCommandComponent__ChoiceUnusableMarkSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v4; // x1
  UISprite_o **p_donotPermanentSleep; // x8
  UISprite_o *result; // x0

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1B8880C(0LL, v4);
  switch ( BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL) )
  {
    case 0:
      p_donotPermanentSleep = &this->fields.donotPermanentSleep;
      goto LABEL_12;
    case 1:
      p_donotPermanentSleep = &this->fields.donotsleepSprite;
      goto LABEL_12;
    case 2:
      p_donotPermanentSleep = &this->fields.donotactSprite;
      goto LABEL_12;
    case 3:
    case 5:
      p_donotPermanentSleep = &this->fields.sealedSprite;
      goto LABEL_12;
    case 4:
      p_donotPermanentSleep = &this->fields.dontuseSprite;
      goto LABEL_12;
    case 6:
      p_donotPermanentSleep = &this->fields.unusableShortageStarSprite;
      goto LABEL_12;
    case 7:
      p_donotPermanentSleep = &this->fields.unusableNpSprite;
      goto LABEL_12;
    case 8:
    case 9:
      p_donotPermanentSleep = &this->fields.donotActWithTypeSp;
      goto LABEL_12;
    case 10:
      p_donotPermanentSleep = &this->fields.treasureDeviceErrorSprite;
LABEL_12:
      result = *p_donotPermanentSleep;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


void __fastcall BattleCommandComponent__ClearCardEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v5; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5DA10 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_4A5DA10 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
    goto LABEL_12;
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                cardEffectDict,
                                                                                (const MethodInfo_31C6FF8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !cardEffectDict )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v5,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_382E608 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v5,
            (const MethodInfo_32C5290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v5.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)currentValue, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v5,
    (const MethodInfo_32C528C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
LABEL_12:
    sub_1B8880C(cardEffectDict, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    cardEffectDict,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
}


void __fastcall BattleCommandComponent__DestroyEffectObject1(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Object_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  v2 = this;
  if ( (byte_4A5D9F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9F1 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_24;
  if ( effectobj->max_length <= 1 )
    goto LABEL_25;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.newMatriarl )
    {
      v5 = v2->fields.effectobj;
      if ( !v5 )
        goto LABEL_24;
      if ( v5->max_length <= 1 )
        goto LABEL_25;
      this = (BattleCommandComponent_o *)v5->m_Items[1];
      if ( !this )
        goto LABEL_24;
      this = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !this )
        goto LABEL_24;
      v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                     this,
                                     this->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v6, 0LL);
      v2->fields.newMatriarl = 0;
    }
    v7 = v2->fields.effectobj;
    if ( v7 )
    {
      if ( v7->max_length <= 1 )
        goto LABEL_25;
      v8 = (UnityEngine_Object_o *)v7->m_Items[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v8, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          this->fields.bg = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bg, 0, v9, v10);
          return;
        }
LABEL_25:
        sub_1B88814(this, method);
      }
    }
LABEL_24:
    sub_1B8880C(this, method);
  }
}


BattleCommandData_o *__fastcall BattleCommandComponent__GetCommandData(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.data;
}


int32_t __fastcall BattleCommandComponent__GetCriticalPoint(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LODWORD(data) = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0LL);
  return (int)data;
}


int32_t __fastcall BattleCommandComponent__GetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(0LL, method);
  return BattleCommandData__getPassStarCount(data, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleCommandComponent__GetSpawnerObj(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  Spawner_o *spawner; // x21
  float z; // s8
  float y; // s9
  float x; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v12; // s12
  float v13; // s13
  float v14; // s11
  UnityEngine_GameObject_o *v15; // x19
  BattleCommandComponent_o *v16; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  spawner = this->fields.spawner;
  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( !byte_4A55CE1 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v13 = static_fields->zeroVector.fields.x;
  v12 = static_fields->zeroVector.fields.y;
  v14 = static_fields->zeroVector.fields.z;
  if ( !byte_4A55CE7 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  if ( !spawner )
    goto LABEL_12;
  v18.fields.x = v13;
  v18.fields.y = v12;
  v18.fields.z = v14;
  v15 = Spawner__Spawn_37965876(
          spawner,
          (UnityEngine_Object_o *)prefab,
          v18,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL);
  GameObjectExtensions__SetParent(v15, (UnityEngine_Component_o *)parent, 0LL);
  if ( !v15 )
    goto LABEL_12;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  v16 = this;
  if ( !byte_4A55CE1 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v16,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL),
        (this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(this, prefab);
  }
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v19, 0LL);
  return v15;
}


void __fastcall BattleCommandComponent__HideAndCancelCountUpFinishEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  UnityEngine_Object_o *countUpFinishEffect; // x20
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D9C9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9C9 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_10;
  DrumRollLabel__CancelFinishCallback(criticallabel, 0LL, 0LL);
  countUpFinishEffect = (UnityEngine_Object_o *)this->fields.countUpFinishEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(countUpFinishEffect, 0LL, 0LL) )
  {
    criticallabel = (DrumRollLabel_o *)this->fields.spawner;
    if ( criticallabel )
    {
      p_countUpFinishEffect = &this->fields.countUpFinishEffect;
      Spawner__Despawn((Spawner_o *)criticallabel, *p_countUpFinishEffect, 1, 0LL);
      *p_countUpFinishEffect = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_countUpFinishEffect, 0, v6, v7);
      return;
    }
LABEL_10:
    sub_1B8880C(criticallabel, method);
  }
}


void __fastcall BattleCommandComponent__HidePowerUpValueLabelActive(
        BattleCommandComponent_o *this,
        bool isCommandCardUnderIcon,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *powerUpCardValue; // x0

  if ( (byte_4A5DA0C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DA0C = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
  {
    powerUpCardValue = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( powerUpCardValue )
    {
      powerUpCardValue = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(powerUpCardValue, 0LL);
      if ( powerUpCardValue )
      {
        if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)powerUpCardValue, 0LL)
          || !isCommandCardUnderIcon )
        {
          return;
        }
        powerUpCardValue = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
        if ( powerUpCardValue )
        {
          powerUpCardValue = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(powerUpCardValue, 0LL);
          if ( powerUpCardValue )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)powerUpCardValue, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1B8880C(powerUpCardValue, v6);
  }
}


void __fastcall BattleCommandComponent__InitDonotActCardSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *donotActCardSprite; // x20
  BattleDataDefine_c *v4; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1
  UISprite_o *v8; // x20

  if ( (byte_4A5D9C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    sub_1B885B0(&StringLiteral_20090/*"icon_cardsealed_block"*/);
    byte_4A5D9C3 = 1;
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotActCardSprite, 0LL, 0LL) )
  {
    v4 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v4 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v4->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__48635516(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352)) == 0LL
      || (v8 = this->fields.donotActCardSprite,
          AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !v8)
      || (UISprite__set_atlas(v8, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.donotActCardSprite) == 0LL) )
    {
      sub_1B8880C(AssetStorage, v7);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)AssetStorage, (System_String_o *)StringLiteral_20090/*"icon_cardsealed_block"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorAnimation(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Object_37768612; // x0
  UnityEngine_Object_o *v8; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v10; // x19

  if ( (byte_4A5D9C2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationClip_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16779/*"anim_erroraction"*/);
    byte_4A5D9C2 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_37768612 = AssetData__GetObject_37768612(AssetStorage, (System_String_o *)StringLiteral_16779/*"anim_erroraction"*/, 0LL);
  if ( Object_37768612 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_37768612->klass == UnityEngine_AnimationClip_TypeInfo )
      v8 = Object_37768612;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
  {
    this->fields.isSettedTreasureDeviceErrorAnim = 1;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v10 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( v8 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v8, 0LL);
        if ( Component_object )
        {
          SimpleAnimation__AddClip(
            (SimpleAnimation_o *)Component_object,
            (UnityEngine_AnimationClip_o *)v8,
            (System_String_o *)AssetStorage,
            0LL);
          return;
        }
      }
LABEL_29:
      sub_1B8880C(AssetStorage, v6);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_29;
      AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v8, 0LL);
      if ( !v10 )
        goto LABEL_29;
      UnityEngine_Animation__AddClip(
        (UnityEngine_Animation_o *)v10,
        (UnityEngine_AnimationClip_o *)v8,
        (System_String_o *)AssetStorage,
        0LL);
    }
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x20
  BattleDataDefine_c *v4; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4A5D9C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    sub_1B885B0(&StringLiteral_20143/*"icon_error"*/);
    byte_4A5D9C1 = 1;
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    v4 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v4 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v4->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__48635516(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352)) == 0LL
      || (AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.treasureDeviceErrorSprite) == 0LL) )
    {
      sub_1B8880C(AssetStorage, v7);
    }
    UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_20143/*"icon_error"*/, 0LL);
    BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(this, v8);
  }
}


void __fastcall BattleCommandComponent__InitUnusableMarks(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattleCommandComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  BattleCommandComponent_o *v6; // x0
  const MethodInfo *v7; // x3
  BattleCommandComponent_o *v8; // x0
  const MethodInfo *v9; // x3
  BattleCommandComponent_o *v10; // x0
  const MethodInfo *v11; // x3
  BattleCommandComponent_o *v12; // x0
  const MethodInfo *v13; // x3
  BattleCommandComponent_o *v14; // x0
  const MethodInfo *v15; // x3
  BattleCommandComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  BattleCommandComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  BattleCommandComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  BattleCommandComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  BattleCommandComponent_o *v24; // x0
  const MethodInfo *v25; // x3

  BattleCommandComponent__SetActiveComponent(this, (UnityEngine_Component_o *)this->fields.sealedSprite, 0, v2);
  BattleCommandComponent__SetActiveComponent(
    v4,
    (UnityEngine_Component_o *)this->fields.unusableShortageStarSprite,
    0,
    v5);
  BattleCommandComponent__SetActiveComponent(v6, (UnityEngine_Component_o *)this->fields.unusableNpSprite, 0, v7);
  BattleCommandComponent__SetActiveComponent(v8, (UnityEngine_Component_o *)this->fields.donotsleepSprite, 0, v9);
  BattleCommandComponent__SetActiveComponent(v10, (UnityEngine_Component_o *)this->fields.displayRemainingTurn, 0, v11);
  BattleCommandComponent__SetActiveComponent(v12, (UnityEngine_Component_o *)this->fields.donotactSprite, 0, v13);
  BattleCommandComponent__SetActiveComponent(v14, (UnityEngine_Component_o *)this->fields.dontuseSprite, 0, v15);
  BattleCommandComponent__SetActiveComponent(v16, (UnityEngine_Component_o *)this->fields.donotActWithTypeSp, 0, v17);
  BattleCommandComponent__SetActiveComponent(v18, (UnityEngine_Component_o *)this->fields.donotPermanentSleep, 0, v19);
  BattleCommandComponent__SetActiveComponent(
    v20,
    (UnityEngine_Component_o *)this->fields.treasureDeviceErrorSprite,
    0,
    v21);
  BattleCommandComponent__SetActiveComponent(v22, (UnityEngine_Component_o *)this->fields.donotActTypeSprite, 0, v23);
  BattleCommandComponent__SetActiveComponent(v24, (UnityEngine_Component_o *)this->fields.donotActCardSprite, 0, v25);
}


void __fastcall BattleCommandComponent__Initialize(BattleCommandComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *spawner; // x21
  const MethodInfo *v8; // x1
  Spawner_o *v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4A5D9C4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_4A5D9C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  p_spawner = &this->fields.spawner;
  this->fields.spawner = (struct Spawner_o *)Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spawner, (int32_t)Instance, v5, v6);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
  {
    v9 = *p_spawner;
    if ( !*p_spawner
      || (Spawner__Precache_37963908(v9, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0LL),
          (v9 = this->fields.spawner) == 0LL) )
    {
      sub_1B8880C(v9, v8);
    }
    Spawner__Precache_37963908(v9, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0LL);
  }
  BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(this, v8);
  BattleCommandComponent__InitTreasureDeviceErrorAnimation(this, v10);
  BattleCommandComponent__InitDonotActCardSprite(this, v11);
}


bool __fastcall BattleCommandComponent__IsAnimationBusy(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  Il2CppObject *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A5DA15 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DA15 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v7 )
  {
    if ( Component_object )
      return SimpleAnimation__IsPlaying((SimpleAnimation_o *)Component_object, animationName, 0LL);
LABEL_14:
    sub_1B8880C(v7, v8);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( !v7 )
    return 0;
  if ( !v6 )
    goto LABEL_14;
  return UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v6, animationName, 0LL);
}


bool __fastcall BattleCommandComponent__IsMaxCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(0LL, method);
  return BattleCommandData__checkCriticalMax(data, 0LL);
}


bool __fastcall BattleCommandComponent__IsMaxViewCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x8

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    goto LABEL_6;
  criticalObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(criticalObject, 0LL);
  if ( ((unsigned __int8)criticalObject & 1) != 0 )
  {
    criticallabel = this->fields.criticallabel;
    if ( criticallabel )
      return criticallabel->fields.nowvalue == 100;
LABEL_6:
    sub_1B8880C(criticalObject, method);
  }
  return 0;
}


bool __fastcall BattleCommandComponent__IsValidVoiceType(
        BattleCommandComponent_o *this,
        System_String_o *voiceTypeId,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x20
  struct BattleServantData_o *svtData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  struct BattleServantData_o *v9; // x8
  int32_t v10; // w20
  int32_t overwriteSvtVoiceId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = this;
  if ( (byte_4A5D9E8 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (BattleCommandComponent_o *)sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5D9E8 = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData )
    goto LABEL_11;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (BattleCommandComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  if ( !v4->fields.svtData
    || (v8 = (int)this,
        this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(v4->fields.svtData, 1, 0LL),
        (v9 = v4->fields.svtData) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(this, voiceTypeId);
  }
  v10 = (int)this;
  overwriteSvtVoiceId = v9->fields.overwriteSvtVoiceId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__checkBattleVoice(v8, v10, overwriteSvtVoiceId, voiceTypeId, 0, 0LL);
}


void __fastcall BattleCommandComponent__OnClickEvent(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v8; // x19
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D9E5 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_23999/*"touchCommandCard"*/);
    byte_4A5D9E5 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v8 = this->fields.target;
      markindex = data->fields.markindex;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex, v4, v5, v6);
      if ( !v8 )
        sub_1B8880C(v9, v10);
      UnityEngine_GameObject__SendMessage_69440752(v8, (System_String_o *)StringLiteral_23999/*"touchCommandCard"*/, v9, 0LL);
    }
  }
}


void __fastcall BattleCommandComponent__OnLongPressEvent(
        BattleCommandComponent_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v9; // x19
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D9E6 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8476/*"LongPress"*/);
    byte_4A5D9E6 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v9 = this->fields.target;
      markindex = data->fields.markindex;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex, v5, v6, v7);
      if ( !v9 )
        sub_1B8880C(v10, v11);
      UnityEngine_GameObject__SendMessage_69440752(v9, (System_String_o *)StringLiteral_8476/*"LongPress"*/, v10, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__PlayAnimation(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        float simpleAnimationTime,
        const MethodInfo *method)
{
  long double v4; // q8
  Il2CppObject *Component_object; // x20
  Il2CppObject *v8; // x21
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v10; // x1
  UnityEngine_AnimationState_c *klass; // x8
  UnityEngine_AnimationState_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0

  v4 = *(long double *)&simpleAnimationTime;
  if ( (byte_4A5D9D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D9D1 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v8 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 1, 0LL);
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v8, animationName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, *(float *)&v4, 0LL);
        UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v8, animationName, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1B8880C(Item, v10);
  }
  if ( !Component_object )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
  Item = (UnityEngine_AnimationState_o *)SimpleAnimation__get_Item(
                                           (SimpleAnimation_o *)Component_object,
                                           animationName,
                                           0LL);
  if ( !Item )
    goto LABEL_22;
  klass = Item->klass;
  v12 = Item;
  v13 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_12;
    }
    v15 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_12:
    v15 = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_AnimationState_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v4);
  SimpleAnimation__Play_63844704((SimpleAnimation_o *)Component_object, animationName, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  BattleCommandComponent__PlayStarSe_d__161_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5D9DE & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent__PlayStarSe_d__161_TypeInfo);
    byte_4A5D9DE = 1;
  }
  v4 = (BattleCommandComponent__PlayStarSe_d__161_o *)sub_1B887FC(BattleCommandComponent__PlayStarSe_d__161_TypeInfo);
  BattleCommandComponent__PlayStarSe_d__161___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_1B8880C(v5, v6);
  v4->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleCommandComponent__PlayTDErrorAnimation(
        BattleCommandComponent_o *this,
        System_Action_o *tdErrorAfterAction,
        const MethodInfo *method)
{
  _BOOL4 IsAnimationBusy; // w22
  struct System_Action_o **p_tdErrorAfterAction; // x20
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Delegate_o *v10; // x8
  System_Action_c *v11; // x1
  __int64 v12; // x1
  BattleServantData_o *svtData; // x0
  struct BattleServantData_o *v14; // x8
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4A5DA16 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&StringLiteral_23062/*"se_ba41"*/);
    sub_1B885B0(&StringLiteral_16779/*"anim_erroraction"*/);
    sub_1B885B0(&StringLiteral_16777/*"anim_commandfloat"*/);
    byte_4A5DA16 = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_16777/*"anim_commandfloat"*/, method);
  p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
  v7 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.tdErrorAfterAction,
         (System_Delegate_o *)tdErrorAfterAction,
         0LL);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (*p_tdErrorAfterAction = (struct System_Action_o *)v7, (System_Action_c *)v7->klass != v11) )
  {
    sub_1B88ACC(v7);
LABEL_7:
    *p_tdErrorAfterAction = (struct System_Action_o *)v10;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tdErrorAfterAction, (int32_t)v10, v8, v9);
  if ( !this->fields.isSettedTreasureDeviceErrorAnim || !IsAnimationBusy )
  {
    if ( *p_tdErrorAfterAction )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*p_tdErrorAfterAction)->fields.m_target)(
        (*p_tdErrorAfterAction)->fields.original_method_info,
        *(_QWORD *)&(*p_tdErrorAfterAction)->fields.extra_arg);
  }
  else
  {
    svtData = this->fields.svtData;
    if ( !svtData
      || (BattleServantData__AddTDErrorTouchCount(svtData, 0LL), (v14 = this->fields.svtData) == 0LL)
      || (svtData = (BattleServantData_o *)v14->fields.deckSvt) == 0LL )
    {
      sub_1B8880C(svtData, v12);
    }
    TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                 (BattleDeckServantData_o *)svtData,
                                 (System_String_o *)StringLiteral_23062/*"se_ba41"*/,
                                 0LL);
    BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v16);
    BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16779/*"anim_erroraction"*/, 0.0, v17);
  }
}


System_String_o *__fastcall BattleCommandComponent__PlayTDErrorVoiceSe(
        BattleCommandComponent_o *this,
        System_String_o *voiceSeId,
        int32_t voiceUniqueId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x22
  BattleServantData_o *svtData; // x0
  int32_t v10; // w22
  int32_t DispLimitCount; // w23
  int32_t VoicePrefix; // w0
  BattleCommandComponent_c *v13; // x8
  int v14; // w24
  struct BattleServantData_o *v15; // x8
  System_String_o *v16; // x19
  int32_t overwriteSvtVoiceId; // w21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  BattleCommandComponent_c *v26; // x0
  BattleCommandComponent_c *v27; // x0
  _QWORD *v28; // x8
  System_Reflection_MethodBase_o *v29; // x0
  int v31; // [xsp+8h] [xbp-48h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5DA13 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
    sub_1B885B0(&BattleCommandComponent_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&StringLiteral_25097/*"{0}_{1:D0}_{2}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DA13 = 1;
  }
  v8 = 0LL;
  if ( !System_String__IsNullOrEmpty(voiceSeId, 0LL) )
  {
    svtData = (BattleServantData_o *)BattleCommandComponent_TypeInfo;
    if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    if ( !voiceSeId )
      goto LABEL_27;
    if ( System_String__StartsWith(voiceSeId, BattleCommandComponent_TypeInfo->static_fields->voiceIdPrefix, 0LL) )
    {
      svtData = this->fields.svtData;
      if ( svtData )
      {
        svtData = (BattleServantData_o *)BattleServantData__getSvtId(svtData, 0LL);
        if ( this->fields.svtData )
        {
          v10 = (int)svtData;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
          svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( svtData )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                            (ServantAssetLoadManager_o *)svtData,
                            v10,
                            DispLimitCount,
                            0LL);
            v13 = BattleCommandComponent_TypeInfo;
            v14 = VoicePrefix;
            if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
              v13 = BattleCommandComponent_TypeInfo;
            }
            svtData = (BattleServantData_o *)System_String__Replace_61726660(
                                               voiceSeId,
                                               v13->static_fields->voiceIdPrefix,
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            v15 = this->fields.svtData;
            if ( v15 )
            {
              v16 = (System_String_o *)svtData;
              overwriteSvtVoiceId = v15->fields.overwriteSvtVoiceId;
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              ServantAssetLoadManager__playBattleVoice(
                v10,
                DispLimitCount,
                overwriteSvtVoiceId,
                v16,
                1.0,
                0LL,
                voiceUniqueId,
                0,
                0LL);
              v32 = v10;
              v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v18, v19, v20);
              v31 = v14;
              v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v22, v23, v24);
              return System_String__Format_61721472(
                       (System_String_o *)StringLiteral_25097/*"{0}_{1:D0}_{2}"*/,
                       v21,
                       v25,
                       (Il2CppObject *)v16,
                       0LL);
            }
          }
        }
      }
LABEL_27:
      sub_1B8880C(svtData, v7);
    }
    v26 = BattleCommandComponent_TypeInfo;
    if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
      v26 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v26->static_fields->seIdPrefix, 0LL) )
    {
      v27 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v27 = BattleCommandComponent_TypeInfo;
      }
      v8 = System_String__Replace_61726660(
             voiceSeId,
             v27->static_fields->seIdPrefix,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      v28 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1B885C8(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v29 = (System_Reflection_MethodBase_o *)sub_1B88594(v28, v28[4]);
      OverwriteAssetSoundName__PlaySe(v29, v8, 0LL);
    }
    else
    {
      return voiceSeId;
    }
  }
  return v8;
}


void __fastcall BattleCommandComponent__PlayVoiceSe(
        BattleCommandComponent_o *this,
        float waitSeconds,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  const MethodInfo *v6; // x3
  struct BattleCommandData_o *data; // x8
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x1

  svtData = this->fields.svtData;
  if ( !svtData
    || (svtData = (BattleServantData_o *)BattleServantData__GetCurrentTDErrorStatusVoiceSe(svtData, 0LL),
        (data = this->fields.data) == 0LL) )
  {
    sub_1B8880C(svtData, method);
  }
  v8 = BattleCommandComponent__PlayTDErrorVoiceSe(this, (System_String_o *)svtData, data->fields.uniqueId, v6);
  v10 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattleCommandComponent__ReleaseNobleGaugeEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nobleGaugeEffect; // x20
  ServantStatusBattleListViewItem_o *p_nobleGaugeEffect; // x19
  UnityEngine_GameObject_o *klass; // x20
  UnityEngine_Object_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D9D5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5D9D5 = 1;
  }
  nobleGaugeEffect = (UnityEngine_Object_o *)this->fields.nobleGaugeEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nobleGaugeEffect, 0LL, 0LL) )
  {
    p_nobleGaugeEffect = (ServantStatusBattleListViewItem_o *)&this->fields.nobleGaugeEffect;
    klass = (UnityEngine_GameObject_o *)p_nobleGaugeEffect->klass;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60355704(klass, 0LL);
    v6 = (UnityEngine_Object_o *)p_nobleGaugeEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v6, 0LL);
    p_nobleGaugeEffect->klass = 0LL;
    sub_1B88554(p_nobleGaugeEffect, 0, v7, v8);
  }
}


void __fastcall BattleCommandComponent__ResetBoostedCriticalRate(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1B8880C(0LL, v3);
  if ( UnityEngine_GameObject__get_activeInHierarchy(criticalObject, 0LL) )
    BattleCommandComponent__HideAndCancelCountUpFinishEffect(this, v5);
  BattleCommandComponent__updateCount(this, 1, v6);
}


void __fastcall BattleCommandComponent__ResetBoostedCriticalRateLocal(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
}


void __fastcall BattleCommandComponent__ResetCardBuffIconAlphaAnim(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_4A5DA08 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DA08 = 1;
  }
  this->fields.cardBuffListIndex = 0;
  *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    v5 = this->fields.specialCardBuffIcon;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v5->klass->vtable._8_set_alpha.method)(
      v5,
      v5->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  this->fields.isChangedBuffIcon = 0;
}


void __fastcall BattleCommandComponent__ResetCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  void *criticallabel; // x0
  int v4; // w8
  void *v5; // x20
  unsigned int v6; // w23
  UILabel_o *v7; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4A5D9CB & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76107632);
    byte_4A5D9CB = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76107632);
  if ( !criticallabel )
    goto LABEL_17;
  v4 = *((_DWORD *)criticallabel + 6);
  v5 = criticallabel;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v4 )
        sub_1B88814(criticallabel, method);
      criticallabel = BattleCommandComponent_TypeInfo;
      v7 = (UILabel_o *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v7 )
        break;
      UILabel__set_gradientTop(v7, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0LL);
      UILabel__set_gradientBottom(
        v7,
        BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
        0LL);
      v4 = *((_DWORD *)v5 + 6);
      if ( (int)++v6 >= v4 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1B8880C(criticallabel, method);
  }
LABEL_12:
  criticallabel = BattleCommandComponent_TypeInfo;
  criticalPercentLabel = this->fields.criticalPercentLabel;
  if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    criticallabel = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_17;
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0LL);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_17;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
    0LL);
}


void __fastcall BattleCommandComponent__ResetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(0LL, method);
  BattleCommandData__ResetPassStar(data, 0LL);
}


void __fastcall BattleCommandComponent__SetActiveComponent(
        BattleCommandComponent_o *this,
        UnityEngine_Component_o *component,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4A5D9FE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9FE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)component,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !component || (gameObject = UnityEngine_Component__get_gameObject(component, 0LL)) == 0LL )
      sub_1B8880C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetActiveSpecialCardBuffIcon(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A5DA05 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DA05 = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B8880C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetCardBuffAlphaAnimFlag(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  v4 = active;
  if ( (byte_4A5DA04 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DA04 = 1;
  }
  this->fields.isCardBuffAlphaAnim = v4;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B8880C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCardColor(
        BattleCommandComponent_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *facetex; // x20
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  UnityEngine_Object_o *bg; // x20
  UnityEngine_Object_o *codeSprite; // x20
  UnityEngine_Object_o *codeTexture; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *powerUpCardIcon; // x20
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A5D9EC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9EC = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.facetex;
    if ( !v10 )
      goto LABEL_29;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color(v10, v17, 0LL);
  }
  bg = (UnityEngine_Object_o *)this->fields.bg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bg, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.bg;
    if ( !v10 )
      goto LABEL_29;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color(v10, v18, 0LL);
  }
  codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(codeSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.codeSprite;
    if ( !v10 )
      goto LABEL_29;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v10, v19, 0LL);
  }
  codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(codeTexture, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.codeTexture;
    if ( !v10 )
      goto LABEL_29;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v10, v20, 0LL);
  }
  v21.fields.r = r;
  v21.fields.g = g;
  v21.fields.b = b;
  v21.fields.a = a;
  BattleCommandComponent__SetCommandCodeActive(this, v21, 0, v14);
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  BattleCommandComponent__SetCommandAssistActive(this, v22, 0, v15);
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( v10 )
    {
      v23.fields.b = b;
      v23.fields.a = a;
      v23.fields.r = r;
      v23.fields.g = g;
      UIWidget__set_color(v10, v23, 0LL);
      return;
    }
LABEL_29:
    sub_1B8880C(v10, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandAssistActive(
        BattleCommandComponent_o *this,
        UnityEngine_Color_o color,
        bool isFirst,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s11
  float r; // s10
  UnityEngine_Object_o *assistChargeTurnLabel; // x21
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  __int64 v12; // x1
  void *buffData; // x0
  UnityEngine_Object_o *assistSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v17; // w8
  int v18; // w9
  _DWORD *v19; // x21
  struct BattleCommandData_o *v20; // x10
  int32_t v21; // w21
  int v22; // t1
  UILabel_o *v23; // x22
  UILabel_o *v24; // x21
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A5D9EE & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_2832/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/);
    byte_4A5D9EE = 1;
  }
  if ( this->fields.isInBattle )
  {
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) < 1.0e-10 )
    {
      r = 1.0;
      g = 1.0;
      b = 1.0;
      a = 1.0;
    }
    assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(assistChargeTurnLabel, 0LL, 0LL) )
    {
      assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(assistRemainingTurnLabel, 0LL, 0LL) )
      {
        buffData = this->fields.assistChargeTurnLabel;
        if ( !buffData )
          goto LABEL_48;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        buffData = this->fields.assistRemainingTurnLabel;
        if ( !buffData )
          goto LABEL_48;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
        {
          buffData = this->fields.assistSprite;
          if ( !buffData )
            goto LABEL_48;
          v25.fields.r = r;
          v25.fields.g = g;
          v25.fields.b = b;
          v25.fields.a = a;
          UIWidget__set_color((UIWidget_o *)buffData, v25, 0LL);
          data = this->fields.data;
          if ( data )
          {
            if ( BattleCommandData__IsEnableCommandAssist(data, 0LL) )
            {
              svtData = this->fields.svtData;
              if ( svtData )
              {
                buffData = svtData->fields.buffData;
                if ( !buffData )
                  goto LABEL_48;
                buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
                if ( !buffData )
                  goto LABEL_48;
                v17 = *((_DWORD *)buffData + 6);
                if ( v17 >= 1 )
                {
                  v18 = 0;
                  while ( 1 )
                  {
                    if ( v17 == v18 )
                      sub_1B88814(buffData, v12);
                    v19 = (_DWORD *)*((_QWORD *)buffData + v18 + 4);
                    if ( !v19 )
                      goto LABEL_48;
                    v20 = this->fields.data;
                    if ( !v20 )
                      goto LABEL_48;
                    if ( v19[87] == v20->fields.commandAssistId && v19[88] == v20->fields.servantCardIdsIndex )
                      break;
                    if ( v17 == ++v18 )
                      goto LABEL_41;
                  }
                  v22 = v19[28];
                  v21 = (_DWORD)v19 + 112;
                  if ( v22 >= 1 )
                  {
                    buffData = this->fields.assistSprite;
                    if ( !buffData )
                      goto LABEL_48;
                    v26.fields.r = 0.5;
                    v26.fields.g = 0.5;
                    v26.fields.b = 0.5;
                    v26.fields.a = 1.0;
                    UIWidget__set_color((UIWidget_o *)buffData, v26, 0LL);
                    buffData = this->fields.assistChargeTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    buffData = this->fields.assistRemainingTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    v23 = this->fields.assistChargeTurnLabel;
                    buffData = System_Int32__ToString(v21, 0LL);
                    if ( !v23 )
                      goto LABEL_48;
                    UILabel__set_text(v23, (System_String_o *)buffData, 0LL);
                    v24 = this->fields.assistRemainingTurnLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2832/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                    if ( !v24 )
                      goto LABEL_48;
                    UILabel__set_text(v24, (System_String_o *)buffData, 0LL);
                  }
                }
LABEL_41:
                if ( isFirst )
                {
                  buffData = this->fields.assistChargeTurnLabel;
                  if ( buffData )
                  {
                    buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0LL);
                    if ( buffData )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0LL);
                      buffData = this->fields.assistRemainingTurnLabel;
                      if ( buffData )
                      {
                        buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0LL);
                        if ( buffData )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0LL);
                          return;
                        }
                      }
                    }
                  }
LABEL_48:
                  sub_1B8880C(buffData, v12);
                }
              }
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__SetCommandAssistView(
        BattleCommandComponent_o *this,
        int32_t commandAssistId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *assistSprite; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *Master_object; // x0
  int32_t EventId; // w21
  UISprite_o *v9; // x20
  System_String_o *v10; // x21

  if ( (byte_4A5D9F7 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BattleData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9F7 = 1;
  }
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
  {
    Master_object = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
    if ( Master_object )
    {
      if ( commandAssistId <= 0 )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled(Master_object, 1, 0LL);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      EventId = BattleData__GetEventId(0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UnityEngine_Behaviour_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( Master_object )
      {
        Master_object = (UnityEngine_Behaviour_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                     (EventCommandAssistMaster_o *)Master_object,
                                                     EventId,
                                                     commandAssistId,
                                                     -1,
                                                     0,
                                                     0LL);
        if ( Master_object )
        {
          v9 = this->fields.assistSprite;
          v10 = System_Int32__ToString((int)Master_object + 48, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetEventSprite(v9, v10, 0LL) )
            return;
          Master_object = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
          if ( Master_object )
          {
LABEL_19:
            UnityEngine_Behaviour__set_enabled(Master_object, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1B8880C(Master_object, v6);
  }
}


void __fastcall BattleCommandComponent__SetCommandCardTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  BattleCommandComponent__SetSpecialCommandCardBuffData(this, 156, active, turn, addOrder, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandCodeActive(
        BattleCommandComponent_o *this,
        UnityEngine_Color_o color,
        bool isFirst,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s11
  float r; // s10
  UnityEngine_Object_o *chargeTurnLabel; // x21
  UnityEngine_Object_o *remainingTurnLabel; // x21
  __int64 v12; // x1
  void *buffData; // x0
  UnityEngine_Object_o *codeTexture; // x21
  UnityEngine_Object_o *codeSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v18; // w8
  int v19; // w9
  __int64 v20; // x21
  struct BattleCommandData_o *v21; // x10
  int32_t v22; // w21
  int v23; // t1
  UILabel_o *v24; // x22
  UILabel_o *v25; // x21
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A5D9ED & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_2832/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/);
    byte_4A5D9ED = 1;
  }
  if ( this->fields.isInBattle )
  {
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) < 1.0e-10 )
    {
      r = 1.0;
      g = 1.0;
      b = 1.0;
      a = 1.0;
    }
    chargeTurnLabel = (UnityEngine_Object_o *)this->fields.chargeTurnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(chargeTurnLabel, 0LL, 0LL) )
    {
      remainingTurnLabel = (UnityEngine_Object_o *)this->fields.remainingTurnLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(remainingTurnLabel, 0LL, 0LL) )
      {
        buffData = this->fields.chargeTurnLabel;
        if ( !buffData )
          goto LABEL_56;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        buffData = this->fields.remainingTurnLabel;
        if ( !buffData )
          goto LABEL_56;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        if ( this->fields.isCodeTextureView )
        {
          codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(codeTexture, 0LL, 0LL) )
            return;
          buffData = this->fields.codeTexture;
          if ( !buffData )
            goto LABEL_56;
        }
        else
        {
          codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(codeSprite, 0LL, 0LL) )
            return;
          buffData = this->fields.codeSprite;
          if ( !buffData )
            goto LABEL_56;
        }
        v26.fields.r = r;
        v26.fields.g = g;
        v26.fields.b = b;
        v26.fields.a = a;
        UIWidget__set_color((UIWidget_o *)buffData, v26, 0LL);
        data = this->fields.data;
        if ( data )
        {
          if ( BattleCommandData__IsEnableCommandCode(data, 0LL) )
          {
            svtData = this->fields.svtData;
            if ( svtData )
            {
              buffData = svtData->fields.buffData;
              if ( !buffData )
                goto LABEL_56;
              buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
              if ( !buffData )
                goto LABEL_56;
              v18 = *((_DWORD *)buffData + 6);
              if ( v18 >= 1 )
              {
                v19 = 0;
                while ( 1 )
                {
                  if ( v18 == v19 )
                    sub_1B88814(buffData, v12);
                  v20 = *((_QWORD *)buffData + v19 + 4);
                  if ( !v20 )
                    goto LABEL_56;
                  v21 = this->fields.data;
                  if ( !v21 )
                    goto LABEL_56;
                  if ( *(_QWORD *)(v20 + 88) == v21->fields.userCommandCodeId )
                    break;
                  if ( v18 == ++v19 )
                    goto LABEL_49;
                }
                v23 = *(_DWORD *)(v20 + 112);
                v22 = v20 + 112;
                if ( v23 >= 1 )
                {
                  if ( this->fields.isCodeTextureView )
                  {
                    buffData = this->fields.codeTexture;
                    if ( !buffData )
                      goto LABEL_56;
                  }
                  else
                  {
                    buffData = this->fields.codeSprite;
                    if ( !buffData )
                      goto LABEL_56;
                  }
                  v27.fields.r = 0.5;
                  v27.fields.g = 0.5;
                  v27.fields.b = 0.5;
                  v27.fields.a = 1.0;
                  UIWidget__set_color((UIWidget_o *)buffData, v27, 0LL);
                  buffData = this->fields.chargeTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  buffData = this->fields.remainingTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  v24 = this->fields.chargeTurnLabel;
                  buffData = System_Int32__ToString(v22, 0LL);
                  if ( !v24 )
                    goto LABEL_56;
                  UILabel__set_text(v24, (System_String_o *)buffData, 0LL);
                  v25 = this->fields.remainingTurnLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2832/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                  if ( !v25 )
                    goto LABEL_56;
                  UILabel__set_text(v25, (System_String_o *)buffData, 0LL);
                }
              }
LABEL_49:
              if ( isFirst )
              {
                buffData = this->fields.chargeTurnLabel;
                if ( buffData )
                {
                  buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0LL);
                  if ( buffData )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0LL);
                    buffData = this->fields.remainingTurnLabel;
                    if ( buffData )
                    {
                      buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0LL);
                      if ( buffData )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
LABEL_56:
                sub_1B8880C(buffData, v12);
              }
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__SetCommandCodeMode(
        BattleCommandComponent_o *this,
        bool isTextureMode,
        const MethodInfo *method)
{
  this->fields.isCodeTextureView = isTextureMode;
}


void __fastcall BattleCommandComponent__SetCommandCodeView(
        BattleCommandComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  ServantStatusBattleListViewItem_o *p_codeTexture; // x19
  UITexture_o *klass; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Entity; // x0
  void *monitor; // x20
  Il2CppClass *v14; // x21
  int32_t v15; // w20
  UISprite_o *codeSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5D9F5 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D9F5 = 1;
  }
  if ( userCommandCodeId < 1 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
        return;
      }
    }
    goto LABEL_28;
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_28;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = (ServantStatusBattleListViewItem_o *)&this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      klass = (UITexture_o *)p_codeTexture->klass;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCodeTexture = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture(
                                                                  klass,
                                                                  userCommandCodeId,
                                                                  0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture, 0LL, 0LL) )
      {
        p_codeTexture->klass = (ServantStatusBattleListViewItem_c *)Manager__loadCommandCodeTexture;
        sub_1B88554(p_codeTexture, (int32_t)Manager__loadCommandCodeTexture, v10, v11);
      }
      return;
    }
LABEL_28:
    sub_1B8880C(codeTexture, v5);
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !codeTexture )
    goto LABEL_28;
  codeTexture = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)codeTexture,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !codeTexture )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)codeTexture,
             userCommandCodeId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    v14 = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v14;
    *(_QWORD *)&v17.fields.fakeValue = monitor;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
  }
  else
  {
    v15 = -1;
  }
  codeSprite = this->fields.codeSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, v15, 0LL);
}


void __fastcall BattleCommandComponent__SetCommandCodeView_43071704(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  ServantStatusBattleListViewItem_o *p_codeTexture; // x20
  UITexture_o *klass; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_37954984; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  UISprite_o *codeSprite; // x20

  if ( (byte_4A5D9F6 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5D9F6 = 1;
  }
  if ( (commandCodeId & 0x80000000) != 0 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
LABEL_21:
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1B8880C(codeTexture, v5);
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_22;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = (ServantStatusBattleListViewItem_o *)&this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      klass = (UITexture_o *)p_codeTexture->klass;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCodeTexture_37954984 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_37954984(
                                                                           klass,
                                                                           commandCodeId,
                                                                           0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_37954984, 0LL, 0LL) )
      {
        p_codeTexture->klass = (ServantStatusBattleListViewItem_c *)Manager__loadCommandCodeTexture_37954984;
        sub_1B88554(p_codeTexture, (int32_t)Manager__loadCommandCodeTexture_37954984, v10, v11);
        return;
      }
      codeTexture = (UnityEngine_Behaviour_o *)p_codeTexture->klass;
      if ( p_codeTexture->klass )
        goto LABEL_21;
    }
    goto LABEL_22;
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeSprite = this->fields.codeSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, commandCodeId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandEffectActive(
        BattleCommandComponent_o *this,
        int32_t effectType,
        bool active,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v6; // x21
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v8; // x22
  struct UnityEngine_GameObject_array *v9; // x8

  v6 = this;
  if ( (byte_4A5DA12 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DA12 = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( effectobj->max_length <= effectType )
LABEL_14:
    sub_1B88814(this, *(_QWORD *)&effectType);
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[effectType];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.effectobj;
    if ( !v9 )
      goto LABEL_13;
    if ( v9->max_length > effectType )
    {
      this = (BattleCommandComponent_o *)v9->m_Items[effectType];
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, active, 0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(this, *(_QWORD *)&effectType);
    }
    goto LABEL_14;
  }
}


void __fastcall BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  const MethodInfo *v4; // x1
  UISprite_o *v5; // x0
  const MethodInfo *v6; // x3
  BattleCommandComponent_o *v7; // x0
  const MethodInfo *v8; // x3

  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( BattleServantData__get_isTreasureDeveiceError(svtData, 0LL) )
    {
      v5 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v4);
      BattleCommandComponent__SetActiveComponent((BattleCommandComponent_o *)v5, (UnityEngine_Component_o *)v5, 0, v6);
      BattleCommandComponent__SetActiveComponent(
        v7,
        (UnityEngine_Component_o *)this->fields.treasureDeviceErrorSprite,
        1,
        v8);
    }
  }
}


void __fastcall BattleCommandComponent__SetDonotPermanentSleepSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *donotPermanentSleep; // x20
  UISprite_o *v4; // x19

  if ( (byte_4A5DA03 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20182/*"icon_sleep_2"*/);
    byte_4A5DA03 = 1;
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotPermanentSleep, 0LL, 0LL) )
  {
    v4 = this->fields.donotPermanentSleep;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v4, (System_String_o *)StringLiteral_20182/*"icon_sleep_2"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotsleepSprite; // x20
  UISprite_o *v4; // x19

  if ( (byte_4A5DA02 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20181/*"icon_sleep"*/);
    byte_4A5DA02 = 1;
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotsleepSprite, 0LL, 0LL) )
  {
    v4 = this->fields.donotsleepSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v4, (System_String_o *)StringLiteral_20181/*"icon_sleep"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDownloadEventSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  BattleCommandComponent__SetDonotSleepSprite(this, method);
  BattleCommandComponent__SetUnusableShortageStarSprite(this, v3);
  BattleCommandComponent__SetDonotPermanentSleepSprite(this, v4);
}


void __fastcall BattleCommandComponent__SetFixedCommandCardBuff(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  BattleCommandComponent__SetSpecialCommandCardBuffData(this, 131, active, turn, addOrder, v5);
}


void __fastcall BattleCommandComponent__SetIsInBattle(
        BattleCommandComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isInBattle = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetLabelActive(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *chargeTurnLabel; // x0

  chargeTurnLabel = (UnityEngine_Component_o *)this->fields.chargeTurnLabel;
  if ( !chargeTurnLabel
    || (chargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(chargeTurnLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)chargeTurnLabel, active, 0LL),
        (chargeTurnLabel = (UnityEngine_Component_o *)this->fields.remainingTurnLabel) == 0LL)
    || (chargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(chargeTurnLabel, 0LL)) == 0LL )
  {
    sub_1B8880C(chargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)chargeTurnLabel, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetLabelAssistActive(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *assistChargeTurnLabel; // x0

  assistChargeTurnLabel = (UnityEngine_Component_o *)this->fields.assistChargeTurnLabel;
  if ( !assistChargeTurnLabel
    || (assistChargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             assistChargeTurnLabel,
                                                             0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0LL),
        (assistChargeTurnLabel = (UnityEngine_Component_o *)this->fields.assistRemainingTurnLabel) == 0LL)
    || (assistChargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             assistChargeTurnLabel,
                                                             0LL)) == 0LL )
  {
    sub_1B8880C(assistChargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0LL);
}


void __fastcall BattleCommandComponent__SetLockInfo(
        BattleCommandComponent_o *this,
        bool isLock,
        const MethodInfo *method)
{
  UnityEngine_Object_o *LockInfo; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A5D9FB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9FB = 1;
  }
  LockInfo = (UnityEngine_Object_o *)this->fields.LockInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LockInfo, 0LL, 0LL) )
  {
    v7 = this->fields.LockInfo;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isLock, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetNobleGaugeEffect(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.nobleGaugeEffect = effect;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nobleGaugeEffect, (int32_t)effect, (int32_t)method, v3);
}


void __fastcall BattleCommandComponent__SetPowerUpCardIcon(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        int32_t iconType,
        bool isBright,
        const MethodInfo *method)
{
  UnityEngine_Object_o *powerUpCardIcon; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UISprite_o *v12; // x23
  UnityEngine_Component_o *v13; // x8
  char v14; // w19
  bool v15; // w1

  if ( (byte_4A5D9FD & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9FD = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(powerUpCardIcon, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v12 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v12 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0LL);
        if ( gameObject )
        {
          v15 = 0;
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetCommandCardIconImage(
                                                 v12,
                                                 powerUpValue,
                                                 iconType,
                                                 isBright,
                                                 0LL);
      v13 = (UnityEngine_Component_o *)this->fields.powerUpCardIcon;
      if ( v13 )
      {
        v14 = (char)gameObject;
        gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
        if ( gameObject )
        {
          v15 = v14 & 1;
LABEL_15:
          UnityEngine_GameObject__SetActive(gameObject, v15, 0LL);
          return;
        }
      }
    }
    sub_1B8880C(gameObject, v11);
  }
}


void __fastcall BattleCommandComponent__SetPowerUpCardValue(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        const MethodInfo *method)
{
  UnityEngine_Object_o *powerUpCardValue; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D9FC & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_865/*"+{0:#,0}"*/);
    byte_4A5D9FC = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( !gameObject )
      goto LABEL_13;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    if ( powerUpValue <= 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v8 = this->fields.powerUpCardValue;
    v13 = powerUpValue;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9, v10, v11);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_865/*"+{0:#,0}"*/, v12, 0LL);
    if ( !v8 )
LABEL_13:
      sub_1B8880C(gameObject, v6);
    UILabel__set_text(v8, (System_String_o *)gameObject, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetSpecialCommandCardBuffData(
        BattleCommandComponent_o *this,
        int32_t buffType,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass225_0_o *v11; // x24
  void *Index; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *specialCardBuffList; // x23
  System_Predicate_object__o *v15; // x25
  int32_t v16; // w23
  System_Collections_Generic_List_object__o *v17; // x22
  int32_t v18; // w24
  BattleCommandComponent_CardBuffData_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_object__o *v26; // x20
  System_Comparison_T__o *v27; // x21
  Il2CppObject *v28; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v33; // x8

  if ( (byte_4A5DA06 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent_CardBuffData_TypeInfo);
    sub_1B885B0(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_1B885B0(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1B885B0(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__225_1__);
    sub_1B885B0(&Method_BattleCommandComponent___c__DisplayClass225_0__SetSpecialCommandCardBuffData_b__0__);
    sub_1B885B0(&BattleCommandComponent___c__DisplayClass225_0_TypeInfo);
    sub_1B885B0(&BattleCommandComponent___c_TypeInfo);
    byte_4A5DA06 = 1;
  }
  v11 = (BattleCommandComponent___c__DisplayClass225_0_o *)sub_1B887FC(BattleCommandComponent___c__DisplayClass225_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass225_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_29;
  v11->fields.buffType = buffType;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  v15 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BattleCommandComponent___c__DisplayClass225_0__SetSpecialCommandCardBuffData_b__0__,
    0LL);
  if ( !specialCardBuffList )
    goto LABEL_29;
  Index = (void *)System_Collections_Generic_List_object___FindIndex(
                    specialCardBuffList,
                    (System_Predicate_T__o *)v15,
                    (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  v16 = (int)Index;
  if ( active )
  {
    v17 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
    if ( ((unsigned int)Index & 0x80000000) != 0 )
    {
      v18 = v11->fields.buffType;
      v19 = (BattleCommandComponent_CardBuffData_o *)sub_1B887FC(BattleCommandComponent_CardBuffData_TypeInfo);
      BattleCommandComponent_CardBuffData___ctor(v19, v18, turn, addOrder, 0LL);
      if ( !v17 )
        goto LABEL_29;
      items = v17->fields._items;
      v23 = Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v19,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
      }
    }
    else
    {
      if ( !v17 )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList,
                (int32_t)Index,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
      if ( !Index )
        goto LABEL_29;
      *((_DWORD *)Index + 5) = turn;
      Index = this->fields.specialCardBuffList;
      if ( !Index )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Index,
                v16,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
      if ( !Index )
        goto LABEL_29;
      *((_DWORD *)Index + 6) = addOrder;
    }
  }
  else if ( ((unsigned int)Index & 0x80000000) == 0 )
  {
    Index = this->fields.specialCardBuffList;
    if ( !Index )
      goto LABEL_29;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Index,
      v16,
      (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
  v26 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  Index = BattleCommandComponent___c_TypeInfo;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Index = BattleCommandComponent___c_TypeInfo;
  }
  v27 = *(System_Comparison_T__o **)(*((_QWORD *)Index + 23) + 24LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)Index + 56) )
    {
      j_il2cpp_runtime_class_init_0(Index);
      Index = BattleCommandComponent___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)Index + 23);
    v27 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Comparison_object____ctor(
      v27,
      v28,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__225_1__,
      0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__225_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)v27;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__225_1, (int32_t)v27, v30, v31);
  }
  if ( !v26
    || (System_Collections_Generic_List_object___Sort_55571192(
          v26,
          v27,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__),
        (v33 = this->fields.specialCardBuffList) == 0LL) )
  {
LABEL_29:
    sub_1B8880C(Index, v13);
  }
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v33->fields._size > 0, v32);
}


void __fastcall BattleCommandComponent__SetTreasureDeviceTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x22
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v11; // x20
  System_String_o *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5D9FA & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_2874/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/);
    byte_4A5D9FA = 1;
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.nowTreasureDeviceTypeImage;
      if ( !gameObject )
        goto LABEL_17;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
      if ( !active )
        return;
      v11 = this->fields.restTreasureDeviceChangeTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2874/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, 0LL);
      v17 = turn;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v13, v14, v15);
      gameObject = (UnityEngine_Component_o *)System_String__Format(v12, v16, 0LL);
      if ( !v11 )
LABEL_17:
        sub_1B8880C(gameObject, v9);
      UILabel__set_text(v11, (System_String_o *)gameObject, 0LL);
    }
  }
}


bool __fastcall BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x21
  struct UIAtlas_o **p_defaultTdTypeImageAtlas; // x20
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *v12; // x19

  if ( (byte_4A5D9FF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9FF = 1;
  }
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_defaultTdTypeImageAtlas = &this->fields.defaultTdTypeImageAtlas;
  if ( UnityEngine_Object__op_Equality(defaultTdTypeImageAtlas, 0LL, 0LL) )
  {
    nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL);
    if ( v6 )
    {
      v10 = this->fields.nowTreasureDeviceTypeImage;
      if ( !v10 )
        sub_1B8880C(v6, v7);
      mAtlas = v10->fields.mAtlas;
      *p_defaultTdTypeImageAtlas = mAtlas;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultTdTypeImageAtlas, (int32_t)mAtlas, v8, v9);
    }
  }
  v12 = (UnityEngine_Object_o *)*p_defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetUntrueCount(
        BattleCommandComponent_o *this,
        int32_t count,
        bool isInitZero,
        const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  struct DrumRollLabel_o *v8; // x21
  DrumRollLabel_CompleteEventHandler_o *v9; // x22

  if ( (byte_4A5D9DC & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleCommandComponent_compCriticallabel__);
    sub_1B885B0(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4A5D9DC = 1;
  }
  if ( isInitZero )
  {
    criticallabel = this->fields.criticallabel;
    if ( !criticallabel )
      goto LABEL_12;
    DrumRollLabel__setParam(criticallabel, 0, 0LL);
  }
  criticallabel = (DrumRollLabel_o *)this->fields.criticalObject;
  if ( !criticallabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)criticallabel, 1, 0LL),
        (v8 = this->fields.criticallabel) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(criticallabel, *(_QWORD *)&count);
  }
  if ( v8->fields.nowvalue <= count )
  {
    v9 = (DrumRollLabel_CompleteEventHandler_o *)sub_1B887FC(DrumRollLabel_CompleteEventHandler_TypeInfo);
    DrumRollLabel_CompleteEventHandler___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0LL);
  }
  else
  {
    v9 = 0LL;
  }
  DrumRollLabel__changeParam(v8, count, 1, v9, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__SetUnusableShortageStarSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  UISprite_o *v4; // x19

  if ( (byte_4A5DA01 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20197/*"icon_unusable_star"*/);
    byte_4A5DA01 = 1;
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    v4 = this->fields.unusableShortageStarSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v4, (System_String_o *)StringLiteral_20197/*"icon_unusable_star"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SwitchChangeObjPos(
        BattleCommandComponent_o *this,
        bool isUp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *codeObject; // x21
  UnityEngine_Transform_o *friendIcon; // x0
  __int64 v7; // x1
  struct UnityEngine_Transform_array *stateCodePoints; // x8
  __int64 v9; // x9
  struct UnityEngine_Transform_array *stateArrowPoints; // x10
  UnityEngine_Transform_o *v11; // x21
  int v12; // s0
  __int64 v15; // x8
  struct UnityEngine_Transform_array *v16; // x8
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  struct UnityEngine_Transform_array *v21; // x9
  struct UnityEngine_GameObject_array *addObjectList; // x10
  UnityEngine_Transform_o *v23; // x20
  UnityEngine_Object_o *v24; // x21
  struct UnityEngine_GameObject_array *v25; // x8
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_Object_o *v31; // x21
  struct UnityEngine_GameObject_array *v32; // x8
  UnityEngine_Transform_o *v33; // x19
  int v34; // s0

  if ( (byte_4A5D9F8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9F8 = 1;
  }
  codeObject = (UnityEngine_Object_o *)this->fields.codeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(codeObject, 0LL, 0LL);
  if ( ((unsigned __int8)friendIcon & 1) == 0 )
  {
    stateCodePoints = this->fields.stateCodePoints;
    if ( stateCodePoints )
    {
      v9 = *(_QWORD *)&stateCodePoints->max_length;
      if ( v9 )
      {
        stateArrowPoints = this->fields.stateArrowPoints;
        if ( stateArrowPoints )
        {
          if ( *(_QWORD *)&stateArrowPoints->max_length )
          {
            if ( !(_DWORD)v9 )
              goto LABEL_49;
            friendIcon = stateCodePoints->m_Items[0];
            if ( !friendIcon )
              goto LABEL_48;
            v11 = this->fields.codeObject;
            *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(friendIcon, 0LL);
            if ( !v11 )
              goto LABEL_48;
            UnityEngine_Transform__set_position(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
            v15 = 0LL;
            if ( isUp )
            {
              friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
              if ( !friendIcon )
                goto LABEL_48;
              friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                        (UnityEngine_Behaviour_o *)friendIcon,
                                                        0LL);
              if ( ((unsigned __int8)friendIcon & 1) != 0 )
              {
                v16 = this->fields.stateCodePoints;
                if ( !v16 )
                  goto LABEL_48;
                if ( v16->max_length <= 1 )
                  goto LABEL_49;
                friendIcon = v16->m_Items[1];
                if ( !friendIcon )
                  goto LABEL_48;
                v17 = this->fields.codeObject;
                *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_position(friendIcon, 0LL);
                if ( !v17 )
                  goto LABEL_48;
                UnityEngine_Transform__set_position(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
                v15 = 2LL;
              }
              else
              {
                friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
                if ( !friendIcon )
                  goto LABEL_48;
                friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                          (UnityEngine_Behaviour_o *)friendIcon,
                                                          0LL);
                v15 = ((unsigned __int8)friendIcon & 1) == 0;
              }
            }
            v21 = this->fields.stateArrowPoints;
            if ( !v21 )
              goto LABEL_48;
            if ( (unsigned int)v15 >= v21->max_length )
              goto LABEL_49;
            addObjectList = this->fields.addObjectList;
            if ( !addObjectList )
              goto LABEL_48;
            if ( addObjectList->max_length <= 1 )
              goto LABEL_49;
            v23 = v21->m_Items[v15];
            v24 = (UnityEngine_Object_o *)addObjectList->m_Items[1];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v25 = this->fields.addObjectList;
              if ( !v25 )
                goto LABEL_48;
              if ( v25->max_length <= 1 )
                goto LABEL_49;
              friendIcon = (UnityEngine_Transform_o *)v25->m_Items[1];
              if ( !friendIcon )
                goto LABEL_48;
              friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0LL);
              if ( !v23 )
                goto LABEL_48;
              v26 = friendIcon;
              *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_position(v23, 0LL);
              if ( !v26 )
                goto LABEL_48;
              UnityEngine_Transform__set_position(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
            }
            v30 = this->fields.addObjectList;
            if ( !v30 )
              goto LABEL_48;
            if ( !v30->max_length )
LABEL_49:
              sub_1B88814(friendIcon, v7);
            v31 = (UnityEngine_Object_o *)v30->m_Items[0];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v32 = this->fields.addObjectList;
              if ( !v32 )
                goto LABEL_48;
              if ( v32->max_length )
              {
                friendIcon = (UnityEngine_Transform_o *)v32->m_Items[0];
                if ( friendIcon )
                {
                  friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0LL);
                  if ( v23 )
                  {
                    v33 = friendIcon;
                    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_position(v23, 0LL);
                    if ( v33 )
                    {
                      UnityEngine_Transform__set_position(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
                      return;
                    }
                  }
                }
LABEL_48:
                sub_1B8880C(friendIcon, v7);
              }
              goto LABEL_49;
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateCommandCardEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandData_o *data; // x0
  BattleBuffData_BuffData_array *CommandCodeBuffArray; // x0
  BattleBuffData_BuffData_array *v5; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  __int64 v10; // x24
  BattleBuffData_BuffData_o *v11; // x22
  System_String_o *datalist; // x22
  System_String_o *v13; // x22
  Il2CppObject *v14; // x23
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  Il2CppObject *v17; // x22
  Il2CppObject *Component_object; // x23
  const MethodInfo *v19; // x3
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct BattleCommandData_o *v22; // x8
  struct BattleCommandData_o *v23; // x8
  Il2CppObject *key; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5DA0E & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DA0E = 1;
  }
  key = 0LL;
  path = 0LL;
  BattleCommandComponent__ClearCardEffect(this, method);
  data = this->fields.data;
  if ( data )
  {
    CommandCodeBuffArray = BattleCommandData__GetCommandCodeBuffArray(data, 0LL);
    if ( CommandCodeBuffArray )
    {
      v5 = CommandCodeBuffArray;
      if ( *(_QWORD *)&CommandCodeBuffArray->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EffectMaster___);
        max_length = v5->max_length;
        if ( max_length >= 1 )
        {
          v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v10 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v10 >= max_length )
              sub_1B88814(Instance, v7);
            v11 = v5->m_Items[v10];
            if ( !v11 )
              break;
            if ( v11->fields.cardEffectId >= 1 )
            {
              Instance = (DataManager_o *)BattleBuffData_BuffData__isEnableCommandCardBuff(
                                            v5->m_Items[v10],
                                            this->fields.data,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_13;
              Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v11, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v22 = this->fields.data;
                if ( !v22 )
                  break;
                if ( v11->fields.userCommandCodeId == v22->fields.userCommandCodeId )
                  goto LABEL_13;
              }
              Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v11, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v23 = this->fields.data;
                if ( !v23 )
                  break;
                if ( v11->fields.commandAssistId == v23->fields.commandAssistId
                  && v11->fields.cardIndex == v23->fields.servantCardIdsIndex )
                {
LABEL_13:
                  if ( !v9 )
                    break;
                  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                v9,
                                                v11->fields.cardEffectId,
                                                (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                  if ( Instance )
                  {
                    datalist = (System_String_o *)Instance->fields.datalist;
                    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
                    BattleEffectUtility__GetBattleCommonEffectPathAndName(
                      datalist,
                      &path,
                      (System_String_o **)&key,
                      0LL);
                    Instance = (DataManager_o *)this->fields.cardEffectDict;
                    if ( !Instance )
                      break;
                    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                                                  key,
                                                  (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      v14 = key;
                      v13 = path;
                      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                      Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                  v13,
                                                                                  (System_String_o *)v14,
                                                                                  0LL);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      Instance = (DataManager_o *)UnityEngine_Object__op_Equality(
                                                    Manager__loadBattleCommonEffect,
                                                    0LL,
                                                    0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        objectRoot = this->fields.objectRoot;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object__49297800(
                                                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                                                      objectRoot,
                                                      (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
                        if ( !Instance )
                          break;
                        v17 = (Il2CppObject *)Instance;
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)Instance,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
                        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_object,
                                                      0LL,
                                                      0LL);
                        if ( ((unsigned __int8)Instance & 1) != 0 )
                        {
                          text = this->fields.text;
                          if ( !text )
                            break;
                          bg = this->fields.bg;
                          if ( !bg || !Component_object )
                            break;
                          CardEffectComponent__SetCardEffectDepth(
                            (CardEffectComponent_o *)Component_object,
                            text->fields.mDepth,
                            bg->fields.mDepth,
                            v19);
                        }
                        Instance = (DataManager_o *)this->fields.cardEffectDict;
                        if ( !Instance )
                          break;
                        System_Collections_Generic_Dictionary_object__object___Add(
                          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                          key,
                          v17,
                          (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                      }
                    }
                  }
                }
              }
            }
            max_length = v5->max_length;
            if ( (int)++v10 >= max_length )
              return;
          }
LABEL_43:
          sub_1B8880C(Instance, v7);
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateCommandCardTypeChange(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  void *data; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t Index; // w0
  int32_t v11; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UISprite_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x22
  UILabel_o *v20; // x21
  System_Collections_Generic_List_object__o *v21; // x8
  System_String_o *v22; // x19
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  int v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t type; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5DA07 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1B885B0(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__227_0__);
    sub_1B885B0(&BattleCommandComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_5049/*"DISPLAY_REMAINING_TURN"*/);
    sub_1B885B0(&StringLiteral_20129/*"icon_commandchange_{0}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DA07 = 1;
  }
  data = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    data = BattleCommandComponent___c_TypeInfo;
  }
  v5 = *(System_Predicate_object__o **)(*((_QWORD *)data + 23) + 32LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleCommandComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)data + 23);
    v5 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(
      v5,
      v6,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__227_0__,
      0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__227_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__227_0, (int32_t)v5, v8, v9);
  }
  if ( !specialCardBuffList )
    goto LABEL_30;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)v5,
            (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v11 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_30;
        v14 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &type, v15, v16, v17);
        v19 = System_String__Format((System_String_o *)StringLiteral_20129/*"icon_commandchange_{0}"*/, v18, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( !AtlasManager__SetEventSprite(v14, v19, 0LL) )
        {
          data = this->fields.specialCardBuffIcon;
          if ( !data )
            goto LABEL_30;
          UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v20 = this->fields.specialCardBuffTurn;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        data = LocalizationManager__Get((System_String_o *)StringLiteral_5049/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v21 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
        if ( v21 )
        {
          v22 = (System_String_o *)data;
          data = System_Collections_Generic_List_object___get_Item(
                   v21,
                   v11,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
          if ( data )
          {
            v27 = *((_DWORD *)data + 5);
            v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v23, v24, v25);
            data = System_String__Format(v22, v26, 0LL);
            if ( v20 )
            {
              UILabel__set_text(v20, (System_String_o *)data, 0LL);
              return;
            }
          }
        }
LABEL_30:
        sub_1B8880C(data, method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__UpdateCommandUpDetailLabel(
        BattleCommandComponent_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  char *data; // x0
  bool isAddAttack; // w0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  __int64 *v13; // x8
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UnityEngine_Transform_o *transform; // x0
  char *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  int v24; // w8
  char *v25; // x21
  unsigned int v26; // w22
  int v27; // [xsp+Ch] [xbp-34h] BYREF
  int v28; // [xsp+18h] [xbp-28h] BYREF
  int v29; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4A5D9EB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_16620/*"a"*/);
    sub_1B885B0(&StringLiteral_18894/*"effect/ef_commandup_{0}{1:00}"*/);
    sub_1B885B0(&StringLiteral_22673/*"q"*/);
    sub_1B885B0(&StringLiteral_16998/*"b"*/);
    byte_4A5D9EB = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  isAddAttack = BattleCommandData__isAddAttack((BattleCommandData_o *)data, 0LL);
  if ( (unsigned int)targetIndex > 2 || isAddAttack || BattleCommandComponent__get_isKindOfDontAction(this, v7) )
    return;
  data = (char *)this->fields.data;
  if ( !data )
LABEL_29:
    sub_1B8880C(data, *(_QWORD *)&targetIndex);
  v8 = (System_String_o *)StringLiteral_18894/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick((BattleCommandData_o *)data, 0LL) )
  {
    v29 = targetIndex + 1;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v9, v10, v11);
    v13 = &StringLiteral_22673/*"q"*/;
LABEL_16:
    v8 = System_String__Format_61721404(v8, (Il2CppObject *)*v13, v12, 0LL);
    goto LABEL_17;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isArts((BattleCommandData_o *)data, 0LL) )
  {
    v28 = targetIndex + 1;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v14, v15, v16);
    v13 = &StringLiteral_16620/*"a"*/;
    goto LABEL_16;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isBuster((BattleCommandData_o *)data, 0LL) )
  {
    v27 = targetIndex + 1;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v17, v18, v19);
    v13 = &StringLiteral_16998/*"b"*/;
    goto LABEL_16;
  }
LABEL_17:
  data = (char *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_29;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (char *)BaseMonoBehaviour__createObject_38240928((BaseMonoBehaviour_o *)this, v8, transform, 0LL, 0LL);
  if ( !data )
    goto LABEL_29;
  v21 = data;
  data = (char *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !data )
    goto LABEL_29;
  v24 = *((_DWORD *)data + 6);
  v25 = data;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( v26 < v24 )
    {
      data = *(char **)&v25[8 * v26 + 32];
      if ( !data )
        goto LABEL_29;
      UnityEngine_ParticleSystem__Stop_69739868((UnityEngine_ParticleSystem_o *)data, 0LL);
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        goto LABEL_25;
    }
LABEL_30:
    sub_1B88814(data, *(_QWORD *)&targetIndex);
  }
LABEL_25:
  data = (char *)this->fields.effectobj;
  if ( !data )
    goto LABEL_29;
  if ( *((_DWORD *)data + 6) <= 3u )
    goto LABEL_30;
  *((_QWORD *)data + 7) = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(data + 56), (int32_t)v21, v22, v23);
}


void __fastcall BattleCommandComponent__UpdateFixedCommandCard(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  void *Item; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t Index; // w0
  int32_t v11; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UILabel_o *v14; // x21
  System_Collections_Generic_List_object__o *v15; // x8
  System_String_o *v16; // x19
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5D9F9 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1B885B0(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__211_0__);
    sub_1B885B0(&BattleCommandComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_5049/*"DISPLAY_REMAINING_TURN"*/);
    sub_1B885B0(&StringLiteral_20088/*"icon_cardfixation"*/);
    byte_4A5D9F9 = 1;
  }
  Item = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Item = BattleCommandComponent___c_TypeInfo;
  }
  v5 = *(System_Predicate_object__o **)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = BattleCommandComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v5 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(v5, v6, Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__211_0__, 0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__211_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__211_0, (int32_t)v5, v8, v9);
  }
  if ( !specialCardBuffList )
    goto LABEL_26;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)v5,
            (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v11 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        Item = this->fields.specialCardBuffIcon;
        if ( Item )
        {
          UISprite__set_atlas((UISprite_o *)Item, this->fields.commandAtlas, 0LL);
          Item = this->fields.specialCardBuffIcon;
          if ( Item )
          {
            UISprite__set_spriteName((UISprite_o *)Item, (System_String_o *)StringLiteral_20088/*"icon_cardfixation"*/, 0LL);
            v14 = this->fields.specialCardBuffTurn;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Item = LocalizationManager__Get((System_String_o *)StringLiteral_5049/*"DISPLAY_REMAINING_TURN"*/, 0LL);
            v15 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
            if ( v15 )
            {
              v16 = (System_String_o *)Item;
              Item = System_Collections_Generic_List_object___get_Item(
                       v15,
                       v11,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
              if ( Item )
              {
                v21 = *((_DWORD *)Item + 5);
                v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v17, v18, v19);
                Item = System_String__Format(v16, v20, 0LL);
                if ( v14 )
                {
                  UILabel__set_text(v14, (System_String_o *)Item, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_26:
        sub_1B8880C(Item, method);
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateIconChangeTypeByTransform(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconChangeTypeByTransform; // x20
  __int64 v4; // x1
  BattleCommandData_o *data; // x0
  int32_t v6; // w0
  BattleCommandComponent_o *v7; // x20
  const MethodInfo *v8; // x3
  UISprite_o *v9; // x19

  if ( (byte_4A5DA09 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20087/*"icon_cardchange_"*/);
    byte_4A5DA09 = 1;
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconChangeTypeByTransform, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_11;
    v6 = BattleCommandData__GetChangeTypeByTransform(data, 0LL);
    v7 = (BattleCommandComponent_o *)BattleCommand__GetCardTypeChangeSpriteNameSuffix(v6, 0LL, 0LL);
    BattleCommandComponent__SetActiveComponent(
      v7,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      v7 != 0LL,
      v8);
    if ( v7 )
    {
      v9 = this->fields.iconChangeTypeByTransform;
      data = (BattleCommandData_o *)System_String__Concat_61707032(
                                      (System_String_o *)StringLiteral_20087/*"icon_cardchange_"*/,
                                      (System_String_o *)v7,
                                      0LL);
      if ( v9 )
      {
        UISprite__set_spriteName(v9, (System_String_o *)data, 0LL);
        return;
      }
LABEL_11:
      sub_1B8880C(data, v4);
    }
  }
}


void __fastcall BattleCommandComponent__UpdateSealStatus(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x20
  BattleCommandData_o *data; // x21
  UnityEngine_Object_o *perf; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  BattleData_o *v8; // x22
  struct BattlePerformance_o *v9; // x8
  BattleCommandSealStatus_o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5D9EA & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandSealStatus_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9EA = 1;
  }
  data = this->fields.data;
  svtData = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Implicit(perf, 0LL);
  v8 = 0LL;
  if ( v6 )
  {
    v9 = this->fields.perf;
    if ( !v9 )
      sub_1B8880C(v6, v7);
    v8 = v9->fields.data;
  }
  v10 = (BattleCommandSealStatus_o *)sub_1B887FC(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_43216624(v10, data, svtData, v8, 0LL);
  this->fields.sealStatus = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sealStatus, (int32_t)v10, v11, v12);
}


void __fastcall BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(
        BattleCommandComponent_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x8
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  System_Collections_IEnumerator_o *updated; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v12; // x8
  float v13; // s0
  float cardBuffAlphaFor; // s1
  float v15; // s2
  float v16; // s0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v17; // x9
  int32_t v18; // w8
  UnityEngine_Object_o *v19; // x20

  if ( (byte_4A5DA0A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DA0A = 1;
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    specialCardBuffList = this->fields.specialCardBuffList;
    if ( !specialCardBuffList || specialCardBuffList->fields._size < 1 )
      goto LABEL_32;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 && this->fields.isCardBuffAlphaAnim )
    {
      if ( !this->fields.isChangedBuffIcon )
      {
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v6);
        UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
        BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(this, v11);
        this->fields.isChangedBuffIcon = 1;
      }
      v12 = this->fields.specialCardBuffList;
      if ( !v12 )
        goto LABEL_34;
      if ( v12->fields._size != 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( !gameObject )
          goto LABEL_34;
        v13 = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
                gameObject,
                gameObject->klass[1]._1.element_class);
        cardBuffAlphaFor = this->fields.cardBuffAlphaFor;
        v15 = this->fields.cardBuffAlphaAnimTime + deltaTime;
        v16 = v13 + (float)((float)(cardBuffAlphaFor - v13) * 0.5);
        this->fields.cardBuffAlphaAnimTime = v15;
        if ( v15 >= 3.0 )
        {
          cardBuffAlphaFor = 0.0;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 0LL;
        }
        if ( v16 <= 0.01 && cardBuffAlphaFor <= 0.0 )
        {
          v17 = this->fields.specialCardBuffList;
          v18 = this->fields.cardBuffListIndex + 1;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
          this->fields.cardBuffListIndex = v18;
          if ( !v17 )
            goto LABEL_34;
          if ( v17->fields._size <= v18 )
            this->fields.cardBuffListIndex = 0;
          this->fields.isChangedBuffIcon = 0;
        }
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
            gameObject,
            gameObject->klass[1]._1.declaringType);
          return;
        }
LABEL_34:
        sub_1B8880C(gameObject, v6);
      }
    }
    else
    {
LABEL_32:
      BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v7);
    }
  }
  else
  {
    v19 = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
      if ( !gameObject )
        goto LABEL_34;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_34;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
}


void __fastcall BattleCommandComponent__UpdateTDTypeChange(
        BattleCommandComponent_o *this,
        bool isForceHide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleServantData_o *svtData; // x0
  BattleBuffData_BuffData_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t turn; // w8
  int v9; // w8
  int v10; // w20
  BattleCommandComponent_o *v11; // x0
  bool v12; // w1
  int32_t v13; // w2
  struct BattleCommandData_o *data; // x8
  int treasureDvc; // w9

  if ( isForceHide || (svtData = this->fields.svtData) == 0LL )
  {
    v11 = this;
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v6 = BattleServantData__getTdTypeChangeBuffSingle(svtData, 0LL);
    if ( v6 )
    {
      turn = v6->fields.turn;
      if ( turn + 1 >= 0 )
        v9 = turn + 1;
      else
        v9 = turn + 2;
      v10 = v9 >> 1;
    }
    else
    {
      v10 = 0;
    }
    data = this->fields.data;
    if ( data )
    {
      treasureDvc = data->fields.treasureDvc;
      LOBYTE(data) = v10 > 0 && treasureDvc > 0;
      if ( v6 )
      {
        if ( v10 >= 1 && treasureDvc >= 1 )
          LOBYTE(data) = BattleCommandComponent__UpdateTreasureDeviceTypeImage(this, v6->fields.buffId, v7);
      }
    }
    v12 = (unsigned __int8)data & 1;
    v11 = this;
    v13 = v10;
  }
  BattleCommandComponent__SetTreasureDeviceTypeChange(v11, v12, v13, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleCommandComponent__UpdateTreasureDeviceTypeImage(
        BattleCommandComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  BuffMaster_o *Master_object; // x0
  __int64 v6; // x1
  UISprite_o *nowTreasureDeviceTypeImage; // x20
  System_String_o *v8; // x21
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  UISpriteData_o *Sprite; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5DA00 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_20093/*"icon_cardtypechange"*/);
    byte_4A5DA00 = 1;
  }
  name = 0LL;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_20;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_22;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_object,
          &name,
          buffId,
          (System_String_o *)StringLiteral_20093/*"icon_cardtypechange"*/,
          0LL) )
    goto LABEL_20;
  nowTreasureDeviceTypeImage = this->fields.nowTreasureDeviceTypeImage;
  v8 = name;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventSprite(nowTreasureDeviceTypeImage, v8, 0LL) )
    goto LABEL_19;
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(defaultTdTypeImageAtlas, 0LL, 0LL) )
  {
LABEL_20:
    LOBYTE(Sprite) = 0;
    return (char)Sprite;
  }
  Master_object = (BuffMaster_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !Master_object )
    goto LABEL_22;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)Master_object, name, 0LL);
  if ( !Sprite )
    return (char)Sprite;
  Master_object = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !Master_object
    || (UISprite__set_atlas((UISprite_o *)Master_object, this->fields.defaultTdTypeImageAtlas, 0LL),
        (Master_object = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(Master_object, v6);
  }
  UISprite__set_spriteName((UISprite_o *)Master_object, name, 0LL);
LABEL_19:
  LOBYTE(Sprite) = 1;
  return (char)Sprite;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__WaitForErrorViewFinished(
        BattleCommandComponent_o *this,
        float waitSeconds,
        System_String_o *busyVoiceSe,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5DA14 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent__WaitForErrorViewFinished_d__244_TypeInfo);
    byte_4A5DA14 = 1;
  }
  v7 = sub_1B887FC(BattleCommandComponent__WaitForErrorViewFinished_d__244_TypeInfo);
  BattleCommandComponent__WaitForErrorViewFinished_d__244___ctor(
    (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(float *)(v7 + 32) = waitSeconds;
  *(_QWORD *)(v7 + 48) = busyVoiceSe;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)busyVoiceSe, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__138_0(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x20
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_7;
  v4 = this;
  this = (BattleCommandComponent_o *)BattleBuffData_BuffData__isCommandCodeBuff(buff, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  data = v4->fields.data;
  if ( !data )
LABEL_7:
    sub_1B8880C(this, buff);
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__138_1(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B8880C(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, 0LL)
      && !BattleBuffData_BuffData__isEnableCommandCardBuff(buff, this->fields.data, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__138_2(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x20
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_6;
  v4 = this;
  this = (BattleCommandComponent_o *)BattleBuffData_BuffData__IsCommandAssistBuff(buff, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    data = v4->fields.data;
    if ( data )
      return buff->fields.commandAssistId != data->fields.commandAssistId;
LABEL_6:
    sub_1B8880C(this, buff);
  }
  return 0;
}


void __fastcall BattleCommandComponent__addCriticalBuff(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *v12; // x20
  BattleCommandComponent_o *v13; // x0
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *v15; // x0
  System_String_o *CommonSeNameLocal; // x20
  System_String_o *CueSheet; // x21
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_IEnumerator_o *v21; // x1

  if ( (byte_4A5D9DD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    sub_1B885B0(&Method_BattleCommandComponent___c__DisplayClass160_0__addCriticalBuff_b__0__);
    sub_1B885B0(&BattleCommandComponent___c__DisplayClass160_0_TypeInfo);
    byte_4A5D9DD = 1;
  }
  v5 = sub_1B887FC(BattleCommandComponent___c__DisplayClass160_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass160_0___ctor((BattleCommandComponent___c__DisplayClass160_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)obj, v10, v11);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass160_0__addCriticalBuff_b__0__,
    0LL);
  v15 = BattleCommandComponent__delayFrame(v13, v12, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, 7, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(Instance, v7);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime((SeManager_o *)Instance, CueSheet, CommonSeNameLocal, 0LL);
  v21 = BattleCommandComponent__PlayStarSe(v19, DefaultPreDelayTime / 1000.0, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v21, 0LL);
}


void __fastcall BattleCommandComponent__addFirstAura(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *effectobj; // x19
  UnityEngine_GameObject_o *Object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  BattleCommandComponent__stopFirstAura(this, (const MethodInfo *)effect);
  effectobj = this->fields.effectobj;
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, effect, this->fields.objectRoot, 0LL, 0LL);
  if ( !effectobj )
    sub_1B8880C(Object, v7);
  if ( effectobj->max_length <= 4 )
    sub_1B88814(Object, v7);
  effectobj->m_Items[4] = Object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[4], (int32_t)Object, v8, v9);
}


void __fastcall BattleCommandComponent__addObject(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t type,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v6; // x20
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v8; // x22
  struct UnityEngine_GameObject_array *v9; // x8
  UnityEngine_Object_o *v10; // x22
  System_String_o *v11; // x0
  UnityEngine_Object_o *v12; // x21
  BattleCommandComponent_o *v13; // x22
  System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct UnityEngine_GameObject_array *v17; // x8
  Il2CppClass **v18; // x0
  struct UnityEngine_GameObject_array *v19; // x8
  System_Enum_o v20; // [xsp+8h] [xbp-58h] BYREF
  int32_t v21; // [xsp+18h] [xbp-48h]

  v6 = this;
  if ( (byte_4A5D9CD & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_1B885B0(&StringLiteral_18870/*"effect/"*/);
    byte_4A5D9CD = 1;
  }
  addObjectList = v6->fields.addObjectList;
  if ( !addObjectList )
    goto LABEL_23;
  if ( addObjectList->max_length <= type )
    goto LABEL_24;
  v8 = (UnityEngine_Object_o *)addObjectList->m_Items[type];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.addObjectList;
    if ( !v9 )
      goto LABEL_23;
    if ( v9->max_length <= type )
      goto LABEL_24;
    v10 = (UnityEngine_Object_o *)v9->m_Items[type];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v10, 0LL);
  }
  v11 = System_String__Concat_61707032((System_String_o *)StringLiteral_18870/*"effect/"*/, name, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_38240928(
                                       (BaseMonoBehaviour_o *)v6,
                                       v11,
                                       v6->fields.objectRoot,
                                       0LL,
                                       0LL);
  if ( !this )
    goto LABEL_23;
  v12 = (UnityEngine_Object_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v13 = this;
  if ( !byte_4A55CE7 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  if ( !v13
    || (UnityEngine_Transform__set_localRotation(
          (UnityEngine_Transform_o *)v13,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL),
        v20.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo,
        v20.monitor = (void *)-1LL,
        v21 = type,
        v14 = System_Enum__ToString(&v20, 0LL),
        UnityEngine_Object__set_name(v12, v14, 0LL),
        (v17 = v6->fields.addObjectList) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(this, name);
  }
  if ( v17->max_length <= type )
    goto LABEL_24;
  v18 = &v17->obj.klass + type;
  v18[4] = (Il2CppClass *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v15, v16);
  v19 = v6->fields.addObjectList;
  if ( !v19 )
    goto LABEL_23;
  if ( v19->max_length <= type )
LABEL_24:
    sub_1B88814(this, name);
  this = (BattleCommandComponent_o *)v19->m_Items[type];
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattleCommandComponent__attachEffect(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  UnityEngine_GameObject_o *Object_38240928; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct UnityEngine_GameObject_array *effectobj; // x8
  int32_t max_length; // w9
  Il2CppClass **v17; // x0

  if ( (byte_4A5D9E1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18870/*"effect/"*/);
    byte_4A5D9E1 = 1;
  }
  v7 = System_String__Concat_61707032((System_String_o *)StringLiteral_18870/*"effect/"*/, name, 0LL);
  Object_38240928 = BaseMonoBehaviour__createObject_38240928(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0LL,
                      0LL);
  if ( !Object_38240928 )
    goto LABEL_16;
  v10 = Object_38240928;
  Object_38240928 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object_38240928, 0LL);
  v11 = (UnityEngine_Transform_o *)Object_38240928;
  if ( !byte_4A55CE1 )
  {
    Object_38240928 = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v11 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Object_38240928 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)Object_38240928;
  if ( !byte_4A55CE6 )
  {
    Object_38240928 = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(Object_38240928, v9);
  }
  max_length = effectobj->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1B88814(Object_38240928, v9);
    v17 = &effectobj->obj.klass + index;
    v17[4] = (Il2CppClass *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v13, v14);
  }
}


bool __fastcall BattleCommandComponent__checkCriticalPointValid(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1B8880C(0LL, method);
  return UnityEngine_GameObject__get_activeSelf(criticalObject, 0LL);
}


bool __fastcall BattleCommandComponent__checkMark(
        BattleCommandComponent_o *this,
        int32_t mark,
        const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.markindex == mark;
}


bool __fastcall BattleCommandComponent__checkObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.data != 0LL;
}


void __fastcall BattleCommandComponent__compCriticallabel(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float v5; // s8
  float y; // s9
  float z; // s10
  float v8; // s11
  float v9; // s0
  float v10; // s0
  float v11; // s10
  float v12; // s9
  float v13; // s8
  const MethodInfo *v14; // x1
  struct UnityEngine_GameObject_o *tr_criticaleffect; // x8
  UnityEngine_GameObject_o *effect_fullcricomplete; // x20
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  struct UnityEngine_GameObject_o *SpawnerObj; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  lossyScale = UnityEngine_Transform__get_lossyScale(transform, 0LL);
  y = lossyScale.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  v23 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
  z = v23.fields.z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_14;
  v8 = 1.0 / z;
  v9 = COERCE_FLOAT(UnityEngine_Transform__get_localScale(transform, 0LL));
  v10 = v9 + v9;
  v11 = (float)(1.0 / v5) * v10;
  v12 = (float)(1.0 / y) * v10;
  v13 = v8 * v10;
  transform = (UnityEngine_Transform_o *)BattleCommandComponent__IsMaxViewCritical(this, v14);
  tr_criticaleffect = this->fields.tr_criticaleffect;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !tr_criticaleffect )
      goto LABEL_14;
    effect_fullcricomplete = this->fields.effect_fullcricomplete;
  }
  else
  {
    if ( !tr_criticaleffect )
      goto LABEL_14;
    effect_fullcricomplete = this->fields.effect_cricomplete;
  }
  v17 = UnityEngine_GameObject__get_transform(this->fields.tr_criticaleffect, 0LL);
  v24.fields.x = v11;
  v24.fields.y = v12;
  v24.fields.z = v13;
  SpawnerObj = BattleCommandComponent__GetSpawnerObj(this, effect_fullcricomplete, v17, v24, v18);
  this->fields.countUpFinishEffect = SpawnerObj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.countUpFinishEffect, (int32_t)SpawnerObj, v20, v21);
  transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  this->fields.isCountUp = 0;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5DA0D & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_TypeInfo);
    byte_4A5DA0D = 1;
  }
  v3 = sub_1B887FC(BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_TypeInfo);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233___ctor(
    (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__delayFrame(
        BattleCommandComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D9DF & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent__delayFrame_d__162_TypeInfo);
    byte_4A5D9DF = 1;
  }
  v4 = sub_1B887FC(BattleCommandComponent__delayFrame_d__162_TypeInfo);
  BattleCommandComponent__delayFrame_d__162___ctor((BattleCommandComponent__delayFrame_d__162_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B8880C(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)action, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleCommandComponent__endFashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_4A5D9F3 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9F3 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( !effectobj->max_length )
    goto LABEL_15;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( v5->max_length )
      {
        v6 = (UnityEngine_Object_o *)v5->m_Items[0];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v6, 0LL);
        return;
      }
LABEL_15:
      sub_1B88814(this, method);
    }
LABEL_14:
    sub_1B8880C(this, method);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__fadeoutEffect(
        BattleCommandComponent_o *this,
        bool isTresure,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D9E3 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent__fadeoutEffect_d__182_TypeInfo);
    byte_4A5D9E3 = 1;
  }
  v5 = sub_1B887FC(BattleCommandComponent__fadeoutEffect_d__182_TypeInfo);
  BattleCommandComponent__fadeoutEffect_d__182___ctor((BattleCommandComponent__fadeoutEffect_d__182_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 40) = isTresure;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__flashComboSvt(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct System_Boolean_array *sameflg; // x8

  if ( index > 2 )
    goto LABEL_6;
  if ( !combo || (sameflg = combo->fields.sameflg) == 0LL )
    sub_1B8880C(this, index);
  if ( sameflg->max_length <= index )
    sub_1B88814(this, index);
  if ( sameflg->m_Items[index + 4] )
LABEL_6:
    BattleCommandComponent__flashServant(this, *(const MethodInfo **)&index);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__flashComboType(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  if ( !combo )
    sub_1B8880C(this, index);
  if ( combo->fields.flash )
    BattleCommandComponent__flashTypeCard(this, *(const MethodInfo **)&index);
}


void __fastcall BattleCommandComponent__flashServant(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_Transform_o *parent; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct UnityEngine_GameObject_array *v11; // x8
  UIWidget_o *v12; // x20
  UnityEngine_Shader_o *v13; // x21
  UnityEngine_Material_o *v14; // x22
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_GameObject_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_Object_array *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Hashtable_o *v43; // x0
  struct UnityEngine_GameObject_array *v44; // x8
  __int64 v45; // x0
  __int64 v46; // [xsp+0h] [xbp-40h] BYREF
  int v47; // [xsp+8h] [xbp-38h]
  int v48; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4A5D9F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_19004/*"endFashSvt"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&StringLiteral_16135/*"_AddColor"*/);
    sub_1B885B0(&StringLiteral_23013/*"scale"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5D9F0 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(facetex, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_62;
    effectobj = this->fields.effectobj;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !this->fields.nomalwidget )
      goto LABEL_62;
    v7 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.nomalwidget,
                                              0LL);
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_62;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                              (BaseMonoBehaviour_o *)this,
                                              v7,
                                              parent,
                                              0LL,
                                              0LL);
    if ( !effectobj )
      goto LABEL_62;
    if ( effectobj->max_length <= 1 )
      goto LABEL_63;
    effectobj->m_Items[1] = (UnityEngine_GameObject_o *)gameObject;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[1], (int32_t)gameObject, v9, v10);
    v11 = this->fields.effectobj;
    if ( !v11 )
      goto LABEL_62;
    if ( v11->max_length <= 1 )
      goto LABEL_63;
    gameObject = (UnityEngine_Component_o *)v11->m_Items[1];
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    if ( !gameObject )
      goto LABEL_62;
    v12 = (UIWidget_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_62;
    v49.fields.x = 0.0;
    v49.fields.y = 0.0;
    v49.fields.z = -5.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v49, 0LL);
    this->fields.newMatriarl = 1;
    v13 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v12->klass->vtable._28_get_shader.method)(
                                    v12,
                                    v12->klass->vtable._29_set_shader.methodPtr);
    v14 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v14, v13, 0LL);
    ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v12->klass->vtable._25_set_material.method)(
      v12,
      v14,
      v12->klass->vtable._26_get_mainTexture.methodPtr);
    gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v12->klass->vtable._24_get_material.method)(
                                              v12,
                                              v12->klass->vtable._25_set_material.methodPtr);
    if ( !gameObject )
      goto LABEL_62;
    v50.fields.r = 1.0;
    v50.fields.g = 1.0;
    v50.fields.b = 1.0;
    v50.fields.a = 0.0;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)gameObject,
      (System_String_o *)StringLiteral_16135/*"_AddColor"*/,
      v50,
      0LL);
    UIWidget__set_depth(v12, this->fields.basedepth + 400, 0LL);
    v15 = this->fields.effectobj;
    if ( !v15 )
      goto LABEL_62;
    if ( v15->max_length <= 1 )
      goto LABEL_63;
    v16 = v15->m_Items[1];
    gameObject = (UnityEngine_Component_o *)sub_1B88658(object___TypeInfo, 8LL);
    if ( !gameObject )
      goto LABEL_62;
    v19 = (System_Object_array *)gameObject;
    gameObject = (UnityEngine_Component_o *)StringLiteral_23013/*"scale"*/;
    if ( StringLiteral_23013/*"scale"*/ )
    {
      gameObject = (UnityEngine_Component_o *)sub_1B886EC(StringLiteral_23013/*"scale"*/, v19->obj.klass->_1.element_class);
      if ( !gameObject )
        goto LABEL_64;
      v4 = StringLiteral_23013/*"scale"*/;
    }
    else
    {
      v4 = 0LL;
    }
    if ( !v19->max_length )
      goto LABEL_63;
    v19->m_Items[0] = (Il2CppObject *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v19->m_Items, v4, v17, v18);
    v46 = vdup_n_s32(0x3FE66666u).n64_i64[0];
    v47 = 1065353216;
    gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v46, v20, v21, v22);
    v25 = (Il2CppObject *)gameObject;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)sub_1B886EC(gameObject, v19->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v19->max_length <= 1 )
        goto LABEL_63;
      v19->m_Items[1] = v25;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->m_Items[1], (int32_t)v25, v23, v24);
      gameObject = (UnityEngine_Component_o *)StringLiteral_23929/*"time"*/;
      if ( StringLiteral_23929/*"time"*/ )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B886EC(StringLiteral_23929/*"time"*/, v19->obj.klass->_1.element_class);
        if ( !gameObject )
          goto LABEL_64;
        v4 = StringLiteral_23929/*"time"*/;
      }
      else
      {
        v4 = 0LL;
      }
      if ( v19->max_length <= 2 )
        goto LABEL_63;
      v19->m_Items[2] = (Il2CppObject *)v4;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->m_Items[2], v4, v26, v27);
      v48 = 1065353216;
      gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(float_TypeInfo, &v48, v28, v29, v30);
      v33 = (Il2CppObject *)gameObject;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)sub_1B886EC(gameObject, v19->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v19->max_length <= 3 )
          goto LABEL_63;
        v19->m_Items[3] = v33;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->m_Items[3], (int32_t)v33, v31, v32);
        gameObject = (UnityEngine_Component_o *)StringLiteral_22275/*"oncompletetarget"*/;
        if ( StringLiteral_22275/*"oncompletetarget"*/ )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B886EC(StringLiteral_22275/*"oncompletetarget"*/, v19->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_64;
          v4 = StringLiteral_22275/*"oncompletetarget"*/;
        }
        else
        {
          v4 = 0LL;
        }
        if ( v19->max_length <= 4 )
          goto LABEL_63;
        v19->m_Items[4] = (Il2CppObject *)v4;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->m_Items[4], v4, v34, v35);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
        v38 = (Il2CppObject *)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)sub_1B886EC(gameObject, v19->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v19->max_length <= 5 )
            goto LABEL_63;
          v19->m_Items[5] = v38;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->m_Items[5], (int32_t)v38, v36, v37);
          gameObject = (UnityEngine_Component_o *)StringLiteral_22273/*"oncomplete"*/;
          if ( StringLiteral_22273/*"oncomplete"*/ )
          {
            gameObject = (UnityEngine_Component_o *)sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v19->obj.klass->_1.element_class);
            if ( !gameObject )
              goto LABEL_64;
            v4 = StringLiteral_22273/*"oncomplete"*/;
          }
          else
          {
            v4 = 0LL;
          }
          if ( v19->max_length <= 6 )
            goto LABEL_63;
          v19->m_Items[6] = (Il2CppObject *)v4;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->m_Items[6], v4, v39, v40);
          gameObject = (UnityEngine_Component_o *)StringLiteral_19004/*"endFashSvt"*/;
          if ( !StringLiteral_19004/*"endFashSvt"*/ )
          {
            v4 = 0LL;
            goto LABEL_55;
          }
          gameObject = (UnityEngine_Component_o *)sub_1B886EC(StringLiteral_19004/*"endFashSvt"*/, v19->obj.klass->_1.element_class);
          if ( gameObject )
          {
            v4 = StringLiteral_19004/*"endFashSvt"*/;
LABEL_55:
            if ( v19->max_length <= 7 )
              goto LABEL_63;
            v19->m_Items[7] = (Il2CppObject *)v4;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->m_Items[7], v4, v41, v42);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v43 = iTween__Hash(v19, 0LL);
            iTween__ScaleTo_60250892(v16, v43, 0LL);
            v44 = this->fields.effectobj;
            if ( v44 )
            {
              if ( v44->max_length > 1 )
              {
                v51.fields.r = 0.0;
                v51.fields.g = 0.0;
                v51.fields.b = 0.0;
                v51.fields.a = 0.0;
                TweenColor__Begin(v44->m_Items[1], 1.0, v51, 0LL);
                return;
              }
LABEL_63:
              sub_1B88814(gameObject, v4);
            }
LABEL_62:
            sub_1B8880C(gameObject, v4);
          }
        }
      }
    }
LABEL_64:
    v45 = sub_1B88830(gameObject);
    sub_1B886D8(v45, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__flashType(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  BattleCommandComponent__flashTypeCard(this, (const MethodInfo *)flg);
  if ( flg )
  {
    v6 = BattleCommandComponent__fadeoutEffect(this, 0, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall BattleCommandComponent__flashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x20
  BattleCommandComponent_o *v8; // x21
  BattleCommandComponent_o *v9; // x22
  UnityEngine_Transform_o *transform; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct UnityEngine_GameObject_array *v13; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  struct UnityEngine_GameObject_array *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_GameObject_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  BattleCommandComponent_o *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w2
  int32_t v25; // w3
  BattleCommandComponent_o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w2
  int32_t v33; // w3
  BattleCommandComponent_o *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  BattleCommandComponent_o *v39; // x19
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Hashtable_o *v44; // x0
  __int64 v45; // x0
  int v46; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v47; // [xsp+10h] [xbp-40h] BYREF
  int v48; // [xsp+18h] [xbp-38h]
  UnityEngine_Color_o v49; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v2 = this;
  if ( (byte_4A5D9F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    sub_1B885B0(&StringLiteral_19005/*"endFashTypeCard"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&StringLiteral_23013/*"scale"*/);
    this = (BattleCommandComponent_o *)sub_1B885B0(&iTween_TypeInfo);
    byte_4A5D9F2 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_71;
  if ( !effectobj->max_length )
    goto LABEL_72;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_71;
    if ( !v5->max_length )
      goto LABEL_72;
    v6 = (UnityEngine_Object_o *)v5->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v6, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.icon;
  if ( !this )
    goto LABEL_71;
  v7 = v2->fields.effectobj;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v2->fields.nomalwidget )
    goto LABEL_71;
  v8 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                       0LL);
  if ( !this )
    goto LABEL_71;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_71;
  this = (BattleCommandComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !v2->fields.icon )
    goto LABEL_71;
  v9 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.icon,
                                       0LL);
  if ( !this )
    goto LABEL_71;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)v2,
                                       (UnityEngine_GameObject_o *)v8,
                                       (UnityEngine_Transform_o *)v9,
                                       transform,
                                       0LL);
  if ( !v7 )
    goto LABEL_71;
  if ( !v7->max_length )
    goto LABEL_72;
  v7->m_Items[0] = (UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v7->m_Items, (int32_t)this, v11, v12);
  v13 = v2->fields.effectobj;
  if ( !v13 )
    goto LABEL_71;
  if ( !v13->max_length )
    goto LABEL_72;
  this = (BattleCommandComponent_o *)v13->m_Items[0];
  if ( !this )
    goto LABEL_71;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0LL,
                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_71;
    UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, v2->fields.basedepth + 400, 0LL);
    v15 = v2->fields.effectobj;
    if ( !v15 )
      goto LABEL_71;
    if ( !v15->max_length )
      goto LABEL_72;
    v49.fields.r = 0.0;
    v49.fields.g = 0.0;
    v49.fields.b = 0.0;
    v49.fields.a = 0.0;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v15->m_Items[0], 1.0, v49, 0LL);
  }
  v16 = v2->fields.effectobj;
  if ( !v16 )
    goto LABEL_71;
  if ( !v16->max_length )
    goto LABEL_72;
  v17 = v16->m_Items[0];
  this = (BattleCommandComponent_o *)sub_1B88658(object___TypeInfo, 8LL);
  if ( !this )
LABEL_71:
    sub_1B8880C(this, method);
  v20 = this;
  this = (BattleCommandComponent_o *)StringLiteral_23013/*"scale"*/;
  if ( StringLiteral_23013/*"scale"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B886EC(StringLiteral_23013/*"scale"*/, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_23013/*"scale"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v20->fields.m_CancellationTokenSource) )
    goto LABEL_72;
  v20->fields.objectRoot = (struct UnityEngine_Transform_o *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.objectRoot, (int32_t)method, v18, v19);
  v47 = 0x4000000040000000LL;
  v48 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v47, v21, v22, v23);
  v26 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1B886EC(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_72;
  v20->fields.bg = (struct UISprite_o *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.bg, (int32_t)v26, v24, v25);
  this = (BattleCommandComponent_o *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B886EC(StringLiteral_23929/*"time"*/, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_23929/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_72;
  v20->fields.icon = (struct UISprite_o *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.icon, (int32_t)method, v27, v28);
  v46 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(float_TypeInfo, &v46, v29, v30, v31);
  v34 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1B886EC(this, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 3 )
    goto LABEL_72;
  v20->fields.text = (struct UISprite_o *)v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.text, (int32_t)v34, v32, v33);
  this = (BattleCommandComponent_o *)StringLiteral_22275/*"oncompletetarget"*/;
  if ( StringLiteral_22275/*"oncompletetarget"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B886EC(StringLiteral_22275/*"oncompletetarget"*/, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_22275/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_72;
  v20->fields.facetex = (struct UITexture_o *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.facetex, (int32_t)method, v35, v36);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  v39 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1B886EC(this, v20->klass->_1.element_class);
    if ( !this )
    {
LABEL_73:
      v45 = sub_1B88830(this);
      sub_1B886D8(v45, 0LL);
    }
  }
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_72;
  v20->fields.nobletex = (struct UITexture_o *)v39;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.nobletex, (int32_t)v39, v37, v38);
  this = (BattleCommandComponent_o *)StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v20->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_72;
  v20->fields.friendIcon = (struct UISprite_o *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.friendIcon, (int32_t)method, v40, v41);
  this = (BattleCommandComponent_o *)StringLiteral_19005/*"endFashTypeCard"*/;
  if ( StringLiteral_19005/*"endFashTypeCard"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B886EC(StringLiteral_19005/*"endFashTypeCard"*/, v20->klass->_1.element_class);
    if ( this )
    {
      method = (const MethodInfo *)StringLiteral_19005/*"endFashTypeCard"*/;
      goto LABEL_67;
    }
    goto LABEL_73;
  }
  method = 0LL;
LABEL_67:
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 7 )
LABEL_72:
    sub_1B88814(this, method);
  v20->fields.sealedSprite = (struct UISprite_o *)method;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.sealedSprite, (int32_t)method, v42, v43);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v44 = iTween__Hash((System_Object_array *)v20, 0LL);
  iTween__ScaleTo_60250892(v17, v44, 0LL);
}


System_String_o *__fastcall BattleCommandComponent__getCardTypeSealSpriteName(
        BattleCommandComponent_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  BattleCommandComponent_c *v4; // x0
  System_String_o **p_SEALED_CARDTYPE_ICON_QUICK; // x8
  BattleCommandComponent_c *v6; // x0
  BattleCommandComponent_c *v7; // x0

  if ( (byte_4A5D9D0 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D9D0 = 1;
  }
  switch ( commandType )
  {
    case 3:
      v6 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v6 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v6->static_fields->SEALED_CARDTYPE_ICON_QUICK;
      break;
    case 2:
      v7 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v7 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v7->static_fields->SEALED_CARDTYPE_ICON_BUSTER;
      break;
    case 1:
      v4 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v4 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v4->static_fields->SEALED_CARDTYPE_ICON_ARTS;
      break;
    default:
      p_SEALED_CARDTYPE_ICON_QUICK = (System_String_o **)&StringLiteral_1/*""*/;
      break;
  }
  return *p_SEALED_CARDTYPE_ICON_QUICK;
}


int32_t __fastcall BattleCommandComponent__getCommandType(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(0LL, method);
  return BattleCommandData__getCommandType(data, 0LL);
}


int32_t __fastcall BattleCommandComponent__getCriticalCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( data )
  {
    LODWORD(data) = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0LL);
    if ( (int)data >= 1 )
    {
      if ( (int)data < 10 )
        LODWORD(data) = 1;
      else
        LODWORD(data) = (unsigned int)data / 0xA;
    }
  }
  return (int)data;
}


int32_t __fastcall BattleCommandComponent__getMarkIndex(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.markindex;
  else
    return -1;
}


int32_t __fastcall BattleCommandComponent__getPowerUpDepth(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *powerUpCardIcon; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8

  if ( (byte_4A5D9C7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9C7 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.powerUpCardIcon;
  if ( !v6 )
    sub_1B8880C(v4, v5);
  return v6->fields.mDepth;
}


int32_t __fastcall BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(this, method);
  return data->fields.svtId;
}


int32_t __fastcall BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(this, method);
  return data->fields.svtlimit;
}


int32_t __fastcall BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(this, method);
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *__fastcall BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *result; // x0
  ServantStatusBattleListViewItem_o *p_sealStatus; // x19
  BattleCommandSealStatus_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D9C0 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandSealStatus_TypeInfo);
    byte_4A5D9C0 = 1;
  }
  result = this->fields.sealStatus;
  if ( !result )
  {
    p_sealStatus = (ServantStatusBattleListViewItem_o *)&this->fields.sealStatus;
    v5 = (BattleCommandSealStatus_o *)sub_1B887FC(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v5, 0LL);
    p_sealStatus->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B88554(p_sealStatus, (int32_t)v5, v6, v7);
    return (BattleCommandSealStatus_o *)p_sealStatus->klass;
  }
  return result;
}


bool __fastcall BattleCommandComponent__get_isKindOfDontAction(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1B8880C(0LL, v3);
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, 0LL);
}


bool __fastcall BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1B8880C(0LL, v3);
  return BattleCommandSealStatus__get_HasKindOfSealed(SealStatus, 0LL);
}


BattleCommandData_o *__fastcall BattleCommandComponent__getcommandData(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.data;
}


void __fastcall BattleCommandComponent__hideOutCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct UIWidget_o *nomalwidget; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct UnityEngine_GameObject_array *addObjectList; // x8
  __int64 v7; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8

  if ( (byte_4A5D9E4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9E4 = 1;
  }
  nomalwidget = this->fields.nomalwidget;
  if ( !nomalwidget
    || (((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
          nomalwidget,
          nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          0.0),
        BattleCommandComponent__DestroyEffectObject1(this, v4),
        (addObjectList = this->fields.addObjectList) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(nomalwidget, method);
  }
  v7 = 4LL;
  while ( 1 )
  {
    max_length = addObjectList->max_length;
    v9 = v7 - 4;
    if ( v7 - 4 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_18;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&addObjectList->obj.klass + v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    nomalwidget = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      v11 = this->fields.addObjectList;
      if ( !v11 )
        goto LABEL_16;
      if ( v9 >= v11->max_length )
LABEL_18:
        sub_1B88814(nomalwidget, method);
      nomalwidget = (struct UIWidget_o *)*((_QWORD *)&v11->obj.klass + v7);
      if ( !nomalwidget )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nomalwidget, 0, 0LL);
    }
    addObjectList = this->fields.addObjectList;
    ++v7;
    if ( !addObjectList )
      goto LABEL_16;
  }
  BattleCommandComponent__CardEffectSetActive(this, 0, v5);
}


bool __fastcall BattleCommandComponent__isSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.selectflg;
}


bool __fastcall BattleCommandComponent__isTreasureDvc(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.treasureDvc > 0;
}


void __fastcall BattleCommandComponent__openCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_5;
  if ( data->fields.starcount > 0 )
    return;
  this = (BattleCommandComponent_o *)this->fields.criticalObject;
  if ( !this )
LABEL_5:
    sub_1B8880C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__playAddAttackEffect(
        BattleCommandComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  BattleCommandComponent__flashServant(this, (const MethodInfo *)flg);
  if ( flg )
  {
    v6 = BattleCommandComponent__fadeoutEffect(this, 0, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__playAttackEffect(
        BattleCommandComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  BattleCommandComponent__flashTypeCard(this, (const MethodInfo *)flg);
  BattleCommandComponent__flashServant(this, v5);
  if ( flg )
  {
    v7 = BattleCommandComponent__fadeoutEffect(this, 0, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


void __fastcall BattleCommandComponent__playNpAttackEffect(
        BattleCommandComponent_o *this,
        float ftime,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Object_array *v10; // x21
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x22
  System_Collections_Hashtable_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  System_Object_array *v47; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x22
  System_Collections_Hashtable_o *v62; // x0
  const MethodInfo *v63; // x2
  System_Collections_IEnumerator_o *v64; // x0
  __int64 v65; // x0
  float v66; // [xsp+0h] [xbp-70h] BYREF
  int v67; // [xsp+4h] [xbp-6Ch] BYREF
  float v68; // [xsp+8h] [xbp-68h] BYREF
  int v69; // [xsp+Ch] [xbp-64h] BYREF
  int v70; // [xsp+18h] [xbp-58h] BYREF
  int v71; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4A5D9E2 & 1) == 0 )
  {
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_24743/*"x"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_24847/*"y"*/);
    sub_1B885B0(&StringLiteral_24895/*"z"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5D9E2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = sub_1B88658(object___TypeInfo, 8LL);
  if ( !v6 )
    goto LABEL_58;
  v10 = (System_Object_array *)v6;
  v11 = (Il2CppObject *)StringLiteral_24743/*"x"*/;
  if ( StringLiteral_24743/*"x"*/ )
  {
    v11 = (Il2CppObject *)sub_1B886EC(StringLiteral_24743/*"x"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
    v12 = (Il2CppObject *)StringLiteral_24743/*"x"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v10->max_length )
    goto LABEL_56;
  v10->m_Items[0] = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v10->m_Items, (int32_t)v12, v8, v9);
  v71 = 0x40000000;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v71, v13, v14, v15);
  v18 = v11;
  if ( v11 )
  {
    v11 = (Il2CppObject *)sub_1B886EC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
  }
  if ( v10->max_length <= 1 )
    goto LABEL_56;
  v10->m_Items[1] = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[1], (int32_t)v18, v16, v17);
  v11 = (Il2CppObject *)StringLiteral_24847/*"y"*/;
  if ( StringLiteral_24847/*"y"*/ )
  {
    v11 = (Il2CppObject *)sub_1B886EC(StringLiteral_24847/*"y"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
    v12 = (Il2CppObject *)StringLiteral_24847/*"y"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 2 )
    goto LABEL_56;
  v10->m_Items[2] = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[2], (int32_t)v12, v19, v20);
  v70 = 0x40000000;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v70, v21, v22, v23);
  v26 = v11;
  if ( v11 )
  {
    v11 = (Il2CppObject *)sub_1B886EC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
  }
  if ( v10->max_length <= 3 )
    goto LABEL_56;
  v10->m_Items[3] = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[3], (int32_t)v26, v24, v25);
  v11 = (Il2CppObject *)StringLiteral_24895/*"z"*/;
  if ( StringLiteral_24895/*"z"*/ )
  {
    v11 = (Il2CppObject *)sub_1B886EC(StringLiteral_24895/*"z"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
    v12 = (Il2CppObject *)StringLiteral_24895/*"z"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 4 )
    goto LABEL_56;
  v10->m_Items[4] = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[4], (int32_t)v12, v27, v28);
  v69 = 1065353216;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v69, v29, v30, v31);
  v34 = v11;
  if ( v11 )
  {
    v11 = (Il2CppObject *)sub_1B886EC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
  }
  if ( v10->max_length <= 5 )
    goto LABEL_56;
  v10->m_Items[5] = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[5], (int32_t)v34, v32, v33);
  v11 = (Il2CppObject *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v11 = (Il2CppObject *)sub_1B886EC(StringLiteral_23929/*"time"*/, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
    v12 = (Il2CppObject *)StringLiteral_23929/*"time"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v10->max_length <= 6 )
    goto LABEL_56;
  v10->m_Items[6] = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[6], (int32_t)v12, v35, v36);
  v68 = ftime + 0.1;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v68, v37, v38, v39);
  v42 = v11;
  if ( v11 )
  {
    v11 = (Il2CppObject *)sub_1B886EC(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
  }
  if ( v10->max_length <= 7 )
    goto LABEL_56;
  v10->m_Items[7] = v42;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->m_Items[7], (int32_t)v42, v40, v41);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v43 = iTween__Hash(v10, 0LL);
  iTween__ScaleTo_60250892(gameObject, v43, 0LL);
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = sub_1B88658(object___TypeInfo, 4LL);
  if ( !v6 )
LABEL_58:
    sub_1B8880C(v6, v7);
  v47 = (System_Object_array *)v6;
  v11 = (Il2CppObject *)StringLiteral_24895/*"z"*/;
  if ( StringLiteral_24895/*"z"*/ )
  {
    v11 = (Il2CppObject *)sub_1B886EC(StringLiteral_24895/*"z"*/, v47->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
    v12 = (Il2CppObject *)StringLiteral_24895/*"z"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v47->max_length )
    goto LABEL_56;
  v47->m_Items[0] = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v47->m_Items, (int32_t)v12, v45, v46);
  v67 = 1144258560;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v67, v48, v49, v50);
  v53 = v11;
  if ( v11 )
  {
    v11 = (Il2CppObject *)sub_1B886EC(v11, v47->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_56;
  v47->m_Items[1] = v53;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->m_Items[1], (int32_t)v53, v51, v52);
  v11 = (Il2CppObject *)StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v11 = (Il2CppObject *)sub_1B886EC(StringLiteral_23929/*"time"*/, v47->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_57;
    v12 = (Il2CppObject *)StringLiteral_23929/*"time"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_56;
  v47->m_Items[2] = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->m_Items[2], (int32_t)v12, v54, v55);
  v66 = ftime;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v66, v56, v57, v58);
  v61 = v11;
  if ( v11 )
  {
    v11 = (Il2CppObject *)sub_1B886EC(v11, v47->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_57:
      v65 = sub_1B88830(v11);
      sub_1B886D8(v65, 0LL);
    }
  }
  if ( v47->max_length <= 3 )
LABEL_56:
    sub_1B88814(v11, v12);
  v47->m_Items[3] = v61;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->m_Items[3], (int32_t)v61, v59, v60);
  v62 = iTween__Hash(v47, 0LL);
  iTween__RotateTo_60255808(v44, v62, 0LL);
  v64 = BattleCommandComponent__fadeoutEffect(this, 1, v63);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v64, 0LL);
}


void __fastcall BattleCommandComponent__playOpenNobleCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  v2 = this;
  if ( (byte_4A5D9D4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_1B885B0(&StringLiteral_18898/*"effect/ef_noblecard"*/);
    byte_4A5D9D4 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( effectobj->max_length <= 2 )
    goto LABEL_18;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_17;
    if ( v5->max_length <= 2 )
      goto LABEL_18;
    v6 = (UnityEngine_Object_o *)v5->m_Items[2];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_69459568(v6, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.nomalwidget;
  if ( !this
    || (v7 = v2->fields.effectobj,
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_38240928(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_18898/*"effect/ef_noblecard"*/,
                                             transform,
                                             0LL,
                                             0LL),
        !v7) )
  {
LABEL_17:
    sub_1B8880C(this, method);
  }
  if ( v7->max_length <= 2 )
LABEL_18:
    sub_1B88814(this, method);
  v7->m_Items[2] = (UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->m_Items[2], (int32_t)this, v9, v10);
}


void __fastcall BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v6; // x20
  unsigned __int64 v7; // x22
  __int64 v8; // x27
  UnityEngine_Transform_o *objectRoot; // x21
  System_String_o *v10; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x28
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *v15; // x1
  Il2CppClass **v16; // x0
  struct UnityEngine_GameObject_array *v17; // x8
  System_Enum_o v18; // [xsp+8h] [xbp-78h] BYREF
  int v19; // [xsp+18h] [xbp-68h]

  if ( (byte_4A5D9CE & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo);
    sub_1B885B0(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9CE = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)sub_1B88658(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2LL);
  if ( !gameObject )
LABEL_21:
    sub_1B8880C(gameObject, v4);
  klass = gameObject[1].klass;
  v6 = gameObject;
  if ( (unsigned int)klass <= 1 )
LABEL_20:
    sub_1B88814(gameObject, v4);
  HIDWORD(gameObject[1].monitor) = 1;
  if ( (int)klass >= 1 )
  {
    v7 = 0LL;
    while ( v7 < (unsigned int)klass )
    {
      v8 = *((int *)&v6[1].monitor + v7);
      objectRoot = this->fields.objectRoot;
      v18.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo;
      v18.monitor = (void *)-1LL;
      v19 = v8;
      v10 = System_Enum__ToString(&v18, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v10, 1, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !NodeFromName )
          goto LABEL_21;
        addObjectList = this->fields.addObjectList;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0LL);
        if ( !addObjectList )
          goto LABEL_21;
        if ( (unsigned int)v8 >= addObjectList->max_length )
          goto LABEL_20;
        v15 = gameObject;
        v16 = &addObjectList->obj.klass + v8;
        v16[4] = (Il2CppClass *)v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v15, v13, v14);
        v17 = this->fields.addObjectList;
        if ( !v17 )
          goto LABEL_21;
        if ( (unsigned int)v8 >= v17->max_length )
          goto LABEL_20;
        gameObject = v17->m_Items[v8];
        if ( !gameObject )
          goto LABEL_21;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      LODWORD(klass) = v6[1].klass;
      if ( (__int64)++v7 >= (int)klass )
        return;
    }
    goto LABEL_20;
  }
}


void __fastcall BattleCommandComponent__resetComboData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x19

  if ( (byte_4A5D9E0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9E0 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_1B8880C(v3, v4);
  v6 = *(_QWORD *)&effectobj->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v6 )
        sub_1B88814(v3, v4);
      v8 = (UnityEngine_Object_o *)effectobj->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( v3 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v8, 0LL);
      }
      LODWORD(v6) = effectobj->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v6 );
  }
}


void __fastcall BattleCommandComponent__resetCriticalLabel(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DrumRollLabel_o *criticallabel; // x0

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel
    || (DrumRollLabel__setParam(criticallabel, 0, 0LL), (criticallabel = this->fields.criticallabel) == 0LL) )
  {
    sub_1B8880C(criticallabel, v3);
  }
  DrumRollLabel__ChangeParamNonAnimation(criticallabel, 0, 1, 0LL);
}


void __fastcall BattleCommandComponent__resetSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct BattleCommandData_o *data; // x8
  int32_t uniqueId; // w20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v8; // x20
  struct UnityEngine_GameObject_array *v9; // x8
  UnityEngine_Object_o *v10; // x19
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A5D9EF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5D9EF = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_17;
  uniqueId = data->fields.uniqueId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__StopVoice(uniqueId, 0.0, 0LL);
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  BattleCommandComponent__SetCardColor(v2, v11, v5);
  BattleCommandComponent__resetSelectStamp(v2, v6);
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( effectobj->max_length <= 3 )
    goto LABEL_18;
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v2->fields.effectobj;
    if ( v9 )
    {
      if ( v9->max_length > 3 )
      {
        v10 = (UnityEngine_Object_o *)v9->m_Items[3];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v10, 0LL);
        return;
      }
LABEL_18:
      sub_1B88814(this, method);
    }
LABEL_17:
    sub_1B8880C(this, method);
  }
}


void __fastcall BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8

  v2 = this;
  if ( (byte_4A5D9D8 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9D8 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( effectobj->max_length <= 5 )
LABEL_14:
    sub_1B88814(this, method);
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_13;
    if ( v5->max_length > 5 )
    {
      this = (BattleCommandComponent_o *)v2->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v5->m_Items[5], 1, 0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(this, method);
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__selectCard(
        BattleCommandComponent_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  BattleCommandData_o *data; // x0
  const MethodInfo *v8; // x1
  struct BattleCommandData_o *v9; // x8
  int treasureDvc; // w21
  Voice_BATTLE_array *v11; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v13; // x2
  System_Array_o *v14; // x0
  __int64 *v15; // x8
  __int64 v16; // x1
  System_Collections_Generic_List_KeyValuePair_string__int___o *v17; // x21
  BattleCommandComponent___c_c *v18; // x0
  System_Func_T__TResult__o *_9__188_0; // x22
  Il2CppObject *v20; // x23
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  System_Collections_Generic_List_T__o *v26; // x21
  int32_t size; // w25
  int32_t v28; // w22
  System_Collections_Generic_KeyValuePair_object__int__o v29; // kr10_16
  struct BattleCommandData_o *v30; // x8
  Il2CppObject *key; // x21
  int32_t uniqueId; // w23
  System_String_o *LastVoiceType; // x0
  System_Collections_Generic_List_T__o *v34; // x21
  struct BattleCommandData_o *v35; // x8
  int32_t svtId; // w23
  VoiceMaster_o *v37; // x22
  struct BattleServantData_o *svtData; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *v40; // x8
  int32_t v41; // w2
  struct BattleServantData_o *v42; // x8
  UnityEngine_Object_o *ServantActor; // x22
  int32_t v44; // w22
  struct BattleServantData_o *v45; // x8
  struct BattleCommandData_o *v46; // x9
  int32_t v47; // w23
  int32_t overwriteSvtVoiceId; // w25
  int32_t v49; // w24
  System_String_o *v50; // x21
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  __int64 *v55; // x8
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct BattlePerformance_o *v66; // x8
  bool v67; // w0
  int v68; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_KeyValuePair_string__int___o *voiceInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16
  System_Collections_Generic_KeyValuePair_object__int__o v71; // 0:x2.16
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5D9E9 & 1) == 0 )
  {
    sub_1B885B0(&Voice_BATTLE___TypeInfo);
    sub_1B885B0(&Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    sub_1B885B0(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_KeyValuePair_string__int___int__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546);
    sub_1B885B0(&Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3);
    sub_1B885B0(&Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0);
    sub_1B885B0(&Method_BattleCommandComponent___c__selectCard_b__188_0__);
    sub_1B885B0(&BattleCommandComponent___c_TypeInfo);
    sub_1B885B0(&Voice_TypeInfo);
    sub_1B885B0(&StringLiteral_16620/*"a"*/);
    sub_1B885B0(&StringLiteral_7116/*"HEROINE_CHANGECARDVOICE"*/);
    sub_1B885B0(&StringLiteral_18894/*"effect/ef_commandup_{0}{1:00}"*/);
    sub_1B885B0(&StringLiteral_22673/*"q"*/);
    sub_1B885B0(&StringLiteral_16998/*"b"*/);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5D9E9 = 1;
  }
  v72.fields.r = 0.5;
  v72.fields.g = 0.5;
  v72.fields.b = 0.5;
  v72.fields.a = 1.0;
  voiceInfoList = 0LL;
  BattleCommandComponent__SetCardColor(this, v72, *(const MethodInfo **)&targetIndex);
  BattleCommandComponent__stopFirstAura(this, v5);
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBlank(data, 0LL) )
    return;
  data = (BattleCommandData_o *)BattleCommandComponent__get_isKindOfDontAction(this, v8);
  if ( ((unsigned __int8)data & 1) != 0 )
    return;
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_78;
  treasureDvc = v9->fields.treasureDvc;
  if ( treasureDvc <= 0 )
  {
    if ( !Voice_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    FileName = Voice__getFileName(245, 0LL);
    if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v13) )
    {
      v14 = (System_Array_o *)sub_1B88658(Voice_BATTLE___TypeInfo, 6LL);
      v15 = &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
    }
    else
    {
      v14 = (System_Array_o *)sub_1B88658(Voice_BATTLE___TypeInfo, 3LL);
      v15 = &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
    }
    goto LABEL_18;
  }
  if ( treasureDvc != ConstantMaster__getValue((System_String_o *)StringLiteral_7116/*"HEROINE_CHANGECARDVOICE"*/, 0LL) )
  {
    v14 = (System_Array_o *)sub_1B88658(Voice_BATTLE___TypeInfo, 12LL);
    v15 = &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546;
LABEL_18:
    v16 = *v15;
    v11 = (Voice_BATTLE_array *)v14;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v14, (System_RuntimeFieldHandle_o)v16, 0LL);
    goto LABEL_19;
  }
  data = (BattleCommandData_o *)sub_1B88658(Voice_BATTLE___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_78;
  v11 = (Voice_BATTLE_array *)data;
  if ( !data->fields.svtlimit )
    goto LABEL_79;
  data->fields.follower = 252;
LABEL_19:
  data = (BattleCommandData_o *)this->fields.svtData;
  if ( !data )
    goto LABEL_78;
  if ( BattleServantData__TryGetPlayableVoiceInfoList((BattleServantData_o *)data, &voiceInfoList, v11, 0LL) )
  {
    v17 = voiceInfoList;
    v18 = BattleCommandComponent___c_TypeInfo;
    if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
      v18 = BattleCommandComponent___c_TypeInfo;
    }
    _9__188_0 = (System_Func_T__TResult__o *)v18->static_fields->__9__188_0;
    if ( !_9__188_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BattleCommandComponent___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__188_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_string__int___int__TypeInfo);
      System_Func_KeyValuePair_object__int___int____ctor(
        _9__188_0,
        v20,
        Method_BattleCommandComponent___c__selectCard_b__188_0__,
        0LL);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
      static_fields->__9__188_0 = (struct System_Func_KeyValuePair_string__int___int__o *)_9__188_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__188_0, (int32_t)_9__188_0, v22, v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                                 (System_Func_TSource__TResult__o *)_9__188_0,
                                                                 (const MethodInfo_2EABC4C *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    v25 = System_Linq_Enumerable__ToArray_int_(
            v24,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    data = (BattleCommandData_o *)RandomUtility__GetRandomRangeIndex(v25, 0, 0LL);
    v26 = (System_Collections_Generic_List_T__o *)voiceInfoList;
    if ( !voiceInfoList )
      goto LABEL_78;
    size = voiceInfoList->fields._size;
    v28 = (int)data;
    Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
             (System_Collections_Generic_List_T__o *)voiceInfoList,
             0,
             (const MethodInfo_3452F24 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    v29 = BasicHelper__IndexValue_KeyValuePair_object__int__(
            v26,
            v28,
            Item,
            (const MethodInfo_2E6E4FC *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    v6 = *(_QWORD *)&v29.fields.value;
    data = (BattleCommandData_o *)v29.fields.key;
    v30 = this->fields.data;
    if ( !v30 )
      goto LABEL_78;
    key = v29.fields.key;
    uniqueId = v30->fields.uniqueId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    LastVoiceType = ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0LL);
    data = (BattleCommandData_o *)System_String__op_Equality(LastVoiceType, (System_String_o *)v29.fields.key, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v34 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_78;
      v71 = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
              (System_Collections_Generic_List_T__o *)voiceInfoList,
              0,
              (const MethodInfo_3452F24 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
      key = BasicHelper__IndexValue_KeyValuePair_object__int__(
              v34,
              (v28 + 1) % size,
              v71,
              (const MethodInfo_2E6E4FC *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    }
    data = (BattleCommandData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data
      || (data = (BattleCommandData_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoiceMaster___),
          (v35 = this->fields.data) == 0LL)
      || (svtId = v35->fields.svtId,
          v37 = (VoiceMaster_o *)data,
          data = (BattleCommandData_o *)System_String__Concat_61707032(
                                          (System_String_o *)StringLiteral_16123/*"_"*/,
                                          (System_String_o *)key,
                                          0LL),
          !v37) )
    {
LABEL_78:
      sub_1B8880C(data, v6);
    }
    data = (BattleCommandData_o *)VoiceMaster__getFlagRequestNumber(v37, svtId, (System_String_o *)data, 0, 0LL);
    if ( (_DWORD)data )
    {
      svtData = this->fields.svtData;
      if ( !svtData )
        goto LABEL_78;
      if ( !svtData->fields.followerType )
      {
        perf = this->fields.perf;
        if ( !perf )
          goto LABEL_78;
        v40 = this->fields.data;
        if ( !v40 )
          goto LABEL_78;
        v41 = (int)data;
        data = (BattleCommandData_o *)perf->fields.data;
        if ( !data )
          goto LABEL_78;
        BattleData__AddServantVoicePlayed_42495304((BattleData_o *)data, v40->fields.svtId, v41, 0, 0LL);
      }
    }
    v42 = this->fields.svtData;
    if ( !v42 )
      goto LABEL_78;
    data = (BattleCommandData_o *)this->fields.perf;
    if ( !data )
      goto LABEL_78;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             (BattlePerformance_o *)data,
                                             v42->fields.uniqueId,
                                             0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleCommandData_o *)UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !ServantActor )
        goto LABEL_78;
      if ( !BattleActorControl__isNoVoice((BattleActorControl_o *)ServantActor, 0LL) )
      {
        data = (BattleCommandData_o *)this->fields.svtData;
        if ( !data )
          goto LABEL_78;
        data = (BattleCommandData_o *)BattleServantData__getSvtId((BattleServantData_o *)data, 0LL);
        if ( !this->fields.svtData )
          goto LABEL_78;
        v44 = (int)data;
        data = (BattleCommandData_o *)BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
        v45 = this->fields.svtData;
        if ( !v45 )
          goto LABEL_78;
        v46 = this->fields.data;
        if ( !v46 )
          goto LABEL_78;
        v47 = (int)data;
        overwriteSvtVoiceId = v45->fields.overwriteSvtVoiceId;
        v49 = v46->fields.uniqueId;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__playBattleVoice(
          v44,
          v47,
          overwriteSvtVoiceId,
          (System_String_o *)key,
          1.0,
          0LL,
          v49,
          0,
          0LL);
      }
    }
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  v50 = (System_String_o *)StringLiteral_18894/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick(data, 0LL) )
  {
    v68 = targetIndex + 1;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v51, v52, v53);
    v55 = &StringLiteral_22673/*"q"*/;
LABEL_67:
    v50 = System_String__Format_61721404(v50, (Il2CppObject *)*v55, v54, 0LL);
    goto LABEL_68;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isArts(data, 0LL) )
  {
    v68 = targetIndex + 1;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v56, v57, v58);
    v55 = &StringLiteral_16620/*"a"*/;
    goto LABEL_67;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBuster(data, 0LL) )
  {
    v68 = targetIndex + 1;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v59, v60, v61);
    v55 = &StringLiteral_16998/*"b"*/;
    goto LABEL_67;
  }
LABEL_68:
  data = (BattleCommandData_o *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_78;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (BattleCommandData_o *)BaseMonoBehaviour__createObject_38240928(
                                  (BaseMonoBehaviour_o *)this,
                                  v50,
                                  transform,
                                  0LL,
                                  0LL);
  if ( !effectobj )
    goto LABEL_78;
  if ( effectobj->max_length <= 3 )
LABEL_79:
    sub_1B88814(data, v6);
  effectobj->m_Items[3] = (UnityEngine_GameObject_o *)data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[3], (int32_t)data, v64, v65);
  v66 = this->fields.perf;
  if ( !v66 )
    goto LABEL_78;
  data = (BattleCommandData_o *)v66->fields.data;
  if ( !data )
    goto LABEL_78;
  v67 = BattleData__checkLimitTurn((BattleData_o *)data, 0LL);
  if ( !targetIndex && v67 )
  {
    data = (BattleCommandData_o *)this->fields.perf;
    if ( data )
    {
      BattlePerformance__SetLimitTurnEffectFlag((BattlePerformance_o *)data, 0, 0LL);
      return;
    }
    goto LABEL_78;
  }
}


void __fastcall BattleCommandComponent__setAttackCommandData(
        BattleCommandComponent_o *this,
        BattleCommandComponent_o *comp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7
  struct BattlePerformance_o *perf; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x4
  struct BattleCommandData_o *data; // x8

  if ( !comp
    || (BattleCommandComponent__setData(this, comp->fields.data, comp->fields.svtData, 1, 1, 0, 1, v3),
        perf = comp->fields.perf,
        this->fields.perf = perf,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)perf, v7, v8),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v9),
        (data = comp->fields.data) == 0LL) )
  {
    sub_1B8880C(this, comp);
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, data->fields.commandCardParam, 2, 0, v10);
}


void __fastcall BattleCommandComponent__setBuffIconList(
        BattleCommandComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Component_o *buffRoot; // x0
  System_Collections_Generic_List_object__o *v6; // x21
  BuffList_TYPE_array *qabTypes; // x22
  int32_t CommandType; // w0
  System_Int32_array *Individuality; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListActive; // x0
  BuffList_TYPE_array *v11; // x22
  int32_t v12; // w0
  System_Int32_array *v13; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffList_42415388; // x0
  BuffList_TYPE_array *tdTypes; // x22
  BattleBuffData_BuffData_array *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  struct BuffList_TYPE_array *v19; // x22
  BattleBuffData_BuffData_array *v20; // x3
  BattleBuffData_o *v21; // x0
  BuffList_TYPE_array *v22; // x1
  System_Int32_array *v23; // x2
  BuffList_TYPE_array *noneTdQabTypes; // x22
  int32_t v25; // w0
  System_Int32_array *v26; // x23
  BattleBuffData_BuffData_array *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  struct BuffList_TYPE_array *v29; // x22
  int32_t v30; // w0
  System_Int32_array *v31; // x23
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  BuffList_TYPE_array *otherTypes; // x22
  BattleBuffData_BuffData_array *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  BuffList_TYPE_array *v36; // x22
  BattleBuffData_BuffData_array *v37; // x0
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  System_Predicate_object__o *v39; // x20
  System_Predicate_object__o *v40; // x20
  System_Predicate_object__o *v41; // x20
  System_Collections_Generic_List_int__o *v42; // x20
  Il2CppObject *MasterData_object; // x22
  _BOOL8 v44; // x0
  __int64 v45; // x1
  Il2CppObject *Entity; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  _BOOL8 v49; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  signed __int64 v55; // x21
  unsigned __int64 max_length; // x9
  BattleServantBuffIconComponent_o *v57; // x22
  int32_t v58; // w1
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5D9D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleCommandComponent__setBuffIconList_b__138_0__);
    sub_1B885B0(&Method_BattleCommandComponent__setBuffIconList_b__138_1__);
    sub_1B885B0(&Method_BattleCommandComponent__setBuffIconList_b__138_2__);
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D9D6 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( !buffData || !this->fields.data )
  {
    buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
    if ( buffRoot )
    {
      buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0LL);
      if ( buffRoot )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 0, 0LL);
        return;
      }
    }
    goto LABEL_43;
  }
  buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
  if ( !buffRoot )
    goto LABEL_43;
  buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0LL);
  if ( !buffRoot )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 1, 0LL);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_43;
  qabTypes = this->fields.qabTypes;
  CommandType = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
  Individuality = BattleCommand__getIndividuality(CommandType, 1, 0LL);
  ShowCommandBuffListActive = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  buffRoot = (UnityEngine_Component_o *)BattleBuffData__getBuffList_42415388(
                                          buffData,
                                          qabTypes,
                                          Individuality,
                                          ShowCommandBuffListActive,
                                          0LL);
  if ( !v6 )
    goto LABEL_43;
  System_Collections_Generic_List_object___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)buffRoot,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_43;
  v11 = this->fields.qabTypes;
  v12 = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
  v13 = BattleCommand__getIndividuality(v12, 1, 0LL);
  ShowCommandBuffListPassive = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  BuffList_42415388 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42415388(
                                                                       buffData,
                                                                       v11,
                                                                       v13,
                                                                       ShowCommandBuffListPassive,
                                                                       0LL);
  System_Collections_Generic_List_object___AddRange(
    v6,
    BuffList_42415388,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_43;
  if ( BattleCommandData__isTreasureDvc((BattleCommandData_o *)buffRoot, 0LL) )
  {
    tdTypes = this->fields.tdTypes;
    v17 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v18 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42415388(
                                                           buffData,
                                                           tdTypes,
                                                           0LL,
                                                           v17,
                                                           0LL);
    System_Collections_Generic_List_object___AddRange(
      v6,
      v18,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v19 = this->fields.tdTypes;
    v20 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v21 = buffData;
    v22 = v19;
    v23 = 0LL;
  }
  else
  {
    buffRoot = (UnityEngine_Component_o *)this->fields.data;
    if ( !buffRoot )
      goto LABEL_43;
    noneTdQabTypes = this->fields.noneTdQabTypes;
    v25 = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
    v26 = BattleCommand__getIndividuality(v25, 1, 0LL);
    v27 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v28 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42415388(
                                                           buffData,
                                                           noneTdQabTypes,
                                                           v26,
                                                           v27,
                                                           0LL);
    System_Collections_Generic_List_object___AddRange(
      v6,
      v28,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    buffRoot = (UnityEngine_Component_o *)this->fields.data;
    if ( !buffRoot )
      goto LABEL_43;
    v29 = this->fields.noneTdQabTypes;
    v30 = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
    v31 = BattleCommand__getIndividuality(v30, 1, 0LL);
    v20 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v21 = buffData;
    v22 = v29;
    v23 = v31;
  }
  v32 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42415388(v21, v22, v23, v20, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v6,
    v32,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  otherTypes = this->fields.otherTypes;
  v34 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  v35 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42415388(
                                                         buffData,
                                                         otherTypes,
                                                         0LL,
                                                         v34,
                                                         0LL);
  System_Collections_Generic_List_object___AddRange(
    v6,
    v35,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v36 = this->fields.otherTypes;
  v37 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  v38 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42415388(
                                                         buffData,
                                                         v36,
                                                         0LL,
                                                         v37,
                                                         0LL);
  System_Collections_Generic_List_object___AddRange(
    v6,
    v38,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v39 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v39,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__138_0__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v6,
    (System_Predicate_T__o *)v39,
    (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v40 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v40,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__138_1__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v6,
    (System_Predicate_T__o *)v40,
    (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v41 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v41,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__138_2__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v6,
    (System_Predicate_T__o *)v41,
    (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v42 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  buffRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffRoot )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)buffRoot,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    v6,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v44 )
      break;
    if ( !v60.fields._current )
      sub_1B8880C(v44, v45);
    if ( !MasterData_object )
      sub_1B8880C(v44, v45);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)v60.fields._current[1].klass,
               (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    v48 = Entity;
    if ( !Entity )
      sub_1B8880C(0LL, v47);
    if ( !v42 )
      sub_1B8880C(Entity, v47);
    v49 = System_Collections_Generic_List_int___Contains(
            v42,
            (int32_t)Entity[2].monitor,
            (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( !v49 )
    {
      monitor_low = LODWORD(v48[2].monitor);
      items = v42->fields._items;
      v52 = Method_System_Collections_Generic_List_int__Add__;
      ++v42->fields._version;
      if ( !items )
        sub_1B8880C(v49, monitor_low);
      size = v42->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v42,
          monitor_low,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v42->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_low;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
LABEL_43:
    sub_1B8880C(buffRoot, buffData);
  v55 = 0LL;
  while ( 1 )
  {
    max_length = buffIconList->max_length;
    if ( v55 >= (int)max_length )
      break;
    if ( !v42 )
      goto LABEL_43;
    if ( v55 >= max_length )
      sub_1B88814(buffRoot, buffData);
    v57 = buffIconList->m_Items[v55];
    if ( v55 >= v42->fields._size )
    {
      if ( !v57 )
        goto LABEL_43;
      v58 = 0;
    }
    else
    {
      buffRoot = (UnityEngine_Component_o *)System_Collections_Generic_List_int___get_Item(
                                              v42,
                                              v55,
                                              (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v57 )
        goto LABEL_43;
      v58 = (int)buffRoot;
    }
    BattleServantBuffIconComponent__setImageId(v57, v58, 0LL);
    buffIconList = this->fields.buffIconList;
    ++v55;
    if ( !buffIconList )
      goto LABEL_43;
  }
}


void __fastcall BattleCommandComponent__setCriticalObject(
        BattleCommandComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1B8880C(0LL, flg);
  UnityEngine_GameObject__SetActive(criticalObject, flg, 0LL);
}


void __fastcall BattleCommandComponent__setData(
        BattleCommandComponent_o *this,
        BattleCommandData_o *indata,
        BattleServantData_o *insvtData,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        bool isInit,
        const MethodInfo *method)
{
  BattleCommandData_o **p_data; // x25
  struct BattleServantData_o **p_svtData; // x26
  int32_t v15; // w2
  char v16; // w3
  Spawner_o *spawner; // x0
  const MethodInfo *v18; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  struct UnityEngine_GameObject_array **p_effectobj; // x27
  __int64 v22; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v24; // x24
  UnityEngine_Object_o *v25; // x28
  struct UnityEngine_GameObject_array *v26; // x8
  struct UnityEngine_GameObject_array *v27; // x8
  UnityEngine_Object_o *v28; // x28
  __int64 v29; // x0
  int32_t v30; // w2
  char v31; // w3
  const MethodInfo *v32; // x6
  BattleServantData_o *v33; // x1
  BattleBuffData_o *buffData; // x0
  BattleCommandData_o *v35; // x22
  const MethodInfo *v36; // x2
  BattleCommandData_o *data; // x0
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  int32_t commandCardParam; // w1
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5D9C8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9C8 = 1;
  }
  p_data = &this->fields.data;
  this->fields.data = indata;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)indata, (int32_t)insvtData, isAttack);
  p_svtData = &this->fields.svtData;
  this->fields.svtData = insvtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtData, (int32_t)insvtData, v15, v16);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_23;
  BattleCommandComponent__DestroyEffectObject1(this, v18);
  v20 = this->fields.effectobj;
  if ( !v20 )
    goto LABEL_23;
  p_effectobj = &this->fields.effectobj;
  v22 = 4LL;
  while ( 1 )
  {
    max_length = v20->max_length;
    v24 = v22 - 4;
    if ( v22 - 4 >= (int)max_length )
      break;
    if ( v24 >= max_length )
      goto LABEL_45;
    v25 = (UnityEngine_Object_o *)*((_QWORD *)&v20->obj.klass + v22);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
    if ( ((unsigned __int8)spawner & 1) != 0 )
    {
      if ( v24 < 5 )
      {
        v27 = *p_effectobj;
        if ( !*p_effectobj )
          goto LABEL_23;
        if ( v24 >= v27->max_length )
LABEL_45:
          sub_1B88814(spawner, v18);
        v28 = (UnityEngine_Object_o *)*((_QWORD *)&v27->obj.klass + v22);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v28, 0LL);
      }
      else if ( v22 == 9 )
      {
        v26 = this->fields.effectobj;
        if ( !v26 )
          goto LABEL_23;
        if ( (*(_QWORD *)&v26->max_length & 0xFFFFFFFEuLL) <= 5 )
          goto LABEL_45;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_23;
        Spawner__Despawn(spawner, v26->m_Items[5], 1, 0LL);
      }
    }
    v20 = *p_effectobj;
    ++v22;
    if ( !*p_effectobj )
      goto LABEL_23;
  }
  v29 = sub_1B88658(UnityEngine_GameObject___TypeInfo, v20->max_length);
  *p_effectobj = (struct UnityEngine_GameObject_array *)v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectobj, v29, v30, v31);
  if ( *p_data )
  {
    if ( BattleCommandData__isTreasureDvc(*p_data, 0LL) )
    {
      v33 = *p_svtData;
      if ( *p_svtData )
      {
        buffData = v33->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, v33, 0LL, 0LL) )
          {
            spawner = (Spawner_o *)*p_svtData;
            if ( !*p_svtData )
              goto LABEL_23;
            spawner = (Spawner_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)spawner, 0LL);
            if ( !spawner )
              goto LABEL_23;
            if ( TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)spawner, 0LL) && !isTDTypeChangeWindow )
            {
              spawner = (Spawner_o *)*p_svtData;
              if ( !*p_svtData )
                goto LABEL_23;
              v35 = *p_data;
              spawner = (Spawner_o *)BattleServantData__getTreasureDvcCardId((BattleServantData_o *)spawner, 0LL);
              if ( !v35 )
                goto LABEL_23;
              v35->fields._type = (int)spawner;
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, isInit, isAttack, isShowBuffIcon, isTDTypeChangeWindow, 0, v32);
  data = this->fields.data;
  if ( !data || BattleCommandData__getCriticalPoint(data, 0LL) < 1 || !this->fields.isCountUp )
    goto LABEL_41;
  spawner = (Spawner_o *)this->fields.criticalObject;
  if ( !spawner )
LABEL_23:
    sub_1B8880C(spawner, v18);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spawner, 1, 0LL);
LABEL_41:
  v44.fields.r = 0.0;
  v44.fields.g = 0.0;
  v44.fields.b = 0.0;
  v44.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v44, 1, v36);
  v45.fields.r = 0.0;
  v45.fields.g = 0.0;
  v45.fields.b = 0.0;
  v45.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v45, 1, v38);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v39);
    commandCardParam = indata->fields.commandCardParam;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v39);
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, commandCardParam, 2, 1, v40);
}


void __fastcall BattleCommandComponent__setData_43067492(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  Il2CppClass *klass; // x8
  int32_t v13; // w22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  __int64 v19; // x23
  struct BattleBuffData_o *buffData; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A5D9CC & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D9CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_16;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
  if ( !v9 )
    goto LABEL_16;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v9,
               (int32_t)Instance,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Instance )
  {
    klass = Instance[9].klass;
    if ( klass )
    {
      if ( LODWORD(klass->_1.namespaze) <= index )
        sub_1B88814(Instance, v8);
      v13 = *((_DWORD *)&klass->_1.byval_arg.data + index);
      v15 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v25.fields.currentCryptoKey = v15;
      *(_QWORD *)&v25.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      v19 = sub_1B887FC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_43210772(
        (BattleCommandData_o *)v19,
        v13,
        v16,
        CommandDispLimitCount,
        CommandImageSvtId,
        -1,
        0LL);
      if ( v19 )
      {
        BattleCommandData__SetCommandCardParam((BattleCommandData_o *)v19, svtData->fields.commandCardParam, index, 0LL);
        buffData = svtData->fields.buffData;
        *(_QWORD *)(v19 + 112) = buffData;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 112), (int32_t)buffData, v21, v22);
        *(_DWORD *)(v19 + 88) = index;
        BattleCommandComponent__setData(this, (BattleCommandData_o *)v19, svtData, 0, 1, 0, 1, v23);
        return;
      }
    }
LABEL_16:
    sub_1B8880C(Instance, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setDepth(
        BattleCommandComponent_o *this,
        int32_t basedepth,
        const MethodInfo *method)
{
  UIWidget_o *bg; // x0
  int32_t v6; // w22
  int32_t v7; // w21
  UnityEngine_Object_o *assistSprite; // x23
  UnityEngine_Object_o *assistChargeTurnLabel; // x23
  UnityEngine_Object_o *assistRemainingTurnLabel; // x23
  int32_t v11; // w23
  UnityEngine_Object_o *donotsleepSprite; // x24
  UnityEngine_Object_o *donotPermanentSleep; // x24
  UnityEngine_Object_o *unusableShortageStarSprite; // x24
  UnityEngine_Object_o *unusableNpSprite; // x24
  UnityEngine_Object_o *donotActTypeSprite; // x24
  UnityEngine_Object_o *donotActWithTypeSp; // x24
  UnityEngine_Object_o *donotActCardSprite; // x24
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x24
  struct BattleServantBuffIconComponent_array *buffIconList; // x22
  int max_length; // w8
  unsigned int v22; // w23
  BattleServantBuffIconComponent_o *v23; // x8
  UnityEngine_Object_o *powerUpCardValue; // x21
  UnityEngine_Object_o *powerUpCardIcon; // x21
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x21
  UnityEngine_Object_o *iconChangeTypeByTransform; // x21

  if ( (byte_4A5D9C6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9C6 = 1;
  }
  bg = (UIWidget_o *)this->fields.bg;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 1, 0LL);
  bg = (UIWidget_o *)this->fields.facetex;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 2, 0LL);
  bg = (UIWidget_o *)this->fields.icon;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 3, 0LL);
  bg = (UIWidget_o *)this->fields.text;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 4, 0LL);
  bg = (UIWidget_o *)this->fields.nobletex;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 5, 0LL);
  bg = (UIWidget_o *)this->fields.codeTexture;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 6, 0LL);
  bg = (UIWidget_o *)this->fields.codeSprite;
  if ( !bg )
    goto LABEL_103;
  v6 = basedepth + 7;
  UIWidget__set_depth(bg, basedepth + 7, 0LL);
  bg = (UIWidget_o *)this->fields.chargeTurnLabel;
  if ( !bg )
    goto LABEL_103;
  v7 = basedepth + 11;
  UIWidget__set_depth(bg, basedepth + 11, 0LL);
  bg = (UIWidget_o *)this->fields.remainingTurnLabel;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, v7, 0LL);
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v6, 0LL);
  }
  assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistChargeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistChargeTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistRemainingTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistRemainingTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  bg = (UIWidget_o *)this->fields.sealedSprite;
  if ( !bg )
    goto LABEL_103;
  v11 = basedepth + 9;
  UIWidget__set_depth(bg, basedepth + 9, 0LL);
  bg = (UIWidget_o *)this->fields.donotactSprite;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, v11, 0LL);
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotsleepSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotsleepSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotPermanentSleep, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotPermanentSleep;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableShortageStarSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  unusableNpSprite = (UnityEngine_Object_o *)this->fields.unusableNpSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableNpSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableNpSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotActTypeSprite = (UnityEngine_Object_o *)this->fields.donotActTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActTypeSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActTypeSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 10, 0LL);
  }
  donotActWithTypeSp = (UnityEngine_Object_o *)this->fields.donotActWithTypeSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActWithTypeSp, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActWithTypeSp;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActCardSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActCardSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 10, 0LL);
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.treasureDeviceErrorSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, v6, 1, 0LL);
  bg = (UIWidget_o *)this->fields.friendIcon;
  if ( !bg || (UIWidget__set_depth(bg, basedepth + 10, 0LL), (buffIconList = this->fields.buffIconList) == 0LL) )
LABEL_103:
    sub_1B8880C(bg, *(_QWORD *)&basedepth);
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= max_length )
        sub_1B88814(bg, *(_QWORD *)&basedepth);
      v23 = buffIconList->m_Items[v22];
      if ( !v23 )
        goto LABEL_103;
      bg = (UIWidget_o *)v23->fields.iconSprite;
      if ( !bg )
        goto LABEL_103;
      UIWidget__set_depth(bg, v7, 0LL);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v22 < max_length );
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardValue, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardValue;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 12, 0LL);
  }
  restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 13, 0LL);
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconChangeTypeByTransform, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.iconChangeTypeByTransform;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 12, 0LL);
  }
  this->fields.basedepth = basedepth;
}


void __fastcall BattleCommandComponent__setMoveMode(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleCommandComponent__stopFirstAura(this, method);
  BattleCommandComponent__resetSelectStamp(this, v3);
}


void __fastcall BattleCommandComponent__setPerf(
        BattleCommandComponent_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.perf = inPerf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)inPerf, (int32_t)method, v3);
}


void __fastcall BattleCommandComponent__setSelect(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  this->fields.selectflg = flg;
}


void __fastcall BattleCommandComponent__setSelectStamp(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *stamp,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct UnityEngine_GameObject_array *effectobj; // x0

  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_1B8880C(0LL, stamp);
  if ( effectobj->max_length <= 5 )
    sub_1B88814(effectobj, stamp);
  effectobj->m_Items[5] = stamp;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[5], (int32_t)stamp, (int32_t)method, v3);
}


void __fastcall BattleCommandComponent__setShader(
        BattleCommandComponent_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x21
  struct UITexture_o *v6; // x20
  UnityEngine_Shader_o *v7; // x21
  UnityEngine_Material_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5D9C5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9C5 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = this->fields.facetex;
    v7 = UnityEngine_Shader__Find(shaderName, 0LL);
    v8 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0LL);
    if ( !v6 )
      sub_1B8880C(v9, v10);
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v6->klass->vtable._25_set_material.method)(
      v6,
      v8,
      v6->klass->vtable._26_get_mainTexture.methodPtr);
  }
}


void __fastcall BattleCommandComponent__setTarget(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.target = target;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.target, (int32_t)target, (int32_t)method, v3);
}


void __fastcall BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5D9E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9E7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v6 )
  {
    if ( !Component_object )
      sub_1B8880C(v6, v7);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
  }
}


void __fastcall BattleCommandComponent__startComboCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4.fields.r = 1.0;
  v4.fields.g = 1.0;
  v4.fields.b = 1.0;
  v4.fields.a = 1.0;
  BattleCommandComponent__SetCardColor(this, v4, method);
  BattleCommandComponent__resetSelectStamp(this, v3);
}


void __fastcall BattleCommandComponent__startCountUp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct BattleCommandData_o *data; // x8
  BattleCommandData_o *v4; // x0
  DrumRollLabel_o *criticallabel; // x20
  int32_t v6; // w21
  DrumRollLabel_CompleteEventHandler_o *v7; // x22

  v2 = this;
  if ( (byte_4A5D9DA & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleCommandComponent_compCriticallabel__);
    this = (BattleCommandComponent_o *)sub_1B885B0(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4A5D9DA = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_15;
  this = (BattleCommandComponent_o *)v2->fields.criticalObject;
  if ( data->fields.starcount <= 0 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1B8880C(this, method);
  }
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (BattleCommandComponent_o *)v2->fields.criticallabel;
  v2->fields.isCountUp = 1;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__setParam((DrumRollLabel_o *)this, 0, 0LL);
  this = (BattleCommandComponent_o *)v2->fields.criticallabel;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__ChangeParamNonAnimation((DrumRollLabel_o *)this, 0, 1, 0LL);
  v4 = v2->fields.data;
  criticallabel = v2->fields.criticallabel;
  v6 = v4 ? v2->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(v4, 0LL) : 0;
  v7 = (DrumRollLabel_CompleteEventHandler_o *)sub_1B887FC(DrumRollLabel_CompleteEventHandler_TypeInfo);
  DrumRollLabel_CompleteEventHandler___ctor(
    v7,
    (Il2CppObject *)v2,
    Method_BattleCommandComponent_compCriticallabel__,
    0LL);
  if ( !criticallabel )
    goto LABEL_15;
  DrumRollLabel__changeParam(criticallabel, v6, 1, v7, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__startMoveFloat(BattleCommandComponent_o *this, const MethodInfo *method)
{
  float v3; // s0
  const MethodInfo *v4; // x2

  if ( (byte_4A5D9D2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16777/*"anim_commandfloat"*/);
    byte_4A5D9D2 = 1;
  }
  v3 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16777/*"anim_commandfloat"*/, v3, v4);
}


void __fastcall BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  Il2CppObject *v4; // x20
  UnityEngine_Component_o *nomalwidget; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *v7; // x20
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x19

  if ( (byte_4A5D9D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9D3 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v4 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)nomalwidget & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      if ( !v4 )
        goto LABEL_29;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v4, 0LL);
    }
  }
  nomalwidget = (UnityEngine_Component_o *)this->fields.nomalwidget;
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nomalwidget, 0LL);
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)nomalwidget,
                                             0LL);
  v7 = (UnityEngine_Transform_o *)nomalwidget;
  if ( !byte_4A55CE1 )
  {
    nomalwidget = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_29:
    sub_1B8880C(nomalwidget, v6);
  }
  if ( effectobj->max_length <= 2 )
    goto LABEL_30;
  v9 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)nomalwidget & 1) != 0 )
  {
    v10 = this->fields.effectobj;
    if ( v10 )
    {
      if ( v10->max_length > 2 )
      {
        v11 = (UnityEngine_Object_o *)v10->m_Items[2];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DestroyImmediate_69459568(v11, 0LL);
        return;
      }
LABEL_30:
      sub_1B88814(nomalwidget, v6);
    }
    goto LABEL_29;
  }
}


void __fastcall BattleCommandComponent__stopFirstAura(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v2 = this;
  if ( (byte_4A5D9D7 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9D7 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_16;
  if ( effectobj->max_length <= 4 )
    goto LABEL_17;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[4];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( v5->max_length <= 4 )
        goto LABEL_17;
      v6 = (UnityEngine_Object_o *)v5->m_Items[4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v6, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 4 )
        {
          this->fields.facetex = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.facetex, 0, v7, v8);
          return;
        }
LABEL_17:
        sub_1B88814(this, method);
      }
    }
LABEL_16:
    sub_1B8880C(this, method);
  }
}


void __fastcall BattleCommandComponent__updateClassMag(
        BattleCommandComponent_o *this,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x19
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Object_o *v8; // x21
  struct UnityEngine_GameObject_array *v9; // x8
  struct UnityEngine_GameObject_array *v10; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *data; // x8
  float ShowClassMagnification; // s0
  struct UnityEngine_GameObject_array *v14; // x8
  struct UnityEngine_GameObject_array *v15; // x8

  v4 = this;
  if ( (byte_4A5D9F4 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9F4 = 1;
  }
  if ( targetSvt && v4->fields.data )
  {
    addObjectList = v4->fields.addObjectList;
    if ( !addObjectList )
      goto LABEL_36;
    if ( !addObjectList->max_length )
      goto LABEL_37;
    v6 = (UnityEngine_Object_o *)addObjectList->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v4->fields.addObjectList;
      if ( !v7 )
        goto LABEL_36;
      if ( v7->max_length <= 1 )
        goto LABEL_37;
      v8 = (UnityEngine_Object_o *)v7->m_Items[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.addObjectList;
        if ( !v9 )
          goto LABEL_36;
        if ( !v9->max_length )
          goto LABEL_37;
        this = (BattleCommandComponent_o *)v9->m_Items[0];
        if ( !this )
          goto LABEL_36;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v10 = v4->fields.addObjectList;
        if ( !v10 )
          goto LABEL_36;
        if ( v10->max_length <= 1 )
          goto LABEL_37;
        this = (BattleCommandComponent_o *)v10->m_Items[1];
        if ( !this
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
              (perf = v4->fields.perf) == 0LL)
          || (data = v4->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)perf->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)BattleData__getServantData(
                                                   (BattleData_o *)this,
                                                   data->fields.uniqueId,
                                                   0LL),
              !v4->fields.perf) )
        {
LABEL_36:
          sub_1B8880C(this, targetSvt);
        }
        ShowClassMagnification = BattlePerformance__getShowClassMagnification(
                                   v4->fields.perf,
                                   v4->fields.data,
                                   (BattleServantData_o *)this,
                                   targetSvt,
                                   0LL);
        if ( ShowClassMagnification > 1.0 )
        {
          v14 = v4->fields.addObjectList;
          if ( !v14 )
            goto LABEL_36;
          if ( v14->max_length > 1 )
          {
            this = (BattleCommandComponent_o *)v14->m_Items[1];
            if ( !this )
              goto LABEL_36;
            goto LABEL_34;
          }
          goto LABEL_37;
        }
        if ( ShowClassMagnification < 1.0 )
        {
          v15 = v4->fields.addObjectList;
          if ( !v15 )
            goto LABEL_36;
          if ( v15->max_length )
          {
            this = (BattleCommandComponent_o *)v15->m_Items[0];
            if ( !this )
              goto LABEL_36;
LABEL_34:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            return;
          }
LABEL_37:
          sub_1B88814(this, targetSvt);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__updateCount(
        BattleCommandComponent_o *this,
        bool isNonAnimation,
        const MethodInfo *method)
{
  BattleCommandData_o *data; // x0
  int32_t v6; // w20
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x22
  DrumRollLabel_o *v9; // x0
  int32_t v10; // w1
  DrumRollLabel_CompleteEventHandler_o *v11; // x3
  DrumRollLabel_CompleteEventHandler_o *v12; // x21

  if ( (byte_4A5D9DB & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleCommandComponent_compCriticallabel__);
    sub_1B885B0(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4A5D9DB = 1;
  }
  data = this->fields.data;
  if ( !data || (v6 = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0LL), v6 <= 0) )
  {
    criticalObject = this->fields.criticalObject;
    if ( criticalObject )
    {
      UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
      return;
    }
    goto LABEL_19;
  }
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    goto LABEL_19;
  if ( !UnityEngine_GameObject__get_activeSelf(criticalObject, 0LL) )
  {
    criticalObject = (UnityEngine_GameObject_o *)this->fields.criticallabel;
    if ( !criticalObject )
      goto LABEL_19;
    DrumRollLabel__ChangeParamNonAnimation((DrumRollLabel_o *)criticalObject, 0, 1, 0LL);
  }
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject
    || (UnityEngine_GameObject__SetActive(criticalObject, 1, 0LL), (criticallabel = this->fields.criticallabel) == 0LL) )
  {
LABEL_19:
    sub_1B8880C(criticalObject, isNonAnimation);
  }
  if ( isNonAnimation )
  {
    DrumRollLabel__ChangeParamNonAnimation(this->fields.criticallabel, v6, 0, 0LL);
  }
  else
  {
    if ( v6 >= criticallabel->fields.nowvalue )
    {
      v12 = (DrumRollLabel_CompleteEventHandler_o *)sub_1B887FC(DrumRollLabel_CompleteEventHandler_TypeInfo);
      DrumRollLabel_CompleteEventHandler___ctor(
        v12,
        (Il2CppObject *)this,
        Method_BattleCommandComponent_compCriticallabel__,
        0LL);
      v9 = criticallabel;
      v10 = v6;
      v11 = v12;
    }
    else
    {
      v9 = this->fields.criticallabel;
      v10 = v6;
      v11 = 0LL;
    }
    DrumRollLabel__changeParam(v9, v10, 1, v11, 0.0, 0LL);
  }
}


void __fastcall BattleCommandComponent__updateSelectedEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  BattleCommandComponent_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  BattleCommandComponent_o *v8; // x20
  struct UnityEngine_GameObject_array *v9; // x8
  BattleCommandComponent_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A5D9D9 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D9D9 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_41;
  if ( effectobj->max_length <= 3 )
LABEL_42:
    sub_1B88814(this, method);
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_41;
    if ( v5->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v5->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !v2->fields.nomalwidget )
      goto LABEL_41;
    v6 = this;
    this = (BattleCommandComponent_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                         0LL);
    if ( !v6 )
      goto LABEL_41;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v6, (UnityEngine_Transform_o *)this, 0LL);
    v7 = v2->fields.effectobj;
    if ( !v7 )
      goto LABEL_41;
    if ( v7->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v7->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    v8 = this;
    if ( !byte_4A55CE1 )
    {
      this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v8 )
      goto LABEL_41;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v8,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    v9 = v2->fields.effectobj;
    if ( !v9 )
      goto LABEL_41;
    if ( v9->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v9->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    v10 = this;
    if ( !byte_4A55CE9 )
    {
      this = (BattleCommandComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE9 = 1;
    }
    if ( !v10 )
      goto LABEL_41;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v10,
      UnityEngine_Vector3_TypeInfo->static_fields->upVector,
      0LL);
    v11 = v2->fields.effectobj;
    if ( !v11 )
      goto LABEL_41;
    if ( v11->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v11->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_41;
    v15.fields.x = 1.0;
    v15.fields.y = 1.0;
    v15.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v15, 0LL);
  }
  v12 = v2->fields.effectobj;
  if ( !v12 )
    goto LABEL_41;
  if ( v12->max_length <= 4 )
    goto LABEL_42;
  v13 = (UnityEngine_Object_o *)v12->m_Items[4];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v2->fields.effectobj;
    if ( !v14 )
      goto LABEL_41;
    if ( v14->max_length > 4 )
    {
      this = (BattleCommandComponent_o *)v14->m_Items[4];
      if ( this )
      {
        this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.objectRoot, 0LL);
          return;
        }
      }
LABEL_41:
      sub_1B8880C(this, method);
    }
    goto LABEL_42;
  }
}


void __fastcall BattleCommandComponent__updateView(
        BattleCommandComponent_o *this,
        bool initFlg,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        bool isCharaHide,
        const MethodInfo *method)
{
  System_String_o *v13; // x21
  __int64 v14; // x28
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x26
  __int64 v18; // x1
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v24; // x2
  struct BattleServantData_o *svtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  BattleCommandData_o *data; // x0
  __int64 v29; // x1
  UnityEngine_Behaviour_o *facetex; // x0
  __int64 v31; // x1
  UnityEngine_Behaviour_o *icon; // x0
  __int64 v33; // x1
  UnityEngine_Behaviour_o *text; // x0
  __int64 v35; // x1
  UISprite_o *bg; // x0
  __int64 v37; // x1
  UIWidget_o *v38; // x0
  __int64 v39; // x1
  UIWidget_o *v40; // x0
  __int64 v41; // x1
  UnityEngine_Behaviour_o *friendIcon; // x0
  BattleCommandSealStatus_o *v43; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  BattleCommandComponent_o *v46; // x0
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x2
  BattleServantData_o *v49; // x23
  BattleCommandData_o *v50; // x24
  UnityEngine_Object_o *perf; // x25
  _BOOL8 v52; // x0
  __int64 v53; // x1
  struct BattlePerformance_o *v54; // x8
  BattleData_o *v55; // x25
  BattleCommandSealStatus_o *v56; // x26
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x1
  UIWidget_o **p_facetex; // x23
  UITexture_o *v61; // x24
  BattleCommandData_o *v62; // x0
  __int64 v63; // x1
  int32_t ImageServantId; // w25
  BattleCommandData_o *v65; // x0
  __int64 loadSvtLimit; // x0
  __int64 v67; // x1
  struct BattleCommandData_o *v68; // x8
  int32_t v69; // w26
  int32_t svtlimit; // w27
  UnityEngine_Object_o *Manager__loadCommandCard; // x24
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  UnityEngine_Behaviour_o *v75; // x0
  __int64 v76; // x1
  UnityEngine_Behaviour_o *v77; // x0
  UnityEngine_Object_o *v78; // x24
  _BOOL8 v79; // x0
  __int64 v80; // x1
  UnityEngine_Behaviour_o *v81; // x0
  struct BattleCommandData_o *v82; // x8
  UnityEngine_Object_o *v83; // x22
  int treasureDvc; // w9
  uint32_t cctor_finished; // w8
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  BattleCommandData_o *v89; // x0
  __int64 v90; // x1
  __int64 *v91; // x8
  BattleCommandData_o *v92; // x0
  BattleCommandData_o *v93; // x0
  Il2CppObject *v94; // x22
  UnityEngine_Behaviour_o *v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  struct BattleCommandData_o *v98; // x8
  UISprite_o *v99; // x23
  FileName_c *v100; // x0
  __int64 v101; // x1
  UnityEngine_Behaviour_o *v102; // x0
  __int64 v103; // x0
  UISprite_o *v104; // x23
  FileName_c *v105; // x0
  __int64 v106; // x1
  UnityEngine_Behaviour_o *v107; // x0
  UISprite_o *v108; // x23
  System_String_o *v109; // x0
  UISprite_o *v110; // x21
  System_String_o *v111; // x0
  UISprite_o *v112; // x21
  System_String_o *v113; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  struct UISprite_o *v116; // x21
  UISpriteData_o *AtlasSprite; // x0
  __int64 v118; // x1
  int width; // w22
  UISpriteData_o *v120; // x0
  __int64 v121; // x1
  __int64 v122; // x1
  UnityEngine_Component_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  __int64 v125; // x1
  UnityEngine_Transform_o *v126; // x0
  __int64 v127; // x1
  UnityEngine_Transform_o *v128; // x21
  const MethodInfo *v129; // x1
  __int64 v130; // x0
  const MethodInfo *v131; // x1
  struct BattleCommandData_o *v132; // x8
  UnityEngine_Behaviour_o *v133; // x0
  __int64 v134; // x1
  BattleCommandData_o *v135; // x0
  UITexture_o *nobletex; // x21
  __int64 v137; // x1
  int32_t v138; // w22
  BattleCommandData_o *v139; // x0
  __int64 v140; // x0
  __int64 v141; // x1
  struct BattleCommandData_o *v142; // x8
  int32_t v143; // w23
  int32_t v144; // w24
  bool Manager__loadNobleName; // w21
  UnityEngine_Object_o *v146; // x22
  __int64 v147; // x1
  const MethodInfo *v148; // x2
  UnityEngine_Component_o *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  __int64 v151; // x1
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v153; // x1
  const MethodInfo *v154; // x2
  struct BattleCommandData_o *v155; // x8
  __int64 v156; // x0
  __int64 v157; // x1
  const MethodInfo *v158; // x2
  struct BattleCommandData_o *v159; // x8
  const MethodInfo *v160; // x2
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v162; // x8
  UILabel_o *v163; // x19
  System_String_o *v164; // x1
  UISprite_o *v165; // x0
  const MethodInfo *v166; // x3
  const MethodInfo *v167; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v169; // x1
  const MethodInfo *v170; // x3
  __int64 v171; // x1
  BattleCommandData_o *v172; // x0
  UISprite_o *donotActTypeSprite; // x20
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v175; // x2
  System_String_o *CardTypeSealSpriteName; // x0
  BattleCommandData_o *v177; // x0
  UnityEngine_Object_o *displayRemainingTurn; // x20
  UILabel_o *v179; // x20
  System_String_o *v180; // x21
  const MethodInfo *v181; // x1
  const MethodInfo *v182; // x0
  __int64 v183; // x1
  InvokerMethod invoker_method; // x8
  int v185; // w8
  int v186; // w8
  __int64 v187; // x2
  __int64 v188; // x3
  __int64 v189; // x4
  Il2CppObject *v190; // x1
  System_String_o *v191; // x0
  int v192; // [xsp+8h] [xbp-68h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5D9CF & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandSealStatus_TypeInfo);
    sub_1B885B0(&FileName_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17763/*"card_bg_blank"*/);
    sub_1B885B0(&StringLiteral_5049/*"DISPLAY_REMAINING_TURN"*/);
    sub_1B885B0(&StringLiteral_22113/*"none"*/);
    sub_1B885B0(&StringLiteral_16916/*"arts"*/);
    sub_1B885B0(&StringLiteral_17784/*"card_txt_{0}"*/);
    sub_1B885B0(&StringLiteral_17643/*"buster"*/);
    sub_1B885B0(&StringLiteral_22731/*"quick"*/);
    sub_1B885B0(&StringLiteral_17776/*"card_icon_{0}"*/);
    sub_1B885B0(&StringLiteral_17765/*"card_bg_{0}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_19322/*"extra"*/);
    sub_1B885B0(&StringLiteral_17764/*"card_bg_np{0}"*/);
    byte_4A5D9CF = 1;
  }
  svtId = 0;
  if ( !this->fields.data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
    goto LABEL_158;
  }
  v13 = (System_String_o *)StringLiteral_17765/*"card_bg_{0}"*/;
  v14 = StringLiteral_22113/*"none"*/;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v17 = transform;
  if ( !byte_4A55CE6 )
  {
    transform = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v17 )
    sub_1B8880C(transform, v16);
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_1B8880C(0LL, v18);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
      nomalwidget,
      nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v20 )
    sub_1B8880C(0LL, v21);
  UnityEngine_GameObject__SetActive(v20, 1, 0LL);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_1B8880C(0LL, v22);
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
    svtData = this->fields.svtData;
    if ( svtData && isShowBuffIcon )
      BattleCommandComponent__setBuffIconList(this, svtData->fields.buffData, v24);
    else
      BattleCommandComponent__setBuffIconList(this, 0LL, v24);
  }
  data = this->fields.data;
  if ( !data )
    sub_1B8880C(0LL, v22);
  if ( BattleCommandData__isBlank(data, 0LL) )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_1B8880C(0LL, v29);
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0LL);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_1B8880C(0LL, v31);
    UnityEngine_Behaviour__set_enabled(icon, 0, 0LL);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_1B8880C(0LL, v33);
    UnityEngine_Behaviour__set_enabled(text, 0, 0LL);
    bg = this->fields.bg;
    if ( !bg )
      sub_1B8880C(0LL, v35);
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_17763/*"card_bg_blank"*/, 0LL);
    v38 = (UIWidget_o *)this->fields.bg;
    if ( !v38 )
      sub_1B8880C(0LL, v37);
    UIWidget__set_height(v38, 170, 0LL);
    v40 = (UIWidget_o *)this->fields.bg;
    if ( !v40 )
      sub_1B8880C(0LL, v39);
    UIWidget__set_width(v40, 133, 0LL);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_1B8880C(0LL, v41);
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0LL);
    v43 = (BattleCommandSealStatus_o *)sub_1B887FC(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v43, 0LL);
    this->fields.sealStatus = v43;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sealStatus, (int32_t)v43, v44, v45);
    BattleCommandComponent__SetActiveComponent(
      v46,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      0,
      v47);
    goto LABEL_124;
  }
  v50 = this->fields.data;
  v49 = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v52 = UnityEngine_Object__op_Implicit(perf, 0LL);
  if ( v52 )
  {
    v54 = this->fields.perf;
    if ( !v54 )
      sub_1B8880C(v52, v53);
    v55 = v54->fields.data;
  }
  else
  {
    v55 = 0LL;
  }
  v56 = (BattleCommandSealStatus_o *)sub_1B887FC(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_43216624(v56, v50, v49, v55, 0LL);
  this->fields.sealStatus = v56;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sealStatus, (int32_t)v56, v57, v58);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v61 = this->fields.facetex;
  v62 = this->fields.data;
  if ( !v62 )
    sub_1B8880C(0LL, v59);
  ImageServantId = BattleCommandData__GetImageServantId(v62, 0LL);
  v65 = this->fields.data;
  if ( !v65 )
    sub_1B8880C(0LL, v63);
  loadSvtLimit = BattleCommandData__get_loadSvtLimit(v65, 0LL);
  v68 = this->fields.data;
  if ( !v68 )
    sub_1B8880C(loadSvtLimit, v67);
  v69 = loadSvtLimit;
  svtlimit = v68->fields.svtlimit;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v61,
                                                       ImageServantId,
                                                       v69,
                                                       svtlimit,
                                                       0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCard, 0LL, 0LL) )
  {
    *p_facetex = (UIWidget_o *)Manager__loadCommandCard;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.facetex, (int32_t)Manager__loadCommandCard, v73, v74);
  }
  v75 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v75 )
    sub_1B8880C(0LL, v72);
  UnityEngine_Behaviour__set_enabled(v75, 1, 0LL);
  v77 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v77 )
    sub_1B8880C(0LL, v76);
  UnityEngine_Behaviour__set_enabled(v77, 1, 0LL);
  v78 = (UnityEngine_Object_o *)*p_facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v79 = UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
  if ( v79 )
  {
    v81 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v81 )
        sub_1B8880C(0LL, v80);
      UnityEngine_Behaviour__set_enabled(v81, 0, 0LL);
    }
    else
    {
      if ( !v81 )
        sub_1B8880C(0LL, v80);
      UnityEngine_Behaviour__set_enabled(v81, 1, 0LL);
    }
  }
  v82 = this->fields.data;
  if ( !v82 )
    sub_1B8880C(v79, v80);
  v83 = (UnityEngine_Object_o *)*p_facetex;
  treasureDvc = v82->fields.treasureDvc;
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( treasureDvc < 1 )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v83, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_1B8880C(0LL, v86);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_1B8880C(0LL, v88);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v83, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_1B8880C(0LL, v86);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_1B8880C(0LL, v87);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
    v13 = (System_String_o *)StringLiteral_17764/*"card_bg_np{0}"*/;
  }
  v89 = this->fields.data;
  if ( !v89 )
    sub_1B8880C(0LL, v86);
  if ( BattleCommandData__isBuster(v89, 0LL) )
  {
    v91 = &StringLiteral_17643/*"buster"*/;
  }
  else
  {
    v92 = this->fields.data;
    if ( !v92 )
      sub_1B8880C(0LL, v90);
    if ( BattleCommandData__isQuick(v92, 0LL) )
    {
      v91 = &StringLiteral_22731/*"quick"*/;
    }
    else
    {
      v93 = this->fields.data;
      if ( !v93 )
        sub_1B8880C(0LL, v90);
      if ( !BattleCommandData__isArts(v93, 0LL) )
      {
        v177 = this->fields.data;
        if ( !v177 )
          sub_1B8880C(0LL, v90);
        if ( BattleCommandData__isAddAttack(v177, 0LL) )
          v94 = (Il2CppObject *)StringLiteral_19322/*"extra"*/;
        else
          v94 = (Il2CppObject *)v14;
        goto LABEL_79;
      }
      v91 = &StringLiteral_16916/*"arts"*/;
    }
  }
  v94 = (Il2CppObject *)*v91;
LABEL_79:
  v95 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v95 )
    sub_1B8880C(0LL, v90);
  UnityEngine_Behaviour__set_enabled(v95, 0, 0LL);
  v98 = this->fields.data;
  if ( !v98 )
    sub_1B8880C(v96, v97);
  if ( v98->fields.follower )
  {
    v99 = this->fields.friendIcon;
    v100 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v99 )
      sub_1B8880C(v100, v97);
    UISprite__set_spriteName(v99, FileName_TypeInfo->static_fields->friendIconName, 0LL);
    v102 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v102 )
      sub_1B8880C(0LL, v101);
    UnityEngine_Behaviour__set_enabled(v102, 1, 0LL);
    v98 = this->fields.data;
    if ( !v98 )
      sub_1B8880C(v103, v97);
  }
  if ( v98->fields.flgEventJoin )
  {
    v104 = this->fields.friendIcon;
    v105 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v104 )
      sub_1B8880C(v105, v97);
    UISprite__set_spriteName(v104, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
    v107 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v107 )
      sub_1B8880C(0LL, v106);
    UnityEngine_Behaviour__set_enabled(v107, 1, 0LL);
  }
  v108 = this->fields.bg;
  v109 = System_String__Format(v13, v94, 0LL);
  if ( !v108 )
    sub_1B8880C(v109, v109);
  UISprite__set_spriteName(v108, v109, 0LL);
  v110 = this->fields.icon;
  v111 = System_String__Format((System_String_o *)StringLiteral_17776/*"card_icon_{0}"*/, v94, 0LL);
  if ( !v110 )
    sub_1B8880C(v111, v111);
  UISprite__set_spriteName(v110, v111, 0LL);
  v112 = this->fields.text;
  v113 = System_String__Format((System_String_o *)StringLiteral_17784/*"card_txt_{0}"*/, v94, 0LL);
  if ( !v112 )
    sub_1B8880C(v113, v113);
  UISprite__set_spriteName(v112, v113, 0LL);
  v116 = this->fields.text;
  if ( !v116 )
    sub_1B8880C(v114, v115);
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !AtlasSprite )
    sub_1B8880C(0LL, v118);
  if ( !this->fields.text )
    sub_1B8880C(AtlasSprite, v118);
  width = AtlasSprite->fields.width;
  v120 = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !v120 )
    sub_1B8880C(0LL, v121);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float, float, float, float))v116->klass->vtable._18_SetRect.method)(
    v116,
    v116->klass->vtable._19_ParentHasChanged.methodPtr,
    0.0,
    0.0,
    (float)width,
    (float)v120->fields.height);
  v123 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v123 )
    sub_1B8880C(0LL, v122);
  v124 = UnityEngine_Component__get_gameObject(v123, 0LL);
  if ( !v124 )
    sub_1B8880C(0LL, v125);
  v126 = UnityEngine_GameObject__get_transform(v124, 0LL);
  v128 = v126;
  if ( !byte_4A55CE1 )
  {
    v126 = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v128 )
    sub_1B8880C(v126, v127);
  UnityEngine_Transform__set_localPosition(v128, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleCommandComponent__UpdateIconChangeTypeByTransform(this, v129);
  v132 = this->fields.data;
  if ( !v132 )
    sub_1B8880C(v130, v131);
  if ( v132->fields.treasureDvc >= 1 )
  {
    v133 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v133 )
      sub_1B8880C(0LL, v131);
    UnityEngine_Behaviour__set_enabled(v133, 0, 0LL);
    v135 = this->fields.data;
    if ( !v135 )
      sub_1B8880C(0LL, v134);
    nobletex = this->fields.nobletex;
    v138 = BattleCommandData__GetImageServantId(v135, 0LL);
    v139 = this->fields.data;
    if ( !v139 )
      sub_1B8880C(0LL, v137);
    v140 = BattleCommandData__get_loadSvtLimit(v139, 0LL);
    v142 = this->fields.data;
    if ( !v142 )
      sub_1B8880C(v140, v141);
    v143 = v140;
    v144 = v142->fields.treasureDvc;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, v138, v143, v144, 0LL);
    v146 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v146, 0LL, 0LL) )
    {
      v149 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v149 )
        sub_1B8880C(0LL, v147);
      v150 = UnityEngine_Component__get_gameObject(v149, 0LL);
      if ( !v150 )
        sub_1B8880C(0LL, v151);
      UnityEngine_GameObject__SetActive(v150, Manager__loadNobleName, 0LL);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v148);
  }
  BattleCommandComponent__InitUnusableMarks(this, v131);
  if ( !isTDTypeChangeWindow )
  {
    v165 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v153);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v165,
      (UnityEngine_Component_o *)v165,
      1,
      v166);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v167);
    if ( !SealStatus )
      sub_1B8880C(0LL, v169);
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL);
    switch ( (_DWORD)PrioredStatus )
    {
      case 1:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
          1,
          v170);
        displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        PrioredStatus = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(displayRemainingTurn, 0LL, 0LL);
        if ( ((unsigned __int8)PrioredStatus & 1) != 0 )
        {
          v179 = this->fields.displayRemainingTurn;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v180 = LocalizationManager__Get((System_String_o *)StringLiteral_5049/*"DISPLAY_REMAINING_TURN"*/, 0LL);
          v182 = (const MethodInfo *)BattleCommandComponent__get_SealStatus(this, v181);
          if ( !v182 )
            sub_1B8880C(0LL, v183);
          invoker_method = v182->invoker_method;
          if ( !invoker_method )
            sub_1B8880C(v182, v183);
          v185 = *((_DWORD *)invoker_method + 5);
          if ( v185 + 1 >= 0 )
            v186 = v185 + 1;
          else
            v186 = v185 + 2;
          v192 = BattleUtility__FloorToLong((float)(v186 >> 1), v182);
          v190 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v192, v187, v188, v189);
          v191 = System_String__Format(v180, v190, 0LL);
          if ( !v179 )
            sub_1B8880C(v191, v191);
          UILabel__set_text(v179, v191, 0LL);
        }
        break;
      case 8:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActCardSprite,
          1,
          v170);
        break;
      case 9:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActTypeSprite,
          1,
          v170);
        v172 = this->fields.data;
        if ( !v172 )
          sub_1B8880C(0LL, v171);
        donotActTypeSprite = this->fields.donotActTypeSprite;
        type = (BattleCommandComponent_o *)BattleCommandData__get_type(v172, 0LL);
        CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v175);
        if ( !donotActTypeSprite )
          sub_1B8880C(CardTypeSealSpriteName, CardTypeSealSpriteName);
        UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0LL);
        break;
    }
  }
  v155 = this->fields.data;
  if ( !v155 )
    sub_1B8880C(PrioredStatus, v153);
  BattleCommandComponent__SetCommandCodeView_43071704(this, v155->fields.commandCodeId, v154);
  v159 = this->fields.data;
  if ( !v159 )
    sub_1B8880C(v156, v157);
  BattleCommandComponent__SetCommandAssistView(this, v159->fields.commandAssistId, v158);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v160);
LABEL_124:
  BattleCommandComponent__setTouchFlg(this, 1, v48);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(svtId_label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v162 = this->fields.data;
    if ( v162 )
    {
      v163 = this->fields.svtId_label;
      svtId = v162->fields.svtId;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&svtId, 0LL);
      if ( v163 )
      {
        if ( gameObject )
          v164 = (System_String_o *)gameObject;
        else
          v164 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text(v163, v164, 0LL);
        return;
      }
    }
LABEL_158:
    sub_1B8880C(gameObject, v27);
  }
}


void __fastcall BattleCommandComponent_CardBuffData___ctor(
        BattleCommandComponent_CardBuffData_o *this,
        int32_t type,
        int32_t turn,
        int32_t order,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.buffType = type;
  this->fields.restTurn = turn;
  this->fields.addOrder = order;
}


void __fastcall BattleCommandComponent__PlayStarSe_d__161___ctor(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__PlayStarSe_d__161__MoveNext(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4A5DAF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5DAF2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v9 = Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__;
    if ( (*((_BYTE *)Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B885C8(Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
    OverwriteAssetSoundName__PlayCommonSe(v10, 7, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    preDelayTime = this->fields.preDelayTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, preDelayTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__161__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__PlayStarSe_d__161__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleCommandComponent__PlayStarSe_d__161_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__161__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__PlayStarSe_d__161__System_IDisposable_Dispose(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244___ctor(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244__MoveNext(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__WaitForErrorViewFinished_d__244_o *v2; // x19
  BattleCommandComponent_o *_4__this; // x20
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  System_String_o *busyVoiceSe; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int v13; // w8
  System_String_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Action_o *tdErrorAfterAction; // x8

  v2 = this;
  if ( (byte_4A5DAF3 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    this = (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5DAF3 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      waitSeconds = v2->fields.waitSeconds;
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, waitSeconds, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v5;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, (int32_t)v5, v6, v7);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_24;
      BattleCommandComponent__startMoveFloat(_4__this, 0LL);
      if ( System_String__IsNullOrEmpty(v2->fields.busyVoiceSe, 0LL) )
        goto LABEL_20;
LABEL_9:
      busyVoiceSe = v2->fields.busyVoiceSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( SoundManager__isBusyVoice(busyVoiceSe, 0LL) )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(p__2__current, 0, v10, v11);
        v13 = 2;
LABEL_18:
        *(_DWORD *)&p__2__current[-1].fields.isMine = v13;
        return 1;
      }
LABEL_14:
      v14 = v2->fields.busyVoiceSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)SoundManager__isBusySe(v14, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(p__2__current, 0, v15, v16);
        v13 = 3;
        goto LABEL_18;
      }
      if ( !_4__this )
LABEL_24:
        sub_1B8880C(this, method);
LABEL_20:
      tdErrorAfterAction = _4__this->fields.tdErrorAfterAction;
      if ( tdErrorAfterAction )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))tdErrorAfterAction->fields.m_target)(
          tdErrorAfterAction->fields.original_method_info,
          *(_QWORD *)&tdErrorAfterAction->fields.extra_arg);
      return 0;
    case 2:
      v2->fields.__1__state = -1;
      goto LABEL_9;
    case 3:
      v2->fields.__1__state = -1;
      goto LABEL_14;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__WaitForErrorViewFinished_d__244__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleCommandComponent__WaitForErrorViewFinished_d__244_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244__System_IDisposable_Dispose(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DAEF & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent___c_TypeInfo);
    byte_4A5DAEF = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleCommandComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleCommandComponent___c_TypeInfo->static_fields->__9 = (struct BattleCommandComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleCommandComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall BattleCommandComponent___c___ctor(BattleCommandComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleCommandComponent___c___SetSpecialCommandCardBuffData_b__225_1(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *a,
        BattleCommandComponent_CardBuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleCommandComponent___c___UpdateCommandCardTypeChange_b__227_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1B8880C(this, 0LL);
  return c->fields.buffType == 156;
}


bool __fastcall BattleCommandComponent___c___UpdateFixedCommandCard_b__211_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1B8880C(this, 0LL);
  return c->fields.buffType == 131;
}


int32_t __fastcall BattleCommandComponent___c___selectCard_b__188_0(
        BattleCommandComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4A5DAF0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_4A5DAF0 = 1;
  }
  return value;
}


void __fastcall BattleCommandComponent___c__DisplayClass160_0___ctor(
        BattleCommandComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass160_0___addCriticalBuff_b__0(
        BattleCommandComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass160_0_o *v2; // x19
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v5; // x8
  UnityEngine_Object_o *obj; // x19

  v2 = this;
  if ( (byte_4A5DAF1 & 1) == 0 )
  {
    this = (BattleCommandComponent___c__DisplayClass160_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DAF1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent___c__DisplayClass160_0_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (BattleCommandComponent___c__DisplayClass160_0_o *)v5->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v2->fields.obj, 0, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B8880C(this, method);
  }
  obj = (UnityEngine_Object_o *)v2->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(obj, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass225_0___ctor(
        BattleCommandComponent___c__DisplayClass225_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCommandComponent___c__DisplayClass225_0___SetSpecialCommandCardBuffData_b__0(
        BattleCommandComponent___c__DisplayClass225_0_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1B8880C(this, 0LL);
  return c->fields.buffType == this->fields.buffType;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233___ctor(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__MoveNext(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleCommandComponent_o *_4__this; // x21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  bool result; // w0
  struct UISprite_o *v7; // x8
  UnityEngine_Object_o *mAtlas; // x20
  bool v9; // w20
  int32_t v10; // w2
  int32_t v11; // w3

  v2 = this;
  if ( (byte_4A5DAF4 & 1) == 0 )
  {
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DAF4 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)_4__this->fields.specialCardBuffIcon;
    if ( !this )
      goto LABEL_26;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_26;
      specialCardBuffIcon = (UnityEngine_Object_o *)_4__this->fields.specialCardBuffIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
      {
        this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)_4__this->fields.specialCardBuffIcon;
        if ( this )
        {
          this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)_4__this->fields.specialCardBuffIcon;
            if ( this )
            {
              UISprite__set_atlas((UISprite_o *)this, 0LL, 0LL);
              goto LABEL_20;
            }
          }
        }
LABEL_26:
        sub_1B8880C(this, method);
      }
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_26;
LABEL_20:
  v7 = _4__this->fields.specialCardBuffIcon;
  if ( !v7 )
    goto LABEL_26;
  mAtlas = (UnityEngine_Object_o *)v7->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL);
  v2->fields.__2__current = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, 0, v10, v11);
  if ( v9 )
  {
    result = 1;
    v2->fields.__1__state = 1;
  }
  else
  {
    v2->fields.__1__state = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_IDisposable_Dispose(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__delayFrame_d__162___ctor(
        BattleCommandComponent__delayFrame_d__162_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__delayFrame_d__162__MoveNext(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *action; // x8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    if ( !action )
      sub_1B8880C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      *(_QWORD *)&action->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__162__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__delayFrame_d__162__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleCommandComponent__delayFrame_d__162_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__162__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__delayFrame_d__162__System_IDisposable_Dispose(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__182___ctor(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__fadeoutEffect_d__182__MoveNext(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleCommandComponent__fadeoutEffect_d__182_o *v4; // x20
  int32_t _1__state; // w8
  DefCoroutine_c *v6; // x0
  Il2CppObject *milliSecSix; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_o *_4__this; // x19
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Transform_o *v16; // x20
  struct UnityEngine_GameObject_array *v17; // x8
  BattleCommandComponent__fadeoutEffect_d__182_o *v18; // x20

  v4 = this;
  if ( (byte_4A5DAF5 & 1) == 0 )
  {
    sub_1B885B0(&DefCoroutine_TypeInfo);
    this = (BattleCommandComponent__fadeoutEffect_d__182_o *)sub_1B885B0(&StringLiteral_18893/*"effect/ef_commandburn_s01"*/);
    byte_4A5DAF5 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleCommandComponent__fadeoutEffect_d__182_o *)_4__this->fields.nomalwidget;
      if ( this )
      {
        ((void (__fastcall *)(BattleCommandComponent__fadeoutEffect_d__182_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
          this,
          this->klass[1]._1.image,
          0.0);
        BattleCommandComponent__DestroyEffectObject1(_4__this, 0LL);
        if ( v4->fields.isTresure )
        {
LABEL_27:
          BattleCommandComponent__CardEffectSetActive(_4__this, 0, 0LL);
          return 0;
        }
        effectobj = _4__this->fields.effectobj;
        this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)_4__this,
                                                                   0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattleCommandComponent__fadeoutEffect_d__182_o *)BaseMonoBehaviour__createObject_38240928(
                                                                     (BaseMonoBehaviour_o *)_4__this,
                                                                     (System_String_o *)StringLiteral_18893/*"effect/ef_commandburn_s01"*/,
                                                                     transform,
                                                                     0LL,
                                                                     0LL);
          if ( effectobj )
          {
            if ( effectobj->max_length <= 1 )
              goto LABEL_30;
            effectobj->m_Items[1] = (UnityEngine_GameObject_o *)this;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[1], (int32_t)this, v13, v14);
            v15 = _4__this->fields.effectobj;
            if ( !v15 )
              goto LABEL_29;
            if ( v15->max_length <= 1 )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)v15->m_Items[1];
            if ( !this )
              goto LABEL_29;
            v16 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
            if ( !this )
              goto LABEL_29;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0LL);
            if ( !this )
              goto LABEL_29;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_Transform__get_parent(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
            if ( !v16 )
              goto LABEL_29;
            UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)this, 0LL);
            v17 = _4__this->fields.effectobj;
            if ( !v17 )
              goto LABEL_29;
            if ( v17->max_length <= 1 )
LABEL_30:
              sub_1B88814(this, method);
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)v17->m_Items[1];
            if ( this )
            {
              this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0LL);
              v18 = this;
              if ( !byte_4A55CE6 )
              {
                this = (BattleCommandComponent__fadeoutEffect_d__182_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                byte_4A55CE6 = 1;
              }
              if ( v18 )
              {
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)v18,
                  UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                  0LL);
                goto LABEL_27;
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_1B8880C(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v6 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v6 = DefCoroutine_TypeInfo;
  }
  milliSecSix = (Il2CppObject *)v6->static_fields->milliSecSix;
  v4->fields.__2__current = milliSecSix;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)milliSecSix, v2, v3);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__182__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__fadeoutEffect_d__182__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleCommandComponent__fadeoutEffect_d__182_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__182__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__182__System_IDisposable_Dispose(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  ;
}