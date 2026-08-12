void BattleCommandComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleCommandComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct BattleCommandComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct BattleCommandComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct BattleCommandComponent_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  BattleCommandComponent_c *v40; // x8
  __int64 v46; // x1
  struct BattleCommandComponent_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  struct BattleCommandComponent_StaticFields *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7

  if ( (byte_597384B & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21218/*"icon_stun2"*/);
    sub_2213A60(&StringLiteral_21106/*"icon_cardsealed_quick"*/);
    sub_2213A60(&StringLiteral_24453/*"se_"*/);
    sub_2213A60(&StringLiteral_21103/*"icon_cardsealed_arts"*/);
    sub_2213A60(&StringLiteral_21105/*"icon_cardsealed_buster"*/);
    sub_2213A60(&StringLiteral_25986/*"v_"*/);
    sub_2213A60(&StringLiteral_21201/*"icon_sealact"*/);
    byte_597384B = 1;
  }
  v7 = StringLiteral_21103/*"icon_cardsealed_arts"*/;
  BattleCommandComponent_TypeInfo->static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_21103/*"icon_cardsealed_arts"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleCommandComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21105/*"icon_cardsealed_buster"*/;
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  static_fields->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_21105/*"icon_cardsealed_buster"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SEALED_CARDTYPE_ICON_BUSTER,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_21106/*"icon_cardsealed_quick"*/;
  v17 = BattleCommandComponent_TypeInfo->static_fields;
  v17->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_21106/*"icon_cardsealed_quick"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->SEALED_CARDTYPE_ICON_QUICK, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_21201/*"icon_sealact"*/;
  v25 = BattleCommandComponent_TypeInfo->static_fields;
  v25->DONOT_ACT_ICON = (struct System_String_o *)StringLiteral_21201/*"icon_sealact"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->DONOT_ACT_ICON, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_21218/*"icon_stun2"*/;
  v33 = BattleCommandComponent_TypeInfo->static_fields;
  v33->STUN2_ICON = (struct System_String_o *)StringLiteral_21218/*"icon_stun2"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->STUN2_ICON, v32, v34, v35, v36, v37, v38, v39);
  v40 = BattleCommandComponent_TypeInfo;
  __asm { FMOV            V0.4S, #1.0 }
  v46 = StringLiteral_25986/*"v_"*/;
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = _Q0;
  v40->static_fields->CriticalLabelGradientBottomOnDefault = (struct UnityEngine_Color_o)xmmword_E9D820;
  v40->static_fields->CriticalNumberLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_E9CB20;
  v40->static_fields->CriticalNumberLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_E9CA20;
  v40->static_fields->CriticalPercentLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_E9D990;
  v40->static_fields->CriticalPercentLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_E9DCC0;
  v47 = v40->static_fields;
  v47->voiceIdPrefix = (struct System_String_o *)v46;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v47->voiceIdPrefix, v46, v48, v49, v50, v51, v52, v53);
  v54 = StringLiteral_24453/*"se_"*/;
  v55 = BattleCommandComponent_TypeInfo->static_fields;
  v55->seIdPrefix = (struct System_String_o *)StringLiteral_24453/*"se_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v55->seIdPrefix, v54, v56, v57, v58, v59, v60, v61);
}


void BattleCommandComponent___ctor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UnityEngine_GameObject_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Array_o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Array_o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Array_o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Array_o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_Dictionary_string__GameObject__c *v52; // x0
  System_Collections_Generic_Dictionary_object__object__o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7

  if ( (byte_597384A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_2213A60(&BuffList_TYPE___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__21FCB76AE4B744E8DB6EC42DCC110D91C00FEB92CACE2184F7D86FA8D498CF5D);
    sub_2213A60(&Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9);
    sub_2213A60(&Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468);
    sub_2213A60(&Field__PrivateImplementationDetails__A236E7A583166CBBC637A1723D29902A070ADA50655F57CBEDCD6FA90EDD5ADE);
    byte_597384A = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_2213B20(UnityEngine_GameObject___TypeInfo, 6);
  this->fields.effectobj = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectobj, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct UnityEngine_GameObject_array *)sub_2213B20(UnityEngine_GameObject___TypeInfo, 2);
  this->fields.addObjectList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.addObjectList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Array_o *)sub_2213B20(BuffList_TYPE___TypeInfo, 13);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v17,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__A236E7A583166CBBC637A1723D29902A070ADA50655F57CBEDCD6FA90EDD5ADE,
    0);
  this->fields.qabTypes = (struct BuffList_TYPE_array *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.qabTypes, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Array_o *)sub_2213B20(BuffList_TYPE___TypeInfo, 5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v24,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__21FCB76AE4B744E8DB6EC42DCC110D91C00FEB92CACE2184F7D86FA8D498CF5D,
    0);
  this->fields.noneTdQabTypes = (struct BuffList_TYPE_array *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.noneTdQabTypes,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Array_o *)sub_2213B20(BuffList_TYPE___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v31,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468,
    0);
  this->fields.tdTypes = (struct BuffList_TYPE_array *)v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tdTypes, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Array_o *)sub_2213B20(BuffList_TYPE___TypeInfo, 15);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v38,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9,
    0);
  this->fields.otherTypes = (struct BuffList_TYPE_array *)v38;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.otherTypes, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v45;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.specialCardBuffList,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = System_Collections_Generic_Dictionary_string__GameObject__TypeInfo;
  this->fields.cardBuffAlphaFor = 1.0;
  v53 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(v52);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v53,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v53;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cardEffectDict,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__AddBoostedCriticalRate(
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
    CriticalPoint = BattleCommandData__getCriticalPoint(data, 0);
    boostedCriticalRate = this->fields.boostedCriticalRate;
    v8 = 100 - (CriticalPoint + boostedCriticalRate);
    if ( v8 >= toAdd )
      v9 = toAdd;
    else
      v9 = 100 - (CriticalPoint + boostedCriticalRate);
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
void BattleCommandComponent__CardEffectSetActive(BattleCommandComponent_o *this, bool value, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v7; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5973842 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_5973842 = 1;
  }
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  memset(&v7, 0, sizeof(v7));
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0 )
  {
    sub_2213CDC(cardEffectDict, value);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v7,
            (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v7.fields._currentValue )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v7.fields._currentValue, value, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void BattleCommandComponent__ChangeCardEffectMaskForInside(BattleCommandComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  __int64 v4; // x1
  System_Object_array *ComponentsInChildren_object__59472212; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x19
  int max_length; // w8
  __int64 v9; // x23
  UnityEngine_ParticleSystemRenderer_o *v10; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5973844 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_5973844 = 1;
  }
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  memset(&v12, 0, sizeof(v12));
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0 )
  {
    sub_2213CDC(cardEffectDict, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v12 = v11;
  v11.fields._dictionary = 0;
  *(_QWORD *)&v11.fields._index = &v12;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v12,
            (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v12.fields._currentValue )
      sub_2213CDC(0, v4);
    ComponentsInChildren_object__59472212 = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                              (UnityEngine_GameObject_o *)v12.fields._currentValue,
                                              (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v7 = ComponentsInChildren_object__59472212;
    if ( !ComponentsInChildren_object__59472212 )
      sub_2213CDC(0, v6);
    max_length = ComponentsInChildren_object__59472212->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      do
      {
        if ( (unsigned int)v9 >= max_length )
          sub_2213CE4(ComponentsInChildren_object__59472212);
        v10 = (UnityEngine_ParticleSystemRenderer_o *)v7->m_Items[v9];
        if ( !v10 )
          sub_2213CDC(0, v6);
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v10, 1, 0);
        max_length = v7->max_length;
        ++v9;
      }
      while ( (int)v9 < max_length );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v12,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void BattleCommandComponent__ChangeCriticalLabelColor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  void *criticallabel; // x0
  int v4; // w8
  void *v5; // x20
  unsigned int v6; // w23
  UILabel_o *v7; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_59737FB & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
    byte_59737FB = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
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
        sub_2213CE4(criticallabel);
      criticallabel = BattleCommandComponent_TypeInfo;
      v7 = (UILabel_o *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, method);
      if ( !v7 )
        break;
      UILabel__set_gradientTop(
        v7,
        BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientTopOnBoosted,
        0);
      UILabel__set_gradientBottom(
        v7,
        BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted,
        0);
      v4 = *((_DWORD *)v5 + 6);
      if ( (int)++v6 >= v4 )
        goto LABEL_12;
    }
LABEL_17:
    sub_2213CDC(criticallabel, method);
  }
LABEL_12:
  criticallabel = BattleCommandComponent_TypeInfo;
  criticalPercentLabel = this->fields.criticalPercentLabel;
  if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, method);
  if ( !criticalPercentLabel )
    goto LABEL_17;
  UILabel__set_gradientTop(
    criticalPercentLabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientTopOnBoosted,
    0);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_17;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientBottomOnBoosted,
    0);
}


void BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_object__o *specialCardBuffList; // x0
  int32_t cardBuffListIndex; // w1
  int items; // w8

  if ( (byte_597383E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    byte_597383E = 1;
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
                                                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
  if ( !specialCardBuffList )
LABEL_11:
    sub_2213CDC(specialCardBuffList, method);
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


UISprite_o *BattleCommandComponent__ChoiceUnusableMarkSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v4; // x1
  int32_t PrioredStatus; // w8
  UISprite_o *result; // x0
  UISprite_o **p_donotsleepSprite; // x8

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_2213CDC(0, v4);
  PrioredStatus = BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0);
  result = 0;
  if ( PrioredStatus <= 5 )
  {
    if ( PrioredStatus <= 2 )
    {
      if ( PrioredStatus )
      {
        if ( PrioredStatus == 1 )
        {
          p_donotsleepSprite = &this->fields.donotsleepSprite;
        }
        else
        {
          if ( PrioredStatus != 2 )
            return result;
          p_donotsleepSprite = &this->fields.donotStun2Sprite;
        }
      }
      else
      {
        p_donotsleepSprite = &this->fields.donotPermanentSleep;
      }
      return *p_donotsleepSprite;
    }
    if ( PrioredStatus == 3 )
    {
      p_donotsleepSprite = &this->fields.donotactSprite;
      return *p_donotsleepSprite;
    }
    if ( PrioredStatus != 4 )
    {
      if ( PrioredStatus != 5 )
        return result;
      p_donotsleepSprite = &this->fields.dontuseSprite;
      return *p_donotsleepSprite;
    }
    goto LABEL_19;
  }
  if ( PrioredStatus <= 8 )
  {
    if ( PrioredStatus != 6 )
    {
      if ( PrioredStatus == 7 )
      {
        p_donotsleepSprite = &this->fields.unusableShortageStarSprite;
      }
      else
      {
        if ( PrioredStatus != 8 )
          return result;
        p_donotsleepSprite = &this->fields.unusableNpSprite;
      }
      return *p_donotsleepSprite;
    }
LABEL_19:
    p_donotsleepSprite = &this->fields.sealedSprite;
    return *p_donotsleepSprite;
  }
  if ( (unsigned int)(PrioredStatus - 9) >= 2 )
  {
    if ( PrioredStatus != 11 )
      return result;
    p_donotsleepSprite = &this->fields.treasureDeviceErrorSprite;
  }
  else
  {
    p_donotsleepSprite = &this->fields.donotActWithTypeSp;
  }
  return *p_donotsleepSprite;
}


void BattleCommandComponent__ClearCardEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  __int64 v4; // x1
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v6; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5973843 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_5973843 = 1;
  }
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  memset(&v6, 0, sizeof(v6));
  if ( !cardEffectDict )
    goto LABEL_12;
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                cardEffectDict,
                                                                                (const MethodInfo_3FFDA34 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !cardEffectDict )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_3CCF33C *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v6,
            (const MethodInfo_4169ED8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v6.fields._currentValue;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)currentValue, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v6,
    (const MethodInfo_4169ED4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
LABEL_12:
    sub_2213CDC(cardEffectDict, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    cardEffectDict,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
}


void BattleCommandComponent__DestroyEffectObject1(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x8
  UnityEngine_Object_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v2 = this;
  if ( (byte_5973823 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973823 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_24;
  if ( (effectobj->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_25;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.newMatriarl )
    {
      v5 = v2->fields.effectobj;
      if ( !v5 )
        goto LABEL_24;
      if ( (v5->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_25;
      this = (BattleCommandComponent_o *)v5->m_Items[1];
      if ( !this )
        goto LABEL_24;
      this = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !this )
        goto LABEL_24;
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
                                     this,
                                     this->klass[1].vtable._1_Finalize.methodPtr);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      UnityEngine_Object__Destroy_83459800(v7, 0);
      v2->fields.newMatriarl = 0;
    }
    v8 = v2->fields.effectobj;
    if ( v8 )
    {
      if ( (v8->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_25;
      v9 = (UnityEngine_Object_o *)v8->m_Items[1];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_83459800(v9, 0);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( ((__int64)this->fields.m_CancellationTokenSource & 0xFFFFFFFE) != 0 )
        {
          this->fields.bg = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bg, 0, v10, v11, v12, v13, v14, v15);
          return;
        }
LABEL_25:
        sub_2213CE4(this);
      }
    }
LABEL_24:
    sub_2213CDC(this, method);
  }
}


BattleCommandData_o *BattleCommandComponent__GetCommandData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


int32_t BattleCommandComponent__GetCriticalPoint(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LODWORD(data) = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0);
  return (int)data;
}


int32_t BattleCommandComponent__GetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  return BattleCommandData__getPassStarCount(data, 0);
}


UnityEngine_GameObject_o *BattleCommandComponent__GetSpawnerObj(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  Spawner_o *spawner; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v12; // s11
  float v13; // s12
  float v14; // s13
  UnityEngine_GameObject_o *v15; // x19
  BattleCommandComponent_o *v16; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  spawner = this->fields.spawner;
  if ( !byte_5969AE0 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v12 = static_fields->zeroVector.fields.x;
  v13 = static_fields->zeroVector.fields.y;
  v14 = static_fields->zeroVector.fields.z;
  if ( !byte_5969AE6 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !spawner )
    goto LABEL_12;
  v18.fields.x = v12;
  v18.fields.y = v13;
  v18.fields.z = v14;
  v15 = Spawner__Spawn_47687764(
          spawner,
          (UnityEngine_Object_o *)prefab,
          v18,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0);
  GameObjectExtensions__SetParent(v15, (UnityEngine_Component_o *)parent, 0);
  if ( !v15 )
    goto LABEL_12;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0);
  v16 = this;
  if ( !byte_5969AE0 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v16,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0),
        (this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0)) == 0) )
  {
LABEL_12:
    sub_2213CDC(this, prefab);
  }
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v19, 0);
  return v15;
}


void BattleCommandComponent__HideAndCancelCountUpFinishEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *countUpFinishEffect; // x20
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59737FA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59737FA = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_10;
  DrumRollLabel__CancelFinishCallback(criticallabel, 0, 0);
  countUpFinishEffect = (UnityEngine_Object_o *)this->fields.countUpFinishEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(countUpFinishEffect, 0, 0) )
  {
    criticallabel = (DrumRollLabel_o *)this->fields.spawner;
    if ( criticallabel )
    {
      p_countUpFinishEffect = &this->fields.countUpFinishEffect;
      Spawner__Despawn((Spawner_o *)criticallabel, *p_countUpFinishEffect, 1, 0);
      *p_countUpFinishEffect = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p_countUpFinishEffect, 0, v7, v8, v9, v10, v11, v12);
      return;
    }
LABEL_10:
    sub_2213CDC(criticallabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__HidePowerUpValueLabelActive(
        BattleCommandComponent_o *this,
        bool isCommandCardUnderIcon,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *powerUpCardValue; // x0

  if ( (byte_597383F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597383F = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCardUnderIcon);
  if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0) )
  {
    powerUpCardValue = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( powerUpCardValue )
    {
      powerUpCardValue = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(powerUpCardValue, 0);
      if ( powerUpCardValue )
      {
        if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)powerUpCardValue, 0)
          || !isCommandCardUnderIcon )
        {
          return;
        }
        powerUpCardValue = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
        if ( powerUpCardValue )
        {
          powerUpCardValue = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(powerUpCardValue, 0);
          if ( powerUpCardValue )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)powerUpCardValue, 0, 0);
            return;
          }
        }
      }
    }
    sub_2213CDC(powerUpCardValue, v6);
  }
}


void BattleCommandComponent__InitDonotActCardSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotActCardSprite; // x20
  __int64 v4; // x1
  BattleDataDefine_c *v5; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  UISprite_o *v9; // x20

  if ( (byte_59737F4 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    sub_2213A60(&StringLiteral_21104/*"icon_cardsealed_block"*/);
    byte_59737F4 = 1;
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(donotActCardSprite, 0, 0) )
  {
    v5 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v4);
      v5 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v5->static_fields->ASSET_BATTLE_COMMON;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__58532980(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320)) == 0
      || (v9 = this->fields.donotActCardSprite,
          AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !v9)
      || (UISprite__set_atlas(v9, (UIAtlas_o *)AssetStorage, 0),
          (AssetStorage = (AssetData_o *)this->fields.donotActCardSprite) == 0) )
    {
      sub_2213CDC(AssetStorage, v8);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)AssetStorage, (System_String_o *)StringLiteral_21104/*"icon_cardsealed_block"*/, 0);
  }
}


void BattleCommandComponent__InitTreasureDeviceErrorAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Object_47472752; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  Il2CppObject *Component_object; // x21
  __int64 v11; // x1
  Il2CppObject *v12; // x19

  if ( (byte_59737F3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationClip_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17492/*"anim_erroraction"*/);
    byte_59737F3 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_47472752 = AssetData__GetObject_47472752(AssetStorage, (System_String_o *)StringLiteral_17492/*"anim_erroraction"*/, 0);
  if ( Object_47472752 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_47472752->klass == UnityEngine_AnimationClip_TypeInfo )
      v9 = Object_47472752;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    this->fields.isSettedTreasureDeviceErrorAnim = 1;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( v9 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v9, 0);
        if ( Component_object )
        {
          SimpleAnimation__AddClip(
            (SimpleAnimation_o *)Component_object,
            (UnityEngine_AnimationClip_o *)v9,
            (System_String_o *)AssetStorage,
            0);
          return;
        }
      }
    }
    else
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        return;
      if ( v9 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v9, 0);
        if ( v12 )
        {
          UnityEngine_Animation__AddClip(
            (UnityEngine_Animation_o *)v12,
            (UnityEngine_AnimationClip_o *)v9,
            (System_String_o *)AssetStorage,
            0);
          return;
        }
      }
    }
LABEL_29:
    sub_2213CDC(AssetStorage, v6);
  }
}


void BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x20
  __int64 v4; // x1
  BattleDataDefine_c *v5; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_59737F2 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    sub_2213A60(&StringLiteral_21163/*"icon_error"*/);
    byte_59737F2 = 1;
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(treasureDeviceErrorSprite, 0, 0) )
  {
    v5 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v4);
      v5 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v5->static_fields->ASSET_BATTLE_COMMON;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__58532980(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320)) == 0
      || (AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)AssetStorage, 0),
          (AssetStorage = (AssetData_o *)this->fields.treasureDeviceErrorSprite) == 0) )
    {
      sub_2213CDC(AssetStorage, v8);
    }
    UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_21163/*"icon_error"*/, 0);
    BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(this, v9);
  }
}


void BattleCommandComponent__InitUnusableMarks(BattleCommandComponent_o *this, const MethodInfo *method)
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
  BattleCommandComponent_o *v26; // x0
  const MethodInfo *v27; // x3

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
  BattleCommandComponent__SetActiveComponent(v14, (UnityEngine_Component_o *)this->fields.donotStun2Sprite, 0, v15);
  BattleCommandComponent__SetActiveComponent(v16, (UnityEngine_Component_o *)this->fields.dontuseSprite, 0, v17);
  BattleCommandComponent__SetActiveComponent(v18, (UnityEngine_Component_o *)this->fields.donotActWithTypeSp, 0, v19);
  BattleCommandComponent__SetActiveComponent(v20, (UnityEngine_Component_o *)this->fields.donotPermanentSleep, 0, v21);
  BattleCommandComponent__SetActiveComponent(
    v22,
    (UnityEngine_Component_o *)this->fields.treasureDeviceErrorSprite,
    0,
    v23);
  BattleCommandComponent__SetActiveComponent(v24, (UnityEngine_Component_o *)this->fields.donotActTypeSprite, 0, v25);
  BattleCommandComponent__SetActiveComponent(v26, (UnityEngine_Component_o *)this->fields.donotActCardSprite, 0, v27);
}


void BattleCommandComponent__Initialize(BattleCommandComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UnityEngine_Object_o *spawner; // x20
  const MethodInfo *v12; // x1
  Spawner_o *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_59737F5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_59737F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = (struct Spawner_o *)Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spawner, (int32_t)Instance, v4, v5, v6, v7, v8, v9);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(spawner, 0, 0) )
  {
    v13 = this->fields.spawner;
    if ( !v13
      || (Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0),
          (v13 = this->fields.spawner) == 0) )
    {
      sub_2213CDC(v13, v12);
    }
    Spawner__Precache_47685880(v13, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0);
  }
  BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(this, v12);
  BattleCommandComponent__InitTreasureDeviceErrorAnimation(this, v14);
  BattleCommandComponent__InitDonotActCardSprite(this, v15);
}


bool BattleCommandComponent__IsAnimationBusy(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_5973848 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973848 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v7 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( Component_object )
      return SimpleAnimation__IsPlaying((SimpleAnimation_o *)Component_object, animationName, 0);
LABEL_14:
    sub_2213CDC(v8, v9);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
  if ( !v8 )
    return 0;
  if ( !v7 )
    goto LABEL_14;
  return UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v7, animationName, 0);
}


bool BattleCommandComponent__IsMaxCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  return BattleCommandData__checkCriticalMax(data, 0);
}


bool BattleCommandComponent__IsMaxViewCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x8

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    goto LABEL_6;
  criticalObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(criticalObject, 0);
  if ( ((unsigned __int8)criticalObject & 1) != 0 )
  {
    criticallabel = this->fields.criticallabel;
    if ( criticallabel )
      return criticallabel->fields.nowvalue == 100;
LABEL_6:
    sub_2213CDC(criticalObject, method);
  }
  return 0;
}


bool BattleCommandComponent__IsValidVoiceType(
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
  if ( (byte_597381A & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (BattleCommandComponent_o *)sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_597381A = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData )
    goto LABEL_11;
  v6 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, voiceTypeId);
  *(_QWORD *)&v13.fields.currentCryptoKey = v6;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  this = (BattleCommandComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v13, 0);
  if ( !v4->fields.svtData
    || (v8 = (int)this,
        this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(v4->fields.svtData, 1, 0),
        (v9 = v4->fields.svtData) == 0) )
  {
LABEL_11:
    sub_2213CDC(this, voiceTypeId);
  }
  v10 = (int)this;
  overwriteSvtVoiceId = v9->fields.overwriteSvtVoiceId;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, voiceTypeId);
  return ServantAssetLoadManager__checkBattleVoice(v8, v10, overwriteSvtVoiceId, voiceTypeId, 0, 0);
}


void BattleCommandComponent__OnClickEvent(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v5; // x19
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5973817 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_25434/*"touchCommandCard"*/);
    byte_5973817 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    data = this->fields.data;
    if ( data )
    {
      v5 = this->fields.target;
      markindex = data->fields.markindex;
      v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &markindex);
      if ( !v5 )
        sub_2213CDC(v6, v7);
      UnityEngine_GameObject__SendMessage_83438088(v5, (System_String_o *)StringLiteral_25434/*"touchCommandCard"*/, v6, 0);
    }
  }
}


void BattleCommandComponent__OnLongPressEvent(
        BattleCommandComponent_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5973818 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_8864/*"LongPress"*/);
    byte_5973818 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    data = this->fields.data;
    if ( data )
    {
      v6 = this->fields.target;
      markindex = data->fields.markindex;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &markindex);
      if ( !v6 )
        sub_2213CDC(v7, v8);
      UnityEngine_GameObject__SendMessage_83438088(v6, (System_String_o *)StringLiteral_8864/*"LongPress"*/, v7, 0);
    }
  }
}


void BattleCommandComponent__PlayAnimation(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        float simpleAnimationTime,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v11; // x1
  UnityEngine_AnimationState_c *klass; // x8
  UnityEngine_AnimationState_o *v13; // x21
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0

  if ( (byte_5973803 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_5973803 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v9 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, 0, 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, 1, 0);
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v9, animationName, 0);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, simpleAnimationTime, 0);
        UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v9, animationName, 0);
        return;
      }
    }
LABEL_22:
    sub_2213CDC(Item, v11);
  }
  if ( !Component_object )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
  Item = (UnityEngine_AnimationState_o *)SimpleAnimation__get_Item(
                                           (SimpleAnimation_o *)Component_object,
                                           animationName,
                                           0);
  if ( !Item )
    goto LABEL_22;
  klass = Item->klass;
  v13 = Item;
  v14 = *(unsigned __int16 *)&Item->klass->_2.rank;
  if ( *(_WORD *)&Item->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_12;
    }
    v16 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
  }
  else
  {
LABEL_12:
    v16 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_AnimationState_o *, _QWORD, float))v16)(
    v13,
    *(_QWORD *)(v16 + 8),
    simpleAnimationTime);
  SimpleAnimation__Play_78552168((SimpleAnimation_o *)Component_object, animationName, 0);
}


System_Collections_IEnumerator_o *BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  BattleCommandComponent__PlayStarSe_d__165_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5973810 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent__PlayStarSe_d__165_TypeInfo);
    byte_5973810 = 1;
  }
  v4 = (BattleCommandComponent__PlayStarSe_d__165_o *)sub_2213CCC(BattleCommandComponent__PlayStarSe_d__165_TypeInfo);
  BattleCommandComponent__PlayStarSe_d__165___ctor(v4, 0, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
  v4->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v4;
}


void BattleCommandComponent__PlayTDErrorAnimation(
        BattleCommandComponent_o *this,
        System_Action_o *tdErrorAfterAction,
        const MethodInfo *method)
{
  bool IsAnimationBusy; // w22
  struct System_Action_o **p_tdErrorAfterAction; // x21
  System_Delegate_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w8
  System_Action_c *v15; // x1
  __int64 v16; // x1
  BattleServantData_o *svtData; // x0
  struct BattleServantData_o *v18; // x8
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2

  if ( (byte_5973849 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&StringLiteral_24454/*"se_ba41"*/);
    sub_2213A60(&StringLiteral_17492/*"anim_erroraction"*/);
    sub_2213A60(&StringLiteral_17490/*"anim_commandfloat"*/);
    byte_5973849 = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_17490/*"anim_commandfloat"*/, method);
  p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
  v7 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.tdErrorAfterAction,
         (System_Delegate_o *)tdErrorAfterAction,
         0);
  v14 = (int)v7;
  if ( !v7 )
    goto LABEL_7;
  v15 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (*p_tdErrorAfterAction = (struct System_Action_o *)v7, (System_Action_c *)v7->klass != v15) )
  {
    sub_221405C(v7, v15, v8);
LABEL_7:
    *p_tdErrorAfterAction = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tdErrorAfterAction, v14, v8, v9, v10, v11, v12, v13);
  if ( this->fields.isSettedTreasureDeviceErrorAnim && IsAnimationBusy )
  {
    svtData = this->fields.svtData;
    if ( !svtData
      || (BattleServantData__AddTDErrorTouchCount(svtData, 0), (v18 = this->fields.svtData) == 0)
      || (svtData = (BattleServantData_o *)v18->fields.deckSvt) == 0 )
    {
      sub_2213CDC(svtData, v16);
    }
    TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                 (BattleDeckServantData_o *)svtData,
                                 (System_String_o *)StringLiteral_24454/*"se_ba41"*/,
                                 0);
    BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v20);
    BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_17492/*"anim_erroraction"*/, 0.0, v21);
  }
  else if ( *p_tdErrorAfterAction )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))(*p_tdErrorAfterAction)->fields.invoke_impl)(
      (*p_tdErrorAfterAction)->fields.method_code,
      (*p_tdErrorAfterAction)->fields.method);
  }
}


