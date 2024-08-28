void __fastcall BattleCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w1
  struct BattleCommandComponent_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct BattleCommandComponent_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  BattleCommandComponent_c *v17; // x8
  int32_t v23; // w1
  struct BattleCommandComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  struct BattleCommandComponent_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A0B4D9 & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_20022/*"icon_cardsealed_quick"*/, v4);
    sub_1B686D4(&StringLiteral_22982/*"se_"*/, v5);
    sub_1B686D4(&StringLiteral_20020/*"icon_cardsealed_arts"*/, v6);
    sub_1B686D4(&StringLiteral_20021/*"icon_cardsealed_buster"*/, v7);
    sub_1B686D4(&StringLiteral_24417/*"v_"*/, v8);
    byte_4A0B4D9 = 1;
  }
  BattleCommandComponent_TypeInfo->static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_20020/*"icon_cardsealed_arts"*/;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)BattleCommandComponent_TypeInfo->static_fields,
    StringLiteral_20020/*"icon_cardsealed_arts"*/,
    v2,
    v3);
  v9 = StringLiteral_20021/*"icon_cardsealed_buster"*/;
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  static_fields->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_20021/*"icon_cardsealed_buster"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->SEALED_CARDTYPE_ICON_BUSTER, v9, v11, v12);
  v13 = StringLiteral_20022/*"icon_cardsealed_quick"*/;
  v14 = BattleCommandComponent_TypeInfo->static_fields;
  v14->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_20022/*"icon_cardsealed_quick"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v14->SEALED_CARDTYPE_ICON_QUICK, v13, v15, v16);
  v17 = BattleCommandComponent_TypeInfo;
  __asm { FMOV            V0.4S, #1.0 }
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = _Q0;
  v17->static_fields->CriticalLabelGradientBottomOnDefault = (struct UnityEngine_Color_o)xmmword_BA74F0;
  v17->static_fields->CriticalNumberLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_BA5F80;
  v17->static_fields->CriticalNumberLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_BA75C0;
  v17->static_fields->CriticalPercentLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_BA67E0;
  v17->static_fields->CriticalPercentLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_BA69D0;
  v23 = StringLiteral_24417/*"v_"*/;
  v24 = v17->static_fields;
  v24->voiceIdPrefix = (struct System_String_o *)StringLiteral_24417/*"v_"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v24->voiceIdPrefix, v23, v25, v26);
  v27 = StringLiteral_22982/*"se_"*/;
  v28 = BattleCommandComponent_TypeInfo->static_fields;
  v28->seIdPrefix = (struct System_String_o *)StringLiteral_22982/*"se_"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v28->seIdPrefix, v27, v29, v30);
}


void __fastcall BattleCommandComponent___ctor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_GameObject_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct UnityEngine_GameObject_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Array_o *v18; // x0
  struct BuffList_TYPE_array *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Array_o *v22; // x0
  struct BuffList_TYPE_array *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_Array_o *v26; // x0
  struct BuffList_TYPE_array *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_Array_o *v30; // x0
  struct BuffList_TYPE_array *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_Dictionary_object__object__o *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  System_RuntimeFieldHandle_o v40; // 0:w1.4
  System_RuntimeFieldHandle_o v41; // 0:w1.4
  System_RuntimeFieldHandle_o v42; // 0:w1.4
  System_RuntimeFieldHandle_o v43; // 0:w1.4

  if ( (byte_4A0B4D8 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_1B686D4(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v3);
    sub_1B686D4(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__, v5);
    sub_1B686D4(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo, v6);
    sub_1B686D4(&BuffList_TYPE___TypeInfo, v7);
    sub_1B686D4(
      &Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437,
      v8);
    sub_1B686D4(
      &Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870,
      v9);
    sub_1B686D4(
      &Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9,
      v10);
    sub_1B686D4(
      &Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468,
      v11);
    byte_4A0B4D8 = 1;
  }
  v12 = (struct UnityEngine_GameObject_array *)sub_1B6877C(UnityEngine_GameObject___TypeInfo, 6LL);
  this->fields.effectobj = v12;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.effectobj, (int32_t)v12, v13, v14);
  v15 = (struct UnityEngine_GameObject_array *)sub_1B6877C(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.addObjectList = v15;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.addObjectList, (int32_t)v15, v16, v17);
  v18 = (System_Array_o *)sub_1B6877C(BuffList_TYPE___TypeInfo, 13LL);
  v40.fields.value = Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870;
  v19 = (struct BuffList_TYPE_array *)v18;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61327548(v18, v40, 0LL);
  this->fields.qabTypes = v19;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.qabTypes, (int32_t)v19, v20, v21);
  v22 = (System_Array_o *)sub_1B6877C(BuffList_TYPE___TypeInfo, 4LL);
  v41.fields.value = Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437;
  v23 = (struct BuffList_TYPE_array *)v22;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61327548(v22, v41, 0LL);
  this->fields.noneTdQabTypes = v23;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.noneTdQabTypes, (int32_t)v23, v24, v25);
  v26 = (System_Array_o *)sub_1B6877C(BuffList_TYPE___TypeInfo, 3LL);
  v42.fields.value = Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468;
  v27 = (struct BuffList_TYPE_array *)v26;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61327548(v26, v42, 0LL);
  this->fields.tdTypes = v27;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.tdTypes, (int32_t)v27, v28, v29);
  v30 = (System_Array_o *)sub_1B6877C(BuffList_TYPE___TypeInfo, 15LL);
  v43.fields.value = Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9;
  v31 = (struct BuffList_TYPE_array *)v30;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61327548(v30, v43, 0LL);
  this->fields.otherTypes = v31;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.otherTypes, (int32_t)v31, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v34;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.specialCardBuffList, (int32_t)v34, v35, v36);
  this->fields.cardBuffAlphaFor = 1.0;
  v37 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v37,
    (const MethodInfo_31891B8 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v37;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.cardEffectDict, (int32_t)v37, v38, v39);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  bool v10; // w19
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A0B4D0 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, value);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v5);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v6);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v7);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v8);
    byte_4A0B4D0 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_1B68930(cardEffectDict, value);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v10 = value;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v12,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v12.fields._currentValue )
      sub_1B68930(0LL, v11);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12.fields._currentValue, v10, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v12,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCardEffectMaskForInside(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  __int64 v9; // x1
  System_Object_array *ComponentsInChildren_object__48862580; // x0
  __int64 v11; // x1
  System_Object_array *v12; // x19
  int max_length; // w8
  int i; // w23
  UnityEngine_ParticleSystemRenderer_o *v15; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A0B4D2 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, method);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v3);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v4);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v5);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v6);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v7);
    byte_4A0B4D2 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_1B68930(cardEffectDict, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v17,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v17.fields._currentValue )
      sub_1B68930(0LL, v9);
    ComponentsInChildren_object__48862580 = UnityEngine_GameObject__GetComponentsInChildren_object__48862580(
                                              (UnityEngine_GameObject_o *)v17.fields._currentValue,
                                              (const MethodInfo_2E99574 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v12 = ComponentsInChildren_object__48862580;
    if ( !ComponentsInChildren_object__48862580 )
      sub_1B68930(0LL, v11);
    max_length = ComponentsInChildren_object__48862580->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1B68938(ComponentsInChildren_object__48862580, v11);
        v15 = (UnityEngine_ParticleSystemRenderer_o *)v12->m_Items[i];
        if ( !v15 )
          sub_1B68930(0LL, v11);
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v15, 1, 0LL);
        max_length = v12->max_length;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v17,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *criticallabel; // x0
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w23
  UILabel_o *v8; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4A0B48B & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent_TypeInfo, method);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75777344, v3);
    byte_4A0B48B = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_2E412E0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75777344);
  if ( !criticallabel )
    goto LABEL_17;
  v5 = *((_DWORD *)criticallabel + 6);
  v6 = criticallabel;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
        sub_1B68938(criticallabel, method);
      criticallabel = BattleCommandComponent_TypeInfo;
      v8 = (UILabel_o *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v8 )
        break;
      UILabel__set_gradientTop(v8, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 56LL), 0LL);
      UILabel__set_gradientBottom(
        v8,
        BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted,
        0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1B68930(criticallabel, method);
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
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *specialCardBuffList; // x0
  int32_t cardBuffListIndex; // w1
  int items; // w8

  if ( (byte_4A0B4CC & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v4);
    byte_4A0B4CC = 1;
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
                                                                       (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
  if ( !specialCardBuffList )
LABEL_11:
    sub_1B68930(specialCardBuffList, method);
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
    sub_1B68930(0LL, v4);
  switch ( BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL) )
  {
    case 0:
      p_donotPermanentSleep = &this->fields.donotPermanentSleep;
      goto LABEL_13;
    case 1:
      p_donotPermanentSleep = &this->fields.donotsleepSprite;
      goto LABEL_13;
    case 2:
      p_donotPermanentSleep = &this->fields.donotactSprite;
      goto LABEL_13;
    case 3:
    case 5:
      p_donotPermanentSleep = &this->fields.sealedSprite;
      goto LABEL_13;
    case 4:
      p_donotPermanentSleep = &this->fields.dontuseSprite;
      goto LABEL_13;
    case 6:
      p_donotPermanentSleep = &this->fields.unusableShortageStarSprite;
      goto LABEL_13;
    case 7:
      p_donotPermanentSleep = &this->fields.unusableNpSprite;
      goto LABEL_13;
    case 8:
      p_donotPermanentSleep = &this->fields.donotActWithTypeSp;
      goto LABEL_13;
    case 9:
      p_donotPermanentSleep = &this->fields.treasureDeviceErrorSprite;
LABEL_13:
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A0B4D1 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, method);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v3);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v4);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v5);
    sub_1B686D4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v8);
    byte_4A0B4D1 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
    goto LABEL_12;
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                cardEffectDict,
                                                                                (const MethodInfo_3189998 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !cardEffectDict )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_37CA0CC *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v11,
            (const MethodInfo_3288490 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v11.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816((UnityEngine_Object_o *)currentValue, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_328848C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
LABEL_12:
    sub_1B68930(cardEffectDict, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    cardEffectDict,
    (const MethodInfo_3189CF0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
}


void __fastcall BattleCommandComponent__DestroyEffectObject1(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x8
  UnityEngine_Object_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  v2 = this;
  if ( (byte_4A0B4B2 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method);
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0B4B2 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_24;
  if ( effectobj->max_length <= 1 )
    goto LABEL_25;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.newMatriarl )
    {
      v6 = v2->fields.effectobj;
      if ( !v6 )
        goto LABEL_24;
      if ( v6->max_length <= 1 )
        goto LABEL_25;
      this = (BattleCommandComponent_o *)v6->m_Items[1];
      if ( !this )
        goto LABEL_24;
      this = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_2E98BB4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !this )
        goto LABEL_24;
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                     this,
                                     this->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69171816(v7, 0LL);
      v2->fields.newMatriarl = 0;
    }
    v8 = v2->fields.effectobj;
    if ( v8 )
    {
      if ( v8->max_length <= 1 )
        goto LABEL_25;
      v9 = (UnityEngine_Object_o *)v8->m_Items[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69171816(v9, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          this->fields.bg = 0LL;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.bg, 0, v10, v11);
          return;
        }
LABEL_25:
        sub_1B68938(this, method);
      }
    }
LABEL_24:
    sub_1B68930(this, method);
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
    sub_1B68930(0LL, method);
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
  if ( !byte_4A03901 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, prefab);
    byte_4A03901 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v13 = static_fields->zeroVector.fields.x;
  v12 = static_fields->zeroVector.fields.y;
  v14 = static_fields->zeroVector.fields.z;
  if ( !byte_4A03907 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Quaternion_TypeInfo, prefab);
    byte_4A03907 = 1;
  }
  if ( !spawner )
    goto LABEL_12;
  v18.fields.x = v13;
  v18.fields.y = v12;
  v18.fields.z = v14;
  v15 = Spawner__Spawn_37713196(
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
  if ( !byte_4A03901 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, prefab);
    byte_4A03901 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v16,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL),
        (this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_1B68930(this, prefab);
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

  if ( (byte_4A0B48A & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B48A = 1;
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
      sub_1B68678((ServantStatusBattleListViewItem_o *)p_countUpFinishEffect, 0, v6, v7);
      return;
    }
LABEL_10:
    sub_1B68930(criticallabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__HidePowerUpValueLabelActive(
        BattleCommandComponent_o *this,
        bool isCommandCardUnderIcon,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *powerUpCardValue; // x0

  if ( (byte_4A0B4CD & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, isCommandCardUnderIcon);
    byte_4A0B4CD = 1;
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
    sub_1B68930(powerUpCardValue, v6);
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorAnimation(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleDataDefine_c *v9; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *Object_37517400; // x0
  UnityEngine_Object_o *v14; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v16; // x19

  if ( (byte_4A0B484 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_AnimationClip_TypeInfo, method);
    sub_1B686D4(&AssetManager_TypeInfo, v3);
    sub_1B686D4(&BattleDataDefine_TypeInfo, v4);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Animation___, v5);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_16713/*"anim_erroraction"*/, v8);
    byte_4A0B484 = 1;
  }
  v9 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v9 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_37517400 = AssetData__GetObject_37517400(AssetStorage, (System_String_o *)StringLiteral_16713/*"anim_erroraction"*/, 0LL);
  if ( Object_37517400 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_37517400->klass == UnityEngine_AnimationClip_TypeInfo )
      v14 = Object_37517400;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
  {
    this->fields.isSettedTreasureDeviceErrorAnim = 1;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( v14 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v14, 0LL);
        if ( Component_object )
        {
          SimpleAnimation__AddClip(
            (SimpleAnimation_o *)Component_object,
            (UnityEngine_AnimationClip_o *)v14,
            (System_String_o *)AssetStorage,
            0LL);
          return;
        }
      }
LABEL_29:
      sub_1B68930(AssetStorage, v12);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_29;
      AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v14, 0LL);
      if ( !v16 )
        goto LABEL_29;
      UnityEngine_Animation__AddClip(
        (UnityEngine_Animation_o *)v16,
        (UnityEngine_AnimationClip_o *)v14,
        (System_String_o *)AssetStorage,
        0LL);
    }
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x20
  BattleDataDefine_c *v10; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4A0B483 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_GameObject____75755192, method);
    sub_1B686D4(&AssetManager_TypeInfo, v3);
    sub_1B686D4(&BattleDataDefine_TypeInfo, v4);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_3205/*"BattleAssetUIAtlas"*/, v7);
    sub_1B686D4(&StringLiteral_20073/*"icon_error"*/, v8);
    byte_4A0B483 = 1;
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    v10 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v10 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__48415484(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3205/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_GameObject____75755192)) == 0LL
      || (AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.treasureDeviceErrorSprite) == 0LL) )
    {
      sub_1B68930(AssetStorage, v13);
    }
    UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_20073/*"icon_error"*/, 0LL);
    BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(this, v14);
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
}


void __fastcall BattleCommandComponent__Initialize(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Object_o *spawner; // x21
  const MethodInfo *v9; // x1
  Spawner_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A0B485 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v3);
    byte_4A0B485 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  p_spawner = &this->fields.spawner;
  this->fields.spawner = (struct Spawner_o *)Instance;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.spawner, (int32_t)Instance, v6, v7);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
  {
    v10 = *p_spawner;
    if ( !*p_spawner
      || (Spawner__Precache_37711228(v10, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0LL),
          (v10 = this->fields.spawner) == 0LL) )
    {
      sub_1B68930(v10, v9);
    }
    Spawner__Precache_37711228(v10, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0LL);
  }
  BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(this, v9);
  BattleCommandComponent__InitTreasureDeviceErrorAnimation(this, v11);
}


bool __fastcall BattleCommandComponent__IsAnimationBusy(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A0B4D6 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Animation___, animationName);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    byte_4A0B4D6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v9 )
  {
    if ( Component_object )
      return SimpleAnimation__IsPlaying((SimpleAnimation_o *)Component_object, animationName, 0LL);
LABEL_14:
    sub_1B68930(v9, v10);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( !v9 )
    return 0;
  if ( !v8 )
    goto LABEL_14;
  return UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v8, animationName, 0LL);
}


bool __fastcall BattleCommandComponent__IsMaxCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B68930(0LL, method);
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
    sub_1B68930(criticalObject, method);
  }
  return 0;
}


bool __fastcall BattleCommandComponent__IsValidVoiceType(
        BattleCommandComponent_o *this,
        System_String_o *voiceTypeId,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x20
  __int64 v5; // x1
  struct BattleServantData_o *svtData; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w21
  struct BattleServantData_o *v10; // x8
  int32_t v11; // w20
  int32_t overwriteSvtVoiceId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = this;
  if ( (byte_4A0B4A9 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, voiceTypeId);
    this = (BattleCommandComponent_o *)sub_1B686D4(&ServantAssetLoadManager_TypeInfo, v5);
    byte_4A0B4A9 = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData )
    goto LABEL_11;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  this = (BattleCommandComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v14, 0LL);
  if ( !v4->fields.svtData
    || (v9 = (int)this,
        this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(v4->fields.svtData, 1, 0LL),
        (v10 = v4->fields.svtData) == 0LL) )
  {
LABEL_11:
    sub_1B68930(this, voiceTypeId);
  }
  v11 = (int)this;
  overwriteSvtVoiceId = v10->fields.overwriteSvtVoiceId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__checkBattleVoice(v9, v11, overwriteSvtVoiceId, voiceTypeId, 0, 0LL);
}


void __fastcall BattleCommandComponent__OnClickEvent(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A0B4A6 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&StringLiteral_23916/*"touchCommandCard"*/, v4);
    byte_4A0B4A6 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v10 = this->fields.target;
      markindex = data->fields.markindex;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex, v6, v7, v8);
      if ( !v10 )
        sub_1B68930(v11, v12);
      UnityEngine_GameObject__SendMessage_69153188(v10, (System_String_o *)StringLiteral_23916/*"touchCommandCard"*/, v11, 0LL);
    }
  }
}


void __fastcall BattleCommandComponent__OnLongPressEvent(
        BattleCommandComponent_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v11; // x19
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A0B4A7 & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, obj);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&StringLiteral_8441/*"LongPress"*/, v5);
    byte_4A0B4A7 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v11 = this->fields.target;
      markindex = data->fields.markindex;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex, v7, v8, v9);
      if ( !v11 )
        sub_1B68930(v12, v13);
      UnityEngine_GameObject__SendMessage_69153188(v11, (System_String_o *)StringLiteral_8441/*"LongPress"*/, v12, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v11; // x21
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v13; // x1
  UnityEngine_AnimationState_c *klass; // x8
  UnityEngine_AnimationState_o *v15; // x21
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v18; // x0

  v4 = *(long double *)&simpleAnimationTime;
  if ( (byte_4A0B492 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Animation___, animationName);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    sub_1B686D4(&SimpleAnimation_State_TypeInfo, v9);
    byte_4A0B492 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v11 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v11 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 1, 0LL);
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v11, animationName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, *(float *)&v4, 0LL);
        UnityEngine_Animation__Play_68916908((UnityEngine_Animation_o *)v11, animationName, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1B68930(Item, v13);
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
  v15 = Item;
  v16 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v16;
      p_offset += 2;
      if ( !v16 )
        goto LABEL_12;
    }
    v18 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_12:
    v18 = sub_1BBA6B4(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_AnimationState_o *, _QWORD, long double))v18)(v15, *(_QWORD *)(v18 + 8), v4);
  SimpleAnimation__Play_63557140((SimpleAnimation_o *)Component_object, animationName, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  BattleCommandComponent__PlayStarSe_d__159_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A0B49F & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent__PlayStarSe_d__159_TypeInfo, method);
    byte_4A0B49F = 1;
  }
  v4 = (BattleCommandComponent__PlayStarSe_d__159_o *)sub_1B68920(BattleCommandComponent__PlayStarSe_d__159_TypeInfo);
  BattleCommandComponent__PlayStarSe_d__159___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_1B68930(v5, v6);
  v4->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleCommandComponent__PlayTDErrorAnimation(
        BattleCommandComponent_o *this,
        System_Action_o *tdErrorAfterAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL4 IsAnimationBusy; // w22
  struct System_Action_o **p_tdErrorAfterAction; // x20
  System_Delegate_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Delegate_o *v13; // x8
  System_Action_c *v14; // x1
  __int64 v15; // x1
  BattleServantData_o *svtData; // x0
  struct BattleServantData_o *v17; // x8
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2

  if ( (byte_4A0B4D7 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, tdErrorAfterAction);
    sub_1B686D4(&StringLiteral_22983/*"se_ba41"*/, v5);
    sub_1B686D4(&StringLiteral_16713/*"anim_erroraction"*/, v6);
    sub_1B686D4(&StringLiteral_16711/*"anim_commandfloat"*/, v7);
    byte_4A0B4D7 = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_16711/*"anim_commandfloat"*/, method);
  p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
  v10 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.tdErrorAfterAction,
          (System_Delegate_o *)tdErrorAfterAction,
          0LL);
  v13 = v10;
  if ( !v10 )
    goto LABEL_7;
  v14 = System_Action_TypeInfo;
  if ( (System_Action_c *)v10->klass != System_Action_TypeInfo
    || (*p_tdErrorAfterAction = (struct System_Action_o *)v10, (System_Action_c *)v10->klass != v14) )
  {
    sub_1B68BF0(v10);
LABEL_7:
    *p_tdErrorAfterAction = (struct System_Action_o *)v13;
  }
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.tdErrorAfterAction, (int32_t)v13, v11, v12);
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
      || (BattleServantData__AddTDErrorTouchCount(svtData, 0LL), (v17 = this->fields.svtData) == 0LL)
      || (svtData = (BattleServantData_o *)v17->fields.deckSvt) == 0LL )
    {
      sub_1B68930(svtData, v15);
    }
    TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                 (BattleDeckServantData_o *)svtData,
                                 (System_String_o *)StringLiteral_22983/*"se_ba41"*/,
                                 0LL);
    BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v19);
    BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16713/*"anim_erroraction"*/, 0.0, v20);
  }
}