System_String_o *BattleCommandComponent__PlayTDErrorVoiceSe(
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
  __int64 v13; // x1
  BattleCommandComponent_c *v14; // x8
  int32_t v15; // w24
  struct BattleServantData_o *v16; // x8
  System_String_o *v17; // x19
  int32_t overwriteSvtVoiceId; // w21
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0
  BattleCommandComponent_c *v21; // x0
  __int64 v22; // x1
  BattleCommandComponent_c *v23; // x0
  _QWORD *v24; // x8
  System_Reflection_MethodBase_o *v25; // x0
  int32_t v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5973846 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
    sub_2213A60(&BattleCommandComponent_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_2213A60(&StringLiteral_26595/*"{0}_{1:D0}_{2}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973846 = 1;
  }
  v8 = 0;
  if ( !System_String__IsNullOrEmpty(voiceSeId, 0) )
  {
    svtData = (BattleServantData_o *)BattleCommandComponent_TypeInfo;
    if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v7);
    if ( !voiceSeId )
      goto LABEL_27;
    if ( System_String__StartsWith(voiceSeId, BattleCommandComponent_TypeInfo->static_fields->voiceIdPrefix, 0) )
    {
      svtData = this->fields.svtData;
      if ( svtData )
      {
        svtData = (BattleServantData_o *)BattleServantData__getSvtId(svtData, 0);
        if ( this->fields.svtData )
        {
          v10 = (int)svtData;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0);
          svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( svtData )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                            (ServantAssetLoadManager_o *)svtData,
                            v10,
                            DispLimitCount,
                            0);
            v14 = BattleCommandComponent_TypeInfo;
            v15 = VoicePrefix;
            if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v13);
              v14 = BattleCommandComponent_TypeInfo;
            }
            svtData = (BattleServantData_o *)System_String__Replace_75703400(
                                               voiceSeId,
                                               v14->static_fields->voiceIdPrefix,
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0);
            v16 = this->fields.svtData;
            if ( v16 )
            {
              v17 = (System_String_o *)svtData;
              overwriteSvtVoiceId = v16->fields.overwriteSvtVoiceId;
              if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7);
              ServantAssetLoadManager__playBattleVoice(
                v10,
                DispLimitCount,
                overwriteSvtVoiceId,
                v17,
                1.0,
                0,
                voiceUniqueId,
                0,
                0);
              v28 = v10;
              v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v28);
              v27 = v15;
              v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v27);
              return System_String__Format_75697948(
                       (System_String_o *)StringLiteral_26595/*"{0}_{1:D0}_{2}"*/,
                       v19,
                       v20,
                       (Il2CppObject *)v17,
                       0);
            }
          }
        }
      }
LABEL_27:
      sub_2213CDC(svtData, v7);
    }
    v21 = BattleCommandComponent_TypeInfo;
    if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v7);
      v21 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v21->static_fields->seIdPrefix, 0) )
    {
      v23 = BattleCommandComponent_TypeInfo;
      if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v22);
        v23 = BattleCommandComponent_TypeInfo;
      }
      v8 = System_String__Replace_75703400(
             voiceSeId,
             v23->static_fields->seIdPrefix,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      v24 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_2213A78(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v25 = (System_Reflection_MethodBase_o *)sub_2213A44(v24, v24[4]);
      OverwriteAssetSoundName__PlaySe(v25, v8, 0, 0);
    }
    else
    {
      return voiceSeId;
    }
  }
  return v8;
}


void BattleCommandComponent__PlayVoiceSe(BattleCommandComponent_o *this, float waitSeconds, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  const MethodInfo *v6; // x3
  struct BattleCommandData_o *data; // x8
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x1

  svtData = this->fields.svtData;
  if ( !svtData
    || (svtData = (BattleServantData_o *)BattleServantData__GetCurrentTDErrorStatusVoiceSe(svtData, 0),
        (data = this->fields.data) == 0) )
  {
    sub_2213CDC(svtData, method);
  }
  v8 = BattleCommandComponent__PlayTDErrorVoiceSe(this, (System_String_o *)svtData, data->fields.uniqueId, v6);
  v10 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v10, 0);
}


void BattleCommandComponent__ReleaseNobleGaugeEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nobleGaugeEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5973807 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&iTween_TypeInfo);
    byte_5973807 = 1;
  }
  nobleGaugeEffect = (UnityEngine_Object_o *)this->fields.nobleGaugeEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nobleGaugeEffect, 0, 0) )
  {
    v5 = this->fields.nobleGaugeEffect;
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v4);
    iTween__Stop_75402912(v5, 0);
    v7 = (UnityEngine_Object_o *)this->fields.nobleGaugeEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    UnityEngine_Object__Destroy_83459800(v7, 0);
    this->fields.nobleGaugeEffect = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nobleGaugeEffect, 0, v8, v9, v10, v11, v12, v13);
  }
}


void BattleCommandComponent__ResetBoostedCriticalRate(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_2213CDC(0, v3);
  if ( UnityEngine_GameObject__get_activeInHierarchy(criticalObject, 0) )
    BattleCommandComponent__HideAndCancelCountUpFinishEffect(this, v5);
  BattleCommandComponent__updateCount(this, 1, v6);
}


void BattleCommandComponent__ResetBoostedCriticalRateLocal(BattleCommandComponent_o *this, const MethodInfo *method)
{
  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
}


void BattleCommandComponent__ResetCardBuffIconAlphaAnim(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  int v5; // w8
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_597383B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597383B = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  this->fields.cardBuffListIndex = 0;
  v5 = *(&v3->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0, 0) )
  {
    v7 = this->fields.specialCardBuffIcon;
    if ( !v7 )
      sub_2213CDC(0, v6);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))v7->klass->vtable._8_set_alpha.methodPtr)(
      v7,
      v7->klass->vtable._8_set_alpha.method,
      1.0);
  }
  this->fields.isChangedBuffIcon = 0;
}


void BattleCommandComponent__ResetCriticalLabelColor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  void *criticallabel; // x0
  int v4; // w8
  void *v5; // x20
  unsigned int v6; // w23
  UILabel_o *v7; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_59737FC & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
    byte_59737FC = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____91731968);
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
        sub_2213CE4(criticallabel);
      criticallabel = BattleCommandComponent_TypeInfo;
      v7 = (UILabel_o *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, method);
      if ( !v7 )
        break;
      UILabel__set_gradientTop(v7, BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault, 0);
      UILabel__set_gradientBottom(
        v7,
        BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
        0);
      v4 = *((_DWORD *)v5 + 6);
      if ( (int)++v6 >= v4 )
        goto LABEL_12;
    }
LABEL_17:
    sub_2213CDC(criticallabel, method);
  }
LABEL_12:
  criticallabel = BattleCommandComponent_TypeInfo;
  criticalPercentLabel = this->fields.criticalPercentLabel;
  if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, method);
  if ( !criticalPercentLabel )
    goto LABEL_17;
  UILabel__set_gradientTop(
    criticalPercentLabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault,
    0);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_17;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
    0);
}


void BattleCommandComponent__ResetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  BattleCommandData__ResetPassStar(data, 0);
}


void BattleCommandComponent__SetActiveComponent(
        BattleCommandComponent_o *this,
        UnityEngine_Component_o *component,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_5973830 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973830 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, component);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)component, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !component || (gameObject = UnityEngine_Component__get_gameObject(component, 0)) == 0 )
      sub_2213CDC(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, value, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetActiveSpecialCardBuffIcon(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_5973838 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973838 = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetCardBuffAlphaAnimFlag(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  v4 = active;
  if ( (byte_5973837 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973837 = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  this->fields.isCardBuffAlphaAnim = v4;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, active);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


void BattleCommandComponent__SetCardColor(
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
  __int64 v16; // x1
  UnityEngine_Object_o *powerUpCardIcon; // x20
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_597381E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597381E = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.facetex;
    if ( !v10 )
      goto LABEL_29;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color(v10, v18, 0);
  }
  bg = (UnityEngine_Object_o *)this->fields.bg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(bg, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.bg;
    if ( !v10 )
      goto LABEL_29;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v10, v19, 0);
  }
  codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(codeSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.codeSprite;
    if ( !v10 )
      goto LABEL_29;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v10, v20, 0);
  }
  codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(codeTexture, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.codeTexture;
    if ( !v10 )
      goto LABEL_29;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color(v10, v21, 0);
  }
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  BattleCommandComponent__SetCommandCodeActive(this, v22, 0, v14);
  v23.fields.r = r;
  v23.fields.g = g;
  v23.fields.b = b;
  v23.fields.a = a;
  BattleCommandComponent__SetCommandAssistActive(this, v23, 0, v15);
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( v10 )
    {
      v24.fields.b = b;
      v24.fields.a = a;
      v24.fields.r = r;
      v24.fields.g = g;
      UIWidget__set_color(v10, v24, 0);
      return;
    }
LABEL_29:
    sub_2213CDC(v10, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetCommandAssistActive(
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
  __int64 v11; // x1
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  __int64 v13; // x1
  void *buffData; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *assistSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v19; // w8
  int v20; // w10
  _DWORD *v21; // x21
  struct BattleCommandData_o *v22; // x11
  int32_t v23; // w21
  int v24; // t1
  UILabel_o *v25; // x22
  __int64 v26; // x1
  UILabel_o *v27; // x21
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_5973820 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2828/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/);
    byte_5973820 = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFirst);
    if ( !UnityEngine_Object__op_Equality(assistChargeTurnLabel, 0, 0) )
    {
      assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( !UnityEngine_Object__op_Equality(assistRemainingTurnLabel, 0, 0) )
      {
        buffData = this->fields.assistChargeTurnLabel;
        if ( !buffData )
          goto LABEL_48;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0);
        buffData = this->fields.assistRemainingTurnLabel;
        if ( !buffData )
          goto LABEL_48;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0);
        assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        if ( !UnityEngine_Object__op_Equality(assistSprite, 0, 0) )
        {
          buffData = this->fields.assistSprite;
          if ( !buffData )
            goto LABEL_48;
          v28.fields.r = r;
          v28.fields.g = g;
          v28.fields.b = b;
          v28.fields.a = a;
          UIWidget__set_color((UIWidget_o *)buffData, v28, 0);
          data = this->fields.data;
          if ( data )
          {
            if ( BattleCommandData__IsEnableCommandAssist(data, 0) )
            {
              svtData = this->fields.svtData;
              if ( svtData )
              {
                buffData = svtData->fields.buffData;
                if ( !buffData )
                  goto LABEL_48;
                buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0);
                if ( !buffData )
                  goto LABEL_48;
                v19 = *((_DWORD *)buffData + 6);
                if ( v19 >= 1 )
                {
                  v20 = 0;
                  while ( 1 )
                  {
                    if ( v19 == v20 )
                      sub_2213CE4(buffData);
                    v21 = (_DWORD *)*((_QWORD *)buffData + v20 + 4);
                    if ( !v21 )
                      goto LABEL_48;
                    v22 = this->fields.data;
                    if ( !v22 )
                      goto LABEL_48;
                    if ( v21[87] == v22->fields.commandAssistId && v21[88] == v22->fields.servantCardIdsIndex )
                      break;
                    if ( (v19 & ~(v19 >> 31)) == ++v20 )
                      goto LABEL_41;
                  }
                  v24 = v21[28];
                  v23 = (_DWORD)v21 + 112;
                  if ( v24 >= 1 )
                  {
                    buffData = this->fields.assistSprite;
                    if ( !buffData )
                      goto LABEL_48;
                    v29.fields.r = 0.5;
                    v29.fields.g = 0.5;
                    v29.fields.b = 0.5;
                    v29.fields.a = 1.0;
                    UIWidget__set_color((UIWidget_o *)buffData, v29, 0);
                    buffData = this->fields.assistChargeTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0);
                    buffData = this->fields.assistRemainingTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0);
                    v25 = this->fields.assistChargeTurnLabel;
                    buffData = System_Int32__ToString(v23, 0);
                    if ( !v25 )
                      goto LABEL_48;
                    UILabel__set_text(v25, (System_String_o *)buffData, 0);
                    v27 = this->fields.assistRemainingTurnLabel;
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
                    buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2828/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0);
                    if ( !v27 )
                      goto LABEL_48;
                    UILabel__set_text(v27, (System_String_o *)buffData, 0);
                  }
                }
LABEL_41:
                if ( isFirst )
                {
                  buffData = this->fields.assistChargeTurnLabel;
                  if ( buffData )
                  {
                    buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0);
                    if ( buffData )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0);
                      buffData = this->fields.assistRemainingTurnLabel;
                      if ( buffData )
                      {
                        buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0);
                        if ( buffData )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0);
                          return;
                        }
                      }
                    }
                  }
LABEL_48:
                  sub_2213CDC(buffData, v13);
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
void BattleCommandComponent__SetCommandAssistView(
        BattleCommandComponent_o *this,
        int32_t commandAssistId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *assistSprite; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t EventId; // w21
  UISprite_o *v11; // x20
  __int64 v12; // x1
  System_String_o *v13; // x21

  if ( (byte_5973829 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973829 = 1;
  }
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&commandAssistId);
  if ( !UnityEngine_Object__op_Equality(assistSprite, 0, 0) )
  {
    Master_object = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
    if ( commandAssistId <= 0 )
    {
      if ( !Master_object )
        goto LABEL_21;
    }
    else
    {
      if ( !Master_object )
        goto LABEL_21;
      UnityEngine_Behaviour__set_enabled(Master_object, 1, 0);
      if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v8);
      EventId = BattleData__GetEventId(0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
      Master_object = (UnityEngine_Behaviour_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( !Master_object )
        goto LABEL_21;
      Master_object = (UnityEngine_Behaviour_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                   (EventCommandAssistMaster_o *)Master_object,
                                                   EventId,
                                                   commandAssistId,
                                                   -1,
                                                   0,
                                                   0);
      if ( !Master_object )
        goto LABEL_21;
      v11 = this->fields.assistSprite;
      v13 = System_Int32__ToString((int)Master_object + 48, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
      if ( AtlasManager__SetEventSprite(v11, v13, 0) )
        return;
      Master_object = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
      if ( !Master_object )
LABEL_21:
        sub_2213CDC(Master_object, v6);
    }
    UnityEngine_Behaviour__set_enabled(Master_object, 0, 0);
  }
}


void BattleCommandComponent__SetCommandCardTypeChange(
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
void BattleCommandComponent__SetCommandCodeActive(
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
  __int64 v11; // x1
  UnityEngine_Object_o *remainingTurnLabel; // x21
  __int64 v13; // x1
  void *buffData; // x0
  __int64 v15; // x1
  int v16; // w8
  UnityEngine_Object_o *codeTexture; // x21
  UnityEngine_Object_o *codeSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v21; // w8
  int v22; // w10
  __int64 v23; // x21
  struct BattleCommandData_o *v24; // x11
  int32_t v25; // w21
  int v26; // t1
  UILabel_o *v27; // x22
  __int64 v28; // x1
  UILabel_o *v29; // x21
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_597381F & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2828/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/);
    byte_597381F = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFirst);
    if ( !UnityEngine_Object__op_Equality(chargeTurnLabel, 0, 0) )
    {
      remainingTurnLabel = (UnityEngine_Object_o *)this->fields.remainingTurnLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( !UnityEngine_Object__op_Equality(remainingTurnLabel, 0, 0) )
      {
        buffData = this->fields.chargeTurnLabel;
        if ( !buffData )
          goto LABEL_56;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0);
        buffData = this->fields.remainingTurnLabel;
        if ( !buffData )
          goto LABEL_56;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0);
        v16 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
        if ( this->fields.isCodeTextureView )
        {
          codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
          if ( !v16 )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
          if ( UnityEngine_Object__op_Equality(codeTexture, 0, 0) )
            return;
          buffData = this->fields.codeTexture;
          if ( !buffData )
            goto LABEL_56;
        }
        else
        {
          codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
          if ( !v16 )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
          if ( UnityEngine_Object__op_Equality(codeSprite, 0, 0) )
            return;
          buffData = this->fields.codeSprite;
          if ( !buffData )
            goto LABEL_56;
        }
        v30.fields.r = r;
        v30.fields.g = g;
        v30.fields.b = b;
        v30.fields.a = a;
        UIWidget__set_color((UIWidget_o *)buffData, v30, 0);
        data = this->fields.data;
        if ( data )
        {
          if ( BattleCommandData__IsEnableCommandCode(data, 0) )
          {
            svtData = this->fields.svtData;
            if ( svtData )
            {
              buffData = svtData->fields.buffData;
              if ( !buffData )
                goto LABEL_56;
              buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0);
              if ( !buffData )
                goto LABEL_56;
              v21 = *((_DWORD *)buffData + 6);
              if ( v21 >= 1 )
              {
                v22 = 0;
                while ( 1 )
                {
                  if ( v21 == v22 )
                    sub_2213CE4(buffData);
                  v23 = *((_QWORD *)buffData + v22 + 4);
                  if ( !v23 )
                    goto LABEL_56;
                  v24 = this->fields.data;
                  if ( !v24 )
                    goto LABEL_56;
                  if ( *(_QWORD *)(v23 + 88) == v24->fields.userCommandCodeId )
                    break;
                  if ( (v21 & ~(v21 >> 31)) == ++v22 )
                    goto LABEL_49;
                }
                v26 = *(_DWORD *)(v23 + 112);
                v25 = v23 + 112;
                if ( v26 >= 1 )
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
                  v31.fields.r = 0.5;
                  v31.fields.g = 0.5;
                  v31.fields.b = 0.5;
                  v31.fields.a = 1.0;
                  UIWidget__set_color((UIWidget_o *)buffData, v31, 0);
                  buffData = this->fields.chargeTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0);
                  buffData = this->fields.remainingTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0);
                  v27 = this->fields.chargeTurnLabel;
                  buffData = System_Int32__ToString(v25, 0);
                  if ( !v27 )
                    goto LABEL_56;
                  UILabel__set_text(v27, (System_String_o *)buffData, 0);
                  v29 = this->fields.remainingTurnLabel;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
                  buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2828/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0);
                  if ( !v29 )
                    goto LABEL_56;
                  UILabel__set_text(v29, (System_String_o *)buffData, 0);
                }
              }
LABEL_49:
              if ( isFirst )
              {
                buffData = this->fields.chargeTurnLabel;
                if ( buffData )
                {
                  buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0);
                  if ( buffData )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0);
                    buffData = this->fields.remainingTurnLabel;
                    if ( buffData )
                    {
                      buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0);
                      if ( buffData )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0);
                        return;
                      }
                    }
                  }
                }
LABEL_56:
                sub_2213CDC(buffData, v13);
              }
            }
          }
        }
      }
    }
  }
}


void BattleCommandComponent__SetCommandCodeMode(
        BattleCommandComponent_o *this,
        bool isTextureMode,
        const MethodInfo *method)
{
  this->fields.isCodeTextureView = isTextureMode;
}


void BattleCommandComponent__SetCommandCodeView(
        BattleCommandComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  __int64 v7; // x1
  UITexture_o *v8; // x21
  __int64 v9; // x1
  struct UITexture_o *Manager__loadCommandCodeTexture; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *Entity; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x20
  void *monitor; // x21
  int32_t v21; // w20
  UISprite_o *codeSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_5973827 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973827 = 1;
  }
  if ( userCommandCodeId < 1 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
        return;
      }
    }
    goto LABEL_29;
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( this->fields.isCodeTextureView )
  {
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
        v8 = this->fields.codeTexture;
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7);
        Manager__loadCommandCodeTexture = ServantAssetLoadManager__loadCommandCodeTexture(v8, userCommandCodeId, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Manager__loadCommandCodeTexture, 0, 0) )
        {
          this->fields.codeTexture = Manager__loadCommandCodeTexture;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.codeTexture,
            (int32_t)Manager__loadCommandCodeTexture,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
        }
        return;
      }
    }
LABEL_29:
    sub_2213CDC(codeTexture, v5);
  }
  if ( !codeTexture )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_29;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0);
  codeTexture = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !codeTexture )
    goto LABEL_29;
  codeTexture = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)codeTexture,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !codeTexture )
    goto LABEL_29;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)codeTexture,
             userCommandCodeId,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    *(_QWORD *)&v23.fields.currentCryptoKey = klass;
    *(_QWORD *)&v23.fields.fakeValue = monitor;
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
  }
  else
  {
    v21 = -1;
  }
  codeSprite = this->fields.codeSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, v21, 0);
}


void BattleCommandComponent__SetCommandCodeView_53605208(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  __int64 v7; // x1
  UITexture_o *v8; // x21
  __int64 v9; // x1
  struct UITexture_o *Manager__loadCommandCodeTexture_47674612; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UISprite_o *codeSprite; // x19

  if ( (byte_5973828 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_5973828 = 1;
  }
  if ( commandCodeId <= 0 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
LABEL_22:
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
        return;
      }
    }
LABEL_23:
    sub_2213CDC(codeTexture, v5);
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( this->fields.isCodeTextureView )
  {
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
        v8 = this->fields.codeTexture;
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7);
        Manager__loadCommandCodeTexture_47674612 = ServantAssetLoadManager__loadCommandCodeTexture_47674612(
                                                     v8,
                                                     commandCodeId,
                                                     0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Manager__loadCommandCodeTexture_47674612, 0, 0) )
        {
          this->fields.codeTexture = Manager__loadCommandCodeTexture_47674612;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.codeTexture,
            (int32_t)Manager__loadCommandCodeTexture_47674612,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          return;
        }
        codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
        if ( codeTexture )
          goto LABEL_22;
      }
    }
    goto LABEL_23;
  }
  if ( !codeTexture )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0);
  codeSprite = this->fields.codeSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, commandCodeId, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetCommandEffectActive(
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
  if ( (byte_5973845 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973845 = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( LODWORD(effectobj->max_length) <= effectType )
LABEL_14:
    sub_2213CE4(this);
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[effectType];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&effectType);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.effectobj;
    if ( !v9 )
      goto LABEL_13;
    if ( LODWORD(v9->max_length) > effectType )
    {
      this = (BattleCommandComponent_o *)v9->m_Items[effectType];
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, active, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(this, *(_QWORD *)&effectType);
    }
    goto LABEL_14;
  }
}


void BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
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
    if ( BattleServantData__get_isTreasureDeveiceError(svtData, 0) )
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


void BattleCommandComponent__SetDonotPermanentSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotPermanentSleep; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x19

  if ( (byte_5973835 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21211/*"icon_sleep_2"*/);
    byte_5973835 = 1;
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(donotPermanentSleep, 0, 0) )
  {
    v5 = this->fields.donotPermanentSleep;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
    AtlasManager__SetEventSprite(v5, (System_String_o *)StringLiteral_21211/*"icon_sleep_2"*/, 0);
  }
}


void BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotsleepSprite; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x19

  if ( (byte_5973834 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21210/*"icon_sleep"*/);
    byte_5973834 = 1;
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(donotsleepSprite, 0, 0) )
  {
    v5 = this->fields.donotsleepSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
    AtlasManager__SetEventSprite(v5, (System_String_o *)StringLiteral_21210/*"icon_sleep"*/, 0);
  }
}


void BattleCommandComponent__SetDonotStun2Sprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotStun2Sprite; // x20
  __int64 v4; // x1
  BattleCommandComponent_c *v5; // x0
  UISprite_o *v6; // x19
  System_String_o *STUN2_ICON; // x20

  if ( (byte_5973836 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BattleCommandComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973836 = 1;
  }
  donotStun2Sprite = (UnityEngine_Object_o *)this->fields.donotStun2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(donotStun2Sprite, 0, 0) )
  {
    v5 = BattleCommandComponent_TypeInfo;
    v6 = this->fields.donotStun2Sprite;
    if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v4);
      v5 = BattleCommandComponent_TypeInfo;
    }
    STUN2_ICON = v5->static_fields->STUN2_ICON;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
    AtlasManager__SetEventSprite(v6, STUN2_ICON, 0);
  }
}


void BattleCommandComponent__SetDownloadEventSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  BattleCommandComponent__SetDonotSleepSprite(this, method);
  BattleCommandComponent__SetUnusableShortageStarSprite(this, v3);
  BattleCommandComponent__SetDonotPermanentSleepSprite(this, v4);
  BattleCommandComponent__SetDonotStun2Sprite(this, v5);
}


void BattleCommandComponent__SetFixedCommandCardBuff(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  BattleCommandComponent__SetSpecialCommandCardBuffData(this, 131, active, turn, addOrder, v5);
}


void BattleCommandComponent__SetIsInBattle(BattleCommandComponent_o *this, bool value, const MethodInfo *method)
{
  this->fields.isInBattle = value;
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetLabelActive(BattleCommandComponent_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Component_o *chargeTurnLabel; // x0

  chargeTurnLabel = (UnityEngine_Component_o *)this->fields.chargeTurnLabel;
  if ( !chargeTurnLabel
    || (chargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(chargeTurnLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)chargeTurnLabel, active, 0),
        (chargeTurnLabel = (UnityEngine_Component_o *)this->fields.remainingTurnLabel) == 0)
    || (chargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(chargeTurnLabel, 0)) == 0 )
  {
    sub_2213CDC(chargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)chargeTurnLabel, active, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetLabelAssistActive(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *assistChargeTurnLabel; // x0

  assistChargeTurnLabel = (UnityEngine_Component_o *)this->fields.assistChargeTurnLabel;
  if ( !assistChargeTurnLabel
    || (assistChargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             assistChargeTurnLabel,
                                                             0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0),
        (assistChargeTurnLabel = (UnityEngine_Component_o *)this->fields.assistRemainingTurnLabel) == 0)
    || (assistChargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             assistChargeTurnLabel,
                                                             0)) == 0 )
  {
    sub_2213CDC(assistChargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetLockInfo(BattleCommandComponent_o *this, bool isLock, const MethodInfo *method)
{
  UnityEngine_Object_o *LockInfo; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_597382D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597382D = 1;
  }
  LockInfo = (UnityEngine_Object_o *)this->fields.LockInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isLock);
  if ( UnityEngine_Object__op_Inequality(LockInfo, 0, 0) )
  {
    v7 = this->fields.LockInfo;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isLock, 0);
  }
}


void BattleCommandComponent__SetNobleGaugeEffect(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.nobleGaugeEffect = effect;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nobleGaugeEffect,
    (int32_t)effect,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetPowerUpCardIcon(
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
  char v13; // w19
  bool v14; // w1

  if ( (byte_597382F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597382F = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&powerUpValue);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(powerUpCardIcon, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v12 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v12 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0);
        if ( gameObject )
        {
          v14 = 0;
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetCommandCardIconImage(
                                                 v12,
                                                 powerUpValue,
                                                 iconType,
                                                 isBright,
                                                 0);
      if ( this->fields.powerUpCardIcon )
      {
        v13 = (char)gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0);
        if ( gameObject )
        {
          v14 = v13 & 1;
LABEL_15:
          UnityEngine_GameObject__SetActive(gameObject, v14, 0);
          return;
        }
      }
    }
    sub_2213CDC(gameObject, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetPowerUpCardValue(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        const MethodInfo *method)
{
  UnityEngine_Object_o *powerUpCardValue; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597382E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_866/*"+{0:#,0}"*/);
    byte_597382E = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&powerUpValue);
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( powerUpValue <= 0 )
    {
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          return;
        }
      }
    }
    else if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v8 = this->fields.powerUpCardValue;
        v10 = powerUpValue;
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v10);
        gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_866/*"+{0:#,0}"*/, v9, 0);
        if ( v8 )
        {
          UILabel__set_text(v8, (System_String_o *)gameObject, 0);
          return;
        }
      }
    }
    sub_2213CDC(gameObject, v6);
  }
}


void BattleCommandComponent__SetSpecialCommandCardBuffData(
        BattleCommandComponent_o *this,
        int32_t buffType,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass230_0_o *v11; // x24
  void *Index; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *specialCardBuffList; // x25
  System_Predicate_object__o *v15; // x23
  int32_t v16; // w23
  System_Collections_Generic_List_object__o *v17; // x22
  _DWORD *v18; // x8
  int32_t v19; // w24
  BattleCommandComponent_CardBuffData_o *v20; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_object__o *v31; // x20
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__230_1; // x21
  Il2CppObject *v34; // x22
  struct BattleCommandComponent___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  const MethodInfo *v42; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v43; // x8

  if ( (byte_5973839 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent_CardBuffData_TypeInfo);
    sub_2213A60(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_2213A60(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_2213A60(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__230_1__);
    sub_2213A60(&Method_BattleCommandComponent___c__DisplayClass230_0__SetSpecialCommandCardBuffData_b__0__);
    sub_2213A60(&BattleCommandComponent___c__DisplayClass230_0_TypeInfo);
    sub_2213A60(&BattleCommandComponent___c_TypeInfo);
    byte_5973839 = 1;
  }
  v11 = (BattleCommandComponent___c__DisplayClass230_0_o *)sub_2213CCC(BattleCommandComponent___c__DisplayClass230_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass230_0___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_29;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  v11->fields.buffType = buffType;
  v15 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BattleCommandComponent___c__DisplayClass230_0__SetSpecialCommandCardBuffData_b__0__,
    0);
  if ( !specialCardBuffList )
    goto LABEL_29;
  Index = (void *)System_Collections_Generic_List_object___FindIndex(
                    specialCardBuffList,
                    (System_Predicate_T__o *)v15,
                    (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  v16 = (int)Index;
  if ( active )
  {
    v17 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
    if ( ((unsigned int)Index & 0x80000000) != 0 )
    {
      v19 = v11->fields.buffType;
      v20 = (BattleCommandComponent_CardBuffData_o *)sub_2213CCC(BattleCommandComponent_CardBuffData_TypeInfo);
      BattleCommandComponent_CardBuffData___ctor(v20, v19, turn, addOrder, 0);
      if ( !v17 )
        goto LABEL_29;
      items = v17->fields._items;
      v28 = Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v17->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v20,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v20;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v20, v21, v22, v23, v24, v25, v26);
      }
    }
    else
    {
      if ( !v17 )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList,
                (int32_t)Index,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
      if ( !Index )
        goto LABEL_29;
      v18 = Index;
      Index = this->fields.specialCardBuffList;
      v18[5] = turn;
      if ( !Index )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Index,
                v16,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
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
      (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
  v31 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  Index = BattleCommandComponent___c_TypeInfo;
  if ( !*(&BattleCommandComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo, v13);
    Index = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)Index + 23);
  _9__230_1 = (System_Comparison_T__o *)static_fields->__9__230_1;
  if ( !_9__230_1 )
  {
    if ( !*((_DWORD *)Index + 57) )
    {
      j_il2cpp_runtime_class_init_0(Index, v13);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__230_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__230_1,
      v34,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__230_1__,
      0);
    v35 = BattleCommandComponent___c_TypeInfo->static_fields;
    v35->__9__230_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)_9__230_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->__9__230_1, (int32_t)_9__230_1, v36, v37, v38, v39, v40, v41);
  }
  if ( !v31
    || (System_Collections_Generic_List_object___Sort_71849708(
          v31,
          _9__230_1,
          (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__),
        (v43 = this->fields.specialCardBuffList) == 0) )
  {
LABEL_29:
    sub_2213CDC(Index, v13);
  }
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v43->fields._size > 0, v42);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetTreasureDeviceTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x22
  __int64 v8; // x1
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x22
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v12; // x1
  UILabel_o *v13; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597382C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2870/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/);
    byte_597382C = 1;
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
  if ( !UnityEngine_Object__op_Equality(nowTreasureDeviceTypeImage, 0, 0) )
  {
    restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( !UnityEngine_Object__op_Equality(restTreasureDeviceChangeTurnLabel, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.nowTreasureDeviceTypeImage;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0);
          if ( !active )
            return;
          gameObject = (UnityEngine_Component_o *)this->fields.restTreasureDeviceChangeTurnLabel;
          if ( turn < 0 )
          {
            if ( gameObject )
            {
              gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
                return;
              }
            }
          }
          else if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              v13 = this->fields.restTreasureDeviceChangeTurnLabel;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
              v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2870/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, 0);
              v16 = turn;
              v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
              gameObject = (UnityEngine_Component_o *)System_String__Format(v14, v15, 0);
              if ( v13 )
              {
                UILabel__set_text(v13, (System_String_o *)gameObject, 0);
                return;
              }
            }
          }
        }
      }
      sub_2213CDC(gameObject, v10);
    }
  }
}


bool BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x20
  _BOOL8 v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *v15; // x19

  if ( (byte_5973831 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973831 = 1;
  }
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(defaultTdTypeImageAtlas, 0, 0) )
  {
    nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0, 0);
    if ( v6 )
    {
      v13 = this->fields.nowTreasureDeviceTypeImage;
      if ( !v13 )
        sub_2213CDC(v6, v4);
      mAtlas = v13->fields.mAtlas;
      this->fields.defaultTdTypeImageAtlas = mAtlas;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.defaultTdTypeImageAtlas,
        (int32_t)mAtlas,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
  }
  v15 = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  return UnityEngine_Object__op_Inequality(v15, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetUntrueCount(
        BattleCommandComponent_o *this,
        int32_t count,
        bool isInitZero,
        const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  struct DrumRollLabel_o *v8; // x21
  DrumRollLabel_CompleteEventHandler_o *v9; // x22

  if ( (byte_597380E & 1) == 0 )
  {
    sub_2213A60(&Method_BattleCommandComponent_compCriticallabel__);
    sub_2213A60(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_597380E = 1;
  }
  if ( isInitZero )
  {
    criticallabel = this->fields.criticallabel;
    if ( !criticallabel )
      goto LABEL_12;
    DrumRollLabel__setParam(criticallabel, 0, 0);
  }
  criticallabel = (DrumRollLabel_o *)this->fields.criticalObject;
  if ( !criticallabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)criticallabel, 1, 0),
        (v8 = this->fields.criticallabel) == 0) )
  {
LABEL_12:
    sub_2213CDC(criticallabel, *(_QWORD *)&count);
  }
  if ( v8->fields.nowvalue <= count )
  {
    v9 = (DrumRollLabel_CompleteEventHandler_o *)sub_2213CCC(DrumRollLabel_CompleteEventHandler_TypeInfo);
    DrumRollLabel_CompleteEventHandler___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0);
  }
  else
  {
    v9 = 0;
  }
  DrumRollLabel__changeParam(v8, count, 1, v9, 0.0, 0);
}


void BattleCommandComponent__SetUnusableShortageStarSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x19

  if ( (byte_5973833 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21229/*"icon_unusable_star"*/);
    byte_5973833 = 1;
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0, 0) )
  {
    v5 = this->fields.unusableShortageStarSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
    AtlasManager__SetEventSprite(v5, (System_String_o *)StringLiteral_21229/*"icon_unusable_star"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SwitchChangeObjPos(BattleCommandComponent_o *this, bool isUp, const MethodInfo *method)
{
  UnityEngine_Object_o *codeObject; // x21
  UnityEngine_Transform_o *friendIcon; // x0
  __int64 v7; // x1
  struct UnityEngine_Transform_array *stateCodePoints; // x8
  il2cpp_array_size_t max_length; // x9
  struct UnityEngine_Transform_array *stateArrowPoints; // x10
  UnityEngine_Transform_o *v11; // x21
  __int64 v12; // x8
  struct UnityEngine_Transform_array *v13; // x8
  UnityEngine_Transform_o *v14; // x20
  struct UnityEngine_Transform_array *v15; // x9
  struct UnityEngine_GameObject_array *addObjectList; // x10
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Transform_o *v18; // x20
  struct UnityEngine_GameObject_array *v19; // x8
  UnityEngine_Transform_o *v20; // x21
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_Object_o *v22; // x21
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_Transform_o *v24; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597382A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597382A = 1;
  }
  codeObject = (UnityEngine_Object_o *)this->fields.codeObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isUp);
  friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(codeObject, 0, 0);
  if ( ((unsigned __int8)friendIcon & 1) == 0 )
  {
    stateCodePoints = this->fields.stateCodePoints;
    if ( stateCodePoints )
    {
      max_length = stateCodePoints->max_length;
      if ( max_length )
      {
        stateArrowPoints = this->fields.stateArrowPoints;
        if ( stateArrowPoints )
        {
          if ( stateArrowPoints->max_length )
          {
            if ( !(_DWORD)max_length )
              goto LABEL_49;
            friendIcon = stateCodePoints->m_Items[0];
            if ( !friendIcon )
              goto LABEL_48;
            v11 = this->fields.codeObject;
            position = UnityEngine_Transform__get_position(friendIcon, 0);
            if ( !v11 )
              goto LABEL_48;
            UnityEngine_Transform__set_position(v11, position, 0);
            v12 = 0;
            if ( isUp )
            {
              friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
              if ( !friendIcon )
                goto LABEL_48;
              friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                        (UnityEngine_Behaviour_o *)friendIcon,
                                                        0);
              if ( ((unsigned __int8)friendIcon & 1) != 0 )
              {
                v13 = this->fields.stateCodePoints;
                if ( !v13 )
                  goto LABEL_48;
                if ( (v13->max_length & 0xFFFFFFFE) == 0 )
                  goto LABEL_49;
                friendIcon = v13->m_Items[1];
                if ( !friendIcon )
                  goto LABEL_48;
                v14 = this->fields.codeObject;
                v26 = UnityEngine_Transform__get_position(friendIcon, 0);
                if ( !v14 )
                  goto LABEL_48;
                UnityEngine_Transform__set_position(v14, v26, 0);
                v12 = 2;
              }
              else
              {
                friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
                if ( !friendIcon )
                  goto LABEL_48;
                friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                          (UnityEngine_Behaviour_o *)friendIcon,
                                                          0);
                v12 = ((unsigned __int8)friendIcon & 1) == 0;
              }
            }
            v15 = this->fields.stateArrowPoints;
            if ( !v15 )
              goto LABEL_48;
            if ( (unsigned int)v12 >= LODWORD(v15->max_length) )
              goto LABEL_49;
            addObjectList = this->fields.addObjectList;
            if ( !addObjectList )
              goto LABEL_48;
            if ( (addObjectList->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_49;
            v17 = (UnityEngine_Object_o *)addObjectList->m_Items[1];
            v18 = v15->m_Items[v12];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v19 = this->fields.addObjectList;
              if ( !v19 )
                goto LABEL_48;
              if ( (v19->max_length & 0xFFFFFFFE) == 0 )
                goto LABEL_49;
              friendIcon = (UnityEngine_Transform_o *)v19->m_Items[1];
              if ( !friendIcon )
                goto LABEL_48;
              friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0);
              if ( !v18 )
                goto LABEL_48;
              v20 = friendIcon;
              v27 = UnityEngine_Transform__get_position(v18, 0);
              if ( !v20 )
                goto LABEL_48;
              UnityEngine_Transform__set_position(v20, v27, 0);
            }
            v21 = this->fields.addObjectList;
            if ( !v21 )
              goto LABEL_48;
            if ( !LODWORD(v21->max_length) )
LABEL_49:
              sub_2213CE4(friendIcon);
            v22 = (UnityEngine_Object_o *)v21->m_Items[0];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v22, 0, 0);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v23 = this->fields.addObjectList;
              if ( !v23 )
                goto LABEL_48;
              if ( LODWORD(v23->max_length) )
              {
                friendIcon = (UnityEngine_Transform_o *)v23->m_Items[0];
                if ( friendIcon )
                {
                  friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0);
                  if ( v18 )
                  {
                    v24 = friendIcon;
                    v28 = UnityEngine_Transform__get_position(v18, 0);
                    if ( v24 )
                    {
                      UnityEngine_Transform__set_position(v24, v28, 0);
                      return;
                    }
                  }
                }
LABEL_48:
                sub_2213CDC(friendIcon, v7);
              }
              goto LABEL_49;
            }
          }
        }
      }
    }
  }
}


void BattleCommandComponent__UpdateCommandCardEffect(BattleCommandComponent_o *this, const MethodInfo *method)
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
  __int64 v15; // x1
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  Il2CppObject *v18; // x22
  Il2CppObject *Component_object; // x23
  const MethodInfo *v20; // x3
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct BattleCommandData_o *v23; // x8
  struct BattleCommandData_o *v24; // x8
  Il2CppObject *key; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5973841 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973841 = 1;
  }
  key = 0;
  path = 0;
  BattleCommandComponent__ClearCardEffect(this, method);
  data = this->fields.data;
  if ( data )
  {
    CommandCodeBuffArray = BattleCommandData__GetCommandCodeBuffArray(data, 0);
    if ( CommandCodeBuffArray )
    {
      v5 = CommandCodeBuffArray;
      if ( CommandCodeBuffArray->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EffectMaster___);
        max_length = v5->max_length;
        if ( max_length >= 1 )
        {
          v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v10 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v10 >= max_length )
              sub_2213CE4(Instance);
            v11 = v5->m_Items[v10];
            if ( !v11 )
              break;
            if ( v11->fields.cardEffectId >= 1 )
            {
              Instance = (DataManager_o *)BattleBuffData_BuffData__isEnableCommandCardBuff(
                                            v5->m_Items[v10],
                                            this->fields.data,
                                            0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_13;
              Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v11, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v23 = this->fields.data;
                if ( !v23 )
                  break;
                if ( v11->fields.userCommandCodeId == v23->fields.userCommandCodeId )
                  goto LABEL_13;
              }
              Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v11, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v24 = this->fields.data;
                if ( !v24 )
                  break;
                if ( v11->fields.commandAssistId == v24->fields.commandAssistId
                  && v11->fields.cardIndex == v24->fields.servantCardIdsIndex )
                {
LABEL_13:
                  if ( !v9 )
                    break;
                  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                v9,
                                                v11->fields.cardEffectId,
                                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                  if ( Instance )
                  {
                    datalist = (System_String_o *)Instance->fields.datalist;
                    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v7);
                    BattleEffectUtility__GetBattleCommonEffectPathAndName(datalist, &path, (System_String_o **)&key, 0);
                    Instance = (DataManager_o *)this->fields.cardEffectDict;
                    if ( !Instance )
                      break;
                    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                                                  key,
                                                  (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      v14 = key;
                      v13 = path;
                      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7);
                      Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                  v13,
                                                                                  (System_String_o *)v14,
                                                                                  0);
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
                      Instance = (DataManager_o *)UnityEngine_Object__op_Equality(Manager__loadBattleCommonEffect, 0, 0);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        objectRoot = this->fields.objectRoot;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
                        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object__59717116(
                                                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                                                      objectRoot,
                                                      (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
                        if ( !Instance )
                          break;
                        v18 = (Il2CppObject *)Instance;
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)Instance,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
                        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_object,
                                                      0,
                                                      0);
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
                            v20);
                        }
                        Instance = (DataManager_o *)this->fields.cardEffectDict;
                        if ( !Instance )
                          break;
                        System_Collections_Generic_Dictionary_object__object___Add(
                          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                          key,
                          v18,
                          (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
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
          sub_2213CDC(Instance, v7);
        }
      }
    }
  }
}


void BattleCommandComponent__UpdateCommandCardTypeChange(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  struct BattleCommandComponent___c_StaticFields *klass; // x8
  System_Predicate_object__o *_9__232_0; // x21
  Il2CppObject *v7; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t Index; // w0
  __int64 v16; // x1
  int32_t v17; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v19; // x1
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UISprite_o *v21; // x21
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x22
  UILabel_o *v25; // x21
  System_Collections_Generic_List_object__o *v26; // x8
  System_String_o *v27; // x19
  Il2CppObject *v28; // x0
  int32_t svtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t type; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597383A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_2213A60(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__232_0__);
    sub_2213A60(&BattleCommandComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_5205/*"DISPLAY_REMAINING_TURN"*/);
    sub_2213A60(&StringLiteral_21144/*"icon_commandchange_{0}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597383A = 1;
  }
  data = (BattleCommandData_o *)BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !*(&BattleCommandComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo, method);
    data = (BattleCommandData_o *)BattleCommandComponent___c_TypeInfo;
  }
  klass = (struct BattleCommandComponent___c_StaticFields *)data[1].klass;
  _9__232_0 = (System_Predicate_object__o *)klass->__9__232_0;
  if ( !_9__232_0 )
  {
    if ( !data[1].fields.markindex )
    {
      j_il2cpp_runtime_class_init_0(data, method);
      klass = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)klass->__9;
    _9__232_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(
      _9__232_0,
      v7,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__232_0__,
      0);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__232_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__232_0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__232_0,
      (int32_t)_9__232_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !specialCardBuffList )
    goto LABEL_30;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)_9__232_0,
            (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v17 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0, 0) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_30;
        v21 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type(data, 0);
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &type);
        v24 = System_String__Format((System_String_o *)StringLiteral_21144/*"icon_commandchange_{0}"*/, v22, 0);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23);
        if ( !AtlasManager__SetEventSprite(v21, v24, 0) )
        {
          data = (BattleCommandData_o *)this->fields.specialCardBuffIcon;
          if ( !data )
            goto LABEL_30;
          UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
        v25 = this->fields.specialCardBuffTurn;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        data = (BattleCommandData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5205/*"DISPLAY_REMAINING_TURN"*/, 0);
        v26 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
        if ( v26 )
        {
          v27 = (System_String_o *)data;
          data = (BattleCommandData_o *)System_Collections_Generic_List_object___get_Item(
                                          v26,
                                          v17,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
          if ( data )
          {
            svtId = data->fields.svtId;
            v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtId);
            data = (BattleCommandData_o *)System_String__Format(v27, v28, 0);
            if ( v25 )
            {
              UILabel__set_text(v25, (System_String_o *)data, 0);
              return;
            }
          }
        }
LABEL_30:
        sub_2213CDC(data, method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__UpdateCommandUpDetailLabel(
        BattleCommandComponent_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  char *data; // x0
  bool isAddAttack; // w0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 *v10; // x8
  UnityEngine_Transform_o *transform; // x0
  char *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int v19; // w8
  char *v20; // x21
  __int64 v21; // x22
  int v22; // [xsp+4h] [xbp-3Ch] BYREF
  int v23; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597381D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_2213A60(&StringLiteral_17306/*"a"*/);
    sub_2213A60(&StringLiteral_19769/*"effect/ef_commandup_{0}{1:00}"*/);
    sub_2213A60(&StringLiteral_24034/*"q"*/);
    sub_2213A60(&StringLiteral_17686/*"b"*/);
    byte_597381D = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  isAddAttack = BattleCommandData__isAddAttack((BattleCommandData_o *)data, 0);
  if ( (unsigned int)targetIndex > 2 || isAddAttack || BattleCommandComponent__get_isKindOfDontAction(this, v7) )
    return;
  data = (char *)this->fields.data;
  if ( !data )
LABEL_29:
    sub_2213CDC(data, *(_QWORD *)&targetIndex);
  v8 = (System_String_o *)StringLiteral_19769/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick((BattleCommandData_o *)data, 0) )
  {
    v24 = targetIndex + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
    v10 = &StringLiteral_24034/*"q"*/;
LABEL_16:
    v8 = System_String__Format_75697880(v8, (Il2CppObject *)*v10, v9, 0);
    goto LABEL_17;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isArts((BattleCommandData_o *)data, 0) )
  {
    v23 = targetIndex + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
    v10 = &StringLiteral_17306/*"a"*/;
    goto LABEL_16;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isBuster((BattleCommandData_o *)data, 0) )
  {
    v22 = targetIndex + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v22);
    v10 = &StringLiteral_17686/*"b"*/;
    goto LABEL_16;
  }
LABEL_17:
  data = (char *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_29;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
  data = (char *)BaseMonoBehaviour__createObject_48153028((BaseMonoBehaviour_o *)this, v8, transform, 0, 0);
  if ( !data )
    goto LABEL_29;
  v12 = data;
  data = (char *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !data )
    goto LABEL_29;
  v19 = *((_DWORD *)data + 6);
  v20 = data;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( (unsigned int)v21 < v19 )
    {
      data = *(char **)&v20[8 * v21 + 32];
      if ( !data )
        goto LABEL_29;
      UnityEngine_ParticleSystem__Stop_83837444((UnityEngine_ParticleSystem_o *)data, 0);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
        goto LABEL_25;
    }
LABEL_30:
    sub_2213CE4(data);
  }
LABEL_25:
  data = (char *)this->fields.effectobj;
  if ( !data )
    goto LABEL_29;
  if ( (*((_DWORD *)data + 6) & 0xFFFFFFFC) == 0 )
    goto LABEL_30;
  *((_QWORD *)data + 7) = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(data + 56), (int32_t)v12, v13, v14, v15, v16, v17, v18);
}


void BattleCommandComponent__UpdateDonotActSpriteName(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotactSprite; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x19
  BattleCommandComponent_c *v6; // x0

  if ( (byte_5973801 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973801 = 1;
  }
  donotactSprite = (UnityEngine_Object_o *)this->fields.donotactSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(donotactSprite, 0, 0) )
  {
    v5 = this->fields.donotactSprite;
    v6 = BattleCommandComponent_TypeInfo;
    if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v4);
    if ( !v5 )
      sub_2213CDC(v6, v4);
    UISprite__set_spriteName(v5, BattleCommandComponent_TypeInfo->static_fields->DONOT_ACT_ICON, 0);
  }
}


void BattleCommandComponent__UpdateFixedCommandCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  void *Item; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__215_0; // x21
  Il2CppObject *v7; // x22
  struct BattleCommandComponent___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t Index; // w0
  __int64 v16; // x1
  int32_t v17; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v19; // x1
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  __int64 v21; // x1
  UILabel_o *v22; // x21
  System_Collections_Generic_List_object__o *v23; // x8
  System_String_o *v24; // x19
  Il2CppObject *v25; // x0
  int v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597382B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_2213A60(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__215_0__);
    sub_2213A60(&BattleCommandComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_5205/*"DISPLAY_REMAINING_TURN"*/);
    sub_2213A60(&StringLiteral_21102/*"icon_cardfixation"*/);
    byte_597382B = 1;
  }
  Item = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !*(&BattleCommandComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo, method);
    Item = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)Item + 23);
  _9__215_0 = (System_Predicate_object__o *)static_fields->__9__215_0;
  if ( !_9__215_0 )
  {
    if ( !*((_DWORD *)Item + 57) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__215_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(
      _9__215_0,
      v7,
      Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__215_0__,
      0);
    v8 = BattleCommandComponent___c_TypeInfo->static_fields;
    v8->__9__215_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__215_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__215_0, (int32_t)_9__215_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !specialCardBuffList )
    goto LABEL_26;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)_9__215_0,
            (const MethodInfo_44844B8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v17 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0, 0) )
      {
        Item = this->fields.specialCardBuffIcon;
        if ( Item )
        {
          UISprite__set_atlas((UISprite_o *)Item, this->fields.commandAtlas, 0);
          Item = this->fields.specialCardBuffIcon;
          if ( Item )
          {
            UISprite__set_spriteName((UISprite_o *)Item, (System_String_o *)StringLiteral_21102/*"icon_cardfixation"*/, 0);
            v22 = this->fields.specialCardBuffTurn;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
            Item = LocalizationManager__Get((System_String_o *)StringLiteral_5205/*"DISPLAY_REMAINING_TURN"*/, 0);
            v23 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
            if ( v23 )
            {
              v24 = (System_String_o *)Item;
              Item = System_Collections_Generic_List_object___get_Item(
                       v23,
                       v17,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
              if ( Item )
              {
                v26 = *((_DWORD *)Item + 5);
                v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v26);
                Item = System_String__Format(v24, v25, 0);
                if ( v22 )
                {
                  UILabel__set_text(v22, (System_String_o *)Item, 0);
                  return;
                }
              }
            }
          }
        }
LABEL_26:
        sub_2213CDC(Item, method);
      }
    }
  }
}


void BattleCommandComponent__UpdateIconChangeTypeByTransform(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconChangeTypeByTransform; // x20
  __int64 v4; // x1
  BattleCommandData_o *data; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  BattleCommandComponent_o *v8; // x20
  const MethodInfo *v9; // x3
  UISprite_o *v10; // x19

  if ( (byte_597383C & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21101/*"icon_cardchange_"*/);
    byte_597383C = 1;
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(iconChangeTypeByTransform, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_13;
    v7 = BattleCommandData__GetChangeTypeByTransform(data, 0);
    if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v6);
    v8 = (BattleCommandComponent_o *)BattleCommand__GetCardTypeChangeSpriteNameSuffix(v7, 0, 0);
    BattleCommandComponent__SetActiveComponent(
      v8,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      v8 != 0,
      v9);
    if ( v8 )
    {
      v10 = this->fields.iconChangeTypeByTransform;
      data = (BattleCommandData_o *)System_String__Concat_75651716(
                                      (System_String_o *)StringLiteral_21101/*"icon_cardchange_"*/,
                                      (System_String_o *)v8,
                                      0);
      if ( v10 )
      {
        UISprite__set_spriteName(v10, (System_String_o *)data, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(data, v4);
    }
  }
}


void BattleCommandComponent__UpdateSealStatus(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x20
  BattleCommandData_o *data; // x21
  UnityEngine_Object_o *perf; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  BattleData_o *v8; // x22
  struct BattlePerformance_o *v9; // x8
  BattleCommandSealStatus_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_597381C & 1) == 0 )
  {
    sub_2213A60(&BattleCommandSealStatus_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597381C = 1;
  }
  data = this->fields.data;
  svtData = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v6 = UnityEngine_Object__op_Implicit(perf, 0);
  v8 = 0;
  if ( v6 )
  {
    v9 = this->fields.perf;
    if ( !v9 )
      sub_2213CDC(v6, v7);
    v8 = v9->fields.data;
  }
  v10 = (BattleCommandSealStatus_o *)sub_2213CCC(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_53644476(v10, data, svtData, v8, 0);
  this->fields.sealStatus = v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sealStatus, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


void BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(
        BattleCommandComponent_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x8
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  System_Collections_IEnumerator_o *updated; // x0
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v13; // x8
  float v14; // s0
  float cardBuffAlphaFor; // s1
  float v16; // s3
  float v17; // s0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v18; // x9
  int32_t v19; // w8
  UnityEngine_Object_o *v20; // x20

  if ( (byte_597383D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597383D = 1;
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_34;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    specialCardBuffList = this->fields.specialCardBuffList;
    if ( !specialCardBuffList || specialCardBuffList->fields._size < 1 )
      goto LABEL_32;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 && this->fields.isCardBuffAlphaAnim )
    {
      if ( !this->fields.isChangedBuffIcon )
      {
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v6);
        UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, updated, 0);
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
        v14 = ((float (__fastcall *)(UnityEngine_Component_o *, _QWORD))gameObject->klass[1]._1.this_arg.data)(
                gameObject,
                *(_QWORD *)&gameObject->klass[1]._1.this_arg.bits);
        cardBuffAlphaFor = this->fields.cardBuffAlphaFor;
        v16 = this->fields.cardBuffAlphaAnimTime + deltaTime;
        v17 = v14 + (float)((float)(cardBuffAlphaFor - v14) * 0.5);
        this->fields.cardBuffAlphaAnimTime = v16;
        if ( v16 >= 3.0 )
        {
          cardBuffAlphaFor = 0.0;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 0;
        }
        if ( v17 <= 0.01 && cardBuffAlphaFor <= 0.0 )
        {
          v18 = this->fields.specialCardBuffList;
          v19 = this->fields.cardBuffListIndex + 1;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216;
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
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))gameObject->klass[1]._1.element_class)(
            gameObject,
            gameObject->klass[1]._1.castClass);
          return;
        }
LABEL_34:
        sub_2213CDC(gameObject, v6);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
      if ( !gameObject )
        goto LABEL_34;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_34;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
  }
}