System_String_o *__fastcall BattleCommandComponent__PlayTDErrorVoiceSe(
        BattleCommandComponent_o *this,
        System_String_o *voiceSeId,
        int32_t voiceUniqueId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x22
  BattleServantData_o *svtData; // x0
  int32_t v16; // w22
  int32_t DispLimitCount; // w23
  int32_t VoicePrefix; // w0
  BattleCommandComponent_c *v19; // x8
  int v20; // w24
  struct BattleServantData_o *v21; // x8
  System_String_o *v22; // x19
  int32_t overwriteSvtVoiceId; // w21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  BattleCommandComponent_c *v32; // x0
  BattleCommandComponent_c *v33; // x0
  _QWORD *v34; // x8
  System_Reflection_MethodBase_o *v35; // x0
  int v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A0B4D4 & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__, voiceSeId);
    sub_1B686D4(&BattleCommandComponent_TypeInfo, v7);
    sub_1B686D4(&int_TypeInfo, v8);
    sub_1B686D4(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_1B686D4(&StringLiteral_25014/*"{0}_{1:D0}_{2}"*/, v11);
    sub_1B686D4(&StringLiteral_1/*""*/, v12);
    byte_4A0B4D4 = 1;
  }
  v14 = 0LL;
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
          v16 = (int)svtData;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
          svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( svtData )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                            (ServantAssetLoadManager_o *)svtData,
                            v16,
                            DispLimitCount,
                            0LL);
            v19 = BattleCommandComponent_TypeInfo;
            v20 = VoicePrefix;
            if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
              v19 = BattleCommandComponent_TypeInfo;
            }
            svtData = (BattleServantData_o *)System_String__Replace_61439096(
                                               voiceSeId,
                                               v19->static_fields->voiceIdPrefix,
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            v21 = this->fields.svtData;
            if ( v21 )
            {
              v22 = (System_String_o *)svtData;
              overwriteSvtVoiceId = v21->fields.overwriteSvtVoiceId;
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              ServantAssetLoadManager__playBattleVoice(
                v16,
                DispLimitCount,
                overwriteSvtVoiceId,
                v22,
                1.0,
                0LL,
                voiceUniqueId,
                0,
                0LL);
              v38 = v16;
              v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v24, v25, v26);
              v37 = v20;
              v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v28, v29, v30);
              return System_String__Format_61433908(
                       (System_String_o *)StringLiteral_25014/*"{0}_{1:D0}_{2}"*/,
                       v27,
                       v31,
                       (Il2CppObject *)v22,
                       0LL);
            }
          }
        }
      }
LABEL_27:
      sub_1B68930(svtData, v13);
    }
    v32 = BattleCommandComponent_TypeInfo;
    if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
      v32 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v32->static_fields->seIdPrefix, 0LL) )
    {
      v33 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v33 = BattleCommandComponent_TypeInfo;
      }
      v14 = System_String__Replace_61439096(
              voiceSeId,
              v33->static_fields->seIdPrefix,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v34 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1B686EC(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v35 = (System_Reflection_MethodBase_o *)sub_1B686B8(v34, v34[4]);
      OverwriteAssetSoundName__PlaySe(v35, v14, 0LL);
    }
    else
    {
      return voiceSeId;
    }
  }
  return v14;
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
    sub_1B68930(svtData, method);
  }
  v8 = BattleCommandComponent__PlayTDErrorVoiceSe(this, (System_String_o *)svtData, data->fields.uniqueId, v6);
  v10 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattleCommandComponent__ReleaseNobleGaugeEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *nobleGaugeEffect; // x20
  ServantStatusBattleListViewItem_o *p_nobleGaugeEffect; // x19
  UnityEngine_GameObject_o *klass; // x20
  UnityEngine_Object_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0B496 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&iTween_TypeInfo, v3);
    byte_4A0B496 = 1;
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
    iTween__Stop_60068140(klass, 0LL);
    v7 = (UnityEngine_Object_o *)p_nobleGaugeEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(v7, 0LL);
    p_nobleGaugeEffect->klass = 0LL;
    sub_1B68678(p_nobleGaugeEffect, 0, v8, v9);
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
    sub_1B68930(0LL, v3);
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

  if ( (byte_4A0B4C9 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B4C9 = 1;
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
      sub_1B68930(0LL, v4);
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
  __int64 v3; // x1
  void *criticallabel; // x0
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w23
  UILabel_o *v8; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4A0B48C & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent_TypeInfo, method);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75777344, v3);
    byte_4A0B48C = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_2E412E0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____75777344);
  if ( !criticallabel )
    goto LABEL_17;
  v5 = *((_DWORD *)criticallabel + 6);
  v6 = criticallabel;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
        sub_1B68938(criticallabel, method);
      criticallabel = BattleCommandComponent_TypeInfo;
      v8 = (UILabel_o *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v8 )
        break;
      UILabel__set_gradientTop(v8, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0LL);
      UILabel__set_gradientBottom(
        v8,
        BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
        0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1B68930(criticallabel, method);
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
    sub_1B68930(0LL, method);
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

  if ( (byte_4A0B4BF & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, component);
    byte_4A0B4BF = 1;
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
      sub_1B68930(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetActiveSpecialCardBuffIcon(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A0B4C6 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, active);
    byte_4A0B4C6 = 1;
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
      sub_1B68930(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4A0B4C5 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, active);
    byte_4A0B4C5 = 1;
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
      sub_1B68930(gameObject, v6);
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
  if ( (byte_4A0B4AD & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B4AD = 1;
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
    sub_1B68930(v10, v9);
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
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *assistChargeTurnLabel; // x21
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  __int64 v14; // x1
  void *buffData; // x0
  UnityEngine_Object_o *assistSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v19; // w8
  int v20; // w9
  _DWORD *v21; // x21
  struct BattleCommandData_o *v22; // x10
  int32_t v23; // w21
  int v24; // t1
  UILabel_o *v25; // x22
  UILabel_o *v26; // x21
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A0B4AF & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, isFirst);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    sub_1B686D4(&StringLiteral_2813/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v11);
    byte_4A0B4AF = 1;
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
          v27.fields.r = r;
          v27.fields.g = g;
          v27.fields.b = b;
          v27.fields.a = a;
          UIWidget__set_color((UIWidget_o *)buffData, v27, 0LL);
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
                v19 = *((_DWORD *)buffData + 6);
                if ( v19 >= 1 )
                {
                  v20 = 0;
                  while ( 1 )
                  {
                    if ( v19 == v20 )
                      sub_1B68938(buffData, v14);
                    v21 = (_DWORD *)*((_QWORD *)buffData + v20 + 4);
                    if ( !v21 )
                      goto LABEL_48;
                    v22 = this->fields.data;
                    if ( !v22 )
                      goto LABEL_48;
                    if ( v21[87] == v22->fields.commandAssistId && v21[88] == v22->fields.servantCardIdsIndex )
                      break;
                    if ( v19 == ++v20 )
                      goto LABEL_41;
                  }
                  v24 = v21[28];
                  v23 = (_DWORD)v21 + 112;
                  if ( v24 >= 1 )
                  {
                    buffData = this->fields.assistSprite;
                    if ( !buffData )
                      goto LABEL_48;
                    v28.fields.r = 0.5;
                    v28.fields.g = 0.5;
                    v28.fields.b = 0.5;
                    v28.fields.a = 1.0;
                    UIWidget__set_color((UIWidget_o *)buffData, v28, 0LL);
                    buffData = this->fields.assistChargeTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    buffData = this->fields.assistRemainingTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    v25 = this->fields.assistChargeTurnLabel;
                    buffData = System_Int32__ToString(v23, 0LL);
                    if ( !v25 )
                      goto LABEL_48;
                    UILabel__set_text(v25, (System_String_o *)buffData, 0LL);
                    v26 = this->fields.assistRemainingTurnLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2813/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                    if ( !v26 )
                      goto LABEL_48;
                    UILabel__set_text(v26, (System_String_o *)buffData, 0LL);
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
                  sub_1B68930(buffData, v14);
                }
              }
            }
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandAssistView(
        BattleCommandComponent_o *this,
        int32_t commandAssistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *assistSprite; // x21
  __int64 v10; // x1
  UnityEngine_Behaviour_o *Master_object; // x0
  int32_t EventId; // w21
  UISprite_o *v13; // x20
  System_String_o *v14; // x21

  if ( (byte_4A0B4B8 & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, *(_QWORD *)&commandAssistId);
    sub_1B686D4(&BattleData_TypeInfo, v5);
    sub_1B686D4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_1B686D4(&DataManager_TypeInfo, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    byte_4A0B4B8 = 1;
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
      Master_object = (UnityEngine_Behaviour_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
          v13 = this->fields.assistSprite;
          v14 = System_Int32__ToString((int)Master_object + 48, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetEventSprite(v13, v14, 0LL) )
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
    sub_1B68930(Master_object, v10);
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
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *chargeTurnLabel; // x21
  UnityEngine_Object_o *remainingTurnLabel; // x21
  __int64 v14; // x1
  void *buffData; // x0
  UnityEngine_Object_o *codeTexture; // x21
  UnityEngine_Object_o *codeSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v20; // w8
  int v21; // w9
  __int64 v22; // x21
  struct BattleCommandData_o *v23; // x10
  int32_t v24; // w21
  int v25; // t1
  UILabel_o *v26; // x22
  UILabel_o *v27; // x21
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A0B4AE & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, isFirst);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    sub_1B686D4(&StringLiteral_2813/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v11);
    byte_4A0B4AE = 1;
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
        v28.fields.r = r;
        v28.fields.g = g;
        v28.fields.b = b;
        v28.fields.a = a;
        UIWidget__set_color((UIWidget_o *)buffData, v28, 0LL);
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
              v20 = *((_DWORD *)buffData + 6);
              if ( v20 >= 1 )
              {
                v21 = 0;
                while ( 1 )
                {
                  if ( v20 == v21 )
                    sub_1B68938(buffData, v14);
                  v22 = *((_QWORD *)buffData + v21 + 4);
                  if ( !v22 )
                    goto LABEL_56;
                  v23 = this->fields.data;
                  if ( !v23 )
                    goto LABEL_56;
                  if ( *(_QWORD *)(v22 + 88) == v23->fields.userCommandCodeId )
                    break;
                  if ( v20 == ++v21 )
                    goto LABEL_49;
                }
                v25 = *(_DWORD *)(v22 + 112);
                v24 = v22 + 112;
                if ( v25 >= 1 )
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
                  v29.fields.r = 0.5;
                  v29.fields.g = 0.5;
                  v29.fields.b = 0.5;
                  v29.fields.a = 1.0;
                  UIWidget__set_color((UIWidget_o *)buffData, v29, 0LL);
                  buffData = this->fields.chargeTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  buffData = this->fields.remainingTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  v26 = this->fields.chargeTurnLabel;
                  buffData = System_Int32__ToString(v24, 0LL);
                  if ( !v26 )
                    goto LABEL_56;
                  UILabel__set_text(v26, (System_String_o *)buffData, 0LL);
                  v27 = this->fields.remainingTurnLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2813/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                  if ( !v27 )
                    goto LABEL_56;
                  UILabel__set_text(v27, (System_String_o *)buffData, 0LL);
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
                sub_1B68930(buffData, v14);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  ServantStatusBattleListViewItem_o *p_codeTexture; // x19
  UITexture_o *klass; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *Entity; // x0
  void *monitor; // x20
  Il2CppClass *v20; // x21
  int32_t v21; // w20
  UISprite_o *codeSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A0B4B6 & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, userCommandCodeId);
    sub_1B686D4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1B686D4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B686D4(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A0B4B6 = 1;
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
        sub_1B68678(p_codeTexture, (int32_t)Manager__loadCommandCodeTexture, v16, v17);
      }
      return;
    }
LABEL_28:
    sub_1B68930(codeTexture, v11);
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !codeTexture )
    goto LABEL_28;
  codeTexture = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)codeTexture,
                                             (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !codeTexture )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)codeTexture,
             userCommandCodeId,
             (const MethodInfo_30E466C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    v20 = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v20;
    *(_QWORD *)&v23.fields.fakeValue = monitor;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v23, 0LL);
  }
  else
  {
    v21 = -1;
  }
  codeSprite = this->fields.codeSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandCodeView_42789756(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  ServantStatusBattleListViewItem_o *p_codeTexture; // x20
  UITexture_o *klass; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_37702408; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  UISprite_o *codeSprite; // x20

  if ( (byte_4A0B4B7 & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4A0B4B7 = 1;
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
    sub_1B68930(codeTexture, v7);
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
      Manager__loadCommandCodeTexture_37702408 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_37702408(
                                                                           klass,
                                                                           commandCodeId,
                                                                           0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_37702408, 0LL, 0LL) )
      {
        p_codeTexture->klass = (ServantStatusBattleListViewItem_c *)Manager__loadCommandCodeTexture_37702408;
        sub_1B68678(p_codeTexture, (int32_t)Manager__loadCommandCodeTexture_37702408, v12, v13);
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
  if ( (byte_4A0B4D3 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&effectType);
    byte_4A0B4D3 = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( effectobj->max_length <= effectType )
LABEL_14:
    sub_1B68938(this, *(_QWORD *)&effectType);
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
      sub_1B68930(this, *(_QWORD *)&effectType);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *donotPermanentSleep; // x20
  UISprite_o *v6; // x19

  if ( (byte_4A0B4C4 & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&StringLiteral_20112/*"icon_sleep_2"*/, v4);
    byte_4A0B4C4 = 1;
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotPermanentSleep, 0LL, 0LL) )
  {
    v6 = this->fields.donotPermanentSleep;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_20112/*"icon_sleep_2"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *donotsleepSprite; // x20
  UISprite_o *v6; // x19

  if ( (byte_4A0B4C3 & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&StringLiteral_20111/*"icon_sleep"*/, v4);
    byte_4A0B4C3 = 1;
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotsleepSprite, 0LL, 0LL) )
  {
    v6 = this->fields.donotsleepSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_20111/*"icon_sleep"*/, 0LL);
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
    sub_1B68930(chargeTurnLabel, active);
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
    sub_1B68930(assistChargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetLockInfo(
        BattleCommandComponent_o *this,
        bool isLock,
        const MethodInfo *method)
{
  UnityEngine_Object_o *LockInfo; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A0B4BC & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, isLock);
    byte_4A0B4BC = 1;
  }
  LockInfo = (UnityEngine_Object_o *)this->fields.LockInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LockInfo, 0LL, 0LL) )
  {
    v7 = this->fields.LockInfo;
    if ( !v7 )
      sub_1B68930(0LL, v6);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.nobleGaugeEffect, (int32_t)effect, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetPowerUpCardIcon(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        int32_t iconType,
        bool isBright,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *powerUpCardIcon; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UISprite_o *v13; // x23
  UnityEngine_Component_o *v14; // x8
  char v15; // w19
  bool v16; // w1

  if ( (byte_4A0B4BE & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, *(_QWORD *)&powerUpValue);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v9);
    byte_4A0B4BE = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(powerUpCardIcon, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v13 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v13 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0LL);
        if ( gameObject )
        {
          v16 = 0;
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetCommandCardIconImage(
                                                 v13,
                                                 powerUpValue,
                                                 iconType,
                                                 isBright,
                                                 0LL);
      v14 = (UnityEngine_Component_o *)this->fields.powerUpCardIcon;
      if ( v14 )
      {
        v15 = (char)gameObject;
        gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
        if ( gameObject )
        {
          v16 = v15 & 1;
LABEL_15:
          UnityEngine_GameObject__SetActive(gameObject, v16, 0LL);
          return;
        }
      }
    }
    sub_1B68930(gameObject, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetPowerUpCardValue(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *powerUpCardValue; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A0B4BD & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, *(_QWORD *)&powerUpValue);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_865/*"+{0:#,0}"*/, v6);
    byte_4A0B4BD = 1;
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
    v10 = this->fields.powerUpCardValue;
    v15 = powerUpValue;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v11, v12, v13);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_865/*"+{0:#,0}"*/, v14, 0LL);
    if ( !v10 )
LABEL_13:
      sub_1B68930(gameObject, v8);
    UILabel__set_text(v10, (System_String_o *)gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetSpecialCommandCardBuffData(
        BattleCommandComponent_o *this,
        int32_t buffType,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
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
  BattleCommandComponent___c__DisplayClass223_0_o *v23; // x24
  void *Index; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *specialCardBuffList; // x23
  System_Predicate_object__o *v27; // x25
  int32_t v28; // w23
  System_Collections_Generic_List_object__o *v29; // x22
  int32_t v30; // w24
  BattleCommandComponent_CardBuffData_o *v31; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_object__o *v38; // x20
  System_Comparison_T__o *v39; // x21
  Il2CppObject *v40; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  const MethodInfo *v44; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v45; // x8

  if ( (byte_4A0B4C7 & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent_CardBuffData_TypeInfo, *(_QWORD *)&buffType);
    sub_1B686D4(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v17);
    sub_1B686D4(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v18);
    sub_1B686D4(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__223_1__, v19);
    sub_1B686D4(&Method_BattleCommandComponent___c__DisplayClass223_0__SetSpecialCommandCardBuffData_b__0__, v20);
    sub_1B686D4(&BattleCommandComponent___c__DisplayClass223_0_TypeInfo, v21);
    sub_1B686D4(&BattleCommandComponent___c_TypeInfo, v22);
    byte_4A0B4C7 = 1;
  }
  v23 = (BattleCommandComponent___c__DisplayClass223_0_o *)sub_1B68920(BattleCommandComponent___c__DisplayClass223_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass223_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_29;
  v23->fields.buffType = buffType;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  v27 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)v23,
    Method_BattleCommandComponent___c__DisplayClass223_0__SetSpecialCommandCardBuffData_b__0__,
    0LL);
  if ( !specialCardBuffList )
    goto LABEL_29;
  Index = (void *)System_Collections_Generic_List_object___FindIndex(
                    specialCardBuffList,
                    (System_Predicate_T__o *)v27,
                    (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  v28 = (int)Index;
  if ( active )
  {
    v29 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
    if ( ((unsigned int)Index & 0x80000000) != 0 )
    {
      v30 = v23->fields.buffType;
      v31 = (BattleCommandComponent_CardBuffData_o *)sub_1B68920(BattleCommandComponent_CardBuffData_TypeInfo);
      BattleCommandComponent_CardBuffData___ctor(v31, v30, turn, addOrder, 0LL);
      if ( !v29 )
        goto LABEL_29;
      items = v29->fields._items;
      v35 = Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__;
      ++v29->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v29->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)v31,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v31;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v31, v32, v33);
      }
    }
    else
    {
      if ( !v29 )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList,
                (int32_t)Index,
                (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
      if ( !Index )
        goto LABEL_29;
      *((_DWORD *)Index + 5) = turn;
      Index = this->fields.specialCardBuffList;
      if ( !Index )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Index,
                v28,
                (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
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
      v28,
      (const MethodInfo_34BDA4C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
  v38 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  Index = BattleCommandComponent___c_TypeInfo;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Index = BattleCommandComponent___c_TypeInfo;
  }
  v39 = *(System_Comparison_T__o **)(*((_QWORD *)Index + 23) + 24LL);
  if ( !v39 )
  {
    if ( !*((_DWORD *)Index + 56) )
    {
      j_il2cpp_runtime_class_init_0(Index);
      Index = BattleCommandComponent___c_TypeInfo;
    }
    v40 = (Il2CppObject *)**((_QWORD **)Index + 23);
    v39 = (System_Comparison_T__o *)sub_1B68920(System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Comparison_object____ctor(
      v39,
      v40,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__223_1__,
      0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__223_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)v39;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__223_1, (int32_t)v39, v42, v43);
  }
  if ( !v38
    || (System_Collections_Generic_List_object___Sort_55303484(
          v38,
          v39,
          (const MethodInfo_34BDD3C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__),
        (v45 = this->fields.specialCardBuffList) == 0LL) )
  {
LABEL_29:
    sub_1B68930(Index, v25);
  }
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v45->fields._size > 0, v44);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetTreasureDeviceTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x22
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v14; // x20
  System_String_o *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A0B4BB & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, active);
    sub_1B686D4(&LocalizationManager_TypeInfo, v7);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v8);
    sub_1B686D4(&StringLiteral_2853/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, v9);
    byte_4A0B4BB = 1;
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
      v14 = this->fields.restTreasureDeviceChangeTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2853/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, 0LL);
      v20 = turn;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v16, v17, v18);
      gameObject = (UnityEngine_Component_o *)System_String__Format(v15, v19, 0LL);
      if ( !v14 )