void BattleCommandComponent__UpdateTDTypeChange(
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
  int32_t treasureDvc; // w8
  bool v16; // cc

  if ( isForceHide || (svtData = this->fields.svtData) == 0 )
  {
    v11 = this;
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v6 = BattleServantData__getTdTypeChangeBuffSingle(svtData, 0);
    if ( v6 )
    {
      turn = v6->fields.turn;
      if ( turn < 0 )
      {
        v10 = -1;
      }
      else
      {
        if ( turn + 1 >= 0 )
          v9 = turn + 1;
        else
          v9 = turn + 2;
        v10 = v9 >> 1;
      }
    }
    else
    {
      v10 = 0;
    }
    data = this->fields.data;
    if ( data )
    {
      treasureDvc = data->fields.treasureDvc;
      if ( v10 )
        v16 = treasureDvc <= 0;
      else
        v16 = 1;
      LODWORD(data) = !v16;
      if ( v6 && (_DWORD)data )
        LOBYTE(data) = BattleCommandComponent__UpdateTreasureDeviceTypeImage(this, v6->fields.buffId, v7);
    }
    v12 = (unsigned __int8)data & 1;
    v11 = this;
    v13 = v10;
  }
  BattleCommandComponent__SetTreasureDeviceTypeChange(v11, v12, v13, v3);
}


// local variable allocation has failed, the output may be wrong!
bool BattleCommandComponent__UpdateTreasureDeviceTypeImage(
        BattleCommandComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BuffMaster_o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  UISprite_o *nowTreasureDeviceTypeImage; // x20
  System_String_o *v10; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  UISpriteData_o *Sprite; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5973832 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BuffMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21107/*"icon_cardtypechange"*/);
    byte_5973832 = 1;
  }
  name = 0;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_20;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = (BuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_22;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_object,
          &name,
          buffId,
          (System_String_o *)StringLiteral_21107/*"icon_cardtypechange"*/,
          0) )
    goto LABEL_20;
  nowTreasureDeviceTypeImage = this->fields.nowTreasureDeviceTypeImage;
  v10 = name;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
  if ( AtlasManager__SetEventSprite(nowTreasureDeviceTypeImage, v10, 0) )
    goto LABEL_19;
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Inequality(defaultTdTypeImageAtlas, 0, 0) )
  {
LABEL_20:
    LOBYTE(Sprite) = 0;
    return (char)Sprite;
  }
  Master_object = (BuffMaster_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !Master_object )
    goto LABEL_22;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)Master_object, name, 0);
  if ( !Sprite )
    return (char)Sprite;
  Master_object = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !Master_object
    || (UISprite__set_atlas((UISprite_o *)Master_object, this->fields.defaultTdTypeImageAtlas, 0),
        (Master_object = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage) == 0) )
  {
LABEL_22:
    sub_2213CDC(Master_object, v7);
  }
  UISprite__set_spriteName((UISprite_o *)Master_object, name, 0);
LABEL_19:
  LOBYTE(Sprite) = 1;
  return (char)Sprite;
}


System_Collections_IEnumerator_o *BattleCommandComponent__WaitForErrorViewFinished(
        BattleCommandComponent_o *this,
        float waitSeconds,
        System_String_o *busyVoiceSe,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_5973847 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent__WaitForErrorViewFinished_d__249_TypeInfo);
    byte_5973847 = 1;
  }
  v7 = sub_2213CCC(BattleCommandComponent__WaitForErrorViewFinished_d__249_TypeInfo);
  BattleCommandComponent__WaitForErrorViewFinished_d__249___ctor(
    (BattleCommandComponent__WaitForErrorViewFinished_d__249_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 32) = waitSeconds;
  *(_QWORD *)(v7 + 48) = busyVoiceSe;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)busyVoiceSe, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void BattleCommandComponent__addCriticalBuff(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20
  BattleCommandComponent_o *v21; // x0
  const MethodInfo *v22; // x2
  System_Collections_IEnumerator_o *v23; // x0
  System_String_o *CommonSeNameLocal; // x20
  System_String_o *CueSheet; // x21
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v27; // x0
  const MethodInfo *v28; // x1
  System_Collections_IEnumerator_o *v29; // x1

  if ( (byte_597380F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    sub_2213A60(&Method_BattleCommandComponent___c__DisplayClass164_0__addCriticalBuff_b__0__);
    sub_2213A60(&BattleCommandComponent___c__DisplayClass164_0_TypeInfo);
    byte_597380F = 1;
  }
  v5 = sub_2213CCC(BattleCommandComponent___c__DisplayClass164_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass164_0___ctor((BattleCommandComponent___c__DisplayClass164_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = obj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)obj, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass164_0__addCriticalBuff_b__0__,
    0);
  v23 = BattleCommandComponent__delayFrame(v21, v20, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v23, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, 7, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0) )
  {
LABEL_8:
    sub_2213CDC(Instance, v7);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime((SeManager_o *)Instance, CueSheet, CommonSeNameLocal, 0);
  v29 = BattleCommandComponent__PlayStarSe(v27, DefaultPreDelayTime / 1000.0, v28);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v29, 0);
}


void BattleCommandComponent__addFirstAura(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *effectobj; // x19
  UnityEngine_GameObject_o *Object; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  BattleCommandComponent__stopFirstAura(this, (const MethodInfo *)effect);
  effectobj = this->fields.effectobj;
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, effect, this->fields.objectRoot, 0, 0);
  if ( !effectobj )
    sub_2213CDC(Object, v7);
  if ( LODWORD(effectobj->max_length) <= 4 )
    sub_2213CE4(Object);
  effectobj->m_Items[4] = Object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&effectobj->m_Items[4], (int32_t)Object, v8, v9, v10, v11, v12, v13);
}


void BattleCommandComponent__addObject(
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UnityEngine_GameObject_array *v21; // x8
  Il2CppClass **v22; // x0
  struct UnityEngine_GameObject_array *v23; // x8
  System_Enum_o v24; // [xsp+8h] [xbp-58h] BYREF
  int32_t v25; // [xsp+18h] [xbp-48h]

  v6 = this;
  if ( (byte_59737FE & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_2213A60(&StringLiteral_19745/*"effect/"*/);
    byte_59737FE = 1;
  }
  addObjectList = v6->fields.addObjectList;
  if ( !addObjectList )
    goto LABEL_23;
  if ( LODWORD(addObjectList->max_length) <= type )
    goto LABEL_24;
  v8 = (UnityEngine_Object_o *)addObjectList->m_Items[type];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.addObjectList;
    if ( !v9 )
      goto LABEL_23;
    if ( LODWORD(v9->max_length) <= type )
      goto LABEL_24;
    v10 = (UnityEngine_Object_o *)v9->m_Items[type];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
    UnityEngine_Object__Destroy_83459800(v10, 0);
  }
  v11 = System_String__Concat_75651716((System_String_o *)StringLiteral_19745/*"effect/"*/, name, 0);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_48153028(
                                       (BaseMonoBehaviour_o *)v6,
                                       v11,
                                       v6->fields.objectRoot,
                                       0,
                                       0);
  if ( !this )
    goto LABEL_23;
  v12 = (UnityEngine_Object_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v13 = this;
  if ( !byte_5969AE6 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !v13
    || (UnityEngine_Transform__set_localRotation(
          (UnityEngine_Transform_o *)v13,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0),
        v25 = type,
        v24.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo,
        v24.monitor = (void *)-1LL,
        v14 = System_Enum__ToString(&v24, 0),
        UnityEngine_Object__set_name(v12, v14, 0),
        (v21 = v6->fields.addObjectList) == 0) )
  {
LABEL_23:
    sub_2213CDC(this, name);
  }
  if ( LODWORD(v21->max_length) <= type )
    goto LABEL_24;
  v22 = &v21->obj.klass + type;
  v22[4] = (Il2CppClass *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v15, v16, v17, v18, v19, v20);
  v23 = v6->fields.addObjectList;
  if ( !v23 )
    goto LABEL_23;
  if ( LODWORD(v23->max_length) <= type )
LABEL_24:
    sub_2213CE4(this);
  this = (BattleCommandComponent_o *)v23->m_Items[type];
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void BattleCommandComponent__attachEffect(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  UnityEngine_GameObject_o *Object_48153028; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UnityEngine_GameObject_array *effectobj; // x8
  int32_t max_length; // w9
  Il2CppClass **v21; // x0

  if ( (byte_5973813 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19745/*"effect/"*/);
    byte_5973813 = 1;
  }
  v7 = System_String__Concat_75651716((System_String_o *)StringLiteral_19745/*"effect/"*/, name, 0);
  Object_48153028 = BaseMonoBehaviour__createObject_48153028(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0,
                      0);
  if ( !Object_48153028 )
    goto LABEL_16;
  v10 = Object_48153028;
  Object_48153028 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object_48153028, 0);
  v11 = (UnityEngine_Transform_o *)Object_48153028;
  if ( !byte_5969AE0 )
  {
    Object_48153028 = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v11 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Object_48153028 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
  v12 = (UnityEngine_Transform_o *)Object_48153028;
  if ( !byte_5969AE5 )
  {
    Object_48153028 = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectobj = this->fields.effectobj) == 0) )
  {
LABEL_16:
    sub_2213CDC(Object_48153028, v9);
  }
  max_length = effectobj->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_2213CE4(Object_48153028);
    v21 = &effectobj->obj.klass + index;
    v21[4] = (Il2CppClass *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v10, v13, v14, v15, v16, v17, v18);
  }
}


bool BattleCommandComponent__checkCriticalPointValid(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_2213CDC(0, method);
  return UnityEngine_GameObject__get_activeSelf(criticalObject, 0);
}


bool BattleCommandComponent__checkMark(BattleCommandComponent_o *this, int32_t mark, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.markindex == mark;
}


bool BattleCommandComponent__checkObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.data != 0;
}


void BattleCommandComponent__compCriticallabel(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float v5; // s8
  float y; // s9
  float z; // s10
  float v8; // s11
  float v9; // s0
  float v10; // s10
  float v11; // s9
  float v12; // s8
  const MethodInfo *v13; // x1
  bool IsMaxViewCritical; // w8
  UnityEngine_GameObject_o *effect_fullcricomplete; // x20
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x3
  struct UnityEngine_GameObject_o *SpawnerObj; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  float v25; // s0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  y = UnityEngine_Transform__get_lossyScale(transform, 0).fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  z = UnityEngine_Transform__get_lossyScale(transform, 0).fields.z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_14;
  v8 = 1.0 / z;
  v25 = COERCE_FLOAT(UnityEngine_Transform__get_localScale(transform, 0));
  v9 = v25 + v25;
  v10 = (float)(1.0 / v5) * v9;
  v11 = (float)(1.0 / y) * v9;
  v12 = v8 * v9;
  IsMaxViewCritical = BattleCommandComponent__IsMaxViewCritical(this, v13);
  transform = (UnityEngine_Transform_o *)this->fields.tr_criticaleffect;
  if ( IsMaxViewCritical )
  {
    if ( !transform )
      goto LABEL_14;
    effect_fullcricomplete = this->fields.effect_fullcricomplete;
  }
  else
  {
    if ( !transform )
      goto LABEL_14;
    effect_fullcricomplete = this->fields.effect_cricomplete;
  }
  v16 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  v26.fields.x = v10;
  v26.fields.y = v11;
  v26.fields.z = v12;
  SpawnerObj = BattleCommandComponent__GetSpawnerObj(this, effect_fullcricomplete, v16, v26, v17);
  this->fields.countUpFinishEffect = SpawnerObj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.countUpFinishEffect,
    (int32_t)SpawnerObj,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect) == 0) )
  {
LABEL_14:
    sub_2213CDC(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  this->fields.isCountUp = 0;
}


System_Collections_IEnumerator_o *BattleCommandComponent__coroutineUpdateSpecialBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5973840 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_TypeInfo);
    byte_5973840 = 1;
  }
  v3 = sub_2213CCC(BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_TypeInfo);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238___ctor(
    (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattleCommandComponent__delayFrame(
        BattleCommandComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5973811 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent__delayFrame_d__166_TypeInfo);
    byte_5973811 = 1;
  }
  v4 = sub_2213CCC(BattleCommandComponent__delayFrame_d__166_TypeInfo);
  BattleCommandComponent__delayFrame_d__166___ctor((BattleCommandComponent__delayFrame_d__166_o *)v4, 0, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)action, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void BattleCommandComponent__endFashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_5973825 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973825 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( !LODWORD(effectobj->max_length) )
    goto LABEL_15;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( LODWORD(v5->max_length) )
      {
        v6 = (UnityEngine_Object_o *)v5->m_Items[0];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        UnityEngine_Object__Destroy_83459800(v6, 0);
        return;
      }
LABEL_15:
      sub_2213CE4(this);
    }
LABEL_14:
    sub_2213CDC(this, method);
  }
}


System_Collections_IEnumerator_o *BattleCommandComponent__fadeoutEffect(
        BattleCommandComponent_o *this,
        bool isTresure,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5973815 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent__fadeoutEffect_d__186_TypeInfo);
    byte_5973815 = 1;
  }
  v5 = sub_2213CCC(BattleCommandComponent__fadeoutEffect_d__186_TypeInfo);
  BattleCommandComponent__fadeoutEffect_d__186___ctor((BattleCommandComponent__fadeoutEffect_d__186_o *)v5, 0, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 40) = isTresure;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__flashComboSvt(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct System_Boolean_array *sameflg; // x8

  if ( index > 2 )
    goto LABEL_6;
  if ( !combo || (sameflg = combo->fields.sameflg) == 0 )
    sub_2213CDC(this, *(_QWORD *)&index);
  if ( LODWORD(sameflg->max_length) <= index )
    sub_2213CE4(this);
  if ( sameflg->m_Items[index] )
LABEL_6:
    BattleCommandComponent__flashServant(this, *(const MethodInfo **)&index);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__flashComboType(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  if ( !combo )
    sub_2213CDC(this, *(_QWORD *)&index);
  if ( combo->fields.flash )
    BattleCommandComponent__flashTypeCard(this, *(const MethodInfo **)&index);
}


void BattleCommandComponent__flashServant(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *facetex; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_Transform_o *parent; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct UnityEngine_GameObject_array *v16; // x8
  UIWidget_o *v17; // x20
  UnityEngine_Shader_o *v18; // x21
  UnityEngine_Material_o *v19; // x22
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Object_array *v28; // x21
  __int64 v29; // x1
  int32_t v30; // w1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *v51; // x22
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  int32_t v58; // w1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  Il2CppObject *v65; // x22
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int32_t v72; // w1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  int32_t v79; // w1
  __int64 v80; // x1
  System_Collections_Hashtable_o *v81; // x0
  struct UnityEngine_GameObject_array *v82; // x8
  __int64 v83; // x0
  unsigned __int64 v84; // [xsp+0h] [xbp-40h] BYREF
  int v85; // [xsp+8h] [xbp-38h]
  int v86; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_5973822 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23567/*"oncompletetarget"*/);
    sub_2213A60(&StringLiteral_19898/*"endFashSvt"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&StringLiteral_16758/*"_AddColor"*/);
    sub_2213A60(&StringLiteral_24403/*"scale"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5973822 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Equality(facetex, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.facetex;
    if ( gameObject )
    {
      effectobj = this->fields.effectobj;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( this->fields.nomalwidget )
      {
        v8 = (UnityEngine_GameObject_o *)gameObject;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this->fields.nomalwidget,
                                                  0);
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0);
          if ( gameObject )
          {
            parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
            gameObject = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                      (BaseMonoBehaviour_o *)this,
                                                      v8,
                                                      parent,
                                                      0,
                                                      0);
            if ( effectobj )
            {
              if ( (effectobj->max_length & 0xFFFFFFFE) == 0 )
                goto LABEL_53;
              effectobj->m_Items[1] = (UnityEngine_GameObject_o *)gameObject;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&effectobj->m_Items[1],
                (int32_t)gameObject,
                v10,
                v11,
                v12,
                v13,
                v14,
                v15);
              v16 = this->fields.effectobj;
              if ( v16 )
              {
                if ( (v16->max_length & 0xFFFFFFFE) == 0 )
                  goto LABEL_53;
                gameObject = (UnityEngine_Component_o *)v16->m_Items[1];
                if ( gameObject )
                {
                  gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)gameObject,
                                                            (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
                  if ( gameObject )
                  {
                    v17 = (UIWidget_o *)gameObject;
                    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
                    if ( gameObject )
                    {
                      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)gameObject,
                                                                0);
                      if ( gameObject )
                      {
                        v87.fields.x = 0.0;
                        v87.fields.y = 0.0;
                        v87.fields.z = -5.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v87, 0);
                        this->fields.newMatriarl = 1;
                        v18 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v17->klass->vtable._28_get_shader.methodPtr)(
                                                        v17,
                                                        v17->klass->vtable._28_get_shader.method);
                        v19 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
                        UnityEngine_Material___ctor(v19, v18, 0);
                        ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, const MethodInfo *))v17->klass->vtable._25_set_material.methodPtr)(
                          v17,
                          v19,
                          v17->klass->vtable._25_set_material.method);
                        gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v17->klass->vtable._24_get_material.methodPtr)(
                                                                  v17,
                                                                  v17->klass->vtable._24_get_material.method);
                        if ( gameObject )
                        {
                          v88.fields.a = 0.0;
                          v88.fields.r = 1.0;
                          v88.fields.g = 1.0;
                          v88.fields.b = 1.0;
                          UnityEngine_Material__SetColor(
                            (UnityEngine_Material_o *)gameObject,
                            (System_String_o *)StringLiteral_16758/*"_AddColor"*/,
                            v88,
                            0);
                          UIWidget__set_depth(v17, this->fields.basedepth + 400, 0);
                          v20 = this->fields.effectobj;
                          if ( v20 )
                          {
                            if ( (v20->max_length & 0xFFFFFFFE) == 0 )
                              goto LABEL_53;
                            v21 = v20->m_Items[1];
                            gameObject = (UnityEngine_Component_o *)sub_2213B20(object___TypeInfo, 8);
                            if ( gameObject )
                            {
                              v28 = (System_Object_array *)gameObject;
                              gameObject = (UnityEngine_Component_o *)StringLiteral_24403/*"scale"*/;
                              if ( StringLiteral_24403/*"scale"*/ )
                              {
                                gameObject = (UnityEngine_Component_o *)sub_2213BB4(
                                                                          StringLiteral_24403/*"scale"*/,
                                                                          v28->obj.klass->_1.element_class);
                                if ( !gameObject )
                                  goto LABEL_54;
                              }
                              if ( !LODWORD(v28->max_length) )
                                goto LABEL_53;
                              v30 = StringLiteral_24403/*"scale"*/;
                              v28->m_Items[0] = (Il2CppObject *)StringLiteral_24403/*"scale"*/;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)v28->m_Items,
                                v30,
                                v22,
                                v23,
                                v24,
                                v25,
                                v26,
                                v27);
                              v85 = 1065353216;
                              v84 = vdup_n_s32(0x3FE66666u).n64_u64[0];
                              gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(
                                                                        UnityEngine_Vector3_TypeInfo,
                                                                        &v84);
                              v37 = (Il2CppObject *)gameObject;
                              if ( gameObject )
                              {
                                gameObject = (UnityEngine_Component_o *)sub_2213BB4(
                                                                          gameObject,
                                                                          v28->obj.klass->_1.element_class);
                                if ( !gameObject )
                                  goto LABEL_54;
                              }
                              if ( (v28->max_length & 0xFFFFFFFE) == 0 )
                                goto LABEL_53;
                              v28->m_Items[1] = v37;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&v28->m_Items[1],
                                (int32_t)v37,
                                v31,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36);
                              gameObject = (UnityEngine_Component_o *)StringLiteral_25366/*"time"*/;
                              if ( StringLiteral_25366/*"time"*/ )
                              {
                                gameObject = (UnityEngine_Component_o *)sub_2213BB4(
                                                                          StringLiteral_25366/*"time"*/,
                                                                          v28->obj.klass->_1.element_class);
                                if ( !gameObject )
                                  goto LABEL_54;
                              }
                              if ( LODWORD(v28->max_length) <= 2 )
                                goto LABEL_53;
                              v44 = StringLiteral_25366/*"time"*/;
                              v28->m_Items[2] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&v28->m_Items[2],
                                v44,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
                              v86 = 1065353216;
                              gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(qword_5984378, &v86);
                              v51 = (Il2CppObject *)gameObject;
                              if ( gameObject )
                              {
                                gameObject = (UnityEngine_Component_o *)sub_2213BB4(
                                                                          gameObject,
                                                                          v28->obj.klass->_1.element_class);
                                if ( !gameObject )
                                  goto LABEL_54;
                              }
                              if ( (v28->max_length & 0xFFFFFFFC) == 0 )
                                goto LABEL_53;
                              v28->m_Items[3] = v51;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&v28->m_Items[3],
                                (int32_t)v51,
                                v45,
                                v46,
                                v47,
                                v48,
                                v49,
                                v50);
                              gameObject = (UnityEngine_Component_o *)StringLiteral_23567/*"oncompletetarget"*/;
                              if ( StringLiteral_23567/*"oncompletetarget"*/ )
                              {
                                gameObject = (UnityEngine_Component_o *)sub_2213BB4(
                                                                          StringLiteral_23567/*"oncompletetarget"*/,
                                                                          v28->obj.klass->_1.element_class);
                                if ( !gameObject )
                                  goto LABEL_54;
                              }
                              if ( LODWORD(v28->max_length) <= 4 )
                                goto LABEL_53;
                              v58 = StringLiteral_23567/*"oncompletetarget"*/;
                              v28->m_Items[4] = (Il2CppObject *)StringLiteral_23567/*"oncompletetarget"*/;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&v28->m_Items[4],
                                v58,
                                v52,
                                v53,
                                v54,
                                v55,
                                v56,
                                v57);
                              gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
                              v65 = (Il2CppObject *)gameObject;
                              if ( gameObject )
                              {
                                gameObject = (UnityEngine_Component_o *)sub_2213BB4(
                                                                          gameObject,
                                                                          v28->obj.klass->_1.element_class);
                                if ( !gameObject )
                                  goto LABEL_54;
                              }
                              if ( LODWORD(v28->max_length) <= 5 )
                                goto LABEL_53;
                              v28->m_Items[5] = v65;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&v28->m_Items[5],
                                (int32_t)v65,
                                v59,
                                v60,
                                v61,
                                v62,
                                v63,
                                v64);
                              gameObject = (UnityEngine_Component_o *)StringLiteral_23565/*"oncomplete"*/;
                              if ( StringLiteral_23565/*"oncomplete"*/ )
                              {
                                gameObject = (UnityEngine_Component_o *)sub_2213BB4(
                                                                          StringLiteral_23565/*"oncomplete"*/,
                                                                          v28->obj.klass->_1.element_class);
                                if ( !gameObject )
                                  goto LABEL_54;
                              }
                              if ( LODWORD(v28->max_length) <= 6 )
                                goto LABEL_53;
                              v72 = StringLiteral_23565/*"oncomplete"*/;
                              v28->m_Items[6] = (Il2CppObject *)StringLiteral_23565/*"oncomplete"*/;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&v28->m_Items[6],
                                v72,
                                v66,
                                v67,
                                v68,
                                v69,
                                v70,
                                v71);
                              gameObject = (UnityEngine_Component_o *)StringLiteral_19898/*"endFashSvt"*/;
                              if ( StringLiteral_19898/*"endFashSvt"*/ )
                              {
                                gameObject = (UnityEngine_Component_o *)sub_2213BB4(
                                                                          StringLiteral_19898/*"endFashSvt"*/,
                                                                          v28->obj.klass->_1.element_class);
                                if ( !gameObject )
                                {
LABEL_54:
                                  v83 = sub_2213D00(gameObject, v29);
                                  sub_2213BA0(v83, 0);
                                }
                              }
                              if ( (v28->max_length & 0xFFFFFFF8) == 0 )
LABEL_53:
                                sub_2213CE4(gameObject);
                              v79 = StringLiteral_19898/*"endFashSvt"*/;
                              v28->m_Items[7] = (Il2CppObject *)StringLiteral_19898/*"endFashSvt"*/;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)&v28->m_Items[7],
                                v79,
                                v73,
                                v74,
                                v75,
                                v76,
                                v77,
                                v78);
                              if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v80);
                              v81 = iTween__Hash(v28, 0);
                              iTween__ScaleTo_75298996(v21, v81, 0);
                              v82 = this->fields.effectobj;
                              if ( v82 )
                              {
                                if ( (v82->max_length & 0xFFFFFFFE) != 0 )
                                {
                                  v89.fields.r = 0.0;
                                  v89.fields.g = 0.0;
                                  v89.fields.b = 0.0;
                                  v89.fields.a = 0.0;
                                  TweenColor__Begin(v82->m_Items[1], 1.0, v89, 0);
                                  return;
                                }
                                goto LABEL_53;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_2213CDC(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__flashType(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  BattleCommandComponent__flashTypeCard(this, (const MethodInfo *)flg);
  if ( flg )
  {
    v6 = BattleCommandComponent__fadeoutEffect(this, 0, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  }
}


void BattleCommandComponent__flashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UnityEngine_GameObject_array *v17; // x8
  __int64 v18; // x1
  Il2CppObject *ComponentInChildren_object; // x20
  struct UnityEngine_GameObject_array *v20; // x8
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_GameObject_o *v22; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  BattleCommandComponent_o *v29; // x21
  __int64 v30; // x1
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  BattleCommandComponent_o *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  BattleCommandComponent_o *v52; // x22
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  BattleCommandComponent_o *v66; // x19
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  int32_t v80; // w1
  __int64 v81; // x1
  System_Collections_Hashtable_o *v82; // x0
  __int64 v83; // x0
  int v84; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v85; // [xsp+10h] [xbp-40h] BYREF
  int v86; // [xsp+18h] [xbp-38h]
  UnityEngine_Color_o v87; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v2 = this;
  if ( (byte_5973824 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    sub_2213A60(&StringLiteral_19899/*"endFashTypeCard"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23567/*"oncompletetarget"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    sub_2213A60(&StringLiteral_24403/*"scale"*/);
    this = (BattleCommandComponent_o *)sub_2213A60(&iTween_TypeInfo);
    byte_5973824 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_61;
  if ( !LODWORD(effectobj->max_length) )
    goto LABEL_62;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_61;
    if ( !LODWORD(v5->max_length) )
      goto LABEL_62;
    v6 = (UnityEngine_Object_o *)v5->m_Items[0];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__Destroy_83459800(v6, 0);
  }
  this = (BattleCommandComponent_o *)v2->fields.icon;
  if ( !this )
    goto LABEL_61;
  v7 = v2->fields.effectobj;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v2->fields.nomalwidget )
    goto LABEL_61;
  v8 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                       0);
  if ( !this )
    goto LABEL_61;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_61;
  this = (BattleCommandComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !v2->fields.icon )
    goto LABEL_61;
  v9 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.icon,
                                       0);
  if ( !this )
    goto LABEL_61;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)v2,
                                       (UnityEngine_GameObject_o *)v8,
                                       (UnityEngine_Transform_o *)v9,
                                       transform,
                                       0);
  if ( !v7 )
    goto LABEL_61;
  if ( !LODWORD(v7->max_length) )
    goto LABEL_62;
  v7->m_Items[0] = (UnityEngine_GameObject_o *)this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v7->m_Items, (int32_t)this, v11, v12, v13, v14, v15, v16);
  v17 = v2->fields.effectobj;
  if ( !v17 )
    goto LABEL_61;
  if ( !LODWORD(v17->max_length) )
    goto LABEL_62;
  this = (BattleCommandComponent_o *)v17->m_Items[0];
  if ( !this )
    goto LABEL_61;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0,
                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_61;
    UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, v2->fields.basedepth + 400, 0);
    v20 = v2->fields.effectobj;
    if ( !v20 )
      goto LABEL_61;
    if ( !LODWORD(v20->max_length) )
      goto LABEL_62;
    v87.fields.r = 0.0;
    v87.fields.g = 0.0;
    v87.fields.b = 0.0;
    v87.fields.a = 0.0;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v20->m_Items[0], 1.0, v87, 0);
  }
  v21 = v2->fields.effectobj;
  if ( !v21 )
    goto LABEL_61;
  if ( !LODWORD(v21->max_length) )
    goto LABEL_62;
  v22 = v21->m_Items[0];
  this = (BattleCommandComponent_o *)sub_2213B20(object___TypeInfo, 8);
  if ( !this )
LABEL_61:
    sub_2213CDC(this, method);
  v29 = this;
  this = (BattleCommandComponent_o *)StringLiteral_24403/*"scale"*/;
  if ( StringLiteral_24403/*"scale"*/ )
  {
    this = (BattleCommandComponent_o *)sub_2213BB4(StringLiteral_24403/*"scale"*/, v29->klass->_1.element_class);
    if ( !this )
      goto LABEL_63;
  }
  if ( !LODWORD(v29->fields.m_CancellationTokenSource) )
    goto LABEL_62;
  v31 = StringLiteral_24403/*"scale"*/;
  v29->fields.objectRoot = (struct UnityEngine_Transform_o *)StringLiteral_24403/*"scale"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.objectRoot, v31, v23, v24, v25, v26, v27, v28);
  v86 = 1065353216;
  v85 = 0x4000000040000000LL;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v85);
  v38 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_2213BB4(this, v29->klass->_1.element_class);
    if ( !this )
      goto LABEL_63;
  }
  if ( ((__int64)v29->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_62;
  v29->fields.bg = (struct UISprite_o *)v38;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.bg, (int32_t)v38, v32, v33, v34, v35, v36, v37);
  this = (BattleCommandComponent_o *)StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    this = (BattleCommandComponent_o *)sub_2213BB4(StringLiteral_25366/*"time"*/, v29->klass->_1.element_class);
    if ( !this )
      goto LABEL_63;
  }
  if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_62;
  v45 = StringLiteral_25366/*"time"*/;
  v29->fields.icon = (struct UISprite_o *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.icon, v45, v39, v40, v41, v42, v43, v44);
  v84 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(qword_5984378, &v84);
  v52 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_2213BB4(this, v29->klass->_1.element_class);
    if ( !this )
      goto LABEL_63;
  }
  if ( ((__int64)v29->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
    goto LABEL_62;
  v29->fields.text = (struct UISprite_o *)v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.text, (int32_t)v52, v46, v47, v48, v49, v50, v51);
  this = (BattleCommandComponent_o *)StringLiteral_23567/*"oncompletetarget"*/;
  if ( StringLiteral_23567/*"oncompletetarget"*/ )
  {
    this = (BattleCommandComponent_o *)sub_2213BB4(StringLiteral_23567/*"oncompletetarget"*/, v29->klass->_1.element_class);
    if ( !this )
      goto LABEL_63;
  }
  if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_62;
  v59 = StringLiteral_23567/*"oncompletetarget"*/;
  v29->fields.facetex = (struct UITexture_o *)StringLiteral_23567/*"oncompletetarget"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.facetex, v59, v53, v54, v55, v56, v57, v58);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  v66 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_2213BB4(this, v29->klass->_1.element_class);
    if ( !this )
      goto LABEL_63;
  }
  if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_62;
  v29->fields.nobletex = (struct UITexture_o *)v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.nobletex, (int32_t)v66, v60, v61, v62, v63, v64, v65);
  this = (BattleCommandComponent_o *)StringLiteral_23565/*"oncomplete"*/;
  if ( StringLiteral_23565/*"oncomplete"*/ )
  {
    this = (BattleCommandComponent_o *)sub_2213BB4(StringLiteral_23565/*"oncomplete"*/, v29->klass->_1.element_class);
    if ( !this )
      goto LABEL_63;
  }
  if ( LODWORD(v29->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_62;
  v73 = StringLiteral_23565/*"oncomplete"*/;
  v29->fields.friendIcon = (struct UISprite_o *)StringLiteral_23565/*"oncomplete"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.friendIcon, v73, v67, v68, v69, v70, v71, v72);
  this = (BattleCommandComponent_o *)StringLiteral_19899/*"endFashTypeCard"*/;
  if ( StringLiteral_19899/*"endFashTypeCard"*/ )
  {
    this = (BattleCommandComponent_o *)sub_2213BB4(StringLiteral_19899/*"endFashTypeCard"*/, v29->klass->_1.element_class);
    if ( !this )
    {
LABEL_63:
      v83 = sub_2213D00(this, v30);
      sub_2213BA0(v83, 0);
    }
  }
  if ( ((__int64)v29->fields.m_CancellationTokenSource & 0xFFFFFFF8) == 0 )
LABEL_62:
    sub_2213CE4(this);
  v80 = StringLiteral_19899/*"endFashTypeCard"*/;
  v29->fields.sealedSprite = (struct UISprite_o *)StringLiteral_19899/*"endFashTypeCard"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->fields.sealedSprite, v80, v74, v75, v76, v77, v78, v79);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v81);
  v82 = iTween__Hash((System_Object_array *)v29, 0);
  iTween__ScaleTo_75298996(v22, v82, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *BattleCommandComponent__getCardTypeSealSpriteName(
        BattleCommandComponent_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  BattleCommandComponent_c *v4; // x0
  System_String_o **p_SEALED_CARDTYPE_ICON_QUICK; // x8
  BattleCommandComponent_c *v6; // x0
  BattleCommandComponent_c *v7; // x0

  if ( (byte_5973802 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973802 = 1;
  }
  switch ( commandType )
  {
    case 3:
      v7 = BattleCommandComponent_TypeInfo;
      if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
        v7 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v7->static_fields->SEALED_CARDTYPE_ICON_QUICK;
      break;
    case 2:
      v6 = BattleCommandComponent_TypeInfo;
      if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
        v6 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v6->static_fields->SEALED_CARDTYPE_ICON_BUSTER;
      break;
    case 1:
      v4 = BattleCommandComponent_TypeInfo;
      if ( !*(&BattleCommandComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
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


int32_t BattleCommandComponent__getCommandType(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  return BattleCommandData__getCommandType(data, 0);
}


int32_t BattleCommandComponent__getCriticalCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( data )
  {
    LODWORD(data) = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0);
    if ( (int)data >= 1 )
    {
      if ( (unsigned int)data < 0xA )
        LODWORD(data) = 1;
      else
        LODWORD(data) = (unsigned int)data / 0xA;
    }
  }
  return (int)data;
}


int32_t BattleCommandComponent__getMarkIndex(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.markindex;
  else
    return -1;
}


int32_t BattleCommandComponent__getPowerUpDepth(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *powerUpCardIcon; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8

  if ( (byte_59737F8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59737F8 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(powerUpCardIcon, 0, 0);
  if ( !v4 )
    return -1;
  v6 = this->fields.powerUpCardIcon;
  if ( !v6 )
    sub_2213CDC(v4, v5);
  return v6->fields.mDepth;
}


int32_t BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
  return data->fields.svtId;
}


int32_t BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
  return data->fields.svtlimit;
}


int32_t BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(this, method);
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *result; // x0
  BattleCommandSealStatus_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59737F1 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandSealStatus_TypeInfo);
    byte_59737F1 = 1;
  }
  result = this->fields.sealStatus;
  if ( !result )
  {
    v4 = (BattleCommandSealStatus_o *)sub_2213CCC(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v4, 0);
    this->fields.sealStatus = v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sealStatus, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    return this->fields.sealStatus;
  }
  return result;
}


bool BattleCommandComponent__get_isKindOfDontAction(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_2213CDC(0, v3);
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, 0);
}


bool BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_2213CDC(0, v3);
  return BattleCommandSealStatus__get_HasKindOfSealed(SealStatus, 0);
}


BattleCommandData_o *BattleCommandComponent__getcommandData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


void BattleCommandComponent__hideOutCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct UIWidget_o *nomalwidget; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct UnityEngine_GameObject_array *addObjectList; // x8
  __int64 v7; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8

  if ( (byte_5973816 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973816 = 1;
  }
  nomalwidget = this->fields.nomalwidget;
  if ( !nomalwidget
    || (((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, double))nomalwidget->klass->vtable._8_set_alpha.methodPtr)(
          nomalwidget,
          nomalwidget->klass->vtable._8_set_alpha.method,
          0.0),
        BattleCommandComponent__DestroyEffectObject1(this, v4),
        (addObjectList = this->fields.addObjectList) == 0) )
  {
LABEL_16:
    sub_2213CDC(nomalwidget, method);
  }
  v7 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(addObjectList->max_length);
    v9 = v7 - 4;
    if ( v7 - 4 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
      goto LABEL_18;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&addObjectList->obj.klass + v7);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    nomalwidget = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      v11 = this->fields.addObjectList;
      if ( !v11 )
        goto LABEL_16;
      if ( v9 >= LODWORD(v11->max_length) )
LABEL_18:
        sub_2213CE4(nomalwidget);
      nomalwidget = (struct UIWidget_o *)*((_QWORD *)&v11->obj.klass + v7);
      if ( !nomalwidget )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nomalwidget, 0, 0);
    }
    addObjectList = this->fields.addObjectList;
    ++v7;
    if ( !addObjectList )
      goto LABEL_16;
  }
  BattleCommandComponent__CardEffectSetActive(this, 0, v5);
}


bool BattleCommandComponent__isSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.selectflg;
}


bool BattleCommandComponent__isTreasureDvc(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.treasureDvc > 0;
}


void BattleCommandComponent__openCard(BattleCommandComponent_o *this, const MethodInfo *method)
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
    sub_2213CDC(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__playAddAttackEffect(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  BattleCommandComponent__flashServant(this, (const MethodInfo *)flg);
  if ( flg )
  {
    v6 = BattleCommandComponent__fadeoutEffect(this, 0, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__playAttackEffect(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  BattleCommandComponent__flashTypeCard(this, (const MethodInfo *)flg);
  BattleCommandComponent__flashServant(this, v5);
  if ( flg )
  {
    v7 = BattleCommandComponent__fadeoutEffect(this, 0, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


void BattleCommandComponent__playNpAttackEffect(BattleCommandComponent_o *this, float ftime, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Object_array *v14; // x21
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *v38; // x22
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  Il2CppObject *v52; // x22
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  Il2CppObject *v66; // x22
  __int64 v67; // x1
  System_Collections_Hashtable_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x20
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_Object_array *v76; // x21
  int32_t v77; // w1
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  Il2CppObject *v84; // x22
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  int32_t v91; // w1
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  Il2CppObject *v98; // x22
  System_Collections_Hashtable_o *v99; // x0
  const MethodInfo *v100; // x2
  System_Collections_IEnumerator_o *v101; // x0
  __int64 v102; // x0
  float v103; // [xsp+0h] [xbp-70h] BYREF
  int v104; // [xsp+4h] [xbp-6Ch] BYREF
  float v105; // [xsp+8h] [xbp-68h] BYREF
  int v106; // [xsp+Ch] [xbp-64h] BYREF
  int v107; // [xsp+18h] [xbp-58h] BYREF
  int v108; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_5973814 & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_26242/*"x"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_26344/*"y"*/);
    sub_2213A60(&StringLiteral_26392/*"z"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_5973814 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_2213B20(object___TypeInfo, 8);
  if ( !v6 )
    goto LABEL_46;
  v14 = (System_Object_array *)v6;
  v15 = (Il2CppObject *)StringLiteral_26242/*"x"*/;
  if ( StringLiteral_26242/*"x"*/ )
  {
    v15 = (Il2CppObject *)sub_2213BB4(StringLiteral_26242/*"x"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_44;
  v17 = (int)StringLiteral_26242/*"x"*/;
  v14->m_Items[0] = (Il2CppObject *)StringLiteral_26242/*"x"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v14->m_Items, v17, v8, v9, v10, v11, v12, v13);
  v108 = 0x40000000;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v108);
  v24 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_2213BB4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( (v14->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_44;
  v14->m_Items[1] = v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->m_Items[1], (int32_t)v24, v18, v19, v20, v21, v22, v23);
  v15 = (Il2CppObject *)StringLiteral_26344/*"y"*/;
  if ( StringLiteral_26344/*"y"*/ )
  {
    v15 = (Il2CppObject *)sub_2213BB4(StringLiteral_26344/*"y"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_44;
  v31 = StringLiteral_26344/*"y"*/;
  v14->m_Items[2] = (Il2CppObject *)StringLiteral_26344/*"y"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v107 = 0x40000000;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v107);
  v38 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_2213BB4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( (v14->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_44;
  v14->m_Items[3] = v38;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->m_Items[3], (int32_t)v38, v32, v33, v34, v35, v36, v37);
  v15 = (Il2CppObject *)StringLiteral_26392/*"z"*/;
  if ( StringLiteral_26392/*"z"*/ )
  {
    v15 = (Il2CppObject *)sub_2213BB4(StringLiteral_26392/*"z"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( LODWORD(v14->max_length) <= 4 )
    goto LABEL_44;
  v45 = StringLiteral_26392/*"z"*/;
  v14->m_Items[4] = (Il2CppObject *)StringLiteral_26392/*"z"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v106 = 1065353216;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v106);
  v52 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_2213BB4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( LODWORD(v14->max_length) <= 5 )
    goto LABEL_44;
  v14->m_Items[5] = v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->m_Items[5], (int32_t)v52, v46, v47, v48, v49, v50, v51);
  v15 = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v15 = (Il2CppObject *)sub_2213BB4(StringLiteral_25366/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_44;
  v59 = StringLiteral_25366/*"time"*/;
  v14->m_Items[6] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->m_Items[6], v59, v53, v54, v55, v56, v57, v58);
  v105 = ftime + 0.1;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v105);
  v66 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_2213BB4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( (v14->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_44;
  v14->m_Items[7] = v66;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->m_Items[7], (int32_t)v66, v60, v61, v62, v63, v64, v65);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v67);
  v68 = iTween__Hash(v14, 0);
  iTween__ScaleTo_75298996(gameObject, v68, 0);
  v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_2213B20(object___TypeInfo, 4);
  if ( !v6 )
LABEL_46:
    sub_2213CDC(v6, v7);
  v76 = (System_Object_array *)v6;
  v15 = (Il2CppObject *)StringLiteral_26392/*"z"*/;
  if ( StringLiteral_26392/*"z"*/ )
  {
    v15 = (Il2CppObject *)sub_2213BB4(StringLiteral_26392/*"z"*/, v76->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( !LODWORD(v76->max_length) )
    goto LABEL_44;
  v77 = StringLiteral_26392/*"z"*/;
  v76->m_Items[0] = (Il2CppObject *)StringLiteral_26392/*"z"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v76->m_Items, v77, v70, v71, v72, v73, v74, v75);
  v104 = 1144258560;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v104);
  v84 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_2213BB4(v15, v76->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( (v76->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_44;
  v76->m_Items[1] = v84;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v76->m_Items[1], (int32_t)v84, v78, v79, v80, v81, v82, v83);
  v15 = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  if ( StringLiteral_25366/*"time"*/ )
  {
    v15 = (Il2CppObject *)sub_2213BB4(StringLiteral_25366/*"time"*/, v76->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_45;
  }
  if ( LODWORD(v76->max_length) <= 2 )
    goto LABEL_44;
  v91 = StringLiteral_25366/*"time"*/;
  v76->m_Items[2] = (Il2CppObject *)StringLiteral_25366/*"time"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v76->m_Items[2], v91, v85, v86, v87, v88, v89, v90);
  v103 = ftime;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984378, &v103);
  v98 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_2213BB4(v15, v76->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_45:
      v102 = sub_2213D00(v15, v16);
      sub_2213BA0(v102, 0);
    }
  }
  if ( (v76->max_length & 0xFFFFFFFC) == 0 )
LABEL_44:
    sub_2213CE4(v15);
  v76->m_Items[3] = v98;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v76->m_Items[3], (int32_t)v98, v92, v93, v94, v95, v96, v97);
  v99 = iTween__Hash(v76, 0);
  iTween__RotateTo_75303760(v69, v99, 0);
  v101 = BattleCommandComponent__fadeoutEffect(this, 1, v100);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v101, 0);
}


void BattleCommandComponent__playOpenNobleCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v2 = this;
  if ( (byte_5973806 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_2213A60(&StringLiteral_19773/*"effect/ef_noblecard"*/);
    byte_5973806 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( LODWORD(effectobj->max_length) <= 2 )
    goto LABEL_18;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_17;
    if ( LODWORD(v5->max_length) <= 2 )
      goto LABEL_18;
    v6 = (UnityEngine_Object_o *)v5->m_Items[2];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__DestroyImmediate_83460132(v6, 0);
  }
  this = (BattleCommandComponent_o *)v2->fields.nomalwidget;
  if ( !this
    || (v7 = v2->fields.effectobj,
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_48153028(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_19773/*"effect/ef_noblecard"*/,
                                             transform,
                                             0,
                                             0),
        !v7) )
  {
LABEL_17:
    sub_2213CDC(this, method);
  }
  if ( LODWORD(v7->max_length) <= 2 )
LABEL_18:
    sub_2213CE4(this);
  v7->m_Items[2] = (UnityEngine_GameObject_o *)this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->m_Items[2], (int32_t)this, v9, v10, v11, v12, v13, v14);
}


void BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v6; // x20
  unsigned __int64 v7; // x22
  __int64 v8; // x27
  UnityEngine_Transform_o *objectRoot; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x28
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o *v20; // x1
  Il2CppClass **v21; // x0
  struct UnityEngine_GameObject_array *v22; // x8
  System_Enum_o v23; // [xsp+8h] [xbp-78h] BYREF
  int v24; // [xsp+18h] [xbp-68h]

  if ( (byte_59737FF & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo);
    sub_2213A60(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59737FF = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)sub_2213B20(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2);
  if ( !gameObject )
LABEL_20:
    sub_2213CDC(gameObject, v4);
  klass = gameObject[1].klass;
  v6 = gameObject;
  if ( ((unsigned int)klass & 0xFFFFFFFE) == 0 )
LABEL_21:
    sub_2213CE4(gameObject);
  HIDWORD(gameObject[1].monitor) = 1;
  if ( (int)klass >= 1 )
  {
    v7 = 0;
    while ( v7 < (unsigned int)klass )
    {
      v8 = *((int *)&v6[1].monitor + v7);
      objectRoot = this->fields.objectRoot;
      v23.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo;
      v23.monitor = (void *)-1LL;
      v24 = v8;
      v10 = System_Enum__ToString(&v23, 0);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v10, 1, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !NodeFromName )
          goto LABEL_20;
        addObjectList = this->fields.addObjectList;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0);
        if ( !addObjectList )
          goto LABEL_20;
        if ( (unsigned int)v8 >= LODWORD(addObjectList->max_length) )
          goto LABEL_21;
        v20 = gameObject;
        v21 = &addObjectList->obj.klass + v8;
        v21[4] = (Il2CppClass *)v20;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v14, v15, v16, v17, v18, v19);
        v22 = this->fields.addObjectList;
        if ( !v22 )
          goto LABEL_20;
        if ( (unsigned int)v8 >= LODWORD(v22->max_length) )
          goto LABEL_21;
        gameObject = v22->m_Items[v8];
        if ( !gameObject )
          goto LABEL_20;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      }
      LODWORD(klass) = v6[1].klass;
      if ( (__int64)++v7 >= (int)klass )
        return;
    }
    goto LABEL_21;
  }
}


void BattleCommandComponent__resetComboData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *effectobj; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x19

  if ( (byte_5973812 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973812 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_2213CDC(v3, v4);
  max_length = effectobj->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_2213CE4(v3);
      v8 = (UnityEngine_Object_o *)effectobj->m_Items[v7];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      v3 = UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( v3 )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
        UnityEngine_Object__Destroy_83459800(v8, 0);
      }
      LODWORD(max_length) = effectobj->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
  }
}


void BattleCommandComponent__resetCriticalLabel(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DrumRollLabel_o *criticallabel; // x0

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel
    || (DrumRollLabel__setParam(criticallabel, 0, 0), (criticallabel = this->fields.criticallabel) == 0) )
  {
    sub_2213CDC(criticallabel, v3);
  }
  DrumRollLabel__ChangeParamNonAnimation(criticallabel, 0, 1, 0);
}