LABEL_17:
        sub_1B68930(gameObject, v12);
      UILabel__set_text(v14, (System_String_o *)gameObject, 0LL);
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

  if ( (byte_4A0B4C0 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B4C0 = 1;
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
        sub_1B68930(v6, v7);
      mAtlas = v10->fields.mAtlas;
      *p_defaultTdTypeImageAtlas = mAtlas;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.defaultTdTypeImageAtlas, (int32_t)mAtlas, v8, v9);
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
  __int64 v7; // x1
  DrumRollLabel_o *criticallabel; // x0
  struct DrumRollLabel_o *v9; // x21
  DrumRollLabel_CompleteEventHandler_o *v10; // x22

  if ( (byte_4A0B49D & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleCommandComponent_compCriticallabel__, *(_QWORD *)&count);
    sub_1B686D4(&DrumRollLabel_CompleteEventHandler_TypeInfo, v7);
    byte_4A0B49D = 1;
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
        (v9 = this->fields.criticallabel) == 0LL) )
  {
LABEL_12:
    sub_1B68930(criticallabel, *(_QWORD *)&count);
  }
  if ( v9->fields.nowvalue <= count )
  {
    v10 = (DrumRollLabel_CompleteEventHandler_o *)sub_1B68920(DrumRollLabel_CompleteEventHandler_TypeInfo);
    DrumRollLabel_CompleteEventHandler___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0LL);
  }
  else
  {
    v10 = 0LL;
  }
  DrumRollLabel__changeParam(v9, count, 1, v10, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__SetUnusableShortageStarSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  UISprite_o *v6; // x19

  if ( (byte_4A0B4C2 & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    sub_1B686D4(&StringLiteral_20127/*"icon_unusable_star"*/, v4);
    byte_4A0B4C2 = 1;
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    v6 = this->fields.unusableShortageStarSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_20127/*"icon_unusable_star"*/, 0LL);
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

  if ( (byte_4A0B4B9 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, isUp);
    byte_4A0B4B9 = 1;
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
              sub_1B68938(friendIcon, v7);
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
                sub_1B68930(friendIcon, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleCommandData_o *data; // x0
  BattleBuffData_BuffData_array *CommandCodeBuffArray; // x0
  BattleBuffData_BuffData_array *v14; // x20
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  __int64 v19; // x24
  BattleBuffData_BuffData_o *v20; // x22
  System_String_o *datalist; // x22
  System_String_o *v22; // x22
  Il2CppObject *v23; // x23
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  Il2CppObject *v26; // x22
  Il2CppObject *Component_object; // x23
  const MethodInfo *v28; // x3
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct BattleCommandData_o *v31; // x8
  struct BattleCommandData_o *v32; // x8
  Il2CppObject *key; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A0B4CF & 1) == 0 )
  {
    sub_1B686D4(&BattleEffectUtility_TypeInfo, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_1B686D4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v6);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___, v7);
    sub_1B686D4(&Method_UnityEngine_Object_Instantiate_GameObject____75841248, v8);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v9);
    sub_1B686D4(&ServantAssetLoadManager_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A0B4CF = 1;
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
      v14 = CommandCodeBuffArray;
      if ( *(_QWORD *)&CommandCodeBuffArray->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_EffectMaster___);
        max_length = v14->max_length;
        if ( max_length >= 1 )
        {
          v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v19 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v19 >= max_length )
              sub_1B68938(Instance, v16);
            v20 = v14->m_Items[v19];
            if ( !v20 )
              break;
            if ( v20->fields.cardEffectId >= 1 )
            {
              Instance = (DataManager_o *)BattleBuffData_BuffData__isEnableCommandCardBuff(
                                            v14->m_Items[v19],
                                            this->fields.data,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_13;
              Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v20, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v31 = this->fields.data;
                if ( !v31 )
                  break;
                if ( v20->fields.userCommandCodeId == v31->fields.userCommandCodeId )
                  goto LABEL_13;
              }
              Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v20, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v32 = this->fields.data;
                if ( !v32 )
                  break;
                if ( v20->fields.commandAssistId == v32->fields.commandAssistId
                  && v20->fields.cardIndex == v32->fields.servantCardIdsIndex )
                {
LABEL_13:
                  if ( !v18 )
                    break;
                  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                v18,
                                                v20->fields.cardEffectId,
                                                (const MethodInfo_30E44C0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
                                                  (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      v23 = key;
                      v22 = path;
                      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                      Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                  v22,
                                                                                  (System_String_o *)v23,
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
                        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object__49072196(
                                                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                                                      objectRoot,
                                                      (const MethodInfo_2ECC844 *)Method_UnityEngine_Object_Instantiate_GameObject____75841248);
                        if ( !Instance )
                          break;
                        v26 = (Il2CppObject *)Instance;
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)Instance,
                                             (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
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
                            v28);
                        }
                        Instance = (DataManager_o *)this->fields.cardEffectDict;
                        if ( !Instance )
                          break;
                        System_Collections_Generic_Dictionary_object__object___Add(
                          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                          key,
                          v26,
                          (const MethodInfo_3189B68 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                      }
                    }
                  }
                }
              }
            }
            max_length = v14->max_length;
            if ( (int)++v19 >= max_length )
              return;
          }
LABEL_43:
          sub_1B68930(Instance, v16);
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateCommandCardTypeChange(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *data; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *v16; // x21
  Il2CppObject *v17; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t Index; // w0
  int32_t v22; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UISprite_o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x22
  UILabel_o *v31; // x21
  System_Collections_Generic_List_object__o *v32; // x8
  System_String_o *v33; // x19
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  int v38; // [xsp+8h] [xbp-38h] BYREF
  int32_t type; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A0B4C8 & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, method);
    sub_1B686D4(&int_TypeInfo, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v4);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v5);
    sub_1B686D4(&LocalizationManager_TypeInfo, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v8);
    sub_1B686D4(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__225_0__, v9);
    sub_1B686D4(&BattleCommandComponent___c_TypeInfo, v10);
    sub_1B686D4(&StringLiteral_5025/*"DISPLAY_REMAINING_TURN"*/, v11);
    sub_1B686D4(&StringLiteral_20059/*"icon_commandchange_{0}"*/, v12);
    sub_1B686D4(&StringLiteral_1/*""*/, v13);
    byte_4A0B4C8 = 1;
  }
  data = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    data = BattleCommandComponent___c_TypeInfo;
  }
  v16 = *(System_Predicate_object__o **)(*((_QWORD *)data + 23) + 32LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleCommandComponent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)data + 23);
    v16 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(
      v16,
      v17,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__225_0__,
      0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__225_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)v16;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__225_0, (int32_t)v16, v19, v20);
  }
  if ( !specialCardBuffList )
    goto LABEL_30;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)v16,
            (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v22 = Index;
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
        v25 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &type, v26, v27, v28);
        v30 = System_String__Format((System_String_o *)StringLiteral_20059/*"icon_commandchange_{0}"*/, v29, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( !AtlasManager__SetEventSprite(v25, v30, 0LL) )
        {
          data = this->fields.specialCardBuffIcon;
          if ( !data )
            goto LABEL_30;
          UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v31 = this->fields.specialCardBuffTurn;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        data = LocalizationManager__Get((System_String_o *)StringLiteral_5025/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v32 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
        if ( v32 )
        {
          v33 = (System_String_o *)data;
          data = System_Collections_Generic_List_object___get_Item(
                   v32,
                   v22,
                   (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
          if ( data )
          {
            v38 = *((_DWORD *)data + 5);
            v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v34, v35, v36);
            data = System_String__Format(v33, v37, 0LL);
            if ( v31 )
            {
              UILabel__set_text(v31, (System_String_o *)data, 0LL);
              return;
            }
          }
        }
LABEL_30:
        sub_1B68930(data, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  char *data; // x0
  bool isAddAttack; // w0
  const MethodInfo *v12; // x1
  System_String_o *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  __int64 *v18; // x8
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Transform_o *transform; // x0
  char *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  int v29; // w8
  char *v30; // x21
  unsigned int v31; // w22
  int v32; // [xsp+Ch] [xbp-34h] BYREF
  int v33; // [xsp+18h] [xbp-28h] BYREF
  int v34; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4A0B4AC & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, *(_QWORD *)&targetIndex);
    sub_1B686D4(&int_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_16553/*"a"*/, v6);
    sub_1B686D4(&StringLiteral_18826/*"effect/ef_commandup_{0}{1:00}"*/, v7);
    sub_1B686D4(&StringLiteral_22596/*"q"*/, v8);
    sub_1B686D4(&StringLiteral_16932/*"b"*/, v9);
    byte_4A0B4AC = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  isAddAttack = BattleCommandData__isAddAttack((BattleCommandData_o *)data, 0LL);
  if ( (unsigned int)targetIndex > 2 || isAddAttack || BattleCommandComponent__get_isKindOfDontAction(this, v12) )
    return;
  data = (char *)this->fields.data;
  if ( !data )
LABEL_29:
    sub_1B68930(data, *(_QWORD *)&targetIndex);
  v13 = (System_String_o *)StringLiteral_18826/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick((BattleCommandData_o *)data, 0LL) )
  {
    v34 = targetIndex + 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v14, v15, v16);
    v18 = &StringLiteral_22596/*"q"*/;
LABEL_16:
    v13 = System_String__Format_61433840(v13, (Il2CppObject *)*v18, v17, 0LL);
    goto LABEL_17;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isArts((BattleCommandData_o *)data, 0LL) )
  {
    v33 = targetIndex + 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v19, v20, v21);
    v18 = &StringLiteral_16553/*"a"*/;
    goto LABEL_16;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isBuster((BattleCommandData_o *)data, 0LL) )
  {
    v32 = targetIndex + 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v22, v23, v24);
    v18 = &StringLiteral_16932/*"b"*/;
    goto LABEL_16;
  }
LABEL_17:
  data = (char *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_29;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (char *)BaseMonoBehaviour__createObject_38056628((BaseMonoBehaviour_o *)this, v13, transform, 0LL, 0LL);
  if ( !data )
    goto LABEL_29;
  v26 = data;
  data = (char *)UnityEngine_GameObject__GetComponentsInChildren_object__48862580(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_2E99574 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !data )
    goto LABEL_29;
  v29 = *((_DWORD *)data + 6);
  v30 = data;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( v31 < v29 )
    {
      data = *(char **)&v30[8 * v31 + 32];
      if ( !data )
        goto LABEL_29;
      UnityEngine_ParticleSystem__Stop_69452304((UnityEngine_ParticleSystem_o *)data, 0LL);
      v29 = *((_DWORD *)v30 + 6);
      if ( (int)++v31 >= v29 )
        goto LABEL_25;
    }
LABEL_30:
    sub_1B68938(data, *(_QWORD *)&targetIndex);
  }
LABEL_25:
  data = (char *)this->fields.effectobj;
  if ( !data )
    goto LABEL_29;
  if ( *((_DWORD *)data + 6) <= 3u )
    goto LABEL_30;
  *((_QWORD *)data + 7) = v26;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(data + 56), (int32_t)v26, v27, v28);
}


void __fastcall BattleCommandComponent__UpdateFixedCommandCard(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *Item; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *v14; // x21
  Il2CppObject *v15; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t Index; // w0
  int32_t v20; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UILabel_o *v23; // x21
  System_Collections_Generic_List_object__o *v24; // x8
  System_String_o *v25; // x19
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  int v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A0B4BA & 1) == 0 )
  {
    sub_1B686D4(&int_TypeInfo, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v4);
    sub_1B686D4(&LocalizationManager_TypeInfo, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    sub_1B686D4(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v7);
    sub_1B686D4(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__209_0__, v8);
    sub_1B686D4(&BattleCommandComponent___c_TypeInfo, v9);
    sub_1B686D4(&StringLiteral_5025/*"DISPLAY_REMAINING_TURN"*/, v10);
    sub_1B686D4(&StringLiteral_20019/*"icon_cardfixation"*/, v11);
    byte_4A0B4BA = 1;
  }
  Item = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Item = BattleCommandComponent___c_TypeInfo;
  }
  v14 = *(System_Predicate_object__o **)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v14 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = BattleCommandComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v14 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(v14, v15, Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__209_0__, 0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__209_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)v14;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__209_0, (int32_t)v14, v17, v18);
  }
  if ( !specialCardBuffList )
    goto LABEL_26;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)v14,
            (const MethodInfo_34BCAD0 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v20 = Index;
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
            UISprite__set_spriteName((UISprite_o *)Item, (System_String_o *)StringLiteral_20019/*"icon_cardfixation"*/, 0LL);
            v23 = this->fields.specialCardBuffTurn;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Item = LocalizationManager__Get((System_String_o *)StringLiteral_5025/*"DISPLAY_REMAINING_TURN"*/, 0LL);
            v24 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
            if ( v24 )
            {
              v25 = (System_String_o *)Item;
              Item = System_Collections_Generic_List_object___get_Item(
                       v24,
                       v20,
                       (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
              if ( Item )
              {
                v30 = *((_DWORD *)Item + 5);
                v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v26, v27, v28);
                Item = System_String__Format(v25, v29, 0LL);
                if ( v23 )
                {
                  UILabel__set_text(v23, (System_String_o *)Item, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_26:
        sub_1B68930(Item, method);
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateIconChangeTypeByTransform(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *iconChangeTypeByTransform; // x20
  __int64 v5; // x1
  BattleCommandData_o *data; // x0
  int32_t v7; // w0
  BattleCommandComponent_o *v8; // x20
  const MethodInfo *v9; // x3
  UISprite_o *v10; // x19

  if ( (byte_4A0B4CA & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&StringLiteral_20018/*"icon_cardchange_"*/, v3);
    byte_4A0B4CA = 1;
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconChangeTypeByTransform, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_11;
    v7 = BattleCommandData__GetChangeTypeByTransform(data, 0LL);
    v8 = (BattleCommandComponent_o *)BattleCommand__GetCardTypeChangeSpriteNameSuffix(v7, 0LL, 0LL);
    BattleCommandComponent__SetActiveComponent(
      v8,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      v8 != 0LL,
      v9);
    if ( v8 )
    {
      v10 = this->fields.iconChangeTypeByTransform;
      data = (BattleCommandData_o *)System_String__Concat_61419468(
                                      (System_String_o *)StringLiteral_20018/*"icon_cardchange_"*/,
                                      (System_String_o *)v8,
                                      0LL);
      if ( v10 )
      {
        UISprite__set_spriteName(v10, (System_String_o *)data, 0LL);
        return;
      }
LABEL_11:
      sub_1B68930(data, v5);
    }
  }
}


void __fastcall BattleCommandComponent__UpdateSealStatus(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *svtData; // x20
  BattleCommandData_o *data; // x21
  UnityEngine_Object_o *perf; // x22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  BattleData_o *v9; // x22
  struct BattlePerformance_o *v10; // x8
  BattleCommandSealStatus_o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0B4AB & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandSealStatus_TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v3);
    byte_4A0B4AB = 1;
  }
  data = this->fields.data;
  svtData = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Implicit(perf, 0LL);
  v9 = 0LL;
  if ( v7 )
  {
    v10 = this->fields.perf;
    if ( !v10 )
      sub_1B68930(v7, v8);
    v9 = v10->fields.data;
  }
  v11 = (BattleCommandSealStatus_o *)sub_1B68920(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_42933340(v11, data, svtData, v9, 0LL);
  this->fields.sealStatus = v11;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.sealStatus, (int32_t)v11, v12, v13);
}


void __fastcall BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(
        BattleCommandComponent_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x8
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  System_Collections_IEnumerator_o *updated; // x0
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v13; // x8
  float v14; // s0
  float cardBuffAlphaFor; // s1
  float v16; // s2
  float v17; // s0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v18; // x9
  int32_t v19; // w8
  UnityEngine_Object_o *v20; // x20

  if ( (byte_4A0B4CB & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0B4CB = 1;
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
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v7);
        UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
        BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(this, v12);
        this->fields.isChangedBuffIcon = 1;
      }
      v13 = this->fields.specialCardBuffList;
      if ( !v13 )
        goto LABEL_34;
      if ( v13->fields._size != 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( !gameObject )
          goto LABEL_34;
        v14 = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
                gameObject,
                gameObject->klass[1]._1.element_class);
        cardBuffAlphaFor = this->fields.cardBuffAlphaFor;
        v16 = this->fields.cardBuffAlphaAnimTime + deltaTime;
        v17 = v14 + (float)((float)(cardBuffAlphaFor - v14) * 0.5);
        this->fields.cardBuffAlphaAnimTime = v16;
        if ( v16 >= 3.0 )
        {
          cardBuffAlphaFor = 0.0;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 0LL;
        }
        if ( v17 <= 0.01 && cardBuffAlphaFor <= 0.0 )
        {
          v18 = this->fields.specialCardBuffList;
          v19 = this->fields.cardBuffListIndex + 1;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
          this->fields.cardBuffListIndex = v19;
          if ( !v18 )
            goto LABEL_34;
          if ( v18->fields._size <= v19 )
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
        sub_1B68930(gameObject, v7);
      }
    }
    else
    {
LABEL_32:
      BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v8);
    }
  }
  else
  {
    v20 = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BuffMaster_o *Master_object; // x0
  __int64 v10; // x1
  UISprite_o *nowTreasureDeviceTypeImage; // x20
  System_String_o *v12; // x21
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  UISpriteData_o *Sprite; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A0B4C1 & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, *(_QWORD *)&buffId);
    sub_1B686D4(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_1B686D4(&DataManager_TypeInfo, v6);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_20023/*"icon_cardtypechange"*/, v8);
    byte_4A0B4C1 = 1;
  }
  name = 0LL;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_20;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_22;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_object,
          &name,
          buffId,
          (System_String_o *)StringLiteral_20023/*"icon_cardtypechange"*/,
          0LL) )
    goto LABEL_20;
  nowTreasureDeviceTypeImage = this->fields.nowTreasureDeviceTypeImage;
  v12 = name;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventSprite(nowTreasureDeviceTypeImage, v12, 0LL) )
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
    sub_1B68930(Master_object, v10);
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

  if ( (byte_4A0B4D5 & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent__WaitForErrorViewFinished_d__242_TypeInfo, busyVoiceSe);
    byte_4A0B4D5 = 1;
  }
  v7 = sub_1B68920(BattleCommandComponent__WaitForErrorViewFinished_d__242_TypeInfo);
  BattleCommandComponent__WaitForErrorViewFinished_d__242___ctor(
    (BattleCommandComponent__WaitForErrorViewFinished_d__242_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1B68930(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(float *)(v7 + 32) = waitSeconds;
  *(_QWORD *)(v7 + 48) = busyVoiceSe;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)busyVoiceSe, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_0(
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
    sub_1B68930(this, buff);
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_1(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B68930(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, 0LL)
      && !BattleBuffData_BuffData__isEnableCommandCardBuff(buff, this->fields.data, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_2(
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
    sub_1B68930(this, buff);
  }
  return 0;
}


void __fastcall BattleCommandComponent__addCriticalBuff(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  System_Action_o *v16; // x20
  BattleCommandComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Collections_IEnumerator_o *v19; // x0
  System_String_o *CommonSeNameLocal; // x20
  System_String_o *CueSheet; // x21
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v23; // x0
  const MethodInfo *v24; // x1
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_4A0B49E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, obj);
    sub_1B686D4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__, v6);
    sub_1B686D4(&Method_BattleCommandComponent___c__DisplayClass158_0__addCriticalBuff_b__0__, v7);
    sub_1B686D4(&BattleCommandComponent___c__DisplayClass158_0_TypeInfo, v8);
    byte_4A0B49E = 1;
  }
  v9 = sub_1B68920(BattleCommandComponent___c__DisplayClass158_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass158_0___ctor((BattleCommandComponent___c__DisplayClass158_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = obj;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)obj, v14, v15);
  v16 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_BattleCommandComponent___c__DisplayClass158_0__addCriticalBuff_b__0__,
    0LL);
  v19 = BattleCommandComponent__delayFrame(v17, v16, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, 7, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_1B68930(Instance, v11);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime((SeManager_o *)Instance, CueSheet, CommonSeNameLocal, 0LL);
  v25 = BattleCommandComponent__PlayStarSe(v23, DefaultPreDelayTime / 1000.0, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v25, 0LL);
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
    sub_1B68930(Object, v7);
  if ( effectobj->max_length <= 4 )
    sub_1B68938(Object, v7);
  effectobj->m_Items[4] = Object;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[4], (int32_t)Object, v8, v9);
}


void __fastcall BattleCommandComponent__addObject(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t type,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v10; // x22
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_Object_o *v12; // x22
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x21
  BattleCommandComponent_o *v15; // x22
  System_String_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct UnityEngine_GameObject_array *v19; // x8
  Il2CppClass **v20; // x0
  struct UnityEngine_GameObject_array *v21; // x8
  System_Enum_o v22; // [xsp+8h] [xbp-58h] BYREF
  int32_t v23; // [xsp+18h] [xbp-48h]

  v6 = this;
  if ( (byte_4A0B48E & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, name);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    this = (BattleCommandComponent_o *)sub_1B686D4(&StringLiteral_18802/*"effect/"*/, v8);
    byte_4A0B48E = 1;
  }
  addObjectList = v6->fields.addObjectList;
  if ( !addObjectList )
    goto LABEL_23;
  if ( addObjectList->max_length <= type )
    goto LABEL_24;
  v10 = (UnityEngine_Object_o *)addObjectList->m_Items[type];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v6->fields.addObjectList;
    if ( !v11 )
      goto LABEL_23;
    if ( v11->max_length <= type )
      goto LABEL_24;
    v12 = (UnityEngine_Object_o *)v11->m_Items[type];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(v12, 0LL);
  }
  v13 = System_String__Concat_61419468((System_String_o *)StringLiteral_18802/*"effect/"*/, name, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_38056628(
                                       (BaseMonoBehaviour_o *)v6,
                                       v13,
                                       v6->fields.objectRoot,
                                       0LL,
                                       0LL);
  if ( !this )
    goto LABEL_23;
  v14 = (UnityEngine_Object_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v15 = this;
  if ( !byte_4A03907 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Quaternion_TypeInfo, name);
    byte_4A03907 = 1;
  }
  if ( !v15
    || (UnityEngine_Transform__set_localRotation(
          (UnityEngine_Transform_o *)v15,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL),
        v22.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo,
        v22.monitor = (void *)-1LL,
        v23 = type,
        v16 = System_Enum__ToString(&v22, 0LL),
        UnityEngine_Object__set_name(v14, v16, 0LL),
        (v19 = v6->fields.addObjectList) == 0LL) )
  {
LABEL_23:
    sub_1B68930(this, name);
  }
  if ( v19->max_length <= type )
    goto LABEL_24;
  v20 = &v19->obj.klass + type;
  v20[4] = (Il2CppClass *)v14;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v17, v18);
  v21 = v6->fields.addObjectList;
  if ( !v21 )
    goto LABEL_23;
  if ( v21->max_length <= type )
LABEL_24:
    sub_1B68938(this, name);
  this = (BattleCommandComponent_o *)v21->m_Items[type];
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
  UnityEngine_GameObject_o *Object_38056628; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct UnityEngine_GameObject_array *effectobj; // x8
  int32_t max_length; // w9
  Il2CppClass **v17; // x0

  if ( (byte_4A0B4A2 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_18802/*"effect/"*/, name);
    byte_4A0B4A2 = 1;
  }
  v7 = System_String__Concat_61419468((System_String_o *)StringLiteral_18802/*"effect/"*/, name, 0LL);
  Object_38056628 = BaseMonoBehaviour__createObject_38056628(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0LL,
                      0LL);
  if ( !Object_38056628 )
    goto LABEL_16;
  v10 = Object_38056628;
  Object_38056628 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object_38056628, 0LL);
  v11 = (UnityEngine_Transform_o *)Object_38056628;
  if ( !byte_4A03901 )
  {
    Object_38056628 = (UnityEngine_GameObject_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4A03901 = 1;
  }
  if ( !v11 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Object_38056628 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)Object_38056628;
  if ( !byte_4A03906 )
  {
    Object_38056628 = (UnityEngine_GameObject_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4A03906 = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_16:
    sub_1B68930(Object_38056628, v9);
  }
  max_length = effectobj->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1B68938(Object_38056628, v9);
    v17 = &effectobj->obj.klass + index;
    v17[4] = (Il2CppClass *)v10;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v13, v14);
  }
}