void BattleCommandComponent__resetSelect(BattleCommandComponent_o *this, const MethodInfo *method)
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
  if ( (byte_5973821 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_5973821 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_17;
  uniqueId = data->fields.uniqueId;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
  ServantAssetLoadManager__StopVoice(uniqueId, 0.0, 0);
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  BattleCommandComponent__SetCardColor(v2, v11, v5);
  BattleCommandComponent__resetSelectStamp(v2, v6);
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( (effectobj->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_18;
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v2->fields.effectobj;
    if ( v9 )
    {
      if ( (v9->max_length & 0xFFFFFFFC) != 0 )
      {
        v10 = (UnityEngine_Object_o *)v9->m_Items[3];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        UnityEngine_Object__Destroy_83459800(v10, 0);
        return;
      }
LABEL_18:
      sub_2213CE4(this);
    }
LABEL_17:
    sub_2213CDC(this, method);
  }
}


void BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8

  v2 = this;
  if ( (byte_597380A & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597380A = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( LODWORD(effectobj->max_length) <= 5 )
LABEL_14:
    sub_2213CE4(this);
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[5];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_13;
    if ( LODWORD(v5->max_length) > 5 )
    {
      this = (BattleCommandComponent_o *)v2->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v5->m_Items[5], 1, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(this, method);
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__selectCard(BattleCommandComponent_o *this, int32_t targetIndex, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  __int64 data; // x0
  const MethodInfo *v8; // x1
  struct BattleCommandData_o *v9; // x8
  int treasureDvc; // w21
  Voice_BATTLE_array *v11; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v13; // x2
  System_Array_o *v14; // x0
  System_RuntimeFieldHandle_o *v15; // x8
  struct BattlePerformance_o *perf; // x8
  System_Collections_Generic_List_KeyValuePair_string__int___o *v17; // x21
  BattleCommandComponent___c_c *v18; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__192_0; // x22
  Il2CppObject *v21; // x23
  struct BattleCommandComponent___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x0
  System_Collections_Generic_List_T__o *v31; // x21
  int32_t v32; // w22
  int32_t size; // w26
  System_Collections_Generic_KeyValuePair_object__int__o v34; // kr10_16
  struct BattleCommandData_o *v35; // x8
  Il2CppObject *key; // x21
  int32_t uniqueId; // w23
  System_String_o *LastVoiceType; // x0
  System_Collections_Generic_List_T__o *v39; // x21
  struct BattleCommandData_o *v40; // x8
  VoiceMaster_o *v41; // x22
  int32_t svtId; // w23
  struct BattleServantData_o *svtData; // x8
  int32_t v44; // w2
  struct BattleCommandData_o *v45; // x8
  __int64 v46; // x1
  UnityEngine_Object_o *ServantActor; // x22
  int32_t v48; // w22
  struct BattleServantData_o *v49; // x8
  struct BattleCommandData_o *v50; // x9
  int32_t v51; // w23
  int32_t overwriteSvtVoiceId; // w25
  int32_t v53; // w24
  System_String_o *v54; // x21
  Il2CppObject *v55; // x0
  __int64 *v56; // x8
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct BattlePerformance_o *v65; // x8
  bool v66; // w0
  int v67; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_KeyValuePair_string__int___o *voiceInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16
  System_Collections_Generic_KeyValuePair_object__int__o v70; // 0:x2.16
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597381B & 1) == 0 )
  {
    sub_2213A60(&Voice_BATTLE___TypeInfo);
    sub_2213A60(&Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    sub_2213A60(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_KeyValuePair_string__int___int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546);
    sub_2213A60(&Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3);
    sub_2213A60(&Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0);
    sub_2213A60(&Method_BattleCommandComponent___c__selectCard_b__192_0__);
    sub_2213A60(&BattleCommandComponent___c_TypeInfo);
    sub_2213A60(&Voice_TypeInfo);
    sub_2213A60(&StringLiteral_17306/*"a"*/);
    sub_2213A60(&StringLiteral_7515/*"HEROINE_CHANGECARDVOICE"*/);
    sub_2213A60(&StringLiteral_19769/*"effect/ef_commandup_{0}{1:00}"*/);
    sub_2213A60(&StringLiteral_24034/*"q"*/);
    sub_2213A60(&StringLiteral_17686/*"b"*/);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_597381B = 1;
  }
  v71.fields.r = 0.5;
  v71.fields.g = 0.5;
  v71.fields.b = 0.5;
  v71.fields.a = 1.0;
  voiceInfoList = 0;
  BattleCommandComponent__SetCardColor(this, v71, *(const MethodInfo **)&targetIndex);
  BattleCommandComponent__stopFirstAura(this, v5);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_80;
  if ( BattleCommandData__isBlank((BattleCommandData_o *)data, 0) )
    return;
  data = BattleCommandComponent__get_isKindOfDontAction(this, v8);
  if ( (data & 1) != 0 )
    return;
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_80;
  treasureDvc = v9->fields.treasureDvc;
  if ( treasureDvc <= 0 )
  {
    if ( !*(&Voice_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v6);
    FileName = Voice__getFileName(245, 0);
    if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v13) )
    {
      v14 = (System_Array_o *)sub_2213B20(Voice_BATTLE___TypeInfo, 6);
      v15 = (System_RuntimeFieldHandle_o *)&Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
    }
    else
    {
      v14 = (System_Array_o *)sub_2213B20(Voice_BATTLE___TypeInfo, 3);
      v15 = (System_RuntimeFieldHandle_o *)&Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
    }
    goto LABEL_18;
  }
  if ( treasureDvc != ConstantMaster__getValue((System_String_o *)StringLiteral_7515/*"HEROINE_CHANGECARDVOICE"*/, 0) )
  {
    v14 = (System_Array_o *)sub_2213B20(Voice_BATTLE___TypeInfo, 12);
    v15 = (System_RuntimeFieldHandle_o *)&Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546;
LABEL_18:
    v11 = (Voice_BATTLE_array *)v14;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
      v14,
      (System_RuntimeFieldHandle_o)v15->fields.value,
      0);
    goto LABEL_19;
  }
  data = sub_2213B20(Voice_BATTLE___TypeInfo, 1);
  if ( !data )
    goto LABEL_80;
  v11 = (Voice_BATTLE_array *)data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_81;
  *(_DWORD *)(data + 32) = 252;
LABEL_19:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_80;
  data = (__int64)this->fields.svtData;
  if ( !data )
    goto LABEL_80;
  if ( BattleServantData__TryGetPlayableVoiceInfoList(
         (BattleServantData_o *)data,
         v11,
         this->fields.data,
         perf->fields.data,
         &voiceInfoList,
         0) )
  {
    v17 = voiceInfoList;
    v18 = BattleCommandComponent___c_TypeInfo;
    if ( !*(&BattleCommandComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo, v6);
      v18 = BattleCommandComponent___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__192_0 = (System_Func_T__TResult__o *)static_fields->__9__192_0;
    if ( !_9__192_0 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v6);
        static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__192_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_string__int___int__TypeInfo);
      System_Func_KeyValuePair_object__int___int____ctor(
        _9__192_0,
        v21,
        Method_BattleCommandComponent___c__selectCard_b__192_0__,
        0);
      v22 = BattleCommandComponent___c_TypeInfo->static_fields;
      v22->__9__192_0 = (struct System_Func_KeyValuePair_string__int___int__o *)_9__192_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v22->__9__192_0,
        (int32_t)_9__192_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                                 (System_Func_TSource__TResult__o *)_9__192_0,
                                                                 (const MethodInfo_388B888 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    v30 = System_Linq_Enumerable__ToArray_int_(
            v29,
            (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    data = RandomUtility__GetRandomRangeIndex(v30, 0, 0);
    v31 = (System_Collections_Generic_List_T__o *)voiceInfoList;
    if ( !voiceInfoList )
      goto LABEL_80;
    v32 = data;
    size = voiceInfoList->fields._size;
    Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
             (System_Collections_Generic_List_T__o *)voiceInfoList,
             0,
             (const MethodInfo_43C3F1C *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    v34 = BasicHelper__IndexValue_KeyValuePair_object__int__(
            v31,
            v32,
            Item,
            (const MethodInfo_3814A94 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    v6 = *(_QWORD *)&v34.fields.value;
    data = (__int64)v34.fields.key;
    v35 = this->fields.data;
    if ( !v35 )
      goto LABEL_80;
    key = v34.fields.key;
    uniqueId = v35->fields.uniqueId;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&v34.fields.value);
    LastVoiceType = ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0);
    data = System_String__op_Equality(LastVoiceType, (System_String_o *)v34.fields.key, 0);
    if ( (data & 1) != 0 )
    {
      v39 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_80;
      v70 = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
              (System_Collections_Generic_List_T__o *)voiceInfoList,
              0,
              (const MethodInfo_43C3F1C *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
      key = BasicHelper__IndexValue_KeyValuePair_object__int__(
              v39,
              (v32 + 1) % size,
              v70,
              (const MethodInfo_3814A94 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    }
    data = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data
      || (data = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)data,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoiceMaster___),
          (v40 = this->fields.data) == 0)
      || (v41 = (VoiceMaster_o *)data,
          svtId = v40->fields.svtId,
          data = (__int64)System_String__Concat_75651716(
                            (System_String_o *)StringLiteral_16746/*"_"*/,
                            (System_String_o *)key,
                            0),
          !v41) )
    {
LABEL_80:
      sub_2213CDC(data, v6);
    }
    data = VoiceMaster__getFlagRequestNumber(v41, svtId, (System_String_o *)data, 0, 0);
    svtData = this->fields.svtData;
    if ( (_DWORD)data )
    {
      if ( !svtData )
        goto LABEL_80;
      v44 = data;
      data = (__int64)this->fields.perf;
      if ( svtData->fields.followerType )
      {
LABEL_47:
        if ( !data )
          goto LABEL_80;
        ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                                 (BattlePerformance_o *)data,
                                                 svtData->fields.uniqueId,
                                                 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
        data = UnityEngine_Object__op_Inequality(ServantActor, 0, 0);
        if ( (data & 1) != 0 )
        {
          if ( !ServantActor )
            goto LABEL_80;
          if ( !BattleActorControl__isNoVoice((BattleActorControl_o *)ServantActor, 0) )
          {
            data = (__int64)this->fields.svtData;
            if ( !data )
              goto LABEL_80;
            data = BattleServantData__getSvtId((BattleServantData_o *)data, 0);
            if ( !this->fields.svtData )
              goto LABEL_80;
            v48 = data;
            data = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0);
            v49 = this->fields.svtData;
            if ( !v49 )
              goto LABEL_80;
            v50 = this->fields.data;
            if ( !v50 )
              goto LABEL_80;
            v51 = data;
            overwriteSvtVoiceId = v49->fields.overwriteSvtVoiceId;
            v53 = v50->fields.uniqueId;
            if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v6);
            ServantAssetLoadManager__playBattleVoice(
              v48,
              v51,
              overwriteSvtVoiceId,
              (System_String_o *)key,
              1.0,
              0,
              v53,
              0,
              0);
          }
        }
        goto LABEL_60;
      }
      if ( !data )
        goto LABEL_80;
      v45 = this->fields.data;
      if ( !v45 )
        goto LABEL_80;
      data = *(_QWORD *)(data + 40);
      if ( !data )
        goto LABEL_80;
      BattleData__AddServantVoicePlayed_52911472((BattleData_o *)data, v45->fields.svtId, v44, 0, 0);
      svtData = this->fields.svtData;
    }
    if ( !svtData )
      goto LABEL_80;
    data = (__int64)this->fields.perf;
    goto LABEL_47;
  }
LABEL_60:
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_80;
  v54 = (System_String_o *)StringLiteral_19769/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick((BattleCommandData_o *)data, 0) )
  {
    v67 = targetIndex + 1;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v67);
    v56 = &StringLiteral_24034/*"q"*/;
LABEL_69:
    v54 = System_String__Format_75697880(v54, (Il2CppObject *)*v56, v55, 0);
    goto LABEL_70;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_80;
  if ( BattleCommandData__isArts((BattleCommandData_o *)data, 0) )
  {
    v67 = targetIndex + 1;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v67);
    v56 = &StringLiteral_17306/*"a"*/;
    goto LABEL_69;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_80;
  if ( BattleCommandData__isBuster((BattleCommandData_o *)data, 0) )
  {
    v67 = targetIndex + 1;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v67);
    v56 = &StringLiteral_17686/*"b"*/;
    goto LABEL_69;
  }
LABEL_70:
  data = (__int64)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_80;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
  data = (__int64)BaseMonoBehaviour__createObject_48153028((BaseMonoBehaviour_o *)this, v54, transform, 0, 0);
  if ( !effectobj )
    goto LABEL_80;
  if ( (effectobj->max_length & 0xFFFFFFFC) == 0 )
LABEL_81:
    sub_2213CE4(data);
  effectobj->m_Items[3] = (UnityEngine_GameObject_o *)data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&effectobj->m_Items[3], data, v59, v60, v61, v62, v63, v64);
  v65 = this->fields.perf;
  if ( !v65 )
    goto LABEL_80;
  data = (__int64)v65->fields.data;
  if ( !data )
    goto LABEL_80;
  v66 = BattleData__checkLimitTurn((BattleData_o *)data, 0);
  if ( !targetIndex && v66 )
  {
    data = (__int64)this->fields.perf;
    if ( data )
    {
      BattlePerformance__SetLimitTurnEffectFlag((BattlePerformance_o *)data, 0, 0);
      return;
    }
    goto LABEL_80;
  }
}


void BattleCommandComponent__setAttackCommandData(
        BattleCommandComponent_o *this,
        BattleCommandComponent_o *comp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7
  struct BattlePerformance_o *perf; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x4
  struct BattleCommandData_o *data; // x8

  if ( !comp
    || (BattleCommandComponent__setData(this, comp->fields.data, comp->fields.svtData, 1, 1, 0, 1, v3),
        perf = comp->fields.perf,
        this->fields.perf = perf,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.perf, (int32_t)perf, v7, v8, v9, v10, v11, v12),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v13),
        (data = comp->fields.data) == 0) )
  {
    sub_2213CDC(this, comp);
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, data->fields.commandCardParam, 2, 0, v14);
}


void BattleCommandComponent__setBuffIconList(BattleCommandComponent_o *this, bool display, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *buffRoot; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BattleBuffData_o *BuffData; // x22
  System_Collections_Generic_List_object__o *v15; // x21
  System_Int32_array *Individualities; // x0
  struct System_Int32_array **p_individuality; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  bool isTreasureDvc; // w0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  TreasureDvcEntity_o *TreasureDevice; // x0
  struct System_Int32_array *v32; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ShowCommandBuffListActive; // x23
  System_Collections_Generic_IEnumerable_TSource__o *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x22
  System_Func_object__bool__o *v36; // x23
  System_Predicate_object__o *v37; // x22
  System_Predicate_object__o *v38; // x22
  System_Predicate_object__o *v39; // x22
  System_Collections_Generic_List_int__o *v40; // x20
  Il2CppObject *MasterData_object; // x22
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *Entity; // x0
  __int64 IconId; // x0
  __int64 v46; // x1
  int32_t v47; // w21
  _BOOL8 v48; // x0
  __int64 v49; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  unsigned __int64 v54; // x21
  unsigned __int64 max_length_low; // x9
  UnityEngine_Component_o *v56; // x22
  int32_t v57; // w1
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5973808 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_2213A60(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_2213A60(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_BattleCommandComponent___c__DisplayClass142_0__setBuffIconList_b__0__);
    sub_2213A60(&Method_BattleCommandComponent___c__DisplayClass142_0__setBuffIconList_b__1__);
    sub_2213A60(&Method_BattleCommandComponent___c__DisplayClass142_0__setBuffIconList_b__2__);
    sub_2213A60(&Method_BattleCommandComponent___c__DisplayClass142_0__setBuffIconList_g__BuffFilterByIndividuality_3__);
    sub_2213A60(&BattleCommandComponent___c__DisplayClass142_0_TypeInfo);
    byte_5973808 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v5 = sub_2213CCC(BattleCommandComponent___c__DisplayClass142_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass142_0___ctor((BattleCommandComponent___c__DisplayClass142_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !display || !this->fields.data || !this->fields.svtData )
  {
    buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
    if ( buffRoot )
    {
      buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0);
      if ( buffRoot )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 0, 0);
        return;
      }
    }
LABEL_46:
    sub_2213CDC(buffRoot, v7);
  }
  buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
  if ( !buffRoot )
    goto LABEL_46;
  buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0);
  if ( !buffRoot )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 1, 0);
  buffRoot = (UnityEngine_Component_o *)this->fields.svtData;
  if ( !buffRoot )
    goto LABEL_46;
  BuffData = BattleServantData__get_BuffData((BattleServantData_o *)buffRoot, 0);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_46;
  Individualities = BattleCommandData__getIndividualities((BattleCommandData_o *)buffRoot, 0);
  *(_QWORD *)(v5 + 40) = Individualities;
  p_individuality = (struct System_Int32_array **)(v5 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)Individualities, v18, v19, v20, v21, v22, v23);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_46;
  isTreasureDvc = BattleCommandData__isTreasureDvc((BattleCommandData_o *)buffRoot, 0);
  *(_BYTE *)(v5 + 24) = isTreasureDvc;
  if ( !isTreasureDvc )
    goto LABEL_16;
  buffRoot = (UnityEngine_Component_o *)this->fields.svtData;
  if ( !buffRoot )
    goto LABEL_46;
  TreasureDevice = BattleServantData__get_TreasureDevice((BattleServantData_o *)buffRoot, 0);
  if ( TreasureDevice )
  {
    p_individuality = &TreasureDevice->fields.individuality;
LABEL_16:
    v32 = *p_individuality;
    goto LABEL_17;
  }
  v32 = 0;
LABEL_17:
  *(_QWORD *)(v5 + 32) = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v32, v25, v26, v27, v28, v29, v30);
  if ( !BuffData )
    goto LABEL_46;
  ShowCommandBuffListActive = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getShowCommandBuffListActive(
                                                                                     BuffData,
                                                                                     0);
  ShowCommandBuffListPassive = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getShowCommandBuffListPassive(
                                                                                      BuffData,
                                                                                      0);
  v35 = System_Linq_Enumerable__Concat_object_(
          ShowCommandBuffListActive,
          ShowCommandBuffListPassive,
          (const MethodInfo_387607C *)Method_System_Linq_Enumerable_Concat_BattleBuffData_BuffData___);
  v36 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass142_0__setBuffIconList_g__BuffFilterByIndividuality_3__,
    0);
  buffRoot = (UnityEngine_Component_o *)System_Linq_Enumerable__Where_object_(
                                          v35,
                                          (System_Func_TSource__bool__o *)v36,
                                          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v15 )
    goto LABEL_46;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)buffRoot,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v37 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v37,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass142_0__setBuffIconList_b__0__,
    0);
  System_Collections_Generic_List_object___RemoveAll(
    v15,
    (System_Predicate_T__o *)v37,
    (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v38 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v38,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass142_0__setBuffIconList_b__1__,
    0);
  System_Collections_Generic_List_object___RemoveAll(
    v15,
    (System_Predicate_T__o *)v38,
    (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v39 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v39,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass142_0__setBuffIconList_b__2__,
    0);
  System_Collections_Generic_List_object___RemoveAll(
    v15,
    (System_Predicate_T__o *)v39,
    (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v40 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  buffRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffRoot )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)buffRoot,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v15,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v59 = v58;
  v58.fields._list = 0;
  *(_QWORD *)&v58.fields._index = &v59;
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v42 )
      break;
    if ( !v59.fields._current )
      sub_2213CDC(v42, v43);
    if ( !MasterData_object )
      sub_2213CDC(v42, v43);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)v59.fields._current[1].klass,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    if ( Entity )
    {
      IconId = BuffEntity__GetIconId((BuffEntity_o *)Entity, 0);
      if ( !v40 )
        sub_2213CDC(IconId, v46);
      v47 = IconId;
      v48 = System_Collections_Generic_List_int___Contains(
              v40,
              IconId,
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v48 )
      {
        items = v40->fields._items;
        v51 = Method_System_Collections_Generic_List_int__Add__;
        ++v40->fields._version;
        if ( !items )
          sub_2213CDC(v48, v49);
        size = v40->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v40,
            v47,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v40->fields._size = size + 1;
          items->m_Items[size] = v47;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
    goto LABEL_46;
  v54 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(buffIconList->max_length);
    if ( (__int64)v54 >= (int)max_length_low )
      break;
    if ( !v40 )
      goto LABEL_46;
    if ( (__int64)v54 >= v40->fields._size )
    {
      if ( v54 >= max_length_low )
LABEL_49:
        sub_2213CE4(buffRoot);
      buffRoot = (UnityEngine_Component_o *)buffIconList->m_Items[v54];
      if ( !buffRoot )
        goto LABEL_46;
      v57 = 0;
    }
    else
    {
      if ( v54 >= max_length_low )
        goto LABEL_49;
      v56 = (UnityEngine_Component_o *)buffIconList->m_Items[v54];
      buffRoot = (UnityEngine_Component_o *)System_Collections_Generic_List_int___get_Item(
                                              v40,
                                              v54,
                                              (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v56 )
        goto LABEL_46;
      v57 = (int)buffRoot;
      buffRoot = v56;
    }
    BattleServantBuffIconComponent__setImageId((BattleServantBuffIconComponent_o *)buffRoot, v57, 0);
    buffIconList = this->fields.buffIconList;
    ++v54;
    if ( !buffIconList )
      goto LABEL_46;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__setCriticalObject(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_2213CDC(0, flg);
  UnityEngine_GameObject__SetActive(criticalObject, flg, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__setData(
        BattleCommandComponent_o *this,
        BattleCommandData_o *indata,
        BattleServantData_o *insvtData,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        bool isInit,
        const MethodInfo *method)
{
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  char v17; // w4
  char v18; // w5
  bool v19; // w6
  bool v20; // w7
  Spawner_o *spawner; // x0
  const MethodInfo *v22; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  struct UnityEngine_GameObject_array *v24; // x8
  __int64 v25; // x28
  unsigned __int64 max_length_low; // x1
  unsigned __int64 v27; // x29
  UnityEngine_Object_o *v28; // x25
  struct UnityEngine_GameObject_array *v29; // x8
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_Object_o *v31; // x25
  struct UnityEngine_GameObject_array *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  char v35; // w4
  char v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x7
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x1
  BattleBuffData_o *buffData; // x0
  struct BattleCommandData_o *v43; // x25
  const MethodInfo *v44; // x2
  BattleCommandData_o *v45; // x0
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x4
  int32_t commandCardParam; // w1
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59737F9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59737F9 = 1;
  }
  this->fields.data = indata;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)indata,
    (System_String_o *)insvtData,
    (System_String_o *)isAttack,
    isShowBuffIcon,
    isTDTypeChangeWindow,
    isInit,
    (bool)method);
  this->fields.svtData = insvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtData,
    (int32_t)insvtData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_23;
  BattleCommandComponent__DestroyEffectObject1(this, v22);
  v24 = this->fields.effectobj;
  if ( !v24 )
    goto LABEL_23;
  v25 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(v24->max_length);
    v27 = v25 - 4;
    if ( v25 - 4 >= (int)max_length_low )
      break;
    if ( v27 >= max_length_low )
      goto LABEL_45;
    v28 = (UnityEngine_Object_o *)*((_QWORD *)&v24->obj.klass + v25);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, max_length_low);
    spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
    if ( ((unsigned __int8)spawner & 1) != 0 )
    {
      if ( v27 < 5 )
      {
        v30 = this->fields.effectobj;
        if ( !v30 )
          goto LABEL_23;
        if ( v27 >= LODWORD(v30->max_length) )
LABEL_45:
          sub_2213CE4(spawner);
        v31 = (UnityEngine_Object_o *)*((_QWORD *)&v30->obj.klass + v25);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
        UnityEngine_Object__Destroy_83459800(v31, 0);
      }
      else if ( v25 == 9 )
      {
        v29 = this->fields.effectobj;
        if ( !v29 )
          goto LABEL_23;
        if ( (v29->max_length & 0xFFFFFFFE) <= 5 )
          goto LABEL_45;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_23;
        Spawner__Despawn(spawner, v29->m_Items[5], 1, 0);
      }
    }
    v24 = this->fields.effectobj;
    ++v25;
    if ( !v24 )
      goto LABEL_23;
  }
  v32 = (struct UnityEngine_GameObject_array *)sub_2213B20(UnityEngine_GameObject___TypeInfo, max_length_low);
  this->fields.effectobj = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectobj, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  data = this->fields.data;
  if ( data )
  {
    if ( BattleCommandData__isTreasureDvc(data, 0) )
    {
      svtData = this->fields.svtData;
      if ( svtData )
      {
        buffData = svtData->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, svtData, 0, 0) )
          {
            spawner = (Spawner_o *)this->fields.svtData;
            if ( !spawner )
              goto LABEL_23;
            spawner = (Spawner_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)spawner, 0);
            if ( !spawner )
              goto LABEL_23;
            if ( TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)spawner, 0) && !isTDTypeChangeWindow )
            {
              spawner = (Spawner_o *)this->fields.svtData;
              if ( !spawner )
                goto LABEL_23;
              v43 = this->fields.data;
              spawner = (Spawner_o *)BattleServantData__getTreasureDvcCardId((BattleServantData_o *)spawner, 0);
              if ( !v43 )
                goto LABEL_23;
              v43->fields._type = (int)spawner;
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, isInit, isAttack, isShowBuffIcon, isTDTypeChangeWindow, 0, 0, v39);
  v45 = this->fields.data;
  if ( !v45 || BattleCommandData__getCriticalPoint(v45, 0) < 1 || !this->fields.isCountUp )
    goto LABEL_41;
  spawner = (Spawner_o *)this->fields.criticalObject;
  if ( !spawner )
LABEL_23:
    sub_2213CDC(spawner, v22);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spawner, 1, 0);
LABEL_41:
  v50.fields.r = 0.0;
  v50.fields.g = 0.0;
  v50.fields.b = 0.0;
  v50.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v50, 1, v44);
  v51.fields.r = 0.0;
  v51.fields.g = 0.0;
  v51.fields.b = 0.0;
  v51.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v51, 1, v46);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v47);
    commandCardParam = indata->fields.commandCardParam;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v47);
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, commandCardParam, 2, 1, v48);
}


void BattleCommandComponent__setData_53600908(
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
  __int64 v13; // x23
  __int64 v14; // x24
  int32_t v15; // w22
  int32_t v16; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  __int64 v19; // x23
  struct BattleBuffData_o *buffData; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  const MethodInfo *v27; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_59737FD & 1) == 0 )
  {
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59737FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_16;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v28.fields.currentCryptoKey = v10;
  *(_QWORD *)&v28.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v28, 0);
  if ( !v9 )
    goto LABEL_16;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v9,
               (int32_t)Instance,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Instance )
  {
    klass = Instance[9].klass;
    if ( klass )
    {
      if ( LODWORD(klass->_1.namespaze) <= index )
        sub_2213CE4(Instance);
      v13 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      v15 = *((_DWORD *)&klass->_1.byval_arg.data + index);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
      *(_QWORD *)&v29.fields.currentCryptoKey = v13;
      *(_QWORD *)&v29.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0);
      v19 = sub_2213CCC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_53637188(
        (BattleCommandData_o *)v19,
        v15,
        v16,
        CommandDispLimitCount,
        CommandImageSvtId,
        -1,
        0);
      if ( v19 )
      {
        BattleCommandData__SetCommandCardParam((BattleCommandData_o *)v19, svtData->fields.commandCardParam, index, 0);
        buffData = svtData->fields.buffData;
        *(_QWORD *)(v19 + 112) = buffData;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 112), (int32_t)buffData, v21, v22, v23, v24, v25, v26);
        *(_DWORD *)(v19 + 88) = index;
        BattleCommandComponent__setData(this, (BattleCommandData_o *)v19, svtData, 0, 1, 0, 1, v27);
        return;
      }
    }
LABEL_16:
    sub_2213CDC(Instance, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__setDepth(BattleCommandComponent_o *this, int32_t basedepth, const MethodInfo *method)
{
  UIWidget_o *bg; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *assistSprite; // x21
  UnityEngine_Object_o *assistChargeTurnLabel; // x21
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *donotStun2Sprite; // x21
  UnityEngine_Object_o *donotsleepSprite; // x21
  UnityEngine_Object_o *donotPermanentSleep; // x21
  UnityEngine_Object_o *unusableShortageStarSprite; // x21
  UnityEngine_Object_o *unusableNpSprite; // x21
  UnityEngine_Object_o *donotActTypeSprite; // x21
  UnityEngine_Object_o *donotActWithTypeSp; // x21
  UnityEngine_Object_o *donotActCardSprite; // x21
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x21
  struct BattleServantBuffIconComponent_array *buffIconList; // x21
  int max_length; // w8
  __int64 v22; // x23
  BattleServantBuffIconComponent_o *v23; // x8
  UnityEngine_Object_o *powerUpCardValue; // x21
  UnityEngine_Object_o *powerUpCardIcon; // x21
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x21
  UnityEngine_Object_o *iconChangeTypeByTransform; // x21

  if ( (byte_59737F7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59737F7 = 1;
  }
  bg = (UIWidget_o *)this->fields.bg;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 1, 0);
  bg = (UIWidget_o *)this->fields.facetex;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 2, 0);
  bg = (UIWidget_o *)this->fields.icon;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 3, 0);
  bg = (UIWidget_o *)this->fields.text;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 4, 0);
  bg = (UIWidget_o *)this->fields.nobletex;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 5, 0);
  bg = (UIWidget_o *)this->fields.codeTexture;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 6, 0);
  bg = (UIWidget_o *)this->fields.codeSprite;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 7, 0);
  bg = (UIWidget_o *)this->fields.chargeTurnLabel;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 11, 0);
  bg = (UIWidget_o *)this->fields.remainingTurnLabel;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 11, 0);
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(assistSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.assistSprite;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 7, 0);
  }
  assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(assistChargeTurnLabel, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.assistChargeTurnLabel;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 11, 0);
  }
  assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(assistRemainingTurnLabel, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.assistRemainingTurnLabel;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 11, 0);
  }
  bg = (UIWidget_o *)this->fields.sealedSprite;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 9, 0);
  bg = (UIWidget_o *)this->fields.donotactSprite;
  if ( !bg )
    goto LABEL_108;
  UIWidget__set_depth(bg, basedepth + 9, 0);
  donotStun2Sprite = (UnityEngine_Object_o *)this->fields.donotStun2Sprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(donotStun2Sprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotStun2Sprite;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 9, 0);
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(donotsleepSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotsleepSprite;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 9, 0);
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(donotPermanentSleep, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotPermanentSleep;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 9, 0);
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.unusableShortageStarSprite;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 9, 0);
  }
  unusableNpSprite = (UnityEngine_Object_o *)this->fields.unusableNpSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(unusableNpSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.unusableNpSprite;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 9, 0);
  }
  donotActTypeSprite = (UnityEngine_Object_o *)this->fields.donotActTypeSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(donotActTypeSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotActTypeSprite;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 10, 0);
  }
  donotActWithTypeSp = (UnityEngine_Object_o *)this->fields.donotActWithTypeSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(donotActWithTypeSp, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotActWithTypeSp;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 9, 0);
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(donotActCardSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotActCardSprite;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 10, 0);
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceErrorSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.treasureDeviceErrorSprite;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 9, 0);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, basedepth + 7, 1, 0);
  bg = (UIWidget_o *)this->fields.friendIcon;
  if ( !bg || (UIWidget__set_depth(bg, basedepth + 10, 0), (buffIconList = this->fields.buffIconList) == 0) )
LABEL_108:
    sub_2213CDC(bg, *(_QWORD *)&basedepth);
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    do
    {
      if ( (unsigned int)v22 >= max_length )
        sub_2213CE4(bg);
      v23 = buffIconList->m_Items[v22];
      if ( !v23 )
        goto LABEL_108;
      bg = (UIWidget_o *)v23->fields.iconSprite;
      if ( !bg )
        goto LABEL_108;
      UIWidget__set_depth(bg, basedepth + 11, 0);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v22 < max_length );
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(powerUpCardValue, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardValue;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 8, 0);
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 8, 0);
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 12, 0);
  }
  restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(restTreasureDeviceChangeTurnLabel, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 13, 0);
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(iconChangeTypeByTransform, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.iconChangeTypeByTransform;
    if ( !bg )
      goto LABEL_108;
    UIWidget__set_depth(bg, basedepth + 12, 0);
  }
  this->fields.basedepth = basedepth;
}


void BattleCommandComponent__setMoveMode(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleCommandComponent__stopFirstAura(this, method);
  BattleCommandComponent__resetSelectStamp(this, v3);
}


void BattleCommandComponent__setPerf(
        BattleCommandComponent_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.perf = inPerf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.perf,
    (int32_t)inPerf,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCommandComponent__setSelect(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  this->fields.selectflg = flg;
}


void BattleCommandComponent__setSelectStamp(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *stamp,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UnityEngine_GameObject_array *effectobj; // x0

  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_2213CDC(0, stamp);
  if ( LODWORD(effectobj->max_length) <= 5 )
    sub_2213CE4(effectobj);
  effectobj->m_Items[5] = stamp;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&effectobj->m_Items[5],
    (int32_t)stamp,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCommandComponent__setShader(
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

  if ( (byte_59737F6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59737F6 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shaderName);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = this->fields.facetex;
    v7 = UnityEngine_Shader__Find(shaderName, 0);
    v8 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0);
    if ( !v6 )
      sub_2213CDC(v9, v10);
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))v6->klass->vtable._25_set_material.methodPtr)(
      v6,
      v8,
      v6->klass->vtable._25_set_material.method);
  }
}


void BattleCommandComponent__setTarget(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.target = target;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.target,
    (int32_t)target,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_5973819 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973819 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( !Component_object )
      sub_2213CDC(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
  }
}


void BattleCommandComponent__startComboCard(BattleCommandComponent_o *this, const MethodInfo *method)
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


void BattleCommandComponent__startCountUp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct BattleCommandData_o *data; // x8
  BattleCommandData_o *v4; // x0
  DrumRollLabel_o *criticallabel; // x20
  int32_t v6; // w21
  DrumRollLabel_CompleteEventHandler_o *v7; // x22

  v2 = this;
  if ( (byte_597380C & 1) == 0 )
  {
    sub_2213A60(&Method_BattleCommandComponent_compCriticallabel__);
    this = (BattleCommandComponent_o *)sub_2213A60(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_597380C = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_15;
  this = (BattleCommandComponent_o *)v2->fields.criticalObject;
  if ( data->fields.starcount <= 0 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
LABEL_15:
    sub_2213CDC(this, method);
  }
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (BattleCommandComponent_o *)v2->fields.criticallabel;
  v2->fields.isCountUp = 1;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__setParam((DrumRollLabel_o *)this, 0, 0);
  this = (BattleCommandComponent_o *)v2->fields.criticallabel;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__ChangeParamNonAnimation((DrumRollLabel_o *)this, 0, 1, 0);
  v4 = v2->fields.data;
  criticallabel = v2->fields.criticallabel;
  v6 = v4 ? v2->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(v4, 0) : 0;
  v7 = (DrumRollLabel_CompleteEventHandler_o *)sub_2213CCC(DrumRollLabel_CompleteEventHandler_TypeInfo);
  DrumRollLabel_CompleteEventHandler___ctor(
    v7,
    (Il2CppObject *)v2,
    Method_BattleCommandComponent_compCriticallabel__,
    0);
  if ( !criticallabel )
    goto LABEL_15;
  DrumRollLabel__changeParam(criticallabel, v6, 1, v7, 0.0, 0);
}


void BattleCommandComponent__startMoveFloat(BattleCommandComponent_o *this, const MethodInfo *method)
{
  float v3; // s0
  const MethodInfo *v4; // x2

  if ( (byte_5973804 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17490/*"anim_commandfloat"*/);
    byte_5973804 = 1;
  }
  v3 = UnityEngine_Random__Range(0.0, 0.2, 0);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_17490/*"anim_commandfloat"*/, v3, v4);
}


void BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  __int64 nomalwidget; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x20
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_Object_o *v12; // x19

  if ( (byte_5973805 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973805 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v5 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  nomalwidget = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (nomalwidget & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0);
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    nomalwidget = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
    if ( (nomalwidget & 1) != 0 )
    {
      if ( !v5 )
        goto LABEL_29;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v5, 0);
    }
  }
  nomalwidget = (__int64)this->fields.nomalwidget;
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalwidget, 0);
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nomalwidget, 0);
  v8 = (UnityEngine_Transform_o *)nomalwidget;
  if ( !byte_5969AE0 )
  {
    nomalwidget = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v8
    || (UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (effectobj = this->fields.effectobj) == 0) )
  {
LABEL_29:
    sub_2213CDC(nomalwidget, v7);
  }
  if ( LODWORD(effectobj->max_length) <= 2 )
    goto LABEL_30;
  v10 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  nomalwidget = UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( (nomalwidget & 1) != 0 )
  {
    v11 = this->fields.effectobj;
    if ( v11 )
    {
      if ( LODWORD(v11->max_length) > 2 )
      {
        v12 = (UnityEngine_Object_o *)v11->m_Items[2];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        UnityEngine_Object__DestroyImmediate_83460132(v12, 0);
        return;
      }
LABEL_30:
      sub_2213CE4(nomalwidget);
    }
    goto LABEL_29;
  }
}


void BattleCommandComponent__stopFirstAura(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v2 = this;
  if ( (byte_5973809 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973809 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_16;
  if ( LODWORD(effectobj->max_length) <= 4 )
    goto LABEL_17;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[4];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( LODWORD(v5->max_length) <= 4 )
        goto LABEL_17;
      v6 = (UnityEngine_Object_o *)v5->m_Items[4];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_83459800(v6, 0);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 4 )
        {
          this->fields.facetex = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.facetex, 0, v7, v8, v9, v10, v11, v12);
          return;
        }
LABEL_17:
        sub_2213CE4(this);
      }
    }
LABEL_16:
    sub_2213CDC(this, method);
  }
}


void BattleCommandComponent__updateClassMag(
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v14; // x2
  float ShowClassMagnification; // s0
  struct UnityEngine_GameObject_array *v16; // x8
  struct UnityEngine_GameObject_array *v17; // x8

  v4 = this;
  if ( (byte_5973826 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973826 = 1;
  }
  if ( targetSvt && v4->fields.data )
  {
    addObjectList = v4->fields.addObjectList;
    if ( !addObjectList )
      goto LABEL_37;
    if ( !LODWORD(addObjectList->max_length) )
      goto LABEL_38;
    v6 = (UnityEngine_Object_o *)addObjectList->m_Items[0];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetSvt);
    this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v4->fields.addObjectList;
      if ( !v7 )
        goto LABEL_37;
      if ( (v7->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_38;
      v8 = (UnityEngine_Object_o *)v7->m_Items[1];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetSvt);
      this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.addObjectList;
        if ( !v9 )
          goto LABEL_37;
        if ( !LODWORD(v9->max_length) )
          goto LABEL_38;
        this = (BattleCommandComponent_o *)v9->m_Items[0];
        if ( !this )
          goto LABEL_37;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v10 = v4->fields.addObjectList;
        if ( !v10 )
          goto LABEL_37;
        if ( (v10->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_38;
        this = (BattleCommandComponent_o *)v10->m_Items[1];
        if ( !this
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (perf = v4->fields.perf) == 0)
          || (data = v4->fields.data) == 0
          || (this = (BattleCommandComponent_o *)perf->fields.data) == 0 )
        {
LABEL_37:
          sub_2213CDC(this, targetSvt);
        }
        ServantData = BattleData__getServantData((BattleData_o *)this, data->fields.uniqueId, 0);
        if ( ServantData )
        {
          v14 = ServantData;
          this = (BattleCommandComponent_o *)v4->fields.perf;
          if ( !this )
            goto LABEL_37;
          ShowClassMagnification = BattlePerformance__getShowClassMagnification(
                                     (BattlePerformance_o *)this,
                                     v4->fields.data,
                                     v14,
                                     targetSvt,
                                     0);
          if ( ShowClassMagnification > 1.0 )
          {
            v16 = v4->fields.addObjectList;
            if ( !v16 )
              goto LABEL_37;
            if ( (v16->max_length & 0xFFFFFFFE) != 0 )
            {
              this = (BattleCommandComponent_o *)v16->m_Items[1];
              if ( !this )
                goto LABEL_37;
              goto LABEL_35;
            }
            goto LABEL_38;
          }
          if ( ShowClassMagnification < 1.0 )
          {
            v17 = v4->fields.addObjectList;
            if ( !v17 )
              goto LABEL_37;
            if ( LODWORD(v17->max_length) )
            {
              this = (BattleCommandComponent_o *)v17->m_Items[0];
              if ( !this )
                goto LABEL_37;
LABEL_35:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              return;
            }
LABEL_38:
            sub_2213CE4(this);
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__updateCount(BattleCommandComponent_o *this, bool isNonAnimation, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0
  int32_t v6; // w20
  DrumRollLabel_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x22
  DrumRollLabel_o *v9; // x0
  int32_t v10; // w1
  DrumRollLabel_CompleteEventHandler_o *v11; // x3
  DrumRollLabel_CompleteEventHandler_o *v12; // x21

  if ( (byte_597380D & 1) == 0 )
  {
    sub_2213A60(&Method_BattleCommandComponent_compCriticallabel__);
    sub_2213A60(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_597380D = 1;
  }
  data = this->fields.data;
  if ( data && (v6 = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0), v6 > 0) )
  {
    criticalObject = (DrumRollLabel_o *)this->fields.criticalObject;
    if ( !criticalObject )
      goto LABEL_20;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)criticalObject, 0) )
    {
      criticalObject = this->fields.criticallabel;
      if ( !criticalObject )
        goto LABEL_20;
      DrumRollLabel__ChangeParamNonAnimation(criticalObject, 0, 1, 0);
    }
    criticalObject = (DrumRollLabel_o *)this->fields.criticalObject;
    if ( !criticalObject )
LABEL_20:
      sub_2213CDC(criticalObject, isNonAnimation);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)criticalObject, 1, 0);
    criticallabel = this->fields.criticallabel;
    if ( isNonAnimation )
    {
      if ( criticallabel )
      {
        DrumRollLabel__ChangeParamNonAnimation(this->fields.criticallabel, v6, 0, 0);
        return;
      }
      goto LABEL_20;
    }
    if ( !criticallabel )
      goto LABEL_20;
    if ( v6 >= criticallabel->fields.nowvalue )
    {
      v12 = (DrumRollLabel_CompleteEventHandler_o *)sub_2213CCC(DrumRollLabel_CompleteEventHandler_TypeInfo);
      DrumRollLabel_CompleteEventHandler___ctor(
        v12,
        (Il2CppObject *)this,
        Method_BattleCommandComponent_compCriticallabel__,
        0);
      v9 = criticallabel;
      v10 = v6;
      v11 = v12;
    }
    else
    {
      v9 = this->fields.criticallabel;
      v10 = v6;
      v11 = 0;
    }
    DrumRollLabel__changeParam(v9, v10, 1, v11, 0.0, 0);
  }
  else
  {
    criticalObject = (DrumRollLabel_o *)this->fields.criticalObject;
    if ( !criticalObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)criticalObject, 0, 0);
  }
}


void BattleCommandComponent__updateSelectedEffect(BattleCommandComponent_o *this, const MethodInfo *method)
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
  if ( (byte_597380B & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597380B = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_41;
  if ( (effectobj->max_length & 0xFFFFFFFC) == 0 )
LABEL_42:
    sub_2213CE4(this);
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_41;
    if ( (v5->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v5->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !v2->fields.nomalwidget )
      goto LABEL_41;
    v6 = this;
    this = (BattleCommandComponent_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                         0);
    if ( !v6 )
      goto LABEL_41;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v6, (UnityEngine_Transform_o *)this, 0);
    v7 = v2->fields.effectobj;
    if ( !v7 )
      goto LABEL_41;
    if ( (v7->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v7->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    v8 = this;
    if ( !byte_5969AE0 )
    {
      this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v8 )
      goto LABEL_41;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v8,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    v9 = v2->fields.effectobj;
    if ( !v9 )
      goto LABEL_41;
    if ( (v9->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v9->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    v10 = this;
    if ( !byte_5969AE8 )
    {
      this = (BattleCommandComponent_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE8 = 1;
    }
    if ( !v10 )
      goto LABEL_41;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v10,
      UnityEngine_Vector3_TypeInfo->static_fields->upVector,
      0);
    v11 = v2->fields.effectobj;
    if ( !v11 )
      goto LABEL_41;
    if ( (v11->max_length & 0xFFFFFFFC) == 0 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v11->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_41;
    v15.fields.x = 1.0;
    v15.fields.y = 1.0;
    v15.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v15, 0);
  }
  v12 = v2->fields.effectobj;
  if ( !v12 )
    goto LABEL_41;
  if ( LODWORD(v12->max_length) <= 4 )
    goto LABEL_42;
  v13 = (UnityEngine_Object_o *)v12->m_Items[4];
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v2->fields.effectobj;
    if ( !v14 )
      goto LABEL_41;
    if ( LODWORD(v14->max_length) > 4 )
    {
      this = (BattleCommandComponent_o *)v14->m_Items[4];
      if ( this )
      {
        this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.objectRoot, 0);
          return;
        }
      }
LABEL_41:
      sub_2213CDC(this, method);
    }
    goto LABEL_42;
  }
}


void BattleCommandComponent__updateView(
        BattleCommandComponent_o *this,
        bool initFlg,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        bool isCharaHide,
        bool isDispUnavailable,
        const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8
  System_String_o *v15; // x22
  __int64 v16; // x20
  __int64 transform; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x27
  __int64 v20; // x1
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v26; // x2
  BattleCommandData_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Behaviour_o *facetex; // x0
  __int64 v30; // x1
  UnityEngine_Behaviour_o *icon; // x0
  __int64 v32; // x1
  UnityEngine_Behaviour_o *text; // x0
  __int64 v34; // x1
  UISprite_o *bg; // x0
  __int64 v36; // x1
  UIWidget_o *v37; // x0
  __int64 v38; // x1
  UIWidget_o *v39; // x0
  __int64 v40; // x1
  UnityEngine_Behaviour_o *friendIcon; // x0
  BattleCommandSealStatus_o *v42; // x20
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  BattleCommandComponent_o *v49; // x0
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v53; // x1
  BattleServantData_o *svtData; // x24
  BattleCommandData_o *v55; // x25
  UnityEngine_Object_o *perf; // x26
  _BOOL8 v57; // x0
  __int64 v58; // x1
  struct BattlePerformance_o *v59; // x8
  BattleData_o *v60; // x26
  BattleCommandSealStatus_o *v61; // x27
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x1
  UIWidget_o **p_facetex; // x24
  UITexture_o *v70; // x25
  BattleCommandData_o *v71; // x0
  __int64 v72; // x1
  int32_t ImageServantId; // w26
  BattleCommandData_o *v74; // x0
  __int64 loadSvtLimit; // x0
  __int64 v76; // x1
  struct BattleCommandData_o *v77; // x8
  int32_t v78; // w27
  int32_t svtlimit; // w28
  __int64 v80; // x1
  UnityEngine_Object_o *Manager__loadCommandCard; // x25
  __int64 v82; // x1
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  UnityEngine_Behaviour_o *v89; // x0
  __int64 v90; // x1
  UnityEngine_Behaviour_o *v91; // x0
  __int64 v92; // x1
  UnityEngine_Object_o *v93; // x25
  _BOOL8 v94; // x0
  __int64 v95; // x1
  UnityEngine_Behaviour_o *v96; // x0
  struct BattleCommandData_o *v97; // x8
  int treasureDvc; // w9
  UnityEngine_Object_o *v99; // x23
  int v100; // w8
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  BattleCommandData_o *v104; // x0
  __int64 v105; // x1
  __int64 *v106; // x8
  BattleCommandData_o *v107; // x0
  BattleCommandData_o *v108; // x0
  Il2CppObject *v109; // x23
  UnityEngine_Behaviour_o *v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  struct BattleCommandData_o *v113; // x8
  UISprite_o *v114; // x24
  FileName_c *v115; // x0
  __int64 v116; // x1
  UnityEngine_Behaviour_o *v117; // x0
  __int64 v118; // x0
  UISprite_o *v119; // x24
  FileName_c *v120; // x0
  __int64 v121; // x1
  UnityEngine_Behaviour_o *v122; // x0
  UISprite_o *v123; // x24
  System_String_o *v124; // x0
  UISprite_o *v125; // x22
  System_String_o *v126; // x0
  UISprite_o *v127; // x22
  System_String_o *v128; // x0
  __int64 v129; // x0
  __int64 v130; // x1
  struct UISprite_o *v131; // x22
  UISpriteData_o *AtlasSprite; // x0
  __int64 v133; // x1
  int width; // w20
  UISpriteData_o *v135; // x0
  __int64 v136; // x1
  __int64 v137; // x1
  UnityEngine_Component_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  __int64 v140; // x1
  __int64 v141; // x0
  __int64 v142; // x1
  UnityEngine_Transform_o *v143; // x22
  const MethodInfo *v144; // x1
  __int64 v145; // x0
  const MethodInfo *v146; // x1
  struct BattleCommandData_o *v147; // x8
  UnityEngine_Behaviour_o *v148; // x0
  __int64 v149; // x1
  BattleCommandData_o *v150; // x0
  UITexture_o *nobletex; // x22
  __int64 v152; // x1
  int32_t v153; // w23
  BattleCommandData_o *v154; // x0
  __int64 v155; // x0
  __int64 v156; // x1
  struct BattleCommandData_o *v157; // x8
  int32_t v158; // w24
  int32_t v159; // w25
  __int64 v160; // x1
  bool Manager__loadNobleName; // w22
  UnityEngine_Object_o *v162; // x23
  __int64 v163; // x1
  const MethodInfo *v164; // x2
  UnityEngine_Component_o *v165; // x0
  UnityEngine_GameObject_o *v166; // x0
  __int64 v167; // x1
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v169; // x1
  const MethodInfo *v170; // x2
  const MethodInfo *v171; // x1
  UISprite_o *v172; // x0
  const MethodInfo *v173; // x3
  const MethodInfo *v174; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v176; // x1
  const MethodInfo *v177; // x3
  __int64 v178; // x1
  BattleCommandData_o *v179; // x0
  UISprite_o *donotActTypeSprite; // x21
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v182; // x2
  System_String_o *CardTypeSealSpriteName; // x0
  BattleCommandData_o *v184; // x0
  __int64 v185; // x1
  UnityEngine_Object_o *displayRemainingTurn; // x21
  UILabel_o *v187; // x21
  System_String_o *v188; // x22
  const MethodInfo *v189; // x1
  const MethodInfo *v190; // x0
  __int64 v191; // x1
  InvokerMethod invoker_method; // x8
  int v193; // w8
  int v194; // w8
  Il2CppObject *v195; // x1
  System_String_o *v196; // x0
  struct BattleCommandData_o *v197; // x8
  __int64 v198; // x0
  __int64 v199; // x1
  const MethodInfo *v200; // x2
  struct BattleCommandData_o *v201; // x8
  const MethodInfo *v202; // x2
  __int64 v203; // x1
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v205; // x8
  UILabel_o *v206; // x19
  System_String_o *v207; // x1
  _DWORD v209[6]; // [xsp+4h] [xbp-7Ch] BYREF
  int32_t svtId; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_5973800 & 1) == 0 )
  {
    sub_2213A60(&BattleCommandSealStatus_TypeInfo);
    sub_2213A60(&FileName_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&StringLiteral_18548/*"card_bg_blank"*/);
    sub_2213A60(&StringLiteral_5205/*"DISPLAY_REMAINING_TURN"*/);
    sub_2213A60(&StringLiteral_23396/*"none"*/);
    sub_2213A60(&StringLiteral_17605/*"arts"*/);
    sub_2213A60(&StringLiteral_18570/*"card_txt_{0}"*/);
    sub_2213A60(&StringLiteral_18413/*"buster"*/);
    sub_2213A60(&StringLiteral_24099/*"quick"*/);
    sub_2213A60(&StringLiteral_18562/*"card_icon_{0}"*/);
    sub_2213A60(&StringLiteral_18550/*"card_bg_{0}"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_20240/*"extra"*/);
    sub_2213A60(&StringLiteral_18549/*"card_bg_np{0}"*/);
    byte_5973800 = 1;
  }
  data = this->fields.data;
  svtId = 0;
  v209[3] = 0;
  if ( !data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      return;
    }
    goto LABEL_157;
  }
  v15 = (System_String_o *)StringLiteral_18550/*"card_bg_{0}"*/;
  v16 = StringLiteral_23396/*"none"*/;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v19 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5969AE5 )
  {
    transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v19 )
    sub_2213CDC(transform, v18);
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_2213CDC(0, v20);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))nomalwidget->klass->vtable._8_set_alpha.methodPtr)(
      nomalwidget,
      nomalwidget->klass->vtable._8_set_alpha.method,
      1.0);
  }
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v22 )
    sub_2213CDC(0, v23);
  UnityEngine_GameObject__SetActive(v22, 1, 0);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_2213CDC(0, v24);
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0);
    BattleCommandComponent__setBuffIconList(this, isShowBuffIcon, v26);
  }
  v27 = this->fields.data;
  if ( !v27 )
    sub_2213CDC(0, v24);
  if ( BattleCommandData__isBlank(v27, 0) )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_2213CDC(0, v28);
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_2213CDC(0, v30);
    UnityEngine_Behaviour__set_enabled(icon, 0, 0);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_2213CDC(0, v32);
    UnityEngine_Behaviour__set_enabled(text, 0, 0);
    bg = this->fields.bg;
    if ( !bg )
      sub_2213CDC(0, v34);
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_18548/*"card_bg_blank"*/, 0);
    v37 = (UIWidget_o *)this->fields.bg;
    if ( !v37 )
      sub_2213CDC(0, v36);
    UIWidget__set_height(v37, 170, 0);
    v39 = (UIWidget_o *)this->fields.bg;
    if ( !v39 )
      sub_2213CDC(0, v38);
    UIWidget__set_width(v39, 133, 0);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_2213CDC(0, v40);
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0);
    v42 = (BattleCommandSealStatus_o *)sub_2213CCC(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v42, 0);
    this->fields.sealStatus = v42;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sealStatus,
      (int32_t)v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    BattleCommandComponent__SetActiveComponent(
      v49,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      0,
      v50);
    goto LABEL_147;
  }
  v55 = this->fields.data;
  svtData = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  v57 = UnityEngine_Object__op_Implicit(perf, 0);
  if ( v57 )
  {
    v59 = this->fields.perf;
    if ( !v59 )
      sub_2213CDC(v57, v58);
    v60 = v59->fields.data;
  }
  else
  {
    v60 = 0;
  }
  v61 = (BattleCommandSealStatus_o *)sub_2213CCC(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_53644476(v61, v55, svtData, v60, 0);
  this->fields.sealStatus = v61;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sealStatus, (int32_t)v61, v62, v63, v64, v65, v66, v67);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v70 = this->fields.facetex;
  v71 = this->fields.data;
  if ( !v71 )
    sub_2213CDC(0, v68);
  ImageServantId = BattleCommandData__GetImageServantId(v71, 0);
  v74 = this->fields.data;
  if ( !v74 )
    sub_2213CDC(0, v72);
  loadSvtLimit = BattleCommandData__get_loadSvtLimit(v74, 0);
  v77 = this->fields.data;
  if ( !v77 )
    sub_2213CDC(loadSvtLimit, v76);
  v78 = loadSvtLimit;
  svtlimit = v77->fields.svtlimit;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v76);
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v70,
                                                       ImageServantId,
                                                       v78,
                                                       svtlimit,
                                                       0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
  if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCard, 0, 0) )
  {
    *p_facetex = (UIWidget_o *)Manager__loadCommandCard;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.facetex,
      (int32_t)Manager__loadCommandCard,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
  }
  v89 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v89 )
    sub_2213CDC(0, v82);
  UnityEngine_Behaviour__set_enabled(v89, 1, 0);
  v91 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v91 )
    sub_2213CDC(0, v90);
  UnityEngine_Behaviour__set_enabled(v91, 1, 0);
  v93 = (UnityEngine_Object_o *)*p_facetex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v92);
  v94 = UnityEngine_Object__op_Inequality(v93, 0, 0);
  if ( v94 )
  {
    v96 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v96 )
        sub_2213CDC(0, v95);
      UnityEngine_Behaviour__set_enabled(v96, 0, 0);
    }
    else
    {
      if ( !v96 )
        sub_2213CDC(0, v95);
      UnityEngine_Behaviour__set_enabled(v96, 1, 0);
    }
  }
  v97 = this->fields.data;
  if ( !v97 )
    sub_2213CDC(v94, v95);
  treasureDvc = v97->fields.treasureDvc;
  v99 = (UnityEngine_Object_o *)*p_facetex;
  v100 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( treasureDvc < 1 )
  {
    if ( !v100 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
    if ( UnityEngine_Object__op_Inequality(v99, 0, 0) )
    {
      if ( !*p_facetex )
        sub_2213CDC(0, v101);
      UIWidget__set_height(*p_facetex, 191, 0);
      if ( !*p_facetex )
        sub_2213CDC(0, v103);
      UIWidget__set_width(*p_facetex, 191, 0);
    }
  }
  else
  {
    if ( !v100 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
    if ( UnityEngine_Object__op_Inequality(v99, 0, 0) )
    {
      if ( !*p_facetex )
        sub_2213CDC(0, v101);
      UIWidget__set_height(*p_facetex, 191, 0);
      if ( !*p_facetex )
        sub_2213CDC(0, v102);
      UIWidget__set_width(*p_facetex, 191, 0);
    }
    v15 = (System_String_o *)StringLiteral_18549/*"card_bg_np{0}"*/;
  }
  v104 = this->fields.data;
  if ( !v104 )
    sub_2213CDC(0, v101);
  if ( BattleCommandData__isBuster(v104, 0) )
  {
    v106 = &StringLiteral_18413/*"buster"*/;
  }
  else
  {
    v107 = this->fields.data;
    if ( !v107 )
      sub_2213CDC(0, v105);
    if ( BattleCommandData__isQuick(v107, 0) )
    {
      v106 = &StringLiteral_24099/*"quick"*/;
    }
    else
    {
      v108 = this->fields.data;
      if ( !v108 )
        sub_2213CDC(0, v105);
      if ( !BattleCommandData__isArts(v108, 0) )
      {
        v184 = this->fields.data;
        if ( !v184 )
          sub_2213CDC(0, v105);
        if ( BattleCommandData__isAddAttack(v184, 0) )
          v109 = (Il2CppObject *)StringLiteral_20240/*"extra"*/;
        else
          v109 = (Il2CppObject *)v16;
        goto LABEL_76;
      }
      v106 = &StringLiteral_17605/*"arts"*/;
    }
  }
  v109 = (Il2CppObject *)*v106;
LABEL_76:
  v110 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v110 )
    sub_2213CDC(0, v105);
  UnityEngine_Behaviour__set_enabled(v110, 0, 0);
  v113 = this->fields.data;
  if ( !v113 )
    sub_2213CDC(v111, v112);
  if ( v113->fields.follower )
  {
    v114 = this->fields.friendIcon;
    v115 = FileName_TypeInfo;
    if ( !*(&FileName_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo, v112);
    if ( !v114 )
      sub_2213CDC(v115, v112);
    UISprite__set_spriteName(v114, FileName_TypeInfo->static_fields->friendIconName, 0);
    v117 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v117 )
      sub_2213CDC(0, v116);
    UnityEngine_Behaviour__set_enabled(v117, 1, 0);
    v113 = this->fields.data;
    if ( !v113 )
      sub_2213CDC(v118, v112);
  }
  if ( v113->fields.flgEventJoin )
  {
    v119 = this->fields.friendIcon;
    v120 = FileName_TypeInfo;
    if ( !*(&FileName_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo, v112);
    if ( !v119 )
      sub_2213CDC(v120, v112);
    UISprite__set_spriteName(v119, FileName_TypeInfo->static_fields->eventJoinIconName, 0);
    v122 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v122 )
      sub_2213CDC(0, v121);
    UnityEngine_Behaviour__set_enabled(v122, 1, 0);
  }
  v123 = this->fields.bg;
  v124 = System_String__Format(v15, v109, 0);
  if ( !v123 )
    sub_2213CDC(v124, v124);
  UISprite__set_spriteName(v123, v124, 0);
  v125 = this->fields.icon;
  v126 = System_String__Format((System_String_o *)StringLiteral_18562/*"card_icon_{0}"*/, v109, 0);
  if ( !v125 )
    sub_2213CDC(v126, v126);
  UISprite__set_spriteName(v125, v126, 0);
  v127 = this->fields.text;
  v128 = System_String__Format((System_String_o *)StringLiteral_18570/*"card_txt_{0}"*/, v109, 0);
  if ( !v127 )
    sub_2213CDC(v128, v128);
  UISprite__set_spriteName(v127, v128, 0);
  v131 = this->fields.text;
  if ( !v131 )
    sub_2213CDC(v129, v130);
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0);
  if ( !AtlasSprite )
    sub_2213CDC(0, v133);
  if ( !this->fields.text )
    sub_2213CDC(AtlasSprite, v133);
  width = AtlasSprite->fields.width;
  v135 = UISprite__GetAtlasSprite(this->fields.text, 0);
  if ( !v135 )
    sub_2213CDC(0, v136);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, double, double, float, float))v131->klass->vtable._18_SetRect.methodPtr)(
    v131,
    v131->klass->vtable._18_SetRect.method,
    0.0,
    0.0,
    (float)width,
    (float)v135->fields.height);
  v138 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v138 )
    sub_2213CDC(0, v137);
  v139 = UnityEngine_Component__get_gameObject(v138, 0);
  if ( !v139 )
    sub_2213CDC(0, v140);
  v141 = (__int64)UnityEngine_GameObject__get_transform(v139, 0);
  v143 = (UnityEngine_Transform_o *)v141;
  if ( !byte_5969AE0 )
  {
    v141 = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v143 )
    sub_2213CDC(v141, v142);
  UnityEngine_Transform__set_localPosition(v143, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleCommandComponent__UpdateIconChangeTypeByTransform(this, v144);
  v147 = this->fields.data;
  if ( !v147 )
    sub_2213CDC(v145, v146);
  if ( v147->fields.treasureDvc >= 1 )
  {
    v148 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v148 )
      sub_2213CDC(0, v146);
    UnityEngine_Behaviour__set_enabled(v148, 0, 0);
    v150 = this->fields.data;
    if ( !v150 )
      sub_2213CDC(0, v149);
    nobletex = this->fields.nobletex;
    v153 = BattleCommandData__GetImageServantId(v150, 0);
    v154 = this->fields.data;
    if ( !v154 )
      sub_2213CDC(0, v152);
    v155 = BattleCommandData__get_loadSvtLimit(v154, 0);
    v157 = this->fields.data;
    if ( !v157 )
      sub_2213CDC(v155, v156);
    v158 = v155;
    v159 = v157->fields.treasureDvc;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v156);
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, v153, v158, v159, 0);
    v162 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v160);
    if ( UnityEngine_Object__op_Inequality(v162, 0, 0) )
    {
      v165 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v165 )
        sub_2213CDC(0, v163);
      v166 = UnityEngine_Component__get_gameObject(v165, 0);
      if ( !v166 )
        sub_2213CDC(0, v167);
      UnityEngine_GameObject__SetActive(v166, Manager__loadNobleName, 0);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v164);
  }
  BattleCommandComponent__InitUnusableMarks(this, v146);
  if ( !isTDTypeChangeWindow )
  {
    BattleCommandComponent__UpdateDonotActSpriteName(this, v169);
    v172 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v171);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v172,
      (UnityEngine_Component_o *)v172,
      1,
      v173);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v174);
    if ( !SealStatus )
      sub_2213CDC(0, v176);
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0);
    switch ( (_DWORD)PrioredStatus )
    {
      case 1:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
          1,
          v177);
        displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v185);
        PrioredStatus = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(displayRemainingTurn, 0, 0);
        if ( ((unsigned __int8)PrioredStatus & 1) != 0 )
        {
          v187 = this->fields.displayRemainingTurn;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v169);
          v188 = LocalizationManager__Get((System_String_o *)StringLiteral_5205/*"DISPLAY_REMAINING_TURN"*/, 0);
          v190 = (const MethodInfo *)BattleCommandComponent__get_SealStatus(this, v189);
          if ( !v190 )
            sub_2213CDC(0, v191);
          invoker_method = v190->invoker_method;
          if ( !invoker_method )
            sub_2213CDC(v190, v191);
          v193 = *((_DWORD *)invoker_method + 5);
          if ( v193 + 1 >= 0 )
            v194 = v193 + 1;
          else
            v194 = v193 + 2;
          v209[0] = BattleUtility__FloorToLong((float)(v194 >> 1), v190);
          v195 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, v209);
          v196 = System_String__Format(v188, v195, 0);
          if ( !v187 )
            sub_2213CDC(v196, v196);
          UILabel__set_text(v187, v196, 0);
        }
        break;
      case 9:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActCardSprite,
          1,
          v177);
        break;
      case 0xA:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActTypeSprite,
          1,
          v177);
        v179 = this->fields.data;
        if ( !v179 )
          sub_2213CDC(0, v178);
        donotActTypeSprite = this->fields.donotActTypeSprite;
        type = (BattleCommandComponent_o *)BattleCommandData__get_type(v179, 0);
        CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v182);
        if ( !donotActTypeSprite )
          sub_2213CDC(CardTypeSealSpriteName, CardTypeSealSpriteName);
        UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0);
        break;
    }
    if ( isDispUnavailable )
      BattleCommandComponent__SetActiveComponent(
        PrioredStatus,
        (UnityEngine_Component_o *)this->fields.dontuseSprite,
        1,
        v177);
  }
  v197 = this->fields.data;
  if ( !v197 )
    sub_2213CDC(PrioredStatus, v169);
  BattleCommandComponent__SetCommandCodeView_53605208(this, v197->fields.commandCodeId, v170);
  v201 = this->fields.data;
  if ( !v201 )
    sub_2213CDC(v198, v199);
  BattleCommandComponent__SetCommandAssistView(this, v201->fields.commandAssistId, v200);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v202);