bool __fastcall BattleCommandComponent__checkCriticalPointValid(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1B68930(0LL, method);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.countUpFinishEffect, (int32_t)SpawnerObj, v20, v21);
  transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect) == 0LL) )
  {
LABEL_14:
    sub_1B68930(transform, v4);
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

  if ( (byte_4A0B4CE & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_TypeInfo, method);
    byte_4A0B4CE = 1;
  }
  v3 = sub_1B68920(BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_TypeInfo);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231___ctor(
    (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B68930(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4A0B4A0 & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent__delayFrame_d__160_TypeInfo, action);
    byte_4A0B4A0 = 1;
  }
  v4 = sub_1B68920(BattleCommandComponent__delayFrame_d__160_TypeInfo);
  BattleCommandComponent__delayFrame_d__160___ctor((BattleCommandComponent__delayFrame_d__160_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B68930(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)action, v7, v8);
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
  if ( (byte_4A0B4B4 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B4B4 = 1;
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
        UnityEngine_Object__Destroy_69171816(v6, 0LL);
        return;
      }
LABEL_15:
      sub_1B68938(this, method);
    }
LABEL_14:
    sub_1B68930(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4A0B4A4 & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent__fadeoutEffect_d__180_TypeInfo, isTresure);
    byte_4A0B4A4 = 1;
  }
  v5 = sub_1B68920(BattleCommandComponent__fadeoutEffect_d__180_TypeInfo);
  BattleCommandComponent__fadeoutEffect_d__180___ctor((BattleCommandComponent__fadeoutEffect_d__180_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B68930(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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
    sub_1B68930(this, index);
  if ( sameflg->max_length <= index )
    sub_1B68938(this, *(_QWORD *)&index);
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
    sub_1B68930(this, index);
  if ( combo->fields.flash )
    BattleCommandComponent__flashTypeCard(this, *(const MethodInfo **)&index);
}


void __fastcall BattleCommandComponent__flashServant(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *facetex; // x20
  __int64 v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Transform_o *parent; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct UnityEngine_GameObject_array *v23; // x8
  UIWidget_o *v24; // x20
  UnityEngine_Shader_o *v25; // x21
  UnityEngine_Material_o *v26; // x22
  struct UnityEngine_GameObject_array *v27; // x8
  UnityEngine_GameObject_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_Object_array *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Hashtable_o *v55; // x0
  struct UnityEngine_GameObject_array *v56; // x8
  __int64 v57; // x0
  __int64 v58; // [xsp+0h] [xbp-40h] BYREF
  int v59; // [xsp+8h] [xbp-38h]
  int v60; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4A0B4B1 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method);
    sub_1B686D4(&UnityEngine_Material_TypeInfo, v3);
    sub_1B686D4(&object___TypeInfo, v4);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    sub_1B686D4(&float_TypeInfo, v6);
    sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_23846/*"time"*/, v8);
    sub_1B686D4(&StringLiteral_22200/*"oncompletetarget"*/, v9);
    sub_1B686D4(&StringLiteral_18936/*"endFashSvt"*/, v10);
    sub_1B686D4(&StringLiteral_22198/*"oncomplete"*/, v11);
    sub_1B686D4(&StringLiteral_16068/*"_AddColor"*/, v12);
    sub_1B686D4(&StringLiteral_22934/*"scale"*/, v13);
    sub_1B686D4(&iTween_TypeInfo, v14);
    byte_4A0B4B1 = 1;
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
    v19 = (UnityEngine_GameObject_o *)gameObject;
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
                                              v19,
                                              parent,
                                              0LL,
                                              0LL);
    if ( !effectobj )
      goto LABEL_62;
    if ( effectobj->max_length <= 1 )
      goto LABEL_63;
    effectobj->m_Items[1] = (UnityEngine_GameObject_o *)gameObject;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[1], (int32_t)gameObject, v21, v22);
    v23 = this->fields.effectobj;
    if ( !v23 )
      goto LABEL_62;
    if ( v23->max_length <= 1 )
      goto LABEL_63;
    gameObject = (UnityEngine_Component_o *)v23->m_Items[1];
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_2E98BB4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    if ( !gameObject )
      goto LABEL_62;
    v24 = (UIWidget_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_62;
    v61.fields.x = 0.0;
    v61.fields.y = 0.0;
    v61.fields.z = -5.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v61, 0LL);
    this->fields.newMatriarl = 1;
    v25 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v24->klass->vtable._28_get_shader.method)(
                                    v24,
                                    v24->klass->vtable._29_set_shader.methodPtr);
    v26 = (UnityEngine_Material_o *)sub_1B68920(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v26, v25, 0LL);
    ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v24->klass->vtable._25_set_material.method)(
      v24,
      v26,
      v24->klass->vtable._26_get_mainTexture.methodPtr);
    gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v24->klass->vtable._24_get_material.method)(
                                              v24,
                                              v24->klass->vtable._25_set_material.methodPtr);
    if ( !gameObject )
      goto LABEL_62;
    v62.fields.r = 1.0;
    v62.fields.g = 1.0;
    v62.fields.b = 1.0;
    v62.fields.a = 0.0;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)gameObject,
      (System_String_o *)StringLiteral_16068/*"_AddColor"*/,
      v62,
      0LL);
    UIWidget__set_depth(v24, this->fields.basedepth + 400, 0LL);
    v27 = this->fields.effectobj;
    if ( !v27 )
      goto LABEL_62;
    if ( v27->max_length <= 1 )
      goto LABEL_63;
    v28 = v27->m_Items[1];
    gameObject = (UnityEngine_Component_o *)sub_1B6877C(object___TypeInfo, 8LL);
    if ( !gameObject )
      goto LABEL_62;
    v31 = (System_Object_array *)gameObject;
    gameObject = (UnityEngine_Component_o *)StringLiteral_22934/*"scale"*/;
    if ( StringLiteral_22934/*"scale"*/ )
    {
      gameObject = (UnityEngine_Component_o *)sub_1B68810(StringLiteral_22934/*"scale"*/, v31->obj.klass->_1.element_class);
      if ( !gameObject )
        goto LABEL_64;
      v16 = StringLiteral_22934/*"scale"*/;
    }
    else
    {
      v16 = 0LL;
    }
    if ( !v31->max_length )
      goto LABEL_63;
    v31->m_Items[0] = (Il2CppObject *)v16;
    sub_1B68678((ServantStatusBattleListViewItem_o *)v31->m_Items, v16, v29, v30);
    v58 = vdup_n_s32(0x3FE66666u).n64_i64[0];
    v59 = 1065353216;
    gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v58, v32, v33, v34);
    v37 = (Il2CppObject *)gameObject;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)sub_1B68810(gameObject, v31->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v31->max_length <= 1 )
        goto LABEL_63;
      v31->m_Items[1] = v37;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v31->m_Items[1], (int32_t)v37, v35, v36);
      gameObject = (UnityEngine_Component_o *)StringLiteral_23846/*"time"*/;
      if ( StringLiteral_23846/*"time"*/ )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B68810(StringLiteral_23846/*"time"*/, v31->obj.klass->_1.element_class);
        if ( !gameObject )
          goto LABEL_64;
        v16 = StringLiteral_23846/*"time"*/;
      }
      else
      {
        v16 = 0LL;
      }
      if ( v31->max_length <= 2 )
        goto LABEL_63;
      v31->m_Items[2] = (Il2CppObject *)v16;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v31->m_Items[2], v16, v38, v39);
      v60 = 1065353216;
      gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(float_TypeInfo, &v60, v40, v41, v42);
      v45 = (Il2CppObject *)gameObject;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)sub_1B68810(gameObject, v31->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v31->max_length <= 3 )
          goto LABEL_63;
        v31->m_Items[3] = v45;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v31->m_Items[3], (int32_t)v45, v43, v44);
        gameObject = (UnityEngine_Component_o *)StringLiteral_22200/*"oncompletetarget"*/;
        if ( StringLiteral_22200/*"oncompletetarget"*/ )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B68810(StringLiteral_22200/*"oncompletetarget"*/, v31->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_64;
          v16 = StringLiteral_22200/*"oncompletetarget"*/;
        }
        else
        {
          v16 = 0LL;
        }
        if ( v31->max_length <= 4 )
          goto LABEL_63;
        v31->m_Items[4] = (Il2CppObject *)v16;
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v31->m_Items[4], v16, v46, v47);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
        v50 = (Il2CppObject *)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)sub_1B68810(gameObject, v31->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v31->max_length <= 5 )
            goto LABEL_63;
          v31->m_Items[5] = v50;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v31->m_Items[5], (int32_t)v50, v48, v49);
          gameObject = (UnityEngine_Component_o *)StringLiteral_22198/*"oncomplete"*/;
          if ( StringLiteral_22198/*"oncomplete"*/ )
          {
            gameObject = (UnityEngine_Component_o *)sub_1B68810(StringLiteral_22198/*"oncomplete"*/, v31->obj.klass->_1.element_class);
            if ( !gameObject )
              goto LABEL_64;
            v16 = StringLiteral_22198/*"oncomplete"*/;
          }
          else
          {
            v16 = 0LL;
          }
          if ( v31->max_length <= 6 )
            goto LABEL_63;
          v31->m_Items[6] = (Il2CppObject *)v16;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&v31->m_Items[6], v16, v51, v52);
          gameObject = (UnityEngine_Component_o *)StringLiteral_18936/*"endFashSvt"*/;
          if ( !StringLiteral_18936/*"endFashSvt"*/ )
          {
            v16 = 0LL;
            goto LABEL_55;
          }
          gameObject = (UnityEngine_Component_o *)sub_1B68810(StringLiteral_18936/*"endFashSvt"*/, v31->obj.klass->_1.element_class);
          if ( gameObject )
          {
            v16 = StringLiteral_18936/*"endFashSvt"*/;
LABEL_55:
            if ( v31->max_length <= 7 )
              goto LABEL_63;
            v31->m_Items[7] = (Il2CppObject *)v16;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&v31->m_Items[7], v16, v53, v54);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v55 = iTween__Hash(v31, 0LL);
            iTween__ScaleTo_59963328(v28, v55, 0LL);
            v56 = this->fields.effectobj;
            if ( v56 )
            {
              if ( v56->max_length > 1 )
              {
                v63.fields.r = 0.0;
                v63.fields.g = 0.0;
                v63.fields.b = 0.0;
                v63.fields.a = 0.0;
                TweenColor__Begin(v56->m_Items[1], 1.0, v63, 0LL);
                return;
              }
LABEL_63:
              sub_1B68938(gameObject, v16);
            }
LABEL_62:
            sub_1B68930(gameObject, v16);
          }
        }
      }
    }
LABEL_64:
    v57 = sub_1B68954(gameObject);
    sub_1B687FC(v57, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall BattleCommandComponent__flashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v14; // x20
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Object_o *v16; // x20
  struct UnityEngine_GameObject_array *v17; // x20
  BattleCommandComponent_o *v18; // x21
  BattleCommandComponent_o *v19; // x22
  UnityEngine_Transform_o *transform; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct UnityEngine_GameObject_array *v23; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  struct UnityEngine_GameObject_array *v25; // x8
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_GameObject_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  BattleCommandComponent_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  int32_t v34; // w2
  int32_t v35; // w3
  BattleCommandComponent_o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int32_t v42; // w2
  int32_t v43; // w3
  BattleCommandComponent_o *v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  BattleCommandComponent_o *v49; // x19
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Hashtable_o *v54; // x0
  __int64 v55; // x0
  int v56; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v57; // [xsp+10h] [xbp-40h] BYREF
  int v58; // [xsp+18h] [xbp-38h]
  UnityEngine_Color_o v59; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v2 = this;
  if ( (byte_4A0B4B3 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, method);
    sub_1B686D4(&object___TypeInfo, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&float_TypeInfo, v5);
    sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_18937/*"endFashTypeCard"*/, v7);
    sub_1B686D4(&StringLiteral_23846/*"time"*/, v8);
    sub_1B686D4(&StringLiteral_22200/*"oncompletetarget"*/, v9);
    sub_1B686D4(&StringLiteral_22198/*"oncomplete"*/, v10);
    sub_1B686D4(&StringLiteral_22934/*"scale"*/, v11);
    this = (BattleCommandComponent_o *)sub_1B686D4(&iTween_TypeInfo, v12);
    byte_4A0B4B3 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_71;
  if ( !effectobj->max_length )
    goto LABEL_72;
  v14 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v2->fields.effectobj;
    if ( !v15 )
      goto LABEL_71;
    if ( !v15->max_length )
      goto LABEL_72;
    v16 = (UnityEngine_Object_o *)v15->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69171816(v16, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.icon;
  if ( !this )
    goto LABEL_71;
  v17 = v2->fields.effectobj;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v2->fields.nomalwidget )
    goto LABEL_71;
  v18 = this;
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
  v19 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.icon,
                                       0LL);
  if ( !this )
    goto LABEL_71;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)v2,
                                       (UnityEngine_GameObject_o *)v18,
                                       (UnityEngine_Transform_o *)v19,
                                       transform,
                                       0LL);
  if ( !v17 )
    goto LABEL_71;
  if ( !v17->max_length )
    goto LABEL_72;
  v17->m_Items[0] = (UnityEngine_GameObject_o *)this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v17->m_Items, (int32_t)this, v21, v22);
  v23 = v2->fields.effectobj;
  if ( !v23 )
    goto LABEL_71;
  if ( !v23->max_length )
    goto LABEL_72;
  this = (BattleCommandComponent_o *)v23->m_Items[0];
  if ( !this )
    goto LABEL_71;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2E98BB4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
    v25 = v2->fields.effectobj;
    if ( !v25 )
      goto LABEL_71;
    if ( !v25->max_length )
      goto LABEL_72;
    v59.fields.r = 0.0;
    v59.fields.g = 0.0;
    v59.fields.b = 0.0;
    v59.fields.a = 0.0;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v25->m_Items[0], 1.0, v59, 0LL);
  }
  v26 = v2->fields.effectobj;
  if ( !v26 )
    goto LABEL_71;
  if ( !v26->max_length )
    goto LABEL_72;
  v27 = v26->m_Items[0];
  this = (BattleCommandComponent_o *)sub_1B6877C(object___TypeInfo, 8LL);
  if ( !this )
LABEL_71:
    sub_1B68930(this, method);
  v30 = this;
  this = (BattleCommandComponent_o *)StringLiteral_22934/*"scale"*/;
  if ( StringLiteral_22934/*"scale"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B68810(StringLiteral_22934/*"scale"*/, v30->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_22934/*"scale"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v30->fields.m_CancellationTokenSource) )
    goto LABEL_72;
  v30->fields.objectRoot = (struct UnityEngine_Transform_o *)method;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v30->fields.objectRoot, (int32_t)method, v28, v29);
  v57 = 0x4000000040000000LL;
  v58 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v57, v31, v32, v33);
  v36 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1B68810(this, v30->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_72;
  v30->fields.bg = (struct UISprite_o *)v36;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v30->fields.bg, (int32_t)v36, v34, v35);
  this = (BattleCommandComponent_o *)StringLiteral_23846/*"time"*/;
  if ( StringLiteral_23846/*"time"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B68810(StringLiteral_23846/*"time"*/, v30->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_23846/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_72;
  v30->fields.icon = (struct UISprite_o *)method;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v30->fields.icon, (int32_t)method, v37, v38);
  v56 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(float_TypeInfo, &v56, v39, v40, v41);
  v44 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1B68810(this, v30->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 3 )
    goto LABEL_72;
  v30->fields.text = (struct UISprite_o *)v44;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v30->fields.text, (int32_t)v44, v42, v43);
  this = (BattleCommandComponent_o *)StringLiteral_22200/*"oncompletetarget"*/;
  if ( StringLiteral_22200/*"oncompletetarget"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B68810(StringLiteral_22200/*"oncompletetarget"*/, v30->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_22200/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_72;
  v30->fields.facetex = (struct UITexture_o *)method;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v30->fields.facetex, (int32_t)method, v45, v46);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  v49 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1B68810(this, v30->klass->_1.element_class);
    if ( !this )
    {
LABEL_73:
      v55 = sub_1B68954(this);
      sub_1B687FC(v55, 0LL);
    }
  }
  if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_72;
  v30->fields.nobletex = (struct UITexture_o *)v49;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v30->fields.nobletex, (int32_t)v49, v47, v48);
  this = (BattleCommandComponent_o *)StringLiteral_22198/*"oncomplete"*/;
  if ( StringLiteral_22198/*"oncomplete"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B68810(StringLiteral_22198/*"oncomplete"*/, v30->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_22198/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_72;
  v30->fields.friendIcon = (struct UISprite_o *)method;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v30->fields.friendIcon, (int32_t)method, v50, v51);
  this = (BattleCommandComponent_o *)StringLiteral_18937/*"endFashTypeCard"*/;
  if ( StringLiteral_18937/*"endFashTypeCard"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1B68810(StringLiteral_18937/*"endFashTypeCard"*/, v30->klass->_1.element_class);
    if ( this )
    {
      method = (const MethodInfo *)StringLiteral_18937/*"endFashTypeCard"*/;
      goto LABEL_67;
    }
    goto LABEL_73;
  }
  method = 0LL;