LABEL_147:
  BattleCommandComponent__setTouchFlg(this, 1, v51);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v203);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(svtId_label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v205 = this->fields.data;
    if ( v205 )
    {
      v206 = this->fields.svtId_label;
      svtId = v205->fields.svtId;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&svtId, 0);
      if ( v206 )
      {
        if ( gameObject )
          v207 = (System_String_o *)gameObject;
        else
          v207 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text(v206, v207, 0);
        return;
      }
    }
LABEL_157:
    sub_2213CDC(gameObject, v53);
  }
}


void BattleCommandComponent_CardBuffData___ctor(
        BattleCommandComponent_CardBuffData_o *this,
        int32_t type,
        int32_t turn,
        int32_t order,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.buffType = type;
  this->fields.restTurn = turn;
  this->fields.addOrder = order;
}


void BattleCommandComponent__PlayStarSe_d__165___ctor(
        BattleCommandComponent__PlayStarSe_d__165_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__PlayStarSe_d__165__MoveNext(
        BattleCommandComponent__PlayStarSe_d__165_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w21
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5973850 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleCommandComponent__PlayStarSe_d__165_MoveNext__);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5973850 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      v4 = Method_BattleCommandComponent__PlayStarSe_d__165_MoveNext__;
      if ( (*((_BYTE *)Method_BattleCommandComponent__PlayStarSe_d__165_MoveNext__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_BattleCommandComponent__PlayStarSe_d__165_MoveNext__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlayCommonSe(v5, 7, 0, 0);
    }
  }
  else
  {
    preDelayTime = this->fields.preDelayTime;
    this->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v7, preDelayTime, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BattleCommandComponent__PlayStarSe_d__165__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__PlayStarSe_d__165_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__PlayStarSe_d__165__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__PlayStarSe_d__165_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleCommandComponent__PlayStarSe_d__165_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleCommandComponent__PlayStarSe_d__165__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__PlayStarSe_d__165_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__PlayStarSe_d__165__System_IDisposable_Dispose(
        BattleCommandComponent__PlayStarSe_d__165_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCommandComponent__WaitForErrorViewFinished_d__249___ctor(
        BattleCommandComponent__WaitForErrorViewFinished_d__249_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__WaitForErrorViewFinished_d__249__MoveNext(
        BattleCommandComponent__WaitForErrorViewFinished_d__249_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattleCommandComponent_o *_4__this; // x20
  _BOOL8 isBusySe; // x0
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *busyVoiceSe; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject **p__2__current; // x19
  int v22; // w8
  System_String_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Action_o *tdErrorAfterAction; // x8

  if ( (byte_5973851 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_5973851 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  isBusySe = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state != 2 )
    {
      if ( _1__state != 3 )
        return isBusySe;
      this->fields.__1__state = -1;
      goto LABEL_18;
    }
    this->fields.__1__state = -1;
  }
  else
  {
    if ( !_1__state )
    {
      waitSeconds = this->fields.waitSeconds;
      this->fields.__1__state = -1;
      v7 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v7, waitSeconds, 0);
      this->fields.__2__current = (Il2CppObject *)v7;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
        (int32_t)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      this->fields.__1__state = 1;
      LOBYTE(isBusySe) = 1;
      return isBusySe;
    }
    if ( _1__state != 1 )
      return isBusySe;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    BattleCommandComponent__startMoveFloat(_4__this, 0);
    if ( System_String__IsNullOrEmpty(this->fields.busyVoiceSe, 0) )
      goto LABEL_24;
  }
  busyVoiceSe = this->fields.busyVoiceSe;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  if ( SoundManager__isBusyVoice(busyVoiceSe, 0) )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v15, v16, v17, v18, v19, v20);
    v22 = 2;
LABEL_22:
    *((_DWORD *)p__2__current - 2) = v22;
    LOBYTE(isBusySe) = 1;
    return isBusySe;
  }
LABEL_18:
  v23 = this->fields.busyVoiceSe;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  isBusySe = SoundManager__isBusySe(v23, 0);
  if ( isBusySe )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v24, v25, v26, v27, v28, v29);
    v22 = 3;
    goto LABEL_22;
  }
  if ( !_4__this )
LABEL_28:
    sub_2213CDC(isBusySe, method);
LABEL_24:
  tdErrorAfterAction = _4__this->fields.tdErrorAfterAction;
  if ( tdErrorAfterAction )
    ((void (__fastcall *)(intptr_t, intptr_t))tdErrorAfterAction->fields.invoke_impl)(
      tdErrorAfterAction->fields.method_code,
      tdErrorAfterAction->fields.method);
  LOBYTE(isBusySe) = 0;
  return isBusySe;
}


Il2CppObject *BattleCommandComponent__WaitForErrorViewFinished_d__249__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__249_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__WaitForErrorViewFinished_d__249__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__WaitForErrorViewFinished_d__249_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleCommandComponent__WaitForErrorViewFinished_d__249_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleCommandComponent__WaitForErrorViewFinished_d__249__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__249_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__WaitForErrorViewFinished_d__249__System_IDisposable_Dispose(
        BattleCommandComponent__WaitForErrorViewFinished_d__249_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCommandComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597384C & 1) == 0 )
  {
    sub_2213A60(&BattleCommandComponent___c_TypeInfo);
    byte_597384C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleCommandComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCommandComponent___c_TypeInfo->static_fields->__9 = (struct BattleCommandComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleCommandComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCommandComponent___c___ctor(BattleCommandComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleCommandComponent___c___SetSpecialCommandCardBuffData_b__230_1(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *a,
        BattleCommandComponent_CardBuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool BattleCommandComponent___c___UpdateCommandCardTypeChange_b__232_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_2213CDC(this, 0);
  return c->fields.buffType == 156;
}


bool BattleCommandComponent___c___UpdateFixedCommandCard_b__215_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_2213CDC(this, 0);
  return c->fields.buffType == 131;
}


int32_t BattleCommandComponent___c___selectCard_b__192_0(
        BattleCommandComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_597384D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_597384D = 1;
  }
  return value;
}


void BattleCommandComponent___c__DisplayClass142_0___ctor(
        BattleCommandComponent___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCommandComponent___c__DisplayClass142_0___setBuffIconList_b__0(
        BattleCommandComponent___c__DisplayClass142_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass142_0_o *v4; // x20
  struct BattleCommandComponent_o *_4__this; // x8
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_8;
  v4 = this;
  this = (BattleCommandComponent___c__DisplayClass142_0_o *)BattleBuffData_BuffData__isCommandCodeBuff(buff, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (data = _4__this->fields.data) == 0 )
LABEL_8:
    sub_2213CDC(this, buff);
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0);
}


bool BattleCommandComponent___c__DisplayClass142_0___setBuffIconList_b__1(
        BattleCommandComponent___c__DisplayClass142_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass142_0_o *v4; // x20
  struct BattleCommandComponent_o *_4__this; // x8

  if ( !buff )
    goto LABEL_7;
  v4 = this;
  this = (BattleCommandComponent___c__DisplayClass142_0_o *)BattleBuffData_BuffData__isCommandCardBuff(buff, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_7:
    sub_2213CDC(this, buff);
  return !BattleBuffData_BuffData__isEnableCommandCardBuff(buff, _4__this->fields.data, 0);
}


bool BattleCommandComponent___c__DisplayClass142_0___setBuffIconList_b__2(
        BattleCommandComponent___c__DisplayClass142_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass142_0_o *v4; // x20
  struct BattleCommandComponent_o *_4__this; // x8
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_7;
  v4 = this;
  this = (BattleCommandComponent___c__DisplayClass142_0_o *)BattleBuffData_BuffData__IsCommandAssistBuff(buff, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    _4__this = v4->fields.__4__this;
    if ( _4__this )
    {
      data = _4__this->fields.data;
      if ( data )
        return buff->fields.commandAssistId != data->fields.commandAssistId;
    }
LABEL_7:
    sub_2213CDC(this, buff);
  }
  return 0;
}


bool BattleCommandComponent___c__DisplayClass142_0___setBuffIconList_g__BuffFilterByIndividuality_3(
        BattleCommandComponent___c__DisplayClass142_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  bool v5; // w0
  BuffEntity_o *BuffType; // x0
  __int64 v8; // x1
  struct BattleCommandComponent_o *_4__this; // x8
  int32_t v10; // w21
  _WORD *v11; // x0
  bool v12; // w1
  struct BattleCommandComponent_o *v13; // x8
  struct BattleCommandComponent_o *v14; // x8
  __int64 v15; // x1
  System_Int32_array *cardOrTreasureDvcIndividualityArray; // x19
  System_Int32_array_array *v17; // x20
  __int16 *v18; // x0
  struct BattleCommandComponent_o *v19; // x8
  System_Int32_array_array *result; // [xsp+8h] [xbp-38h] BYREF
  _WORD v21[2]; // [xsp+18h] [xbp-28h] BYREF
  __int16 v22; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_597384E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
    sub_2213A60(&Individuality_TypeInfo);
    sub_2213A60(&Method_System_Nullable_bool___ctor__);
    sub_2213A60(&Method_System_Nullable_bool__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_bool__get_Value__);
    byte_597384E = 1;
  }
  v22 = 0;
  result = 0;
  if ( !buff || buff->fields._isRemove )
    return 0;
  BuffType = (BuffEntity_o *)BattleBuffData_BuffData__get_BuffType(buff, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  v10 = (int)BuffType;
  BuffType = (BuffEntity_o *)System_Linq_Enumerable__Contains_Int32Enum_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.qabTypes,
                               (int32_t)BuffType,
                               (const MethodInfo_3876740 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
  if ( ((unsigned __int8)BuffType & 1) != 0 )
    goto LABEL_9;
  if ( !this->fields.isTreasureDvc )
  {
    v19 = this->fields.__4__this;
    if ( !v19 )
      goto LABEL_30;
    BuffType = (BuffEntity_o *)System_Linq_Enumerable__Contains_Int32Enum_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v19->fields.noneTdQabTypes,
                                 v10,
                                 (const MethodInfo_3876740 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
    if ( ((unsigned __int8)BuffType & 1) != 0 )
    {
LABEL_9:
      v11 = v21;
      v12 = 1;
      goto LABEL_16;
    }
    if ( !this->fields.isTreasureDvc )
      goto LABEL_13;
  }
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_30;
  BuffType = (BuffEntity_o *)System_Linq_Enumerable__Contains_Int32Enum_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v13->fields.tdTypes,
                               v10,
                               (const MethodInfo_3876740 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
  if ( ((unsigned __int8)BuffType & 1) == 0 )
  {
LABEL_13:
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_30;
    if ( !System_Linq_Enumerable__Contains_Int32Enum_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.otherTypes,
            v10,
            (const MethodInfo_3876740 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___) )
    {
      v5 = 0;
      v22 = 0;
      return v5;
    }
  }
  v11 = v21;
  v12 = 0;
LABEL_16:
  v21[0] = 0;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v11,
    v12,
    (const MethodInfo_45E0940 *)Method_System_Nullable_bool___ctor__);
  v22 = v21[0];
  if ( !LOBYTE(v21[0]) )
    return 0;
  BuffType = BattleBuffData_BuffData__get_Entity(buff, 0);
  if ( !BuffType )
LABEL_30:
    sub_2213CDC(BuffType, v8);
  if ( BuffEntity__TryGetIndividualityDisplayOnCard(BuffType, &result, 0) )
  {
    cardOrTreasureDvcIndividualityArray = this->fields.cardOrTreasureDvcIndividualityArray;
    v17 = result;
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v15);
    return Individuality__CheckSignedMultiIndividuality(cardOrTreasureDvcIndividualityArray, v17, 0);
  }
  else
  {
    v18 = &v22;
    return !System_Nullable_bool___get_Value(
              (System_Nullable_bool__o)v18,
              (const MethodInfo_45E0958 *)Method_System_Nullable_bool__get_Value__)
        || BattleBuffData_BuffData__IsMatchTValsCond(buff, this->fields.cardIndividualityArray, 0);
  }
}


void BattleCommandComponent___c__DisplayClass164_0___ctor(
        BattleCommandComponent___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCommandComponent___c__DisplayClass164_0___addCriticalBuff_b__0(
        BattleCommandComponent___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass164_0_o *v2; // x19
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v5; // x8
  UnityEngine_Object_o *obj; // x19

  v2 = this;
  if ( (byte_597384F & 1) == 0 )
  {
    this = (BattleCommandComponent___c__DisplayClass164_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597384F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent___c__DisplayClass164_0_o *)UnityEngine_Object__op_Inequality(spawner, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (BattleCommandComponent___c__DisplayClass164_0_o *)v5->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v2->fields.obj, 0, 0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(this, method);
  }
  obj = (UnityEngine_Object_o *)v2->fields.obj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_83459800(obj, 0);
}


void BattleCommandComponent___c__DisplayClass230_0___ctor(
        BattleCommandComponent___c__DisplayClass230_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCommandComponent___c__DisplayClass230_0___SetSpecialCommandCardBuffData_b__0(
        BattleCommandComponent___c__DisplayClass230_0_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_2213CDC(this, 0);
  return c->fields.buffType == this->fields.buffType;
}


void BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238___ctor(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238__MoveNext(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleCommandComponent_o *_4__this; // x21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x20
  bool v8; // w20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  bool result; // w0

  v2 = this;
  if ( (byte_5973852 & 1) == 0 )
  {
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973852 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *)_4__this->fields.specialCardBuffIcon;
    if ( !this )
      goto LABEL_26;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0) )
      {
        this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *)_4__this->fields.specialCardBuffIcon;
        if ( this )
        {
          this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *)_4__this->fields.specialCardBuffIcon;
            if ( this )
            {
              UISprite__set_atlas((UISprite_o *)this, 0, 0);
              goto LABEL_15;
            }
          }
        }
LABEL_26:
        sub_2213CDC(this, method);
      }
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_26;
LABEL_15:
  v6 = _4__this->fields.specialCardBuffIcon;
  if ( !v6 )
    goto LABEL_26;
  mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v8 = UnityEngine_Object__op_Equality(mAtlas, 0, 0);
  v2->fields.__2__current = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current, 0, v9, v10, v11, v12, v13, v14);
  result = 1;
  if ( v8 )
    v2->fields.__1__state = 1;
  else
    v2->fields.__1__state = 2;
  return result;
}


Il2CppObject *BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238__System_IDisposable_Dispose(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__238_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCommandComponent__delayFrame_d__166___ctor(
        BattleCommandComponent__delayFrame_d__166_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__delayFrame_d__166__MoveNext(
        BattleCommandComponent__delayFrame_d__166_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w20
  struct System_Action_o *action; // x8
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      action = this->fields.action;
      this->fields.__1__state = -1;
      if ( !action )
        sub_2213CDC(this, method);
      ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
        action->fields.method_code,
        action->fields.method);
    }
  }
  else
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BattleCommandComponent__delayFrame_d__166__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__delayFrame_d__166_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__delayFrame_d__166__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__delayFrame_d__166_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleCommandComponent__delayFrame_d__166_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleCommandComponent__delayFrame_d__166__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__delayFrame_d__166_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__delayFrame_d__166__System_IDisposable_Dispose(
        BattleCommandComponent__delayFrame_d__166_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCommandComponent__fadeoutEffect_d__186___ctor(
        BattleCommandComponent__fadeoutEffect_d__186_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__fadeoutEffect_d__186__MoveNext(
        BattleCommandComponent__fadeoutEffect_d__186_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleCommandComponent__fadeoutEffect_d__186_o *v8; // x20
  int32_t _1__state; // w21
  struct BattleCommandComponent_o *_4__this; // x19
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UnityEngine_GameObject_array *v19; // x8
  UnityEngine_Transform_o *v20; // x20
  struct UnityEngine_GameObject_array *v21; // x8
  BattleCommandComponent__fadeoutEffect_d__186_o *v22; // x20
  DefCoroutine_c *v23; // x0
  Il2CppObject *milliSecSix; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x20

  v8 = this;
  if ( (byte_5973853 & 1) == 0 )
  {
    sub_2213A60(&DefCoroutine_TypeInfo);
    this = (BattleCommandComponent__fadeoutEffect_d__186_o *)sub_2213A60(&StringLiteral_19768/*"effect/ef_commandburn_s01"*/);
    byte_5973853 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = v8->fields.__4__this;
      v8->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (BattleCommandComponent__fadeoutEffect_d__186_o *)_4__this->fields.nomalwidget;
        if ( this )
        {
          ((void (__fastcall *)(BattleCommandComponent__fadeoutEffect_d__186_o *, const MethodInfo *, double))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
            this,
            this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
            0.0);
          BattleCommandComponent__DestroyEffectObject1(_4__this, 0);
          if ( v8->fields.isTresure )
          {
LABEL_24:
            BattleCommandComponent__CardEffectSetActive(_4__this, 0, 0);
            return _1__state == 0;
          }
          effectobj = _4__this->fields.effectobj;
          this = (BattleCommandComponent__fadeoutEffect_d__186_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)_4__this,
                                                                     0);
          if ( this )
          {
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            this = (BattleCommandComponent__fadeoutEffect_d__186_o *)BaseMonoBehaviour__createObject_48153028(
                                                                       (BaseMonoBehaviour_o *)_4__this,
                                                                       (System_String_o *)StringLiteral_19768/*"effect/ef_commandburn_s01"*/,
                                                                       transform,
                                                                       0,
                                                                       0);
            if ( effectobj )
            {
              if ( (effectobj->max_length & 0xFFFFFFFE) == 0 )
                goto LABEL_30;
              effectobj->m_Items[1] = (UnityEngine_GameObject_o *)this;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&effectobj->m_Items[1],
                (int32_t)this,
                v13,
                v14,
                v15,
                v16,
                v17,
                v18);
              v19 = _4__this->fields.effectobj;
              if ( !v19 )
                goto LABEL_29;
              if ( (v19->max_length & 0xFFFFFFFE) == 0 )
                goto LABEL_30;
              this = (BattleCommandComponent__fadeoutEffect_d__186_o *)v19->m_Items[1];
              if ( !this )
                goto LABEL_29;
              v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
              this = (BattleCommandComponent__fadeoutEffect_d__186_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)_4__this,
                                                                         0);
              if ( !this )
                goto LABEL_29;
              this = (BattleCommandComponent__fadeoutEffect_d__186_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0);
              if ( !this )
                goto LABEL_29;
              this = (BattleCommandComponent__fadeoutEffect_d__186_o *)UnityEngine_Transform__get_parent(
                                                                         (UnityEngine_Transform_o *)this,
                                                                         0);
              if ( !v20 )
                goto LABEL_29;
              UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)this, 0);
              v21 = _4__this->fields.effectobj;
              if ( !v21 )
                goto LABEL_29;
              if ( (v21->max_length & 0xFFFFFFFE) == 0 )
LABEL_30:
                sub_2213CE4(this);
              this = (BattleCommandComponent__fadeoutEffect_d__186_o *)v21->m_Items[1];
              if ( this )
              {
                this = (BattleCommandComponent__fadeoutEffect_d__186_o *)UnityEngine_GameObject__get_transform(
                                                                           (UnityEngine_GameObject_o *)this,
                                                                           0);
                v22 = this;
                if ( !byte_5969AE5 )
                {
                  this = (BattleCommandComponent__fadeoutEffect_d__186_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                  byte_5969AE5 = 1;
                }
                if ( v22 )
                {
                  UnityEngine_Transform__set_localScale(
                    (UnityEngine_Transform_o *)v22,
                    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                    0);
                  goto LABEL_24;
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_2213CDC(this, method);
    }
  }
  else
  {
    v8->fields.__1__state = -1;
    v23 = DefCoroutine_TypeInfo;
    if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
      v23 = DefCoroutine_TypeInfo;
    }
    milliSecSix = (Il2CppObject *)v23->static_fields->milliSecSix;
    v8->fields.__2__current = milliSecSix;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)milliSecSix, v2, v3, v4, v5, v6, v7);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BattleCommandComponent__fadeoutEffect_d__186__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__fadeoutEffect_d__186_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__fadeoutEffect_d__186__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__fadeoutEffect_d__186_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleCommandComponent__fadeoutEffect_d__186_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleCommandComponent__fadeoutEffect_d__186__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__fadeoutEffect_d__186_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__fadeoutEffect_d__186__System_IDisposable_Dispose(
        BattleCommandComponent__fadeoutEffect_d__186_o *this,
        const MethodInfo *method)
{
  ;
}