LABEL_67:
  if ( LODWORD(v30->fields.m_CancellationTokenSource) <= 7 )
LABEL_72:
    sub_1B68938(this, method);
  v30->fields.sealedSprite = (struct UISprite_o *)method;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v30->fields.sealedSprite, (int32_t)method, v52, v53);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v54 = iTween__Hash((System_Object_array *)v30, 0LL);
  iTween__ScaleTo_59963328(v27, v54, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleCommandComponent__getCardTypeSealSpriteName(
        BattleCommandComponent_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattleCommandComponent_c *v5; // x0
  System_String_o **p_SEALED_CARDTYPE_ICON_QUICK; // x8
  BattleCommandComponent_c *v7; // x0
  BattleCommandComponent_c *v8; // x0

  if ( (byte_4A0B491 & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
    sub_1B686D4(&StringLiteral_1/*""*/, v4);
    byte_4A0B491 = 1;
  }
  switch ( commandType )
  {
    case 3:
      v7 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v7 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v7->static_fields->SEALED_CARDTYPE_ICON_QUICK;
      break;
    case 2:
      v8 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v8 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v8->static_fields->SEALED_CARDTYPE_ICON_BUSTER;
      break;
    case 1:
      v5 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v5 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v5->static_fields->SEALED_CARDTYPE_ICON_ARTS;
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
    sub_1B68930(0LL, method);
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

  if ( (byte_4A0B488 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B488 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.powerUpCardIcon;
  if ( !v6 )
    sub_1B68930(v4, v5);
  return v6->fields.mDepth;
}


int32_t __fastcall BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B68930(this, method);
  return data->fields.svtId;
}


int32_t __fastcall BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B68930(this, method);
  return data->fields.svtlimit;
}


int32_t __fastcall BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B68930(this, method);
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *__fastcall BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *result; // x0
  ServantStatusBattleListViewItem_o *p_sealStatus; // x19
  BattleCommandSealStatus_o *sealStatus; // t1
  BattleCommandSealStatus_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A0B482 & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandSealStatus_TypeInfo, method);
    byte_4A0B482 = 1;
  }
  sealStatus = this->fields.sealStatus;
  p_sealStatus = (ServantStatusBattleListViewItem_o *)&this->fields.sealStatus;
  result = sealStatus;
  if ( !sealStatus )
  {
    v6 = (BattleCommandSealStatus_o *)sub_1B68920(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v6, 0LL);
    p_sealStatus->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B68678(p_sealStatus, (int32_t)v6, v7, v8);
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
    sub_1B68930(0LL, v3);
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, 0LL);
}


bool __fastcall BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1B68930(0LL, v3);
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

  if ( (byte_4A0B4A5 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B4A5 = 1;
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
    sub_1B68930(nomalwidget, method);
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
        sub_1B68938(nomalwidget, method);
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
    sub_1B68930(this, method);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


void __fastcall BattleCommandComponent__playNpAttackEffect(
        BattleCommandComponent_o *this,
        float ftime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Object_array *v16; // x21
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x22
  System_Collections_Hashtable_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  System_Object_array *v53; // x21
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x22
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x22
  System_Collections_Hashtable_o *v68; // x0
  const MethodInfo *v69; // x2
  System_Collections_IEnumerator_o *v70; // x0
  __int64 v71; // x0
  float v72; // [xsp+0h] [xbp-70h] BYREF
  int v73; // [xsp+4h] [xbp-6Ch] BYREF
  float v74; // [xsp+8h] [xbp-68h] BYREF
  int v75; // [xsp+Ch] [xbp-64h] BYREF
  int v76; // [xsp+18h] [xbp-58h] BYREF
  int v77; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4A0B4A3 & 1) == 0 )
  {
    sub_1B686D4(&object___TypeInfo, method);
    sub_1B686D4(&float_TypeInfo, v5);
    sub_1B686D4(&StringLiteral_24660/*"x"*/, v6);
    sub_1B686D4(&StringLiteral_23846/*"time"*/, v7);
    sub_1B686D4(&StringLiteral_24764/*"y"*/, v8);
    sub_1B686D4(&StringLiteral_24812/*"z"*/, v9);
    sub_1B686D4(&iTween_TypeInfo, v10);
    byte_4A0B4A3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = sub_1B6877C(object___TypeInfo, 8LL);
  if ( !v12 )
    goto LABEL_58;
  v16 = (System_Object_array *)v12;
  v17 = (Il2CppObject *)StringLiteral_24660/*"x"*/;
  if ( StringLiteral_24660/*"x"*/ )
  {
    v17 = (Il2CppObject *)sub_1B68810(StringLiteral_24660/*"x"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
    v18 = (Il2CppObject *)StringLiteral_24660/*"x"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
    goto LABEL_56;
  v16->m_Items[0] = v18;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v16->m_Items, (int32_t)v18, v14, v15);
  v77 = 0x40000000;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v77, v19, v20, v21);
  v24 = v17;
  if ( v17 )
  {
    v17 = (Il2CppObject *)sub_1B68810(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_56;
  v16->m_Items[1] = v24;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v16->m_Items[1], (int32_t)v24, v22, v23);
  v17 = (Il2CppObject *)StringLiteral_24764/*"y"*/;
  if ( StringLiteral_24764/*"y"*/ )
  {
    v17 = (Il2CppObject *)sub_1B68810(StringLiteral_24764/*"y"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
    v18 = (Il2CppObject *)StringLiteral_24764/*"y"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 2 )
    goto LABEL_56;
  v16->m_Items[2] = v18;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v16->m_Items[2], (int32_t)v18, v25, v26);
  v76 = 0x40000000;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v76, v27, v28, v29);
  v32 = v17;
  if ( v17 )
  {
    v17 = (Il2CppObject *)sub_1B68810(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
  }
  if ( v16->max_length <= 3 )
    goto LABEL_56;
  v16->m_Items[3] = v32;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v16->m_Items[3], (int32_t)v32, v30, v31);
  v17 = (Il2CppObject *)StringLiteral_24812/*"z"*/;
  if ( StringLiteral_24812/*"z"*/ )
  {
    v17 = (Il2CppObject *)sub_1B68810(StringLiteral_24812/*"z"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
    v18 = (Il2CppObject *)StringLiteral_24812/*"z"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 4 )
    goto LABEL_56;
  v16->m_Items[4] = v18;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v16->m_Items[4], (int32_t)v18, v33, v34);
  v75 = 1065353216;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v75, v35, v36, v37);
  v40 = v17;
  if ( v17 )
  {
    v17 = (Il2CppObject *)sub_1B68810(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
  }
  if ( v16->max_length <= 5 )
    goto LABEL_56;
  v16->m_Items[5] = v40;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v16->m_Items[5], (int32_t)v40, v38, v39);
  v17 = (Il2CppObject *)StringLiteral_23846/*"time"*/;
  if ( StringLiteral_23846/*"time"*/ )
  {
    v17 = (Il2CppObject *)sub_1B68810(StringLiteral_23846/*"time"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
    v18 = (Il2CppObject *)StringLiteral_23846/*"time"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16->max_length <= 6 )
    goto LABEL_56;
  v16->m_Items[6] = v18;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v16->m_Items[6], (int32_t)v18, v41, v42);
  v74 = ftime + 0.1;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v74, v43, v44, v45);
  v48 = v17;
  if ( v17 )
  {
    v17 = (Il2CppObject *)sub_1B68810(v17, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
  }
  if ( v16->max_length <= 7 )
    goto LABEL_56;
  v16->m_Items[7] = v48;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v16->m_Items[7], (int32_t)v48, v46, v47);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v49 = iTween__Hash(v16, 0LL);
  iTween__ScaleTo_59963328(gameObject, v49, 0LL);
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = sub_1B6877C(object___TypeInfo, 4LL);
  if ( !v12 )
LABEL_58:
    sub_1B68930(v12, v13);
  v53 = (System_Object_array *)v12;
  v17 = (Il2CppObject *)StringLiteral_24812/*"z"*/;
  if ( StringLiteral_24812/*"z"*/ )
  {
    v17 = (Il2CppObject *)sub_1B68810(StringLiteral_24812/*"z"*/, v53->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
    v18 = (Il2CppObject *)StringLiteral_24812/*"z"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v53->max_length )
    goto LABEL_56;
  v53->m_Items[0] = v18;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v53->m_Items, (int32_t)v18, v51, v52);
  v73 = 1144258560;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v73, v54, v55, v56);
  v59 = v17;
  if ( v17 )
  {
    v17 = (Il2CppObject *)sub_1B68810(v17, v53->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
  }
  if ( v53->max_length <= 1 )
    goto LABEL_56;
  v53->m_Items[1] = v59;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v53->m_Items[1], (int32_t)v59, v57, v58);
  v17 = (Il2CppObject *)StringLiteral_23846/*"time"*/;
  if ( StringLiteral_23846/*"time"*/ )
  {
    v17 = (Il2CppObject *)sub_1B68810(StringLiteral_23846/*"time"*/, v53->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_57;
    v18 = (Il2CppObject *)StringLiteral_23846/*"time"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v53->max_length <= 2 )
    goto LABEL_56;
  v53->m_Items[2] = v18;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v53->m_Items[2], (int32_t)v18, v60, v61);
  v72 = ftime;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v72, v62, v63, v64);
  v67 = v17;
  if ( v17 )
  {
    v17 = (Il2CppObject *)sub_1B68810(v17, v53->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_57:
      v71 = sub_1B68954(v17);
      sub_1B687FC(v71, 0LL);
    }
  }
  if ( v53->max_length <= 3 )
LABEL_56:
    sub_1B68938(v17, v18);
  v53->m_Items[3] = v67;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v53->m_Items[3], (int32_t)v67, v65, v66);
  v68 = iTween__Hash(v53, 0LL);
  iTween__RotateTo_59968244(v50, v68, 0LL);
  v70 = BattleCommandComponent__fadeoutEffect(this, 1, v69);
  UnityEngine_MonoBehaviour__StartCoroutine_69157088((UnityEngine_MonoBehaviour_o *)this, v70, 0LL);
}


void __fastcall BattleCommandComponent__playOpenNobleCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  v2 = this;
  if ( (byte_4A0B495 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    this = (BattleCommandComponent_o *)sub_1B686D4(&StringLiteral_18830/*"effect/ef_noblecard"*/, v3);
    byte_4A0B495 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( effectobj->max_length <= 2 )
    goto LABEL_18;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v2->fields.effectobj;
    if ( !v6 )
      goto LABEL_17;
    if ( v6->max_length <= 2 )
      goto LABEL_18;
    v7 = (UnityEngine_Object_o *)v6->m_Items[2];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_69172004(v7, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.nomalwidget;
  if ( !this
    || (v8 = v2->fields.effectobj,
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_38056628(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_18830/*"effect/ef_noblecard"*/,
                                             transform,
                                             0LL,
                                             0LL),
        !v8) )
  {
LABEL_17:
    sub_1B68930(this, method);
  }
  if ( v8->max_length <= 2 )
LABEL_18:
    sub_1B68938(this, method);
  v8->m_Items[2] = (UnityEngine_GameObject_o *)this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v8->m_Items[2], (int32_t)this, v10, v11);
}


void __fastcall BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v8; // x20
  unsigned __int64 v9; // x22
  __int64 v10; // x27
  UnityEngine_Transform_o *objectRoot; // x21
  System_String_o *v12; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x28
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_GameObject_o *v17; // x1
  Il2CppClass **v18; // x0
  struct UnityEngine_GameObject_array *v19; // x8
  System_Enum_o v20; // [xsp+8h] [xbp-78h] BYREF
  int v21; // [xsp+18h] [xbp-68h]

  if ( (byte_4A0B48F & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, method);
    sub_1B686D4(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    byte_4A0B48F = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)sub_1B6877C(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2LL);
  if ( !gameObject )
LABEL_21:
    sub_1B68930(gameObject, v6);
  klass = gameObject[1].klass;
  v8 = gameObject;
  if ( (unsigned int)klass <= 1 )
LABEL_20:
    sub_1B68938(gameObject, v6);
  HIDWORD(gameObject[1].monitor) = 1;
  if ( (int)klass >= 1 )
  {
    v9 = 0LL;
    while ( v9 < (unsigned int)klass )
    {
      v10 = *((int *)&v8[1].monitor + v9);
      objectRoot = this->fields.objectRoot;
      v20.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo;
      v20.monitor = (void *)-1LL;
      v21 = v10;
      v12 = System_Enum__ToString(&v20, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v12, 1, 0LL);
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
        if ( (unsigned int)v10 >= addObjectList->max_length )
          goto LABEL_20;
        v17 = gameObject;
        v18 = &addObjectList->obj.klass + v10;
        v18[4] = (Il2CppClass *)v17;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v17, v15, v16);
        v19 = this->fields.addObjectList;
        if ( !v19 )
          goto LABEL_21;
        if ( (unsigned int)v10 >= v19->max_length )
          goto LABEL_20;
        gameObject = v19->m_Items[v10];
        if ( !gameObject )
          goto LABEL_21;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      LODWORD(klass) = v8[1].klass;
      if ( (__int64)++v9 >= (int)klass )
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

  if ( (byte_4A0B4A1 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B4A1 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_1B68930(v3, v4);
  v6 = *(_QWORD *)&effectobj->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v6 )
        sub_1B68938(v3, v4);
      v8 = (UnityEngine_Object_o *)effectobj->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( v3 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69171816(v8, 0LL);
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
    sub_1B68930(criticallabel, v3);
  }
  DrumRollLabel__ChangeParamNonAnimation(criticallabel, 0, 1, 0LL);
}


void __fastcall BattleCommandComponent__resetSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  struct BattleCommandData_o *data; // x8
  int32_t uniqueId; // w20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x19
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A0B4B0 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    this = (BattleCommandComponent_o *)sub_1B686D4(&ServantAssetLoadManager_TypeInfo, v3);
    byte_4A0B4B0 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_17;
  uniqueId = data->fields.uniqueId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__StopVoice(uniqueId, 0.0, 0LL);
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  BattleCommandComponent__SetCardColor(v2, v12, v6);
  BattleCommandComponent__resetSelectStamp(v2, v7);
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( effectobj->max_length <= 3 )
    goto LABEL_18;
  v9 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v2->fields.effectobj;
    if ( v10 )
    {
      if ( v10->max_length > 3 )
      {
        v11 = (UnityEngine_Object_o *)v10->m_Items[3];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69171816(v11, 0LL);
        return;
      }
LABEL_18:
      sub_1B68938(this, method);
    }
LABEL_17:
    sub_1B68930(this, method);
  }
}


void __fastcall BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8

  v2 = this;
  if ( (byte_4A0B499 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B499 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( effectobj->max_length <= 5 )
LABEL_14:
    sub_1B68938(this, method);
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
      sub_1B68930(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  const MethodInfo *v29; // x1
  __int64 v30; // x1
  BattleCommandData_o *data; // x0
  const MethodInfo *v32; // x1
  struct BattleCommandData_o *v33; // x8
  int treasureDvc; // w21
  Voice_BATTLE_array *v35; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v37; // x2
  System_Array_o *v38; // x0
  __int64 *v39; // x8
  __int64 v40; // x1
  System_Collections_Generic_List_KeyValuePair_string__int___o *v41; // x21
  BattleCommandComponent___c_c *v42; // x0
  System_Func_T__TResult__o *_9__186_0; // x22
  Il2CppObject *v44; // x23
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Int32_array *v49; // x0
  System_Collections_Generic_List_T__o *v50; // x21
  int32_t size; // w25
  int32_t v52; // w22
  System_Collections_Generic_KeyValuePair_object__int__o v53; // kr10_16
  struct BattleCommandData_o *v54; // x8
  Il2CppObject *key; // x21
  int32_t uniqueId; // w23
  System_String_o *LastVoiceType; // x0
  System_Collections_Generic_List_T__o *v58; // x21
  struct BattleCommandData_o *v59; // x8
  int32_t svtId; // w23
  VoiceMaster_o *v61; // x22
  struct BattleServantData_o *svtData; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *v64; // x8
  int32_t v65; // w2
  struct BattleServantData_o *v66; // x8
  UnityEngine_Object_o *ServantActor; // x22
  int32_t v68; // w22
  struct BattleServantData_o *v69; // x8
  struct BattleCommandData_o *v70; // x9
  int32_t v71; // w23
  int32_t overwriteSvtVoiceId; // w25
  int32_t v73; // w24
  System_String_o *v74; // x21
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  __int64 *v79; // x8
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  struct BattlePerformance_o *v90; // x8
  bool v91; // w0
  int v92; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_KeyValuePair_string__int___o *voiceInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16
  System_Collections_Generic_KeyValuePair_object__int__o v95; // 0:x2.16
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0B4AA & 1) == 0 )
  {
    sub_1B686D4(&Voice_BATTLE___TypeInfo, *(_QWORD *)&targetIndex);
    sub_1B686D4(&Method_BasicHelper_IndexValue_KeyValuePair_string__int____, v5);
    sub_1B686D4(&Method_DataManager_GetMasterData_VoiceMaster___, v6);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___, v7);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B686D4(&System_Func_KeyValuePair_string__int___int__TypeInfo, v9);
    sub_1B686D4(&int_TypeInfo, v10);
    sub_1B686D4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__, v13);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v14);
    sub_1B686D4(&ServantAssetLoadManager_TypeInfo, v15);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B686D4(
      &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546,
      v17);
    sub_1B686D4(
      &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3,
      v18);
    sub_1B686D4(
      &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0,
      v19);
    sub_1B686D4(&Method_BattleCommandComponent___c__selectCard_b__186_0__, v20);
    sub_1B686D4(&BattleCommandComponent___c_TypeInfo, v21);
    sub_1B686D4(&Voice_TypeInfo, v22);
    sub_1B686D4(&StringLiteral_16553/*"a"*/, v23);
    sub_1B686D4(&StringLiteral_7088/*"HEROINE_CHANGECARDVOICE"*/, v24);
    sub_1B686D4(&StringLiteral_18826/*"effect/ef_commandup_{0}{1:00}"*/, v25);
    sub_1B686D4(&StringLiteral_22596/*"q"*/, v26);
    sub_1B686D4(&StringLiteral_16932/*"b"*/, v27);
    sub_1B686D4(&StringLiteral_16056/*"_"*/, v28);
    byte_4A0B4AA = 1;
  }
  v96.fields.r = 0.5;
  v96.fields.g = 0.5;
  v96.fields.b = 0.5;
  v96.fields.a = 1.0;
  voiceInfoList = 0LL;
  BattleCommandComponent__SetCardColor(this, v96, *(const MethodInfo **)&targetIndex);
  BattleCommandComponent__stopFirstAura(this, v29);
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBlank(data, 0LL) )
    return;
  data = (BattleCommandData_o *)BattleCommandComponent__get_isKindOfDontAction(this, v32);
  if ( ((unsigned __int8)data & 1) != 0 )
    return;
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_78;
  treasureDvc = v33->fields.treasureDvc;
  if ( treasureDvc <= 0 )
  {
    if ( !Voice_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    FileName = Voice__getFileName(245, 0LL);
    if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v37) )
    {
      v38 = (System_Array_o *)sub_1B6877C(Voice_BATTLE___TypeInfo, 6LL);
      v39 = &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
    }
    else
    {
      v38 = (System_Array_o *)sub_1B6877C(Voice_BATTLE___TypeInfo, 3LL);
      v39 = &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
    }
    goto LABEL_18;
  }
  if ( treasureDvc != ConstantMaster__getValue((System_String_o *)StringLiteral_7088/*"HEROINE_CHANGECARDVOICE"*/, 0LL) )
  {
    v38 = (System_Array_o *)sub_1B6877C(Voice_BATTLE___TypeInfo, 12LL);
    v39 = &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546;
LABEL_18:
    v40 = *v39;
    v35 = (Voice_BATTLE_array *)v38;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61327548(v38, (System_RuntimeFieldHandle_o)v40, 0LL);
    goto LABEL_19;
  }
  data = (BattleCommandData_o *)sub_1B6877C(Voice_BATTLE___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_78;
  v35 = (Voice_BATTLE_array *)data;
  if ( !data->fields.svtlimit )
    goto LABEL_79;
  data->fields.follower = 252;
LABEL_19:
  data = (BattleCommandData_o *)this->fields.svtData;
  if ( !data )
    goto LABEL_78;
  if ( BattleServantData__TryGetPlayableVoiceInfoList((BattleServantData_o *)data, &voiceInfoList, v35, 0LL) )
  {
    v41 = voiceInfoList;
    v42 = BattleCommandComponent___c_TypeInfo;
    if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
      v42 = BattleCommandComponent___c_TypeInfo;
    }
    _9__186_0 = (System_Func_T__TResult__o *)v42->static_fields->__9__186_0;
    if ( !_9__186_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = BattleCommandComponent___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__186_0 = (System_Func_T__TResult__o *)sub_1B68920(System_Func_KeyValuePair_string__int___int__TypeInfo);
      System_Func_KeyValuePair_object__int___int____ctor(
        _9__186_0,
        v44,
        Method_BattleCommandComponent___c__selectCard_b__186_0__,
        0LL);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
      static_fields->__9__186_0 = (struct System_Func_KeyValuePair_string__int___int__o *)_9__186_0;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__186_0, (int32_t)_9__186_0, v46, v47);
    }
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                                                                 (System_Func_TSource__TResult__o *)_9__186_0,
                                                                 (const MethodInfo_2E75B70 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    v49 = System_Linq_Enumerable__ToArray_int_(
            v48,
            (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
    data = (BattleCommandData_o *)RandomUtility__GetRandomRangeIndex(v49, 0, 0LL);
    v50 = (System_Collections_Generic_List_T__o *)voiceInfoList;
    if ( !voiceInfoList )
      goto LABEL_78;
    size = voiceInfoList->fields._size;
    v52 = (int)data;
    Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
             (System_Collections_Generic_List_T__o *)voiceInfoList,
             0,
             (const MethodInfo_3413C98 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    v53 = BasicHelper__IndexValue_KeyValuePair_object__int__(
            v50,
            v52,
            Item,
            (const MethodInfo_2E3897C *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    v30 = *(_QWORD *)&v53.fields.value;
    data = (BattleCommandData_o *)v53.fields.key;
    v54 = this->fields.data;
    if ( !v54 )
      goto LABEL_78;
    key = v53.fields.key;
    uniqueId = v54->fields.uniqueId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    LastVoiceType = ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0LL);
    data = (BattleCommandData_o *)System_String__op_Equality(LastVoiceType, (System_String_o *)v53.fields.key, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v58 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_78;
      v95 = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
              (System_Collections_Generic_List_T__o *)voiceInfoList,
              0,
              (const MethodInfo_3413C98 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
      key = BasicHelper__IndexValue_KeyValuePair_object__int__(
              v58,
              (v52 + 1) % size,
              v95,
              (const MethodInfo_2E3897C *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    }
    data = (BattleCommandData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data
      || (data = (BattleCommandData_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_VoiceMaster___),
          (v59 = this->fields.data) == 0LL)
      || (svtId = v59->fields.svtId,
          v61 = (VoiceMaster_o *)data,
          data = (BattleCommandData_o *)System_String__Concat_61419468(
                                          (System_String_o *)StringLiteral_16056/*"_"*/,
                                          (System_String_o *)key,
                                          0LL),
          !v61) )
    {
LABEL_78:
      sub_1B68930(data, v30);
    }
    data = (BattleCommandData_o *)VoiceMaster__getFlagRequestNumber(v61, svtId, (System_String_o *)data, 0, 0LL);
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
        v64 = this->fields.data;
        if ( !v64 )
          goto LABEL_78;
        v65 = (int)data;
        data = (BattleCommandData_o *)perf->fields.data;
        if ( !data )
          goto LABEL_78;
        BattleData__AddServantVoicePlayed_42227756((BattleData_o *)data, v64->fields.svtId, v65, 0, 0LL);
      }
    }
    v66 = this->fields.svtData;
    if ( !v66 )
      goto LABEL_78;
    data = (BattleCommandData_o *)this->fields.perf;
    if ( !data )
      goto LABEL_78;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             (BattlePerformance_o *)data,
                                             v66->fields.uniqueId,
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
        v68 = (int)data;
        data = (BattleCommandData_o *)BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
        v69 = this->fields.svtData;
        if ( !v69 )
          goto LABEL_78;
        v70 = this->fields.data;
        if ( !v70 )
          goto LABEL_78;
        v71 = (int)data;
        overwriteSvtVoiceId = v69->fields.overwriteSvtVoiceId;
        v73 = v70->fields.uniqueId;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__playBattleVoice(
          v68,
          v71,
          overwriteSvtVoiceId,
          (System_String_o *)key,
          1.0,
          0LL,
          v73,
          0,
          0LL);
      }
    }
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  v74 = (System_String_o *)StringLiteral_18826/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick(data, 0LL) )
  {
    v92 = targetIndex + 1;
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v75, v76, v77);
    v79 = &StringLiteral_22596/*"q"*/;
LABEL_67:
    v74 = System_String__Format_61433840(v74, (Il2CppObject *)*v79, v78, 0LL);
    goto LABEL_68;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isArts(data, 0LL) )
  {
    v92 = targetIndex + 1;
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v80, v81, v82);
    v79 = &StringLiteral_16553/*"a"*/;
    goto LABEL_67;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBuster(data, 0LL) )
  {
    v92 = targetIndex + 1;
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v83, v84, v85);
    v79 = &StringLiteral_16932/*"b"*/;
    goto LABEL_67;
  }
LABEL_68:
  data = (BattleCommandData_o *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_78;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (BattleCommandData_o *)BaseMonoBehaviour__createObject_38056628(
                                  (BaseMonoBehaviour_o *)this,
                                  v74,
                                  transform,
                                  0LL,
                                  0LL);
  if ( !effectobj )
    goto LABEL_78;
  if ( effectobj->max_length <= 3 )
LABEL_79:
    sub_1B68938(data, v30);
  effectobj->m_Items[3] = (UnityEngine_GameObject_o *)data;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[3], (int32_t)data, v88, v89);
  v90 = this->fields.perf;
  if ( !v90 )
    goto LABEL_78;
  data = (BattleCommandData_o *)v90->fields.data;
  if ( !data )
    goto LABEL_78;
  v91 = BattleData__checkLimitTurn((BattleData_o *)data, 0LL);
  if ( !targetIndex && v91 )
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
        sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)perf, v7, v8),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v9),
        (data = comp->fields.data) == 0LL) )
  {
    sub_1B68930(this, comp);
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, data->fields.commandCardParam, 2, 0, v10);
}


void __fastcall BattleCommandComponent__setBuffIconList(
        BattleCommandComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
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
  UnityEngine_Component_o *buffRoot; // x0
  System_Collections_Generic_List_object__o *v26; // x21
  BuffList_TYPE_array *qabTypes; // x22
  int32_t CommandType; // w0
  System_Int32_array *Individuality; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListActive; // x0
  BuffList_TYPE_array *v31; // x22
  int32_t v32; // w0
  System_Int32_array *v33; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffList_42144236; // x0
  BuffList_TYPE_array *tdTypes; // x22
  BattleBuffData_BuffData_array *v37; // x0
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  struct BuffList_TYPE_array *v39; // x22
  BattleBuffData_BuffData_array *v40; // x3
  BattleBuffData_o *v41; // x0
  BuffList_TYPE_array *v42; // x1
  System_Int32_array *v43; // x2
  BuffList_TYPE_array *noneTdQabTypes; // x22
  int32_t v45; // w0
  System_Int32_array *v46; // x23
  BattleBuffData_BuffData_array *v47; // x0
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  struct BuffList_TYPE_array *v49; // x22
  int32_t v50; // w0
  System_Int32_array *v51; // x23
  System_Collections_Generic_IEnumerable_T__o *v52; // x0
  BuffList_TYPE_array *otherTypes; // x22
  BattleBuffData_BuffData_array *v54; // x0
  System_Collections_Generic_IEnumerable_T__o *v55; // x0
  BuffList_TYPE_array *v56; // x22
  BattleBuffData_BuffData_array *v57; // x0
  System_Collections_Generic_IEnumerable_T__o *v58; // x0
  System_Predicate_object__o *v59; // x20
  System_Predicate_object__o *v60; // x20
  System_Predicate_object__o *v61; // x20
  System_Collections_Generic_List_int__o *v62; // x20
  Il2CppObject *MasterData_object; // x22
  _BOOL8 v64; // x0
  __int64 v65; // x1
  Il2CppObject *Entity; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x21
  _BOOL8 v69; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  signed __int64 v75; // x21
  unsigned __int64 max_length; // x9
  BattleServantBuffIconComponent_o *v77; // x22
  int32_t v78; // w1
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A0B497 & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleCommandComponent__setBuffIconList_b__136_0__, buffData);
    sub_1B686D4(&Method_BattleCommandComponent__setBuffIconList_b__136_1__, v5);
    sub_1B686D4(&Method_BattleCommandComponent__setBuffIconList_b__136_2__, v6);
    sub_1B686D4(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B686D4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v16);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1B686D4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B686D4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v22);
    sub_1B686D4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v23);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4A0B497 = 1;
  }
  memset(&v80, 0, sizeof(v80));
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
  v26 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_43;
  qabTypes = this->fields.qabTypes;
  CommandType = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
  Individuality = BattleCommand__getIndividuality(CommandType, 1, 0LL);
  ShowCommandBuffListActive = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  buffRoot = (UnityEngine_Component_o *)BattleBuffData__getBuffList_42144236(
                                          buffData,
                                          qabTypes,
                                          Individuality,
                                          ShowCommandBuffListActive,
                                          0LL);
  if ( !v26 )
    goto LABEL_43;
  System_Collections_Generic_List_object___AddRange(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)buffRoot,
    (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_43;
  v31 = this->fields.qabTypes;
  v32 = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
  v33 = BattleCommand__getIndividuality(v32, 1, 0LL);
  ShowCommandBuffListPassive = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  BuffList_42144236 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42144236(
                                                                       buffData,
                                                                       v31,
                                                                       v33,
                                                                       ShowCommandBuffListPassive,
                                                                       0LL);
  System_Collections_Generic_List_object___AddRange(
    v26,
    BuffList_42144236,
    (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_43;
  if ( BattleCommandData__isTreasureDvc((BattleCommandData_o *)buffRoot, 0LL) )
  {
    tdTypes = this->fields.tdTypes;
    v37 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v38 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42144236(
                                                           buffData,
                                                           tdTypes,
                                                           0LL,
                                                           v37,
                                                           0LL);
    System_Collections_Generic_List_object___AddRange(
      v26,
      v38,
      (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v39 = this->fields.tdTypes;
    v40 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v41 = buffData;
    v42 = v39;
    v43 = 0LL;
  }
  else
  {
    buffRoot = (UnityEngine_Component_o *)this->fields.data;
    if ( !buffRoot )
      goto LABEL_43;
    noneTdQabTypes = this->fields.noneTdQabTypes;
    v45 = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
    v46 = BattleCommand__getIndividuality(v45, 1, 0LL);
    v47 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v48 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42144236(
                                                           buffData,
                                                           noneTdQabTypes,
                                                           v46,
                                                           v47,
                                                           0LL);
    System_Collections_Generic_List_object___AddRange(
      v26,
      v48,
      (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    buffRoot = (UnityEngine_Component_o *)this->fields.data;
    if ( !buffRoot )
      goto LABEL_43;
    v49 = this->fields.noneTdQabTypes;
    v50 = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
    v51 = BattleCommand__getIndividuality(v50, 1, 0LL);
    v40 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v41 = buffData;
    v42 = v49;
    v43 = v51;
  }
  v52 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42144236(v41, v42, v43, v40, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v26,
    v52,
    (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  otherTypes = this->fields.otherTypes;
  v54 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  v55 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42144236(
                                                         buffData,
                                                         otherTypes,
                                                         0LL,
                                                         v54,
                                                         0LL);
  System_Collections_Generic_List_object___AddRange(
    v26,
    v55,
    (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v56 = this->fields.otherTypes;
  v57 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  v58 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_42144236(
                                                         buffData,
                                                         v56,
                                                         0LL,
                                                         v57,
                                                         0LL);
  System_Collections_Generic_List_object___AddRange(
    v26,
    v58,
    (const MethodInfo_34BC484 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v59 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v59,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_0__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v26,
    (System_Predicate_T__o *)v59,
    (const MethodInfo_34BD8D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v60 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v60,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_1__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v26,
    (System_Predicate_T__o *)v60,
    (const MethodInfo_34BD8D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v61 = (System_Predicate_object__o *)sub_1B68920(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v61,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_2__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v26,
    (System_Predicate_T__o *)v61,
    (const MethodInfo_34BD8D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v62 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v62,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  buffRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffRoot )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)buffRoot,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    v26,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v80 = v79;
  while ( 1 )
  {
    v64 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v64 )
      break;
    if ( !v80.fields._current )
      sub_1B68930(v64, v65);
    if ( !MasterData_object )
      sub_1B68930(v64, v65);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)v80.fields._current[1].klass,
               (const MethodInfo_30E44C0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    v68 = Entity;
    if ( !Entity )
      sub_1B68930(0LL, v67);
    if ( !v62 )
      sub_1B68930(Entity, v67);
    v69 = System_Collections_Generic_List_int___Contains(
            v62,
            (int32_t)Entity[2].monitor,
            (const MethodInfo_349F5CC *)Method_System_Collections_Generic_List_int__Contains__);
    if ( !v69 )
    {
      monitor_low = LODWORD(v68[2].monitor);
      items = v62->fields._items;
      v72 = Method_System_Collections_Generic_List_int__Add__;
      ++v62->fields._version;
      if ( !items )
        sub_1B68930(v69, monitor_low);
      size = v62->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v62,
          monitor_low,
          *(const MethodInfo_349F254 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v62->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_low;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
LABEL_43:
    sub_1B68930(buffRoot, buffData);
  v75 = 0LL;
  while ( 1 )
  {
    max_length = buffIconList->max_length;
    if ( v75 >= (int)max_length )
      break;
    if ( !v62 )
      goto LABEL_43;
    if ( v75 >= max_length )
      sub_1B68938(buffRoot, buffData);
    v77 = buffIconList->m_Items[v75];
    if ( v75 >= v62->fields._size )
    {
      if ( !v77 )
        goto LABEL_43;
      v78 = 0;
    }
    else
    {
      buffRoot = (UnityEngine_Component_o *)System_Collections_Generic_List_int___get_Item(
                                              v62,
                                              v75,
                                              (const MethodInfo_349EF64 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v77 )
        goto LABEL_43;
      v78 = (int)buffRoot;
    }
    BattleServantBuffIconComponent__setImageId(v77, v78, 0LL);
    buffIconList = this->fields.buffIconList;
    ++v75;
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
    sub_1B68930(0LL, flg);
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
  __int64 v14; // x1
  BattleCommandData_o **p_data; // x25
  int32_t v16; // w2
  char v17; // w3
  void *spawner; // x0
  struct BattleServantData_o *v19; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  bool v21; // w21
  struct UnityEngine_GameObject_array *v22; // x8
  struct UnityEngine_GameObject_array **p_effectobj; // x27
  __int64 v24; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v26; // x24
  UnityEngine_Object_o *v27; // x28
  struct UnityEngine_GameObject_array *v28; // x8
  struct UnityEngine_GameObject_array *v29; // x8
  UnityEngine_Object_o *v30; // x28
  __int64 v31; // x0
  int32_t v32; // w2
  char v33; // w3
  const MethodInfo *v34; // x6
  BattleServantData_o *v35; // x1
  BattleBuffData_o *buffData; // x0
  BattleCommandData_o *v37; // x22
  const MethodInfo *v38; // x2
  BattleCommandData_o *data; // x0
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x4
  int32_t commandCardParam; // w1
  struct BattleServantData_o **p_svtData; // [xsp+0h] [xbp-70h]
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0B489 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_GameObject___TypeInfo, indata);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v14);
    byte_4A0B489 = 1;
  }
  p_data = &this->fields.data;
  this->fields.data = indata;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)indata, (int32_t)insvtData, isAttack);
  this->fields.svtData = insvtData;
  p_svtData = &this->fields.svtData;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.svtData, (int32_t)insvtData, v16, v17);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_23;
  v21 = isShowBuffIcon;
  BattleCommandComponent__DestroyEffectObject1(this, (const MethodInfo *)v19);
  v22 = this->fields.effectobj;
  if ( !v22 )
    goto LABEL_23;
  p_effectobj = &this->fields.effectobj;
  v24 = 4LL;
  while ( 1 )
  {
    max_length = v22->max_length;
    v26 = v24 - 4;
    if ( v24 - 4 >= (int)max_length )
      break;
    if ( v26 >= max_length )
      goto LABEL_47;
    v27 = (UnityEngine_Object_o *)*((_QWORD *)&v22->obj.klass + v24);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    spawner = (void *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
    if ( ((unsigned __int8)spawner & 1) != 0 )
    {
      if ( v26 < 5 )
      {
        v29 = *p_effectobj;
        if ( !*p_effectobj )
          goto LABEL_23;
        if ( v26 >= v29->max_length )
LABEL_47:
          sub_1B68938(spawner, v19);
        v30 = (UnityEngine_Object_o *)*((_QWORD *)&v29->obj.klass + v24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69171816(v30, 0LL);
      }
      else if ( v24 == 9 )
      {
        v28 = this->fields.effectobj;
        if ( !v28 )
          goto LABEL_23;
        if ( (*(_QWORD *)&v28->max_length & 0xFFFFFFFEuLL) <= 5 )
          goto LABEL_47;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_23;
        Spawner__Despawn((Spawner_o *)spawner, v28->m_Items[5], 1, 0LL);
      }
    }
    v22 = *p_effectobj;
    ++v24;
    if ( !*p_effectobj )
      goto LABEL_23;
  }
  v31 = sub_1B6877C(UnityEngine_GameObject___TypeInfo, v22->max_length);
  *p_effectobj = (struct UnityEngine_GameObject_array *)v31;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.effectobj, v31, v32, v33);
  if ( *p_data )
  {
    if ( BattleCommandData__isTreasureDvc(*p_data, 0LL) )
    {
      v35 = *p_svtData;
      if ( *p_svtData )
      {
        buffData = v35->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, v35, 0LL) )
          {
            spawner = *p_svtData;
            if ( !*p_svtData )
              goto LABEL_23;
            spawner = BattleServantData__get_TreasureDevice((BattleServantData_o *)spawner, 0LL);
            if ( !spawner )
              goto LABEL_23;
            spawner = (void *)TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)spawner, 0LL);
            if ( ((unsigned __int8)spawner & 1) != 0 && !isTDTypeChangeWindow )
            {
              v19 = *p_svtData;
              if ( !*p_svtData )
                goto LABEL_23;
              spawner = v19->fields.buffData;
              if ( !spawner )
                goto LABEL_23;
              v37 = *p_data;
              spawner = BattleBuffData__getTDTypeChangeBuffData((BattleBuffData_o *)spawner, v19, 0LL);
              if ( !spawner || !v37 )
                goto LABEL_23;
              v37->fields._type = *((_DWORD *)spawner + 7);
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, isInit, isAttack, v21, isTDTypeChangeWindow, 0, v34);
  data = this->fields.data;
  if ( !data || BattleCommandData__getCriticalPoint(data, 0LL) < 1 || !this->fields.isCountUp )
    goto LABEL_43;
  spawner = this->fields.criticalObject;
  if ( !spawner )
LABEL_23:
    sub_1B68930(spawner, v19);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spawner, 1, 0LL);
LABEL_43:
  v46.fields.r = 0.0;
  v46.fields.g = 0.0;
  v46.fields.b = 0.0;
  v46.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v46, 1, v38);
  v47.fields.r = 0.0;
  v47.fields.g = 0.0;
  v47.fields.b = 0.0;
  v47.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v47, 1, v40);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v41);
    commandCardParam = indata->fields.commandCardParam;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v41);
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, commandCardParam, 2, 1, v42);
}


void __fastcall BattleCommandComponent__setData_42785568(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  Il2CppClass *klass; // x8
  int32_t v17; // w22
  __int64 v18; // x23
  __int64 v19; // x24
  int32_t v20; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  __int64 v23; // x23
  struct BattleBuffData_o *buffData; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4A0B48D & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandData_TypeInfo, svtData);
    sub_1B686D4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B686D4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A0B48D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_16;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v15 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v28, 0LL);
  if ( !v13 )
    goto LABEL_16;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_30E44C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Instance )
  {
    klass = Instance[9].klass;
    if ( klass )
    {
      if ( LODWORD(klass->_1.namespaze) <= index )
        sub_1B68938(Instance, v12);
      v17 = *((_DWORD *)&klass->_1.byval_arg.data + index);
      v19 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v29.fields.currentCryptoKey = v19;
      *(_QWORD *)&v29.fields.fakeValue = v18;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v29, 0LL);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      v23 = sub_1B68920(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_42927492(
        (BattleCommandData_o *)v23,
        v17,
        v20,
        CommandDispLimitCount,
        CommandImageSvtId,
        -1,
        0LL);
      if ( v23 )
      {
        BattleCommandData__SetCommandCardParam((BattleCommandData_o *)v23, svtData->fields.commandCardParam, index, 0LL);
        buffData = svtData->fields.buffData;
        *(_QWORD *)(v23 + 112) = buffData;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v23 + 112), (int32_t)buffData, v25, v26);
        *(_DWORD *)(v23 + 88) = index;
        BattleCommandComponent__setData(this, (BattleCommandData_o *)v23, svtData, 0, 1, 0, 1, v27);
        return;
      }
    }
LABEL_16:
    sub_1B68930(Instance, v12);
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
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x24
  struct BattleServantBuffIconComponent_array *buffIconList; // x22
  int max_length; // w8
  unsigned int v21; // w23
  BattleServantBuffIconComponent_o *v22; // x8
  UnityEngine_Object_o *powerUpCardValue; // x21
  UnityEngine_Object_o *powerUpCardIcon; // x21
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x21
  UnityEngine_Object_o *iconChangeTypeByTransform; // x21

  if ( (byte_4A0B487 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
    byte_4A0B487 = 1;
  }
  bg = (UIWidget_o *)this->fields.bg;
  if ( !bg )
    goto LABEL_98;
  UIWidget__set_depth(bg, basedepth + 1, 0LL);
  bg = (UIWidget_o *)this->fields.facetex;
  if ( !bg )
    goto LABEL_98;
  UIWidget__set_depth(bg, basedepth + 2, 0LL);
  bg = (UIWidget_o *)this->fields.icon;
  if ( !bg )
    goto LABEL_98;
  UIWidget__set_depth(bg, basedepth + 3, 0LL);
  bg = (UIWidget_o *)this->fields.text;
  if ( !bg )
    goto LABEL_98;
  UIWidget__set_depth(bg, basedepth + 4, 0LL);
  bg = (UIWidget_o *)this->fields.nobletex;
  if ( !bg )
    goto LABEL_98;
  UIWidget__set_depth(bg, basedepth + 5, 0LL);
  bg = (UIWidget_o *)this->fields.codeTexture;
  if ( !bg )
    goto LABEL_98;
  UIWidget__set_depth(bg, basedepth + 6, 0LL);
  bg = (UIWidget_o *)this->fields.codeSprite;
  if ( !bg )
    goto LABEL_98;
  v6 = basedepth + 7;
  UIWidget__set_depth(bg, basedepth + 7, 0LL);
  bg = (UIWidget_o *)this->fields.chargeTurnLabel;
  if ( !bg )
    goto LABEL_98;
  v7 = basedepth + 11;
  UIWidget__set_depth(bg, basedepth + 11, 0LL);
  bg = (UIWidget_o *)this->fields.remainingTurnLabel;
  if ( !bg )
    goto LABEL_98;
  UIWidget__set_depth(bg, v7, 0LL);
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistSprite;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, v6, 0LL);
  }
  assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistChargeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistChargeTurnLabel;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistRemainingTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistRemainingTurnLabel;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  bg = (UIWidget_o *)this->fields.sealedSprite;
  if ( !bg )
    goto LABEL_98;
  v11 = basedepth + 9;
  UIWidget__set_depth(bg, basedepth + 9, 0LL);
  bg = (UIWidget_o *)this->fields.donotactSprite;
  if ( !bg )
    goto LABEL_98;
  UIWidget__set_depth(bg, v11, 0LL);
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotsleepSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotsleepSprite;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotPermanentSleep, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotPermanentSleep;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableShortageStarSprite;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  unusableNpSprite = (UnityEngine_Object_o *)this->fields.unusableNpSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableNpSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableNpSprite;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotActTypeSprite = (UnityEngine_Object_o *)this->fields.donotActTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActTypeSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActTypeSprite;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, basedepth + 10, 0LL);
  }
  donotActWithTypeSp = (UnityEngine_Object_o *)this->fields.donotActWithTypeSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActWithTypeSp, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActWithTypeSp;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.treasureDeviceErrorSprite;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, v6, 1, 0LL);
  bg = (UIWidget_o *)this->fields.friendIcon;
  if ( !bg || (UIWidget__set_depth(bg, basedepth + 10, 0LL), (buffIconList = this->fields.buffIconList) == 0LL) )
LABEL_98:
    sub_1B68930(bg, *(_QWORD *)&basedepth);
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    do
    {
      if ( v21 >= max_length )
        sub_1B68938(bg, *(_QWORD *)&basedepth);
      v22 = buffIconList->m_Items[v21];
      if ( !v22 )
        goto LABEL_98;
      bg = (UIWidget_o *)v22->fields.iconSprite;
      if ( !bg )
        goto LABEL_98;
      UIWidget__set_depth(bg, v7, 0LL);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v21 < max_length );
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardValue, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardValue;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, basedepth + 12, 0LL);
  }
  restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !bg )
      goto LABEL_98;
    UIWidget__set_depth(bg, basedepth + 13, 0LL);
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconChangeTypeByTransform, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.iconChangeTypeByTransform;
    if ( !bg )
      goto LABEL_98;
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)inPerf, (int32_t)method, v3);
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
    sub_1B68930(0LL, stamp);
  if ( effectobj->max_length <= 5 )
    sub_1B68938(effectobj, stamp);
  effectobj->m_Items[5] = stamp;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[5], (int32_t)stamp, (int32_t)method, v3);
}


void __fastcall BattleCommandComponent__setShader(
        BattleCommandComponent_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *facetex; // x21
  struct UITexture_o *v7; // x20
  UnityEngine_Shader_o *v8; // x21
  UnityEngine_Material_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4A0B486 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Material_TypeInfo, shaderName);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0B486 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v7 = this->fields.facetex;
    v8 = UnityEngine_Shader__Find(shaderName, 0LL);
    v9 = (UnityEngine_Material_o *)sub_1B68920(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v9, v8, 0LL);
    if ( !v7 )
      sub_1B68930(v10, v11);
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v7->klass->vtable._25_set_material.method)(
      v7,
      v9,
      v7->klass->vtable._26_get_mainTexture.methodPtr);
  }
}


void __fastcall BattleCommandComponent__setTarget(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.target = target;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.target, (int32_t)target, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A0B4A8 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0B4A8 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_object )
      sub_1B68930(v7, v8);
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
  __int64 v3; // x1
  struct BattleCommandData_o *data; // x8
  BattleCommandData_o *v5; // x0
  DrumRollLabel_o *criticallabel; // x20
  int32_t v7; // w21
  DrumRollLabel_CompleteEventHandler_o *v8; // x22

  v2 = this;
  if ( (byte_4A0B49B & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleCommandComponent_compCriticallabel__, method);
    this = (BattleCommandComponent_o *)sub_1B686D4(&DrumRollLabel_CompleteEventHandler_TypeInfo, v3);
    byte_4A0B49B = 1;
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
    sub_1B68930(this, method);
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
  v5 = v2->fields.data;
  criticallabel = v2->fields.criticallabel;
  v7 = v5 ? v2->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(v5, 0LL) : 0;
  v8 = (DrumRollLabel_CompleteEventHandler_o *)sub_1B68920(DrumRollLabel_CompleteEventHandler_TypeInfo);
  DrumRollLabel_CompleteEventHandler___ctor(
    v8,
    (Il2CppObject *)v2,
    Method_BattleCommandComponent_compCriticallabel__,
    0LL);
  if ( !criticallabel )
    goto LABEL_15;
  DrumRollLabel__changeParam(criticallabel, v7, 1, v8, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__startMoveFloat(BattleCommandComponent_o *this, const MethodInfo *method)
{
  float v3; // s0
  const MethodInfo *v4; // x2

  if ( (byte_4A0B493 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_16711/*"anim_commandfloat"*/, method);
    byte_4A0B493 = 1;
  }
  v3 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16711/*"anim_commandfloat"*/, v3, v4);
}


void __fastcall BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v6; // x20
  __int64 nomalwidget; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *v9; // x20
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *v13; // x19

  if ( (byte_4A0B494 & 1) == 0 )
  {
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    byte_4A0B494 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nomalwidget = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (nomalwidget & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    nomalwidget = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
    if ( (nomalwidget & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_29;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v6, 0LL);
    }
  }
  nomalwidget = (__int64)this->fields.nomalwidget;
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalwidget, 0LL);
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nomalwidget, 0LL);
  v9 = (UnityEngine_Transform_o *)nomalwidget;
  if ( !byte_4A03901 )
  {
    nomalwidget = sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v8);
    byte_4A03901 = 1;
  }
  if ( !v9
    || (UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_29:
    sub_1B68930(nomalwidget, v8);
  }
  if ( effectobj->max_length <= 2 )
    goto LABEL_30;
  v11 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nomalwidget = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( (nomalwidget & 1) != 0 )
  {
    v12 = this->fields.effectobj;
    if ( v12 )
    {
      if ( v12->max_length > 2 )
      {
        v13 = (UnityEngine_Object_o *)v12->m_Items[2];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DestroyImmediate_69172004(v13, 0LL);
        return;
      }
LABEL_30:
      sub_1B68938(nomalwidget, v8);
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
  if ( (byte_4A0B498 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B498 = 1;
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
      UnityEngine_Object__Destroy_69171816(v6, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 4 )
        {
          this->fields.facetex = 0LL;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.facetex, 0, v7, v8);
          return;
        }
LABEL_17:
        sub_1B68938(this, method);
      }
    }
LABEL_16:
    sub_1B68930(this, method);
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
  if ( (byte_4A0B4B5 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, targetSvt);
    byte_4A0B4B5 = 1;
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
          sub_1B68930(this, targetSvt);
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
          sub_1B68938(this, targetSvt);
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
  __int64 v5; // x1
  BattleCommandData_o *data; // x0
  int32_t v7; // w20
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x22
  DrumRollLabel_o *v10; // x0
  int32_t v11; // w1
  DrumRollLabel_CompleteEventHandler_o *v12; // x3
  DrumRollLabel_CompleteEventHandler_o *v13; // x21

  if ( (byte_4A0B49C & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleCommandComponent_compCriticallabel__, isNonAnimation);
    sub_1B686D4(&DrumRollLabel_CompleteEventHandler_TypeInfo, v5);
    byte_4A0B49C = 1;
  }
  data = this->fields.data;
  if ( !data || (v7 = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0LL), v7 <= 0) )
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
    sub_1B68930(criticalObject, isNonAnimation);
  }
  if ( isNonAnimation )
  {
    DrumRollLabel__ChangeParamNonAnimation(this->fields.criticallabel, v7, 0, 0LL);
  }
  else
  {
    if ( v7 >= criticallabel->fields.nowvalue )
    {
      v13 = (DrumRollLabel_CompleteEventHandler_o *)sub_1B68920(DrumRollLabel_CompleteEventHandler_TypeInfo);
      DrumRollLabel_CompleteEventHandler___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattleCommandComponent_compCriticallabel__,
        0LL);
      v10 = criticallabel;
      v11 = v7;
      v12 = v13;
    }
    else
    {
      v10 = this->fields.criticallabel;
      v11 = v7;
      v12 = 0LL;
    }
    DrumRollLabel__changeParam(v10, v11, 1, v12, 0.0, 0LL);
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
  if ( (byte_4A0B49A & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B49A = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_41;
  if ( effectobj->max_length <= 3 )
LABEL_42:
    sub_1B68938(this, method);
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
    if ( !byte_4A03901 )
    {
      this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, method);
      byte_4A03901 = 1;
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
    if ( !byte_4A03909 )
    {
      this = (BattleCommandComponent_o *)sub_1B686D4(&UnityEngine_Vector3_TypeInfo, method);
      byte_4A03909 = 1;
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
      sub_1B68930(this, method);
    }
    goto LABEL_42;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__updateView(
        BattleCommandComponent_o *this,
        bool initFlg,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        bool isCharaHide,
        const MethodInfo *method)
{
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
  System_String_o *v30; // x21
  __int64 v31; // x28
  __int64 transform; // x0
  __int64 v33; // x1
  UnityEngine_Transform_o *v34; // x26
  __int64 v35; // x1
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v41; // x2
  struct BattleServantData_o *svtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  BattleCommandData_o *data; // x0
  __int64 v46; // x1
  UnityEngine_Behaviour_o *facetex; // x0
  __int64 v48; // x1
  UnityEngine_Behaviour_o *icon; // x0
  __int64 v50; // x1
  UnityEngine_Behaviour_o *text; // x0
  __int64 v52; // x1
  UISprite_o *bg; // x0
  __int64 v54; // x1
  UIWidget_o *v55; // x0
  __int64 v56; // x1
  UIWidget_o *v57; // x0
  __int64 v58; // x1
  UnityEngine_Behaviour_o *friendIcon; // x0
  BattleCommandSealStatus_o *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  BattleCommandComponent_o *v63; // x0
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x2
  BattleServantData_o *v66; // x23
  BattleCommandData_o *v67; // x24
  UnityEngine_Object_o *perf; // x25
  _BOOL8 v69; // x0
  __int64 v70; // x1
  struct BattlePerformance_o *v71; // x8
  BattleData_o *v72; // x25
  BattleCommandSealStatus_o *v73; // x26
  int32_t v74; // w2
  int32_t v75; // w3
  __int64 v76; // x1
  UIWidget_o **p_facetex; // x23
  UITexture_o *v78; // x24
  BattleCommandData_o *v79; // x0
  __int64 v80; // x1
  int32_t ImageServantId; // w25
  BattleCommandData_o *v82; // x0
  __int64 loadSvtLimit; // x0
  __int64 v84; // x1
  struct BattleCommandData_o *v85; // x8
  int32_t v86; // w26
  int32_t svtlimit; // w27
  UnityEngine_Object_o *Manager__loadCommandCard; // x24
  __int64 v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  UnityEngine_Behaviour_o *v92; // x0
  __int64 v93; // x1
  UnityEngine_Behaviour_o *v94; // x0
  UnityEngine_Object_o *v95; // x24
  _BOOL8 v96; // x0
  __int64 v97; // x1
  UnityEngine_Behaviour_o *v98; // x0
  struct BattleCommandData_o *v99; // x8
  UnityEngine_Object_o *v100; // x22
  int treasureDvc; // w9
  uint32_t cctor_finished; // w8
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  BattleCommandData_o *v106; // x0
  __int64 v107; // x1
  __int64 *v108; // x8
  BattleCommandData_o *v109; // x0
  BattleCommandData_o *v110; // x0
  Il2CppObject *v111; // x22
  UnityEngine_Behaviour_o *v112; // x0
  __int64 v113; // x0
  __int64 v114; // x1
  struct BattleCommandData_o *v115; // x8
  UISprite_o *v116; // x23
  FileName_c *v117; // x0
  __int64 v118; // x1
  UnityEngine_Behaviour_o *v119; // x0
  __int64 v120; // x0
  UISprite_o *v121; // x23
  FileName_c *v122; // x0
  __int64 v123; // x1
  UnityEngine_Behaviour_o *v124; // x0
  UISprite_o *v125; // x23
  System_String_o *v126; // x0
  UISprite_o *v127; // x21
  System_String_o *v128; // x0
  UISprite_o *v129; // x21
  System_String_o *v130; // x0
  __int64 v131; // x0
  __int64 v132; // x1
  struct UISprite_o *v133; // x21
  UISpriteData_o *AtlasSprite; // x0
  __int64 v135; // x1
  int width; // w22
  UISpriteData_o *v137; // x0
  __int64 v138; // x1
  __int64 v139; // x1
  UnityEngine_Component_o *v140; // x0
  UnityEngine_GameObject_o *v141; // x0
  __int64 v142; // x1
  __int64 v143; // x0
  __int64 v144; // x1
  UnityEngine_Transform_o *v145; // x21
  const MethodInfo *v146; // x1
  __int64 v147; // x0
  const MethodInfo *v148; // x1
  struct BattleCommandData_o *v149; // x8
  UnityEngine_Behaviour_o *v150; // x0
  __int64 v151; // x1
  BattleCommandData_o *v152; // x0
  UITexture_o *nobletex; // x21
  __int64 v154; // x1
  int32_t v155; // w22
  BattleCommandData_o *v156; // x0
  __int64 v157; // x0
  __int64 v158; // x1
  struct BattleCommandData_o *v159; // x8
  int32_t v160; // w23
  int32_t v161; // w24
  bool Manager__loadNobleName; // w21
  UnityEngine_Object_o *v163; // x22
  __int64 v164; // x1
  const MethodInfo *v165; // x2
  UnityEngine_Component_o *v166; // x0
  UnityEngine_GameObject_o *v167; // x0
  __int64 v168; // x1
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v170; // x1
  const MethodInfo *v171; // x2
  UISprite_o *v172; // x0
  const MethodInfo *v173; // x3
  const MethodInfo *v174; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v176; // x1
  const MethodInfo *v177; // x3
  BattleCommandData_o *v178; // x0
  UISprite_o *donotActTypeSprite; // x20
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v181; // x2
  System_String_o *CardTypeSealSpriteName; // x0
  UnityEngine_Object_o *displayRemainingTurn; // x20
  UILabel_o *v184; // x20
  System_String_o *v185; // x21
  const MethodInfo *v186; // x1
  const MethodInfo *v187; // x0
  __int64 v188; // x1
  InvokerMethod invoker_method; // x8
  int v190; // w8
  int v191; // w8
  __int64 v192; // x2
  __int64 v193; // x3
  __int64 v194; // x4
  Il2CppObject *v195; // x1
  System_String_o *v196; // x0
  struct BattleCommandData_o *v197; // x8
  __int64 v198; // x0
  __int64 v199; // x1
  const MethodInfo *v200; // x2
  struct BattleCommandData_o *v201; // x8
  const MethodInfo *v202; // x2
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v204; // x8
  UILabel_o *v205; // x19
  System_String_o *v206; // x1
  BattleCommandData_o *v207; // x0
  int v208; // [xsp+8h] [xbp-68h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A0B490 & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandSealStatus_TypeInfo, initFlg);
    sub_1B686D4(&FileName_TypeInfo, v13);
    sub_1B686D4(&int_TypeInfo, v14);
    sub_1B686D4(&LocalizationManager_TypeInfo, v15);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v16);
    sub_1B686D4(&ServantAssetLoadManager_TypeInfo, v17);
    sub_1B686D4(&StringLiteral_17698/*"card_bg_blank"*/, v18);
    sub_1B686D4(&StringLiteral_5025/*"DISPLAY_REMAINING_TURN"*/, v19);
    sub_1B686D4(&StringLiteral_22039/*"none"*/, v20);
    sub_1B686D4(&StringLiteral_16850/*"arts"*/, v21);
    sub_1B686D4(&StringLiteral_17719/*"card_txt_{0}"*/, v22);
    sub_1B686D4(&StringLiteral_17578/*"buster"*/, v23);
    sub_1B686D4(&StringLiteral_22654/*"quick"*/, v24);
    sub_1B686D4(&StringLiteral_17711/*"card_icon_{0}"*/, v25);
    sub_1B686D4(&StringLiteral_17700/*"card_bg_{0}"*/, v26);
    sub_1B686D4(&StringLiteral_1/*""*/, v27);
    sub_1B686D4(&StringLiteral_19254/*"extra"*/, v28);
    sub_1B686D4(&StringLiteral_17699/*"card_bg_np{0}"*/, v29);
    byte_4A0B490 = 1;
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
    goto LABEL_156;
  }
  v30 = (System_String_o *)StringLiteral_17700/*"card_bg_{0}"*/;
  v31 = StringLiteral_22039/*"none"*/;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v34 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A03906 )
  {
    transform = sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v33);
    byte_4A03906 = 1;
  }
  if ( !v34 )
    sub_1B68930(transform, v33);
  UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_1B68930(0LL, v35);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
      nomalwidget,
      nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v37 )
    sub_1B68930(0LL, v38);
  UnityEngine_GameObject__SetActive(v37, 1, 0LL);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_1B68930(0LL, v39);
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
    svtData = this->fields.svtData;
    if ( svtData && isShowBuffIcon )
      BattleCommandComponent__setBuffIconList(this, svtData->fields.buffData, v41);
    else
      BattleCommandComponent__setBuffIconList(this, 0LL, v41);
  }
  data = this->fields.data;
  if ( !data )
    sub_1B68930(0LL, v39);
  if ( BattleCommandData__isBlank(data, 0LL) )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_1B68930(0LL, v46);
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0LL);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_1B68930(0LL, v48);
    UnityEngine_Behaviour__set_enabled(icon, 0, 0LL);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_1B68930(0LL, v50);
    UnityEngine_Behaviour__set_enabled(text, 0, 0LL);
    bg = this->fields.bg;
    if ( !bg )
      sub_1B68930(0LL, v52);
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_17698/*"card_bg_blank"*/, 0LL);
    v55 = (UIWidget_o *)this->fields.bg;
    if ( !v55 )
      sub_1B68930(0LL, v54);
    UIWidget__set_height(v55, 170, 0LL);
    v57 = (UIWidget_o *)this->fields.bg;
    if ( !v57 )
      sub_1B68930(0LL, v56);
    UIWidget__set_width(v57, 133, 0LL);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_1B68930(0LL, v58);
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0LL);
    v60 = (BattleCommandSealStatus_o *)sub_1B68920(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v60, 0LL);
    this->fields.sealStatus = v60;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.sealStatus, (int32_t)v60, v61, v62);
    BattleCommandComponent__SetActiveComponent(
      v63,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      0,
      v64);
    goto LABEL_142;
  }
  v67 = this->fields.data;
  v66 = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v69 = UnityEngine_Object__op_Implicit(perf, 0LL);
  if ( v69 )
  {
    v71 = this->fields.perf;
    if ( !v71 )
      sub_1B68930(v69, v70);
    v72 = v71->fields.data;
  }
  else
  {
    v72 = 0LL;
  }
  v73 = (BattleCommandSealStatus_o *)sub_1B68920(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_42933340(v73, v67, v66, v72, 0LL);
  this->fields.sealStatus = v73;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.sealStatus, (int32_t)v73, v74, v75);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v78 = this->fields.facetex;
  v79 = this->fields.data;
  if ( !v79 )
    sub_1B68930(0LL, v76);
  ImageServantId = BattleCommandData__GetImageServantId(v79, 0LL);
  v82 = this->fields.data;
  if ( !v82 )
    sub_1B68930(0LL, v80);
  loadSvtLimit = BattleCommandData__get_loadSvtLimit(v82, 0LL);
  v85 = this->fields.data;
  if ( !v85 )
    sub_1B68930(loadSvtLimit, v84);
  v86 = loadSvtLimit;
  svtlimit = v85->fields.svtlimit;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v78,
                                                       ImageServantId,
                                                       v86,
                                                       svtlimit,
                                                       0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCard, 0LL, 0LL) )
  {
    *p_facetex = (UIWidget_o *)Manager__loadCommandCard;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.facetex, (int32_t)Manager__loadCommandCard, v90, v91);
  }
  v92 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v92 )
    sub_1B68930(0LL, v89);
  UnityEngine_Behaviour__set_enabled(v92, 1, 0LL);
  v94 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v94 )
    sub_1B68930(0LL, v93);
  UnityEngine_Behaviour__set_enabled(v94, 1, 0LL);
  v95 = (UnityEngine_Object_o *)*p_facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v96 = UnityEngine_Object__op_Inequality(v95, 0LL, 0LL);
  if ( v96 )
  {
    v98 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v98 )
        sub_1B68930(0LL, v97);
      UnityEngine_Behaviour__set_enabled(v98, 0, 0LL);
    }
    else
    {
      if ( !v98 )
        sub_1B68930(0LL, v97);
      UnityEngine_Behaviour__set_enabled(v98, 1, 0LL);
    }
  }
  v99 = this->fields.data;
  if ( !v99 )
    sub_1B68930(v96, v97);
  v100 = (UnityEngine_Object_o *)*p_facetex;
  treasureDvc = v99->fields.treasureDvc;
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( treasureDvc < 1 )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v100, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_1B68930(0LL, v103);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_1B68930(0LL, v105);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v100, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_1B68930(0LL, v103);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_1B68930(0LL, v104);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
    v30 = (System_String_o *)StringLiteral_17699/*"card_bg_np{0}"*/;
  }
  v106 = this->fields.data;
  if ( !v106 )
    sub_1B68930(0LL, v103);
  if ( BattleCommandData__isBuster(v106, 0LL) )
  {
    v108 = &StringLiteral_17578/*"buster"*/;
  }
  else
  {
    v109 = this->fields.data;
    if ( !v109 )
      sub_1B68930(0LL, v107);
    if ( BattleCommandData__isQuick(v109, 0LL) )
    {
      v108 = &StringLiteral_22654/*"quick"*/;
    }
    else
    {
      v110 = this->fields.data;
      if ( !v110 )
        sub_1B68930(0LL, v107);
      if ( !BattleCommandData__isArts(v110, 0LL) )
      {
        v207 = this->fields.data;
        if ( !v207 )
          sub_1B68930(0LL, v107);
        if ( BattleCommandData__isAddAttack(v207, 0LL) )
          v111 = (Il2CppObject *)StringLiteral_19254/*"extra"*/;
        else
          v111 = (Il2CppObject *)v31;
        goto LABEL_79;
      }
      v108 = &StringLiteral_16850/*"arts"*/;
    }
  }
  v111 = (Il2CppObject *)*v108;
LABEL_79:
  v112 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v112 )
    sub_1B68930(0LL, v107);
  UnityEngine_Behaviour__set_enabled(v112, 0, 0LL);
  v115 = this->fields.data;
  if ( !v115 )
    sub_1B68930(v113, v114);
  if ( v115->fields.follower )
  {
    v116 = this->fields.friendIcon;
    v117 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v116 )
      sub_1B68930(v117, v114);
    UISprite__set_spriteName(v116, FileName_TypeInfo->static_fields->friendIconName, 0LL);
    v119 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v119 )
      sub_1B68930(0LL, v118);
    UnityEngine_Behaviour__set_enabled(v119, 1, 0LL);
    v115 = this->fields.data;
    if ( !v115 )
      sub_1B68930(v120, v114);
  }
  if ( v115->fields.flgEventJoin )
  {
    v121 = this->fields.friendIcon;
    v122 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v121 )
      sub_1B68930(v122, v114);
    UISprite__set_spriteName(v121, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
    v124 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v124 )
      sub_1B68930(0LL, v123);
    UnityEngine_Behaviour__set_enabled(v124, 1, 0LL);
  }
  v125 = this->fields.bg;
  v126 = System_String__Format(v30, v111, 0LL);
  if ( !v125 )
    sub_1B68930(v126, v126);
  UISprite__set_spriteName(v125, v126, 0LL);
  v127 = this->fields.icon;
  v128 = System_String__Format((System_String_o *)StringLiteral_17711/*"card_icon_{0}"*/, v111, 0LL);
  if ( !v127 )
    sub_1B68930(v128, v128);
  UISprite__set_spriteName(v127, v128, 0LL);
  v129 = this->fields.text;
  v130 = System_String__Format((System_String_o *)StringLiteral_17719/*"card_txt_{0}"*/, v111, 0LL);
  if ( !v129 )
    sub_1B68930(v130, v130);
  UISprite__set_spriteName(v129, v130, 0LL);
  v133 = this->fields.text;
  if ( !v133 )
    sub_1B68930(v131, v132);
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !AtlasSprite )
    sub_1B68930(0LL, v135);
  if ( !this->fields.text )
    sub_1B68930(AtlasSprite, v135);
  width = AtlasSprite->fields.width;
  v137 = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !v137 )
    sub_1B68930(0LL, v138);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float, float, float, float))v133->klass->vtable._18_SetRect.method)(
    v133,
    v133->klass->vtable._19_ParentHasChanged.methodPtr,
    0.0,
    0.0,
    (float)width,
    (float)v137->fields.height);
  v140 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v140 )
    sub_1B68930(0LL, v139);
  v141 = UnityEngine_Component__get_gameObject(v140, 0LL);
  if ( !v141 )
    sub_1B68930(0LL, v142);
  v143 = (__int64)UnityEngine_GameObject__get_transform(v141, 0LL);
  v145 = (UnityEngine_Transform_o *)v143;
  if ( !byte_4A03901 )
  {
    v143 = sub_1B686D4(&UnityEngine_Vector3_TypeInfo, v144);
    byte_4A03901 = 1;
  }
  if ( !v145 )
    sub_1B68930(v143, v144);
  UnityEngine_Transform__set_localPosition(v145, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleCommandComponent__UpdateIconChangeTypeByTransform(this, v146);
  v149 = this->fields.data;
  if ( !v149 )
    sub_1B68930(v147, v148);
  if ( v149->fields.treasureDvc >= 1 )
  {
    v150 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v150 )
      sub_1B68930(0LL, v148);
    UnityEngine_Behaviour__set_enabled(v150, 0, 0LL);
    v152 = this->fields.data;
    if ( !v152 )
      sub_1B68930(0LL, v151);
    nobletex = this->fields.nobletex;
    v155 = BattleCommandData__GetImageServantId(v152, 0LL);
    v156 = this->fields.data;
    if ( !v156 )
      sub_1B68930(0LL, v154);
    v157 = BattleCommandData__get_loadSvtLimit(v156, 0LL);
    v159 = this->fields.data;
    if ( !v159 )
      sub_1B68930(v157, v158);
    v160 = v157;
    v161 = v159->fields.treasureDvc;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, v155, v160, v161, 0LL);
    v163 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v163, 0LL, 0LL) )
    {
      v166 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v166 )
        sub_1B68930(0LL, v164);
      v167 = UnityEngine_Component__get_gameObject(v166, 0LL);
      if ( !v167 )
        sub_1B68930(0LL, v168);
      UnityEngine_GameObject__SetActive(v167, Manager__loadNobleName, 0LL);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v165);
  }
  BattleCommandComponent__InitUnusableMarks(this, v148);
  if ( !isTDTypeChangeWindow )
  {
    v172 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v170);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v172,
      (UnityEngine_Component_o *)v172,
      1,
      v173);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v174);
    if ( !SealStatus )
      sub_1B68930(0LL, v176);
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL);
    if ( (_DWORD)PrioredStatus == 1 )
    {
      BattleCommandComponent__SetActiveComponent(
        PrioredStatus,
        (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
        1,
        v177);
      displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      PrioredStatus = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(displayRemainingTurn, 0LL, 0LL);
      if ( ((unsigned __int8)PrioredStatus & 1) != 0 )
      {
        v184 = this->fields.displayRemainingTurn;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v185 = LocalizationManager__Get((System_String_o *)StringLiteral_5025/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v187 = (const MethodInfo *)BattleCommandComponent__get_SealStatus(this, v186);
        if ( !v187 )
          sub_1B68930(0LL, v188);
        invoker_method = v187->invoker_method;
        if ( !invoker_method )
          sub_1B68930(v187, v188);
        v190 = *((_DWORD *)invoker_method + 5);
        if ( v190 + 1 >= 0 )
          v191 = v190 + 1;
        else
          v191 = v190 + 2;
        v208 = BattleUtility__FloorToLong((float)(v191 >> 1), v187);
        v195 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v208, v192, v193, v194);
        v196 = System_String__Format(v185, v195, 0LL);
        if ( !v184 )
          sub_1B68930(v196, v196);
        UILabel__set_text(v184, v196, 0LL);
      }
    }
    else if ( (_DWORD)PrioredStatus == 8 )
    {
      v178 = this->fields.data;
      if ( !v178 )
        sub_1B68930(0LL, v170);
      donotActTypeSprite = this->fields.donotActTypeSprite;
      type = (BattleCommandComponent_o *)BattleCommandData__get_type(v178, 0LL);
      CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v181);
      if ( !donotActTypeSprite )
        sub_1B68930(CardTypeSealSpriteName, CardTypeSealSpriteName);
      UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0LL);
    }
  }
  v197 = this->fields.data;
  if ( !v197 )
    sub_1B68930(PrioredStatus, v170);
  BattleCommandComponent__SetCommandCodeView_42789756(this, v197->fields.commandCodeId, v171);
  v201 = this->fields.data;
  if ( !v201 )
    sub_1B68930(v198, v199);
  BattleCommandComponent__SetCommandAssistView(this, v201->fields.commandAssistId, v200);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v202);
LABEL_142:
  BattleCommandComponent__setTouchFlg(this, 1, v65);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(svtId_label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v204 = this->fields.data;
    if ( v204 )
    {
      v205 = this->fields.svtId_label;
      svtId = v204->fields.svtId;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&svtId, 0LL);
      if ( v205 )
      {
        if ( gameObject )
          v206 = (System_String_o *)gameObject;
        else
          v206 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text(v205, v206, 0LL);
        return;
      }
    }
LABEL_156:
    sub_1B68930(gameObject, v44);
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


void __fastcall BattleCommandComponent__PlayStarSe_d__159___ctor(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__PlayStarSe_d__159__MoveNext(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t _1__state; // w8
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4A0B5B2 & 1) == 0 )
  {
    sub_1B686D4(&Method_BattleCommandComponent__PlayStarSe_d__159_MoveNext__, method);
    sub_1B686D4(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4A0B5B2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v10 = Method_BattleCommandComponent__PlayStarSe_d__159_MoveNext__;
    if ( (*((_BYTE *)Method_BattleCommandComponent__PlayStarSe_d__159_MoveNext__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1B686EC(Method_BattleCommandComponent__PlayStarSe_d__159_MoveNext__);
    v11 = (System_Reflection_MethodBase_o *)sub_1B686B8(v10, v10[4]);
    OverwriteAssetSoundName__PlayCommonSe(v11, 7, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    preDelayTime = this->fields.preDelayTime;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1B68920(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, preDelayTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__159__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__PlayStarSe_d__159__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_BattleCommandComponent__PlayStarSe_d__159_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__159__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__PlayStarSe_d__159__System_IDisposable_Dispose(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__242___ctor(
        BattleCommandComponent__WaitForErrorViewFinished_d__242_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__242__MoveNext(
        BattleCommandComponent__WaitForErrorViewFinished_d__242_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__WaitForErrorViewFinished_d__242_o *v2; // x19
  __int64 v3; // x1
  BattleCommandComponent_o *_4__this; // x20
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  System_String_o *busyVoiceSe; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int v14; // w8
  System_String_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Action_o *tdErrorAfterAction; // x8

  v2 = this;
  if ( (byte_4A0B5B3 & 1) == 0 )
  {
    sub_1B686D4(&SoundManager_TypeInfo, method);
    this = (BattleCommandComponent__WaitForErrorViewFinished_d__242_o *)sub_1B686D4(
                                                                          &UnityEngine_WaitForSeconds_TypeInfo,
                                                                          v3);
    byte_4A0B5B3 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      waitSeconds = v2->fields.waitSeconds;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1B68920(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, waitSeconds, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v6;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, (int32_t)v6, v7, v8);
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
        sub_1B68678(p__2__current, 0, v11, v12);
        v14 = 2;
LABEL_18:
        *(_DWORD *)&p__2__current[-1].fields.isMine = v14;
        return 1;
      }
LABEL_14:
      v15 = v2->fields.busyVoiceSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (BattleCommandComponent__WaitForErrorViewFinished_d__242_o *)SoundManager__isBusySe(v15, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B68678(p__2__current, 0, v16, v17);
        v14 = 3;
        goto LABEL_18;
      }
      if ( !_4__this )
LABEL_24:
        sub_1B68930(this, method);
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


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__242__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__242_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__WaitForErrorViewFinished_d__242__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__WaitForErrorViewFinished_d__242_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_BattleCommandComponent__WaitForErrorViewFinished_d__242_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__242__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__242_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__242__System_IDisposable_Dispose(
        BattleCommandComponent__WaitForErrorViewFinished_d__242_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0B5AF & 1) == 0 )
  {
    sub_1B686D4(&BattleCommandComponent___c_TypeInfo, v1);
    byte_4A0B5AF = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(BattleCommandComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleCommandComponent___c_TypeInfo->static_fields->__9 = (struct BattleCommandComponent___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)BattleCommandComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleCommandComponent___c___ctor(BattleCommandComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleCommandComponent___c___SetSpecialCommandCardBuffData_b__223_1(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *a,
        BattleCommandComponent_CardBuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B68930(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleCommandComponent___c___UpdateCommandCardTypeChange_b__225_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1B68930(this, 0LL);
  return c->fields.buffType == 156;
}


bool __fastcall BattleCommandComponent___c___UpdateFixedCommandCard_b__209_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1B68930(this, 0LL);
  return c->fields.buffType == 131;
}


int32_t __fastcall BattleCommandComponent___c___selectCard_b__186_0(
        BattleCommandComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4A0B5B0 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, x.fields.key);
    byte_4A0B5B0 = 1;
  }
  return value;
}


void __fastcall BattleCommandComponent___c__DisplayClass158_0___ctor(
        BattleCommandComponent___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass158_0___addCriticalBuff_b__0(
        BattleCommandComponent___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass158_0_o *v2; // x19
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v5; // x8
  UnityEngine_Object_o *obj; // x19

  v2 = this;
  if ( (byte_4A0B5B1 & 1) == 0 )
  {
    this = (BattleCommandComponent___c__DisplayClass158_0_o *)sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0B5B1 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent___c__DisplayClass158_0_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (BattleCommandComponent___c__DisplayClass158_0_o *)v5->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v2->fields.obj, 0, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B68930(this, method);
  }
  obj = (UnityEngine_Object_o *)v2->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69171816(obj, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass223_0___ctor(
        BattleCommandComponent___c__DisplayClass223_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCommandComponent___c__DisplayClass223_0___SetSpecialCommandCardBuffData_b__0(
        BattleCommandComponent___c__DisplayClass223_0_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1B68930(this, 0LL);
  return c->fields.buffType == this->fields.buffType;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231___ctor(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231__MoveNext(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *v2; // x19
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
  if ( (byte_4A0B5B4 & 1) == 0 )
  {
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *)sub_1B686D4(
                                                                                &UnityEngine_Object_TypeInfo,
                                                                                method);
    byte_4A0B5B4 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *)_4__this->fields.specialCardBuffIcon;
    if ( !this )
      goto LABEL_26;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *)UnityEngine_Component__get_gameObject(
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
        this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *)_4__this->fields.specialCardBuffIcon;
        if ( this )
        {
          this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *)_4__this->fields.specialCardBuffIcon;
            if ( this )
            {
              UISprite__set_atlas((UISprite_o *)this, 0LL, 0LL);
              goto LABEL_20;
            }
          }
        }
LABEL_26:
        sub_1B68930(this, method);
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
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, 0, v10, v11);
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


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231__System_IDisposable_Dispose(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__231_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__delayFrame_d__160___ctor(
        BattleCommandComponent__delayFrame_d__160_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__delayFrame_d__160__MoveNext(
        BattleCommandComponent__delayFrame_d__160_o *this,
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
      sub_1B68930(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      *(_QWORD *)&action->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__160__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__delayFrame_d__160_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__delayFrame_d__160__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__delayFrame_d__160_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_BattleCommandComponent__delayFrame_d__160_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__160__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__delayFrame_d__160_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__delayFrame_d__160__System_IDisposable_Dispose(
        BattleCommandComponent__delayFrame_d__160_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__180___ctor(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__fadeoutEffect_d__180__MoveNext(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleCommandComponent__fadeoutEffect_d__180_o *v4; // x20
  __int64 v5; // x1
  int32_t _1__state; // w8
  DefCoroutine_c *v7; // x0
  Il2CppObject *milliSecSix; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_o *_4__this; // x19
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Transform_o *v17; // x20
  struct UnityEngine_GameObject_array *v18; // x8
  BattleCommandComponent__fadeoutEffect_d__180_o *v19; // x20

  v4 = this;
  if ( (byte_4A0B5B5 & 1) == 0 )
  {
    sub_1B686D4(&DefCoroutine_TypeInfo, method);
    this = (BattleCommandComponent__fadeoutEffect_d__180_o *)sub_1B686D4(&StringLiteral_18825/*"effect/ef_commandburn_s01"*/, v5);
    byte_4A0B5B5 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleCommandComponent__fadeoutEffect_d__180_o *)_4__this->fields.nomalwidget;
      if ( this )
      {
        ((void (__fastcall *)(BattleCommandComponent__fadeoutEffect_d__180_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
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
        this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)_4__this,
                                                                   0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattleCommandComponent__fadeoutEffect_d__180_o *)BaseMonoBehaviour__createObject_38056628(
                                                                     (BaseMonoBehaviour_o *)_4__this,
                                                                     (System_String_o *)StringLiteral_18825/*"effect/ef_commandburn_s01"*/,
                                                                     transform,
                                                                     0LL,
                                                                     0LL);
          if ( effectobj )
          {
            if ( effectobj->max_length <= 1 )
              goto LABEL_30;
            effectobj->m_Items[1] = (UnityEngine_GameObject_o *)this;
            sub_1B68678((ServantStatusBattleListViewItem_o *)&effectobj->m_Items[1], (int32_t)this, v14, v15);
            v16 = _4__this->fields.effectobj;
            if ( !v16 )
              goto LABEL_29;
            if ( v16->max_length <= 1 )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)v16->m_Items[1];
            if ( !this )
              goto LABEL_29;
            v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
            if ( !this )
              goto LABEL_29;
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0LL);
            if ( !this )
              goto LABEL_29;
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_Transform__get_parent(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
            if ( !v17 )
              goto LABEL_29;
            UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)this, 0LL);
            v18 = _4__this->fields.effectobj;
            if ( !v18 )
              goto LABEL_29;
            if ( v18->max_length <= 1 )
LABEL_30:
              sub_1B68938(this, method);
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)v18->m_Items[1];
            if ( this )
            {
              this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0LL);
              v19 = this;
              if ( !byte_4A03906 )
              {
                this = (BattleCommandComponent__fadeoutEffect_d__180_o *)sub_1B686D4(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
                byte_4A03906 = 1;
              }
              if ( v19 )
              {
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)v19,
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
    sub_1B68930(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v7 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v7 = DefCoroutine_TypeInfo;
  }
  milliSecSix = (Il2CppObject *)v7->static_fields->milliSecSix;
  v4->fields.__2__current = milliSecSix;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B68678(p__2__current, (int32_t)milliSecSix, v2, v3);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__180__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__fadeoutEffect_d__180__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B686E8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B68920(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B686E8(&Method_BattleCommandComponent__fadeoutEffect_d__180_System_Collections_IEnumerator_Reset__);
  sub_1B687FC(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__180__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__180__System_IDisposable_Dispose(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  ;
}