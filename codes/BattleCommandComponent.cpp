void __fastcall BattleCommandComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct BattleCommandComponent_StaticFields *static_fields; // x0
  struct BattleCommandComponent_StaticFields *v20; // x0
  struct BattleCommandComponent_StaticFields *v21; // x0
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s4
  float v29; // s5
  float v30; // s6
  float v31; // s4
  float v32; // s5
  float v33; // s6
  float v34; // s4
  float v35; // s5
  float v36; // s6
  float v37; // s4
  float v38; // s5
  float v39; // s6
  BattleCommandComponent_c *v40; // x8
  struct BattleCommandComponent_StaticFields *v41; // x0
  struct BattleCommandComponent_StaticFields *v42; // x0
  struct UnityEngine_Color_o v43; // [xsp+0h] [xbp-70h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E53D2 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_19526/*"icon_cardsealed_quick"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_22237/*"se_"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19524/*"icon_cardsealed_arts"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19525/*"icon_cardsealed_buster"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23419/*"v_"*/, v16, v17, v18);
    byte_42E53D2 = 1;
  }
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_19524/*"icon_cardsealed_arts"*/;
  sub_B5D560(static_fields);
  v20 = BattleCommandComponent_TypeInfo->static_fields;
  v20->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_19525/*"icon_cardsealed_buster"*/;
  sub_B5D560(&v20->SEALED_CARDTYPE_ICON_BUSTER);
  v21 = BattleCommandComponent_TypeInfo->static_fields;
  v21->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_19526/*"icon_cardsealed_quick"*/;
  sub_B5D560(&v21->SEALED_CARDTYPE_ICON_QUICK);
  v45.fields.r = 1.0;
  v45.fields.g = 1.0;
  v45.fields.b = 1.0;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  UnityEngine_Color___ctor_41567816(v45, v22, v23, v24, (const MethodInfo *)&methoda.token);
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = *(struct UnityEngine_Color_o *)&methoda.token;
  v46.fields.r = 0.69804;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v46.fields.g = 0.69804;
  v46.fields.b = 0.69804;
  UnityEngine_Color___ctor_41567816(v46, v25, v26, v27, (const MethodInfo *)&methoda.rgctx_data);
  v47.fields.b = 0.58824;
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault = *(struct UnityEngine_Color_o *)&methoda.rgctx_data;
  v47.fields.g = 0.93333;
  v47.fields.r = 1.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Color___ctor_41567816(v47, v28, v29, v30, (const MethodInfo *)&methoda.return_type);
  v48.fields.b = 0.070588;
  BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientTopOnBoosted = *(struct UnityEngine_Color_o *)&methoda.return_type;
  v48.fields.g = 0.63529;
  v48.fields.r = 1.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Color___ctor_41567816(v48, v31, v32, v33, (const MethodInfo *)&methoda.name);
  v49.fields.b = 0.52549;
  BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted = *(struct UnityEngine_Color_o *)&methoda.name;
  v49.fields.g = 0.88627;
  v49.fields.r = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_41567816(v49, v34, v35, v36, &methoda);
  v50.fields.g = 0.53725;
  v50.fields.b = 0.0;
  BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientTopOnBoosted = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v50.fields.r = 0.83137;
  v43 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41567816(v50, v37, v38, v39, (const MethodInfo *)&v43);
  v40 = BattleCommandComponent_TypeInfo;
  BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientBottomOnBoosted = v43;
  v41 = v40->static_fields;
  v41->voiceIdPrefix = (struct System_String_o *)StringLiteral_23419/*"v_"*/;
  sub_B5D560(&v41->voiceIdPrefix);
  v42 = BattleCommandComponent_TypeInfo->static_fields;
  v42->seIdPrefix = (struct System_String_o *)StringLiteral_22237/*"se_"*/;
  sub_B5D560(&v42->seIdPrefix);
}


void __fastcall BattleCommandComponent___ctor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Array_o *v32; // x20
  System_Array_o *v33; // x20
  System_Array_o *v34; // x20
  System_Array_o *v35; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v37; // x20
  System_RuntimeFieldHandle_o v38; // 0:w1.4
  System_RuntimeFieldHandle_o v39; // 0:w1.4
  System_RuntimeFieldHandle_o v40; // 0:w1.4
  System_RuntimeFieldHandle_o v41; // 0:w1.4

  if ( (byte_42E53D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&BuffList_TYPE___TypeInfo, v17, v18, v19);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468,
      v29,
      v30,
      v31);
    byte_42E53D1 = 1;
  }
  this->fields.effectobj = (struct UnityEngine_GameObject_array *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 6LL);
  sub_B5D560(&this->fields.effectobj);
  this->fields.addObjectList = (struct UnityEngine_GameObject_array *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 2LL);
  sub_B5D560(&this->fields.addObjectList);
  v32 = (System_Array_o *)sub_B5D5DC(BuffList_TYPE___TypeInfo, 13LL);
  v38.fields.value = Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v32, v38, 0LL);
  this->fields.qabTypes = (struct BuffList_TYPE_array *)v32;
  sub_B5D560(&this->fields.qabTypes);
  v33 = (System_Array_o *)sub_B5D5DC(BuffList_TYPE___TypeInfo, 4LL);
  v39.fields.value = Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v33, v39, 0LL);
  this->fields.noneTdQabTypes = (struct BuffList_TYPE_array *)v33;
  sub_B5D560(&this->fields.noneTdQabTypes);
  v34 = (System_Array_o *)sub_B5D5DC(BuffList_TYPE___TypeInfo, 3LL);
  v40.fields.value = Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v34, v40, 0LL);
  this->fields.tdTypes = (struct BuffList_TYPE_array *)v34;
  sub_B5D560(&this->fields.tdTypes);
  v35 = (System_Array_o *)sub_B5D5DC(BuffList_TYPE___TypeInfo, 15LL);
  v41.fields.value = Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v35, v41, 0LL);
  this->fields.otherTypes = (struct BuffList_TYPE_array *)v35;
  sub_B5D560(&this->fields.otherTypes);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v36;
  sub_B5D560(&this->fields.specialCardBuffList);
  this->fields.cardBuffAlphaFor = 1.0;
  v37 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v37,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v37;
  sub_B5D560(&this->fields.cardEffectDict);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCommandComponent__AddBoostedCriticalRate(
        BattleCommandComponent_o *this,
        int32_t toAdd,
        const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8
  int32_t v5; // w0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  data = this->fields.data;
  if ( data )
    v5 = data->fields.starcount / -10 + 100 - this->fields.boostedCriticalRate;
  else
    v5 = 100;
  this->fields.boostedCriticalRate += UnityEngine_Mathf__Clamp_41572460(v5, 0, toAdd, 0LL);
  BattleCommandComponent__ChangeCriticalLabelColor(this, v6);
  BattleCommandComponent__updateCount(this, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__CardEffectSetActive(
        BattleCommandComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *cardEffectDict; // x0
  bool v19; // w19
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E53C9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__,
      value,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__,
      v15,
      v16,
      v17);
    byte_42E53C9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(cardEffectDict, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_B5D69C(cardEffectDict, value);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v19 = value;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v21,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v21.fields.currentValue )
      sub_B5D69C(0LL, v20);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v21.fields.currentValue, v19, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v21,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCardEffectMaskForInside(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *cardEffectDict; // x0
  changeVColor_array *v21; // x0
  __int64 v22; // x1
  changeVColor_array *v23; // x19
  int max_length; // w8
  int i; // w22
  UnityEngine_ParticleSystemRenderer_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E53CB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__,
      v17,
      v18,
      v19);
    byte_42E53CB = 1;
  }
  memset(&v30, 0, sizeof(v30));
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(cardEffectDict, (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_B5D69C(cardEffectDict, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v29,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v30,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v30.fields.currentValue )
      sub_B5D69C(0LL, v27);
    v21 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
            (UnityEngine_GameObject_o *)v30.fields.currentValue,
            (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v23 = v21;
    if ( !v21 )
      sub_B5D69C(0LL, v22);
    max_length = v21->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
          v28 = sub_B5D6C8(v21);
          sub_B5D668(v28, 0LL);
        }
        v26 = (UnityEngine_ParticleSystemRenderer_o *)v23->m_Items[i];
        if ( !v26 )
          sub_B5D69C(0LL, v22);
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v26, 1, 0LL);
        max_length = v23->max_length;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v30,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *criticallabel; // x0
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w22
  UILabel_o *v12; // x21
  UILabel_o *criticalPercentLabel; // x20
  __int64 v14; // x0

  if ( (byte_42E5386 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840, v5, v6, v7);
    byte_42E5386 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_19;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840);
  if ( !criticallabel )
    goto LABEL_19;
  v9 = *((_DWORD *)criticallabel + 6);
  v10 = criticallabel;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
      {
        v14 = sub_B5D6C8(criticallabel);
        sub_B5D668(v14, 0LL);
      }
      criticallabel = BattleCommandComponent_TypeInfo;
      v12 = (UILabel_o *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v12 )
        break;
      UILabel__set_gradientTop(v12, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 56LL), 0LL);
      UILabel__set_gradientBottom(
        v12,
        BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted,
        0LL);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B5D69C(criticallabel, method);
  }
LABEL_13:
  criticalPercentLabel = this->fields.criticalPercentLabel;
  criticallabel = BattleCommandComponent_TypeInfo;
  if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    criticallabel = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_19;
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 88LL), 0LL);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_19;
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
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  int size; // w8
  __int64 cardBuffListIndex; // x21
  BattleCommandComponent_CardBuffData_o *v11; // x8
  int32_t buffType; // w8

  v4 = this;
  if ( (byte_42E53C5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    this = (BattleCommandComponent_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__,
                                         v5,
                                         v6,
                                         v7);
    byte_42E53C5 = 1;
  }
  specialCardBuffList = v4->fields.specialCardBuffList;
  if ( !specialCardBuffList )
    goto LABEL_13;
  size = specialCardBuffList->fields._size;
  cardBuffListIndex = v4->fields.cardBuffListIndex;
  if ( size <= (int)cardBuffListIndex )
  {
LABEL_11:
    BattleCommandComponent__SetCardBuffAlphaAnimFlag(v4, 0, v2);
    return;
  }
  if ( size <= (unsigned int)cardBuffListIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v11 = specialCardBuffList->fields._items->m_Items[cardBuffListIndex];
  if ( !v11 )
LABEL_13:
    sub_B5D69C(this, method);
  buffType = v11->fields.buffType;
  if ( buffType != 156 )
  {
    if ( buffType == 131 )
    {
      BattleCommandComponent__UpdateFixedCommandCard(v4, method);
      return;
    }
    goto LABEL_11;
  }
  BattleCommandComponent__UpdateCommandCardTypeChange(v4, method);
}


UISprite_o *__fastcall BattleCommandComponent__ChoiceUnusableMarkSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v4; // x1
  UISprite_o **p_donotPermanentSleep; // x8
  UISprite_o *result; // x0

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_B5D69C(0LL, v4);
  switch ( BattleCommandSealStatus__get_PrioredStatus(SealStatus, v4) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *cardEffectDict; // x0
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E53CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__,
      v20,
      v21,
      v22);
    byte_42E53CA = 1;
  }
  memset(&v25, 0, sizeof(v25));
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
    goto LABEL_13;
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                cardEffectDict,
                                                                                                (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !cardEffectDict )
    goto LABEL_13;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v25,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v25.fields.currentValue;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)currentValue, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v25,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
LABEL_13:
    sub_B5D69C(cardEffectDict, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)cardEffectDict,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
}


void __fastcall BattleCommandComponent__DestroyEffectObject1(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x0

  v4 = this;
  if ( (byte_42E53AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, (_DWORD)method, v2, v3);
    this = (BattleCommandComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E53AC = 1;
  }
  effectobj = v4->fields.effectobj;
  if ( !effectobj )
    goto LABEL_27;
  if ( effectobj->max_length <= 1 )
    goto LABEL_28;
  v9 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v4->fields.newMatriarl )
    {
      v10 = v4->fields.effectobj;
      if ( !v10 )
        goto LABEL_27;
      if ( v10->max_length <= 1 )
        goto LABEL_28;
      this = (BattleCommandComponent_o *)v10->m_Items[1];
      if ( !this )
        goto LABEL_27;
      this = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !this )
        goto LABEL_27;
      v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                      this,
                                      this->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v11, 0LL);
      v4->fields.newMatriarl = 0;
    }
    v12 = v4->fields.effectobj;
    if ( v12 )
    {
      if ( v12->max_length <= 1 )
        goto LABEL_28;
      v13 = (UnityEngine_Object_o *)v12->m_Items[1];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v13, 0LL);
      this = (BattleCommandComponent_o *)v4->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.objectRoot) > 1 )
        {
          this->fields.icon = 0LL;
          sub_B5D560(&this->fields.icon);
          return;
        }
LABEL_28:
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
      }
    }
LABEL_27:
    sub_B5D69C(this, method);
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
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return this->fields.boostedCriticalRate + data->fields.starcount / 10;
  else
    return 0;
}


int32_t __fastcall BattleCommandComponent__GetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(0LL, method);
  return BattleCommandData__getPassStarCount(data, method);
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
  float v11; // s11
  float v12; // s12
  float v13; // s13
  UnityEngine_Transform_o *v14; // x0
  __int64 v15; // x1
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s3
  float v20; // s4
  float v21; // s5
  float v22; // s6
  float v23; // s7
  UnityEngine_GameObject_o *v24; // x19
  UnityEngine_Transform_o *transform; // x20
  int v26; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v33; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  spawner = this->fields.spawner;
  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v11 = zero.fields.x;
  v12 = zero.fields.y;
  v13 = zero.fields.z;
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !spawner )
    goto LABEL_6;
  v20 = v16;
  v21 = v17;
  v22 = v18;
  v23 = v19;
  v31.fields.x = v11;
  v31.fields.y = v12;
  v31.fields.z = v13;
  v33.fields.x = v20;
  v33.fields.y = v21;
  v33.fields.z = v22;
  v33.fields.w = v23;
  v24 = Spawner__Spawn_26157860(spawner, (UnityEngine_Object_o *)prefab, v31, v33, 0LL);
  GameObjectExtensions__SetParent(v24, (UnityEngine_Component_o *)parent, 0LL);
  if ( !v24
    || (transform = UnityEngine_GameObject__get_transform(v24, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v26, 0LL),
        (v14 = UnityEngine_GameObject__get_transform(v24, 0LL)) == 0LL) )
  {
LABEL_6:
    sub_B5D69C(v14, v15);
  }
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  UnityEngine_Transform__set_localScale(v14, v32, 0LL);
  return v24;
}


void __fastcall BattleCommandComponent__HideAndCancelCountUpFinishEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DrumRollLabel_o *criticallabel; // x0
  UnityEngine_Object_o *countUpFinishEffect; // x20
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x19

  if ( (byte_42E5385 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5385 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_11;
  DrumRollLabel__CancelFinishCallback(criticallabel, 0LL, 0LL);
  countUpFinishEffect = (UnityEngine_Object_o *)this->fields.countUpFinishEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(countUpFinishEffect, 0LL, 0LL) )
  {
    criticallabel = (DrumRollLabel_o *)this->fields.spawner;
    if ( criticallabel )
    {
      p_countUpFinishEffect = &this->fields.countUpFinishEffect;
      Spawner__Despawn((Spawner_o *)criticallabel, *p_countUpFinishEffect, 1, 0LL);
      *p_countUpFinishEffect = 0LL;
      sub_B5D560(p_countUpFinishEffect);
      return;
    }
LABEL_11:
    sub_B5D69C(criticallabel, method);
  }
}


void __fastcall BattleCommandComponent__HidePowerUpValueLabelActive(
        BattleCommandComponent_o *this,
        bool isCommandCardUnderIcon,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *powerUpCardValue; // x0

  if ( (byte_42E53C6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isCommandCardUnderIcon, (_DWORD)method, v3);
    byte_42E53C6 = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
    sub_B5D69C(powerUpCardValue, v7);
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorAnimation(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleDataDefine_c *v23; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *Object_30642600; // x0
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v30; // x19

  if ( (byte_42E537F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationClip_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16542/*"anim_erroraction"*/, v20, v21, v22);
    byte_42E537F = 1;
  }
  v23 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v23 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v23->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_34;
  Object_30642600 = AssetData__GetObject_30642600(AssetStorage, (System_String_o *)StringLiteral_16542/*"anim_erroraction"*/, 0LL);
  if ( Object_30642600 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_30642600->klass == UnityEngine_AnimationClip_TypeInfo )
      v28 = Object_30642600;
    else
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v28, 0LL, 0LL) )
  {
    this->fields.isSettedTreasureDeviceErrorAnim = 1;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v30 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( v28 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v28, 0LL);
        if ( Component_WebViewObject )
        {
          SimpleAnimation__AddClip(
            (SimpleAnimation_o *)Component_WebViewObject,
            (UnityEngine_AnimationClip_o *)v28,
            (System_String_o *)AssetStorage,
            0LL);
          return;
        }
      }
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        return;
      if ( v28 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v28, 0LL);
        if ( v30 )
        {
          UnityEngine_Animation__AddClip(
            (UnityEngine_Animation_o *)v30,
            (UnityEngine_AnimationClip_o *)v28,
            (System_String_o *)AssetStorage,
            0LL);
          return;
        }
      }
    }
LABEL_34:
    sub_B5D69C(AssetStorage, v26);
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x20
  BattleDataDefine_c *v24; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x1

  if ( (byte_42E537E & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19577/*"icon_error"*/, v20, v21, v22);
    byte_42E537E = 1;
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    v24 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v24 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v24->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504)) == 0LL
      || (AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.treasureDeviceErrorSprite) == 0LL) )
    {
      sub_B5D69C(AssetStorage, v27);
    }
    UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_19577/*"icon_error"*/, 0LL);
    BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(this, v28);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct Spawner_o **p_spawner; // x20
  UnityEngine_Object_o *spawner; // x21
  const MethodInfo *v10; // x1
  Spawner_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E5380 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v5, v6, v7);
    byte_42E5380 = 1;
  }
  p_spawner = &this->fields.spawner;
  this->fields.spawner = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  sub_B5D560(&this->fields.spawner);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
  {
    v11 = *p_spawner;
    if ( !*p_spawner
      || (Spawner__Precache_26157212(v11, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0LL),
          (v11 = this->fields.spawner) == 0LL) )
    {
      sub_B5D69C(v11, v10);
    }
    Spawner__Precache_26157212(v11, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0LL);
  }
  BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(this, v10);
  BattleCommandComponent__InitTreasureDeviceErrorAnimation(this, v12);
}


bool __fastcall BattleCommandComponent__IsAnimationBusy(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E53CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)animationName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E53CF = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v13 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v14 )
  {
    if ( Component_WebViewObject )
      return SimpleAnimation__IsPlaying((SimpleAnimation_o *)Component_WebViewObject, animationName, 0LL);
LABEL_16:
    sub_B5D69C(v14, v15);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( !v14 )
    return 0;
  if ( !v13 )
    goto LABEL_16;
  return UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v13, animationName, 0LL);
}


bool __fastcall BattleCommandComponent__IsMaxCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(this, method);
  return data->fields.starcount > 999;
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
    sub_B5D69C(criticalObject, method);
  }
  return 0;
}


bool __fastcall BattleCommandComponent__IsValidVoiceType(
        BattleCommandComponent_o *this,
        System_String_o *voiceTypeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleCommandComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct BattleServantData_o *svtData; // x8
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w21
  struct BattleServantData_o *v13; // x8
  int32_t v14; // w20
  int32_t overwriteSvtVoiceId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v5 = this;
  if ( (byte_42E53A5 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)voiceTypeId, (_DWORD)method, v3);
    this = (BattleCommandComponent_o *)sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v6, v7, v8);
    byte_42E53A5 = 1;
  }
  svtData = v5->fields.svtData;
  if ( !svtData )
    goto LABEL_13;
  v11 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  this = (BattleCommandComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
  if ( !v5->fields.svtData
    || (v12 = (int)this,
        this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(v5->fields.svtData, 1, 0LL),
        (v13 = v5->fields.svtData) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(this, voiceTypeId);
  }
  v14 = (int)this;
  overwriteSvtVoiceId = v13->fields.overwriteSvtVoiceId;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__checkBattleVoice(v12, v14, overwriteSvtVoiceId, voiceTypeId, 0, 0LL);
}


void __fastcall BattleCommandComponent__OnClickEvent(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *target; // x20
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v13; // x19
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  int32_t markindex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E53A2 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23044/*"touchCommandCard"*/, v8, v9, v10);
    byte_42E53A2 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v13 = this->fields.target;
      markindex = data->fields.markindex;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex);
      if ( !v13 )
        sub_B5D69C(v14, v15);
      UnityEngine_GameObject__SendMessage_41595104(v13, (System_String_o *)StringLiteral_23044/*"touchCommandCard"*/, v14, 0LL);
    }
  }
}


void __fastcall BattleCommandComponent__OnLongPressEvent(
        BattleCommandComponent_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *target; // x20
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v13; // x19
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  int32_t markindex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E53A3 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8679/*"LongPress"*/, v8, v9, v10);
    byte_42E53A3 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v13 = this->fields.target;
      markindex = data->fields.markindex;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex);
      if ( !v13 )
        sub_B5D69C(v14, v15);
      UnityEngine_GameObject__SendMessage_41595104(v13, (System_String_o *)StringLiteral_8679/*"LongPress"*/, v14, 0LL);
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
  __int64 v4; // x3
  long double v5; // q8
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Object_o *v18; // x21
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  UnityEngine_AnimationState_c *klass; // x8
  UnityEngine_AnimationState_o *v23; // x21
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v26; // x0

  v5 = *(long double *)&simpleAnimationTime;
  if ( (byte_42E538E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)animationName, (_DWORD)method, v4);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v14, v15, v16);
    byte_42E538E = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v18 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v18 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 1, 0LL);
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v18, animationName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, *(float *)&v5, 0LL);
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v18, animationName, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B5D69C(Item, v20);
  }
  if ( !Component_WebViewObject )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 1, 0LL);
  Item = (UnityEngine_AnimationState_o *)SimpleAnimation__get_Item(
                                           (SimpleAnimation_o *)Component_WebViewObject,
                                           animationName,
                                           0LL);
  if ( !Item )
    goto LABEL_24;
  klass = Item->klass;
  v23 = Item;
  if ( *(_WORD *)&Item->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v24;
      p_offset += 2;
      if ( v24 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    v26 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_13:
    v26 = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 4LL, v21);
  }
  (*(void (__fastcall **)(UnityEngine_AnimationState_o *, _QWORD, long double))v26)(v23, *(_QWORD *)(v26 + 8), v5);
  SimpleAnimation__Play_16676044((SimpleAnimation_o *)Component_WebViewObject, animationName, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  BattleCommandComponent__PlayStarSe_d__159_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42E539B & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent__PlayStarSe_d__159_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E539B = 1;
  }
  v6 = (BattleCommandComponent__PlayStarSe_d__159_o *)sub_B5D694(BattleCommandComponent__PlayStarSe_d__159_TypeInfo);
  BattleCommandComponent__PlayStarSe_d__159___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleCommandComponent__PlayTDErrorAnimation(
        BattleCommandComponent_o *this,
        System_Action_o *tdErrorAfterAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  _BOOL4 IsAnimationBusy; // w21
  System_Delegate_o *v16; // x0
  System_Action_o **p_tdErrorAfterAction; // x20
  __int64 v18; // x1
  BattleServantData_o *svtData; // x0
  struct BattleServantData_o *v20; // x8
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  BattleCommandComponent_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_42E53D0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)tdErrorAfterAction, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22238/*"se_ba41"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_16542/*"anim_erroraction"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16540/*"anim_commandfloat"*/, v12, v13, v14);
    byte_42E53D0 = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_16540/*"anim_commandfloat"*/, method);
  v16 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.tdErrorAfterAction,
          (System_Delegate_o *)tdErrorAfterAction,
          0LL);
  if ( v16 && (System_Action_c *)v16->klass != System_Action_TypeInfo )
  {
    v24 = (BattleCommandComponent_o *)sub_B5D990(v16);
    BattleCommandComponent___ctor(v24, v25);
  }
  else
  {
    p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
    this->fields.tdErrorAfterAction = (struct System_Action_o *)v16;
    sub_B5D560(&this->fields.tdErrorAfterAction);
    if ( !this->fields.isSettedTreasureDeviceErrorAnim || !IsAnimationBusy )
    {
      if ( *p_tdErrorAfterAction )
        System_Action__Invoke(*p_tdErrorAfterAction, 0LL);
    }
    else
    {
      svtData = this->fields.svtData;
      if ( !svtData
        || (BattleServantData__AddTDErrorTouchCount(svtData, 0LL), (v20 = this->fields.svtData) == 0LL)
        || (svtData = (BattleServantData_o *)v20->fields.deckSvt) == 0LL )
      {
        sub_B5D69C(svtData, v18);
      }
      TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                   (BattleDeckServantData_o *)svtData,
                                   (System_String_o *)StringLiteral_22238/*"se_ba41"*/,
                                   0LL);
      BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v22);
      BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16542/*"anim_erroraction"*/, 0.0, v23);
    }
  }
}


System_String_o *__fastcall BattleCommandComponent__PlayTDErrorVoiceSe(
        BattleCommandComponent_o *this,
        System_String_o *voiceSeId,
        int32_t voiceUniqueId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x1
  System_String_o *v26; // x22
  BattleServantData_o *svtData; // x0
  int32_t v28; // w22
  int32_t DispLimitCount; // w23
  int32_t VoicePrefix; // w0
  BattleCommandComponent_c *v31; // x8
  int v32; // w24
  struct BattleServantData_o *v33; // x8
  System_String_o *v34; // x19
  int32_t overwriteSvtVoiceId; // w21
  Il2CppObject *v36; // x20
  Il2CppObject *v37; // x0
  BattleCommandComponent_c *v38; // x0
  BattleCommandComponent_c *v39; // x0
  _QWORD *v40; // x8
  System_Reflection_MethodBase_o *v41; // x0
  int v43; // [xsp+8h] [xbp-38h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E53CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__, (_DWORD)voiceSeId, voiceUniqueId, method);
    sub_B5D5C4(&BattleCommandComponent_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_23954/*"{0}_{1:D0}_{2}"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42E53CD = 1;
  }
  v26 = 0LL;
  if ( !System_String__IsNullOrEmpty(voiceSeId, 0LL) )
  {
    svtData = (BattleServantData_o *)BattleCommandComponent_TypeInfo;
    if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    }
    if ( !voiceSeId )
      goto LABEL_32;
    if ( System_String__StartsWith(voiceSeId, BattleCommandComponent_TypeInfo->static_fields->voiceIdPrefix, 0LL) )
    {
      svtData = this->fields.svtData;
      if ( svtData )
      {
        svtData = (BattleServantData_o *)BattleServantData__getSvtId(svtData, 0LL);
        if ( this->fields.svtData )
        {
          v28 = (int)svtData;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
          svtData = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( svtData )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                            (ServantAssetLoadManager_o *)svtData,
                            v28,
                            DispLimitCount,
                            0LL);
            v31 = BattleCommandComponent_TypeInfo;
            v32 = VoicePrefix;
            if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
              v31 = BattleCommandComponent_TypeInfo;
            }
            svtData = (BattleServantData_o *)System_String__Replace_44585024(
                                               voiceSeId,
                                               v31->static_fields->voiceIdPrefix,
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            v33 = this->fields.svtData;
            if ( v33 )
            {
              v34 = (System_String_o *)svtData;
              overwriteSvtVoiceId = v33->fields.overwriteSvtVoiceId;
              if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              }
              ServantAssetLoadManager__playBattleVoice(
                v28,
                DispLimitCount,
                overwriteSvtVoiceId,
                v34,
                1.0,
                0LL,
                voiceUniqueId,
                0,
                0LL);
              v44 = v28;
              v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
              v43 = v32;
              v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
              return System_String__Format_44578852(
                       (System_String_o *)StringLiteral_23954/*"{0}_{1:D0}_{2}"*/,
                       v36,
                       v37,
                       (Il2CppObject *)v34,
                       0LL);
            }
          }
        }
      }
LABEL_32:
      sub_B5D69C(svtData, v25);
    }
    v38 = BattleCommandComponent_TypeInfo;
    if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
      v38 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v38->static_fields->seIdPrefix, 0LL) )
    {
      v39 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v39 = BattleCommandComponent_TypeInfo;
      }
      v26 = System_String__Replace_44585024(
              voiceSeId,
              v39->static_fields->seIdPrefix,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v40 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 75) & 2) != 0 )
        v40 = (_QWORD *)sub_B5D5CC(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v41 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v40, v40[3]);
      OverwriteAssetSoundName__PlaySe(v41, v26, 0LL);
    }
    else
    {
      return voiceSeId;
    }
  }
  return v26;
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
    sub_B5D69C(svtData, method);
  }
  v8 = BattleCommandComponent__PlayTDErrorVoiceSe(this, (System_String_o *)svtData, data->fields.uniqueId, v6);
  v10 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattleCommandComponent__ReleaseNobleGaugeEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *nobleGaugeEffect; // x20
  struct UnityEngine_GameObject_o **p_nobleGaugeEffect; // x19
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Object_o *v11; // x20

  if ( (byte_42E5392 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&iTween_TypeInfo, v5, v6, v7);
    byte_42E5392 = 1;
  }
  nobleGaugeEffect = (UnityEngine_Object_o *)this->fields.nobleGaugeEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nobleGaugeEffect, 0LL, 0LL) )
  {
    p_nobleGaugeEffect = &this->fields.nobleGaugeEffect;
    v10 = *p_nobleGaugeEffect;
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_43300928(v10, 0LL);
    v11 = (UnityEngine_Object_o *)*p_nobleGaugeEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v11, 0LL);
    *p_nobleGaugeEffect = 0LL;
    sub_B5D560(p_nobleGaugeEffect);
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
    sub_B5D69C(0LL, v3);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_42E53C3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E53C3 = 1;
  }
  this->fields.cardBuffListIndex = 0;
  *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    v7 = this->fields.specialCardBuffIcon;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v7->klass->vtable._8_set_alpha.method)(
      v7,
      v7->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  this->fields.isChangedBuffIcon = 0;
}


void __fastcall BattleCommandComponent__ResetCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *criticallabel; // x0
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w22
  UILabel_o *v12; // x21
  UILabel_o *criticalPercentLabel; // x20
  __int64 v14; // x0

  if ( (byte_42E5387 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840, v5, v6, v7);
    byte_42E5387 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_19;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____68825840);
  if ( !criticallabel )
    goto LABEL_19;
  v9 = *((_DWORD *)criticallabel + 6);
  v10 = criticallabel;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
      {
        v14 = sub_B5D6C8(criticallabel);
        sub_B5D668(v14, 0LL);
      }
      criticallabel = BattleCommandComponent_TypeInfo;
      v12 = (UILabel_o *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v12 )
        break;
      UILabel__set_gradientTop(v12, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0LL);
      UILabel__set_gradientBottom(
        v12,
        BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
        0LL);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_13;
    }
LABEL_19:
    sub_B5D69C(criticallabel, method);
  }
LABEL_13:
  criticalPercentLabel = this->fields.criticalPercentLabel;
  criticallabel = BattleCommandComponent_TypeInfo;
  if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    criticallabel = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_19;
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0LL);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_19;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
    0LL);
}


void __fastcall BattleCommandComponent__ResetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(this, method);
  data->fields.passStarCount = 0;
}


void __fastcall BattleCommandComponent__SetActiveComponent(
        BattleCommandComponent_o *this,
        UnityEngine_Component_o *component,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42E53B9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)component, value, method);
    byte_42E53B9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)component,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !component || (gameObject = UnityEngine_Component__get_gameObject(component, 0LL)) == 0LL )
      sub_B5D69C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetActiveSpecialCardBuffIcon(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E53C0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, active, (_DWORD)method, v3);
    byte_42E53C0 = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B5D69C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetCardBuffAlphaAnimFlag(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E53BF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, active, (_DWORD)method, v3);
    byte_42E53BF = 1;
  }
  this->fields.isCardBuffAlphaAnim = active;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B5D69C(gameObject, v7);
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
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *facetex; // x20
  __int64 v11; // x1
  UIWidget_o *v12; // x0
  UnityEngine_Object_o *bg; // x20
  UnityEngine_Object_o *codeSprite; // x20
  UnityEngine_Object_o *codeTexture; // x20
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *powerUpCardIcon; // x20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42E53A7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E53A7 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.facetex;
    if ( !v12 )
      goto LABEL_34;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v12, v19, 0LL);
  }
  bg = (UnityEngine_Object_o *)this->fields.bg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bg, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.bg;
    if ( !v12 )
      goto LABEL_34;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v12, v20, 0LL);
  }
  codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(codeSprite, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.codeSprite;
    if ( !v12 )
      goto LABEL_34;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color(v12, v21, 0LL);
  }
  codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(codeTexture, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.codeTexture;
    if ( !v12 )
      goto LABEL_34;
    v22.fields.r = r;
    v22.fields.g = g;
    v22.fields.b = b;
    v22.fields.a = a;
    UIWidget__set_color(v12, v22, 0LL);
  }
  v23.fields.r = r;
  v23.fields.g = g;
  v23.fields.b = b;
  v23.fields.a = a;
  BattleCommandComponent__SetCommandCodeActive(this, v23, 0, v16);
  v24.fields.r = r;
  v24.fields.g = g;
  v24.fields.b = b;
  v24.fields.a = a;
  BattleCommandComponent__SetCommandAssistActive(this, v24, 0, v17);
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( v12 )
    {
      v25.fields.b = b;
      v25.fields.a = a;
      v25.fields.r = r;
      v25.fields.g = g;
      UIWidget__set_color(v12, v25, 0LL);
      return;
    }
LABEL_34:
    sub_B5D69C(v12, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandAssistActive(
        BattleCommandComponent_o *this,
        UnityEngine_Color_o color,
        bool isFirst,
        const MethodInfo *method)
{
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *assistChargeTurnLabel; // x21
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  __int64 v19; // x1
  void *buffData; // x0
  UnityEngine_Object_o *assistSprite; // x21
  struct BattleCommandData_o *data; // x8
  struct BattleServantData_o *svtData; // x8
  int v24; // w8
  unsigned int v25; // w9
  _DWORD *v26; // x21
  struct BattleCommandData_o *v27; // x10
  int32_t v28; // w21
  int v29; // t1
  UIWidget_o *v30; // x22
  int v31; // s0
  UILabel_o *v35; // x22
  UILabel_o *v36; // x21
  __int64 v37; // x0
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42E53A9 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, isFirst, (_DWORD)method, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2430/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v14, v15, v16);
    byte_42E53A9 = 1;
  }
  if ( this->fields.isInBattle )
  {
    v41.fields.r = 0.0;
    v41.fields.g = 0.0;
    v41.fields.b = 0.0;
    v41.fields.a = 0.0;
    v38.fields.r = r;
    v38.fields.g = g;
    v38.fields.b = b;
    v38.fields.a = a;
    if ( UnityEngine_Color__op_Equality(v38, v41, 0LL) )
    {
      white = UnityEngine_Color__get_white(0LL);
      r = white.fields.r;
      g = white.fields.g;
      b = white.fields.b;
      a = white.fields.a;
    }
    assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(assistChargeTurnLabel, 0LL, 0LL) )
    {
      assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(assistRemainingTurnLabel, 0LL, 0LL) )
      {
        buffData = this->fields.assistChargeTurnLabel;
        if ( !buffData )
          goto LABEL_52;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        buffData = this->fields.assistRemainingTurnLabel;
        if ( !buffData )
          goto LABEL_52;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
        {
          buffData = this->fields.assistSprite;
          if ( !buffData )
            goto LABEL_52;
          v40.fields.r = r;
          v40.fields.g = g;
          v40.fields.b = b;
          v40.fields.a = a;
          UIWidget__set_color((UIWidget_o *)buffData, v40, 0LL);
          data = this->fields.data;
          if ( data )
          {
            if ( data->fields.commandAssistId >= 1 )
            {
              svtData = this->fields.svtData;
              if ( svtData )
              {
                buffData = svtData->fields.buffData;
                if ( !buffData )
                  goto LABEL_52;
                buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
                if ( !buffData )
                  goto LABEL_52;
                v24 = *((_DWORD *)buffData + 6);
                if ( v24 >= 1 )
                {
                  v25 = 0;
                  while ( 1 )
                  {
                    if ( v25 >= v24 )
                    {
                      v37 = sub_B5D6C8(buffData);
                      sub_B5D668(v37, 0LL);
                    }
                    v26 = (_DWORD *)*((_QWORD *)buffData + (int)v25 + 4);
                    if ( !v26 )
                      goto LABEL_52;
                    v27 = this->fields.data;
                    if ( !v27 )
                      goto LABEL_52;
                    if ( v26[87] == v27->fields.commandAssistId && v26[88] == v27->fields.servantCardIdsIndex )
                      break;
                    if ( (int)++v25 >= v24 )
                      goto LABEL_45;
                  }
                  v29 = v26[28];
                  v28 = (_DWORD)v26 + 112;
                  if ( v29 >= 1 )
                  {
                    v30 = (UIWidget_o *)this->fields.assistSprite;
                    *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_gray(0LL);
                    if ( !v30 )
                      goto LABEL_52;
                    UIWidget__set_color(v30, *(UnityEngine_Color_o *)&v31, 0LL);
                    buffData = this->fields.assistChargeTurnLabel;
                    if ( !buffData )
                      goto LABEL_52;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    buffData = this->fields.assistRemainingTurnLabel;
                    if ( !buffData )
                      goto LABEL_52;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    v35 = this->fields.assistChargeTurnLabel;
                    buffData = System_Int32__ToString(v28, 0LL);
                    if ( !v35 )
                      goto LABEL_52;
                    UILabel__set_text(v35, (System_String_o *)buffData, 0LL);
                    v36 = this->fields.assistRemainingTurnLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2430/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                    if ( !v36 )
                      goto LABEL_52;
                    UILabel__set_text(v36, (System_String_o *)buffData, 0LL);
                  }
                }
LABEL_45:
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
LABEL_52:
                  sub_B5D69C(buffData, v19);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_Object_o *assistSprite; // x21
  __int64 v19; // x1
  UnityEngine_Behaviour_o *Master_WarQuestSelectionMaster; // x0
  BattleData_c *v21; // x0
  int32_t EventId; // w21
  UISprite_o *v23; // x20
  System_String_o *v24; // x21

  if ( (byte_42E53B2 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, commandAssistId, (_DWORD)method, v3);
    sub_B5D5C4(&BattleData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E53B2 = 1;
  }
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
  {
    Master_WarQuestSelectionMaster = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
    if ( Master_WarQuestSelectionMaster )
    {
      if ( commandAssistId <= 0 )
        goto LABEL_23;
      UnityEngine_Behaviour__set_enabled(Master_WarQuestSelectionMaster, 1, 0LL);
      v21 = BattleData_TypeInfo;
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      EventId = BattleData__GetEventId((const MethodInfo *)v21);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UnityEngine_Behaviour_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (UnityEngine_Behaviour_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                      (EventCommandAssistMaster_o *)Master_WarQuestSelectionMaster,
                                                                      EventId,
                                                                      commandAssistId,
                                                                      -1,
                                                                      0,
                                                                      0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          v23 = this->fields.assistSprite;
          v24 = System_Int32__ToString((int)Master_WarQuestSelectionMaster + 48, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          if ( AtlasManager__SetEventSprite(v23, v24, 0LL) )
            return;
          Master_WarQuestSelectionMaster = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
          if ( Master_WarQuestSelectionMaster )
          {
LABEL_23:
            UnityEngine_Behaviour__set_enabled(Master_WarQuestSelectionMaster, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_B5D69C(Master_WarQuestSelectionMaster, v19);
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
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *chargeTurnLabel; // x21
  UnityEngine_Object_o *remainingTurnLabel; // x21
  __int64 v19; // x1
  void *buffData; // x0
  UnityEngine_Object_o *codeTexture; // x21
  UnityEngine_Object_o *codeSprite; // x21
  struct BattleCommandData_o *data; // x8
  struct BattleServantData_o *svtData; // x8
  int v25; // w8
  unsigned int v26; // w9
  __int64 v27; // x21
  struct BattleCommandData_o *v28; // x10
  int32_t v29; // w21
  int v30; // t1
  UIWidget_o *v31; // x22
  int v32; // s0
  UILabel_o *v36; // x22
  UILabel_o *v37; // x21
  __int64 v38; // x0
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42E53A8 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, isFirst, (_DWORD)method, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2430/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v14, v15, v16);
    byte_42E53A8 = 1;
  }
  if ( this->fields.isInBattle )
  {
    v42.fields.r = 0.0;
    v42.fields.g = 0.0;
    v42.fields.b = 0.0;
    v42.fields.a = 0.0;
    v39.fields.r = r;
    v39.fields.g = g;
    v39.fields.b = b;
    v39.fields.a = a;
    if ( UnityEngine_Color__op_Equality(v39, v42, 0LL) )
    {
      white = UnityEngine_Color__get_white(0LL);
      r = white.fields.r;
      g = white.fields.g;
      b = white.fields.b;
      a = white.fields.a;
    }
    chargeTurnLabel = (UnityEngine_Object_o *)this->fields.chargeTurnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(chargeTurnLabel, 0LL, 0LL) )
    {
      remainingTurnLabel = (UnityEngine_Object_o *)this->fields.remainingTurnLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(remainingTurnLabel, 0LL, 0LL) )
      {
        buffData = this->fields.chargeTurnLabel;
        if ( !buffData )
          goto LABEL_61;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        buffData = this->fields.remainingTurnLabel;
        if ( !buffData )
          goto LABEL_61;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        if ( this->fields.isCodeTextureView )
        {
          codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(codeTexture, 0LL, 0LL) )
            return;
          buffData = this->fields.codeTexture;
          if ( !buffData )
            goto LABEL_61;
        }
        else
        {
          codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(codeSprite, 0LL, 0LL) )
            return;
          buffData = this->fields.codeSprite;
          if ( !buffData )
            goto LABEL_61;
        }
        v41.fields.r = r;
        v41.fields.g = g;
        v41.fields.b = b;
        v41.fields.a = a;
        UIWidget__set_color((UIWidget_o *)buffData, v41, 0LL);
        data = this->fields.data;
        if ( data )
        {
          if ( data->fields.userCommandCodeId >= 1 )
          {
            svtData = this->fields.svtData;
            if ( svtData )
            {
              buffData = svtData->fields.buffData;
              if ( !buffData )
                goto LABEL_61;
              buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
              if ( !buffData )
                goto LABEL_61;
              v25 = *((_DWORD *)buffData + 6);
              if ( v25 >= 1 )
              {
                v26 = 0;
                while ( 1 )
                {
                  if ( v26 >= v25 )
                  {
                    v38 = sub_B5D6C8(buffData);
                    sub_B5D668(v38, 0LL);
                  }
                  v27 = *((_QWORD *)buffData + (int)v26 + 4);
                  if ( !v27 )
                    goto LABEL_61;
                  v28 = this->fields.data;
                  if ( !v28 )
                    goto LABEL_61;
                  if ( *(_QWORD *)(v27 + 88) == v28->fields.userCommandCodeId )
                    break;
                  if ( (int)++v26 >= v25 )
                    goto LABEL_54;
                }
                v30 = *(_DWORD *)(v27 + 112);
                v29 = v27 + 112;
                if ( v30 >= 1 )
                {
                  if ( this->fields.isCodeTextureView )
                    v31 = (UIWidget_o *)this->fields.codeTexture;
                  else
                    v31 = (UIWidget_o *)this->fields.codeSprite;
                  *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_gray(0LL);
                  if ( !v31 )
                    goto LABEL_61;
                  UIWidget__set_color(v31, *(UnityEngine_Color_o *)&v32, 0LL);
                  buffData = this->fields.chargeTurnLabel;
                  if ( !buffData )
                    goto LABEL_61;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  buffData = this->fields.remainingTurnLabel;
                  if ( !buffData )
                    goto LABEL_61;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  v36 = this->fields.chargeTurnLabel;
                  buffData = System_Int32__ToString(v29, 0LL);
                  if ( !v36 )
                    goto LABEL_61;
                  UILabel__set_text(v36, (System_String_o *)buffData, 0LL);
                  v37 = this->fields.remainingTurnLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2430/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                  if ( !v37 )
                    goto LABEL_61;
                  UILabel__set_text(v37, (System_String_o *)buffData, 0LL);
                }
              }
LABEL_54:
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
LABEL_61:
                sub_B5D69C(buffData, v19);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  struct UITexture_o **p_codeTexture; // x19
  UITexture_o *v27; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture; // x20
  UserServantEntity_o *Entity; // x0
  __int64 v30; // x20
  __int64 v31; // x21
  int32_t v32; // w20
  UISprite_o *codeSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_42E53B0 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, userCommandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42E53B0 = 1;
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
    goto LABEL_32;
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_32;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = &this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      v27 = *p_codeTexture;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture(
                                                                  v27,
                                                                  userCommandCodeId,
                                                                  0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture, 0LL, 0LL) )
      {
        *p_codeTexture = (struct UITexture_o *)Manager__loadCommandCodeTexture;
        sub_B5D560(p_codeTexture);
      }
      return;
    }
LABEL_32:
    sub_B5D69C(codeTexture, v24);
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !codeTexture )
    goto LABEL_32;
  codeTexture = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)codeTexture,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !codeTexture )
    goto LABEL_32;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)codeTexture,
             userCommandCodeId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    v31 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v30 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v31;
    *(_QWORD *)&v34.fields.fakeValue = v30;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v34, 0LL);
  }
  else
  {
    v32 = -1;
  }
  codeSprite = this->fields.codeSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, v32, 0LL);
}


void __fastcall BattleCommandComponent__SetCommandCodeView_18885764(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  struct UITexture_o **p_codeTexture; // x20
  UITexture_o *v15; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_26919588; // x19
  UISprite_o *codeSprite; // x20

  if ( (byte_42E53B1 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, commandCodeId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v9, v10, v11);
    byte_42E53B1 = 1;
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
LABEL_24:
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B5D69C(codeTexture, v12);
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_25;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = &this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      v15 = *p_codeTexture;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture_26919588 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_26919588(
                                                                           v15,
                                                                           commandCodeId,
                                                                           0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_26919588, 0LL, 0LL) )
      {
        *p_codeTexture = (struct UITexture_o *)Manager__loadCommandCodeTexture_26919588;
        sub_B5D560(p_codeTexture);
        return;
      }
      codeTexture = (UnityEngine_Behaviour_o *)*p_codeTexture;
      if ( *p_codeTexture )
        goto LABEL_24;
    }
    goto LABEL_25;
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeSprite = this->fields.codeSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
  __int64 v10; // x0

  v6 = this;
  if ( (byte_42E53CC & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, effectType, active, method);
    byte_42E53CC = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( effectobj->max_length <= effectType )
  {
LABEL_15:
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
  }
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[effectType];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.effectobj;
    if ( !v9 )
      goto LABEL_14;
    if ( v9->max_length > effectType )
    {
      this = (BattleCommandComponent_o *)v9->m_Items[effectType];
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, active, 0LL);
        return;
      }
LABEL_14:
      sub_B5D69C(this, *(_QWORD *)&effectType);
    }
    goto LABEL_15;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *donotPermanentSleep; // x20
  UISprite_o *v12; // x19

  if ( (byte_42E53BE & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19612/*"icon_sleep_2"*/, v8, v9, v10);
    byte_42E53BE = 1;
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(donotPermanentSleep, 0LL, 0LL) )
  {
    v12 = this->fields.donotPermanentSleep;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v12, (System_String_o *)StringLiteral_19612/*"icon_sleep_2"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *donotsleepSprite; // x20
  UISprite_o *v12; // x19

  if ( (byte_42E53BD & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19611/*"icon_sleep"*/, v8, v9, v10);
    byte_42E53BD = 1;
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(donotsleepSprite, 0LL, 0LL) )
  {
    v12 = this->fields.donotsleepSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v12, (System_String_o *)StringLiteral_19611/*"icon_sleep"*/, 0LL);
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
    sub_B5D69C(chargeTurnLabel, active);
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
    sub_B5D69C(assistChargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0LL);
}


void __fastcall BattleCommandComponent__SetLockInfo(
        BattleCommandComponent_o *this,
        bool isLock,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *LockInfo; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42E53B6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isLock, (_DWORD)method, v3);
    byte_42E53B6 = 1;
  }
  LockInfo = (UnityEngine_Object_o *)this->fields.LockInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LockInfo, 0LL, 0LL) )
  {
    v8 = this->fields.LockInfo;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isLock, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetNobleGaugeEffect(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  this->fields.nobleGaugeEffect = effect;
  sub_B5D560(&this->fields.nobleGaugeEffect);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetPowerUpCardIcon(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        int32_t iconType,
        bool isBright,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *powerUpCardIcon; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UISprite_o *v15; // x23
  UnityEngine_Component_o *v16; // x8
  char v17; // w19
  bool v18; // w1

  if ( (byte_42E53B8 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, powerUpValue, iconType, isBright);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E53B8 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(powerUpCardIcon, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v15 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v15 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0LL);
        if ( gameObject )
        {
          v18 = 0;
          goto LABEL_17;
        }
      }
    }
    else
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetCommandCardIconImage(
                                                 v15,
                                                 powerUpValue,
                                                 iconType,
                                                 isBright,
                                                 0LL);
      v16 = (UnityEngine_Component_o *)this->fields.powerUpCardIcon;
      if ( v16 )
      {
        v17 = (char)gameObject;
        gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
        if ( gameObject )
        {
          v18 = v17 & 1;
LABEL_17:
          UnityEngine_GameObject__SetActive(gameObject, v18, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(gameObject, v14);
  }
}


void __fastcall BattleCommandComponent__SetPowerUpCardValue(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *powerUpCardValue; // x21
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v15; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E53B7 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, powerUpValue, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_704/*"+{0:#,0}"*/, v9, v10, v11);
    byte_42E53B7 = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( !gameObject )
      goto LABEL_14;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    if ( powerUpValue <= 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v15 = this->fields.powerUpCardValue;
    v17 = powerUpValue;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_704/*"+{0:#,0}"*/, v16, 0LL);
    if ( !v15 )
LABEL_14:
      sub_B5D69C(gameObject, v13);
    UILabel__set_text(v15, (System_String_o *)gameObject, 0LL);
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  int v47; // w1
  char v48; // w2
  __int64 v49; // x3
  int v50; // w1
  char v51; // w2
  __int64 v52; // x3
  BattleCommandComponent___c__DisplayClass221_0_o *v53; // x24
  void *Index; // x0
  __int64 v55; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v57; // x25
  int32_t v58; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x8
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v61; // x21
  BattleCommandComponent_CardBuffData_o *v62; // x8
  int32_t v63; // w24
  BattleCommandComponent_CardBuffData_o *v64; // x23
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v65; // x20
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__221_1; // x21
  Il2CppObject *v68; // x22
  struct BattleCommandComponent___c_StaticFields *v69; // x0
  const MethodInfo *v70; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v71; // x8

  if ( (byte_42E53C1 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent_CardBuffData_TypeInfo, buffType, active, *(_QWORD *)&turn);
    sub_B5D5C4(&Method_System_Comparison_BattleCommandComponent_CardBuffData___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__221_1__, v41, v42, v43);
    sub_B5D5C4(
      &Method_BattleCommandComponent___c__DisplayClass221_0__SetSpecialCommandCardBuffData_b__0__,
      v44,
      v45,
      v46);
    sub_B5D5C4(&BattleCommandComponent___c__DisplayClass221_0_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&BattleCommandComponent___c_TypeInfo, v50, v51, v52);
    byte_42E53C1 = 1;
  }
  v53 = (BattleCommandComponent___c__DisplayClass221_0_o *)sub_B5D694(BattleCommandComponent___c__DisplayClass221_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass221_0___ctor(v53, 0LL);
  if ( !v53 )
    goto LABEL_32;
  v53->fields.buffType = buffType;
  specialCardBuffList = this->fields.specialCardBuffList;
  v57 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v57,
    (Il2CppObject *)v53,
    Method_BattleCommandComponent___c__DisplayClass221_0__SetSpecialCommandCardBuffData_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
  if ( !specialCardBuffList )
    goto LABEL_32;
  Index = (void *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                    (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
                    (System_Predicate_T__o *)v57,
                    (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  v58 = (int)Index;
  if ( active )
  {
    v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.specialCardBuffList;
    if ( ((unsigned int)Index & 0x80000000) == 0 )
    {
      if ( v59 )
      {
        if ( v59->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v60 = v59->fields._items->m_Items[(int)Index];
        if ( v60 )
        {
          v60->fields.missionConditionDetailId = turn;
          v61 = this->fields.specialCardBuffList;
          if ( v61 )
          {
            if ( v61->fields._size <= (unsigned int)Index )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v62 = v61->fields._items->m_Items[(int)Index];
            if ( v62 )
            {
              v62->fields.addOrder = addOrder;
              goto LABEL_21;
            }
          }
        }
      }
LABEL_32:
      sub_B5D69C(Index, v55);
    }
    v63 = v53->fields.buffType;
    v64 = (BattleCommandComponent_CardBuffData_o *)sub_B5D694(BattleCommandComponent_CardBuffData_TypeInfo);
    BattleCommandComponent_CardBuffData___ctor(v64, v63, turn, addOrder, 0LL);
    if ( !v59 )
      goto LABEL_32;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v59,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__);
  }
  else if ( ((unsigned int)Index & 0x80000000) == 0 )
  {
    Index = this->fields.specialCardBuffList;
    if ( !Index )
      goto LABEL_32;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Index,
      v58,
      (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
LABEL_21:
  v65 = this->fields.specialCardBuffList;
  Index = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Index = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)Index + 23);
  _9__221_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__221_1;
  if ( !_9__221_1 )
  {
    if ( (*((_BYTE *)Index + 307) & 4) != 0 && !*((_DWORD *)Index + 56) )
    {
      j_il2cpp_runtime_class_init_0(Index);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v68 = (Il2CppObject *)static_fields->__9;
    _9__221_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__221_1,
      v68,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__221_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BattleCommandComponent_CardBuffData___ctor__);
    v69 = BattleCommandComponent___c_TypeInfo->static_fields;
    v69->__9__221_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)_9__221_1;
    sub_B5D560(&v69->__9__221_1);
  }
  if ( !v65 )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v65,
    (System_Comparison_T__o *)_9__221_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__);
  v71 = this->fields.specialCardBuffList;
  if ( !v71 )
    goto LABEL_32;
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v71->fields._size > 0, v70);
}


void __fastcall BattleCommandComponent__SetTreasureDeviceTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x22
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x22
  __int64 v18; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v20; // x20
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E53B5 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, active, turn, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2470/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, v13, v14, v15);
    byte_42E53B5 = 1;
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.nowTreasureDeviceTypeImage;
      if ( !gameObject )
        goto LABEL_20;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
      if ( !active )
        return;
      v20 = this->fields.restTreasureDeviceChangeTurnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2470/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, 0LL);
      v23 = turn;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      gameObject = (UnityEngine_Component_o *)System_String__Format(v21, v22, 0LL);
      if ( !v20 )
LABEL_20:
        sub_B5D69C(gameObject, v18);
      UILabel__set_text(v20, (System_String_o *)gameObject, 0LL);
    }
  }
}


bool __fastcall BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x21
  struct UIAtlas_o **p_defaultTdTypeImageAtlas; // x20
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct UISprite_o *v10; // x8
  UnityEngine_Object_o *v11; // x19

  if ( (byte_42E53BA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E53BA = 1;
  }
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_defaultTdTypeImageAtlas = &this->fields.defaultTdTypeImageAtlas;
  if ( UnityEngine_Object__op_Equality(defaultTdTypeImageAtlas, 0LL, 0LL) )
  {
    nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL);
    if ( v8 )
    {
      v10 = this->fields.nowTreasureDeviceTypeImage;
      if ( !v10 )
        sub_B5D69C(v8, v9);
      *p_defaultTdTypeImageAtlas = v10->fields.mAtlas;
      sub_B5D560(&this->fields.defaultTdTypeImageAtlas);
    }
  }
  v11 = (UnityEngine_Object_o *)*p_defaultTdTypeImageAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetUntrueCount(
        BattleCommandComponent_o *this,
        int32_t count,
        bool isInitZero,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  DrumRollLabel_o *criticallabel; // x0
  struct DrumRollLabel_o *v11; // x21
  DrumRollLabel_o *v12; // x0
  int32_t v13; // w1
  DrumRollLabel_CompleteEventHandler_o *v14; // x3
  DrumRollLabel_CompleteEventHandler_o *v15; // x22

  if ( (byte_42E5399 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleCommandComponent_compCriticallabel__, count, isInitZero, method);
    sub_B5D5C4(&DrumRollLabel_CompleteEventHandler_TypeInfo, v7, v8, v9);
    byte_42E5399 = 1;
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
        (v11 = this->fields.criticallabel) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(criticallabel, *(_QWORD *)&count);
  }
  if ( v11->fields.nowvalue <= count )
  {
    v15 = (DrumRollLabel_CompleteEventHandler_o *)sub_B5D694(DrumRollLabel_CompleteEventHandler_TypeInfo);
    DrumRollLabel_CompleteEventHandler___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0LL);
    v12 = v11;
    v13 = count;
    v14 = v15;
  }
  else
  {
    v12 = this->fields.criticallabel;
    v13 = count;
    v14 = 0LL;
  }
  DrumRollLabel__changeParam(v12, v13, 1, v14, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__SetUnusableShortageStarSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  UISprite_o *v12; // x19

  if ( (byte_42E53BC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_19622/*"icon_unusable_star"*/, v8, v9, v10);
    byte_42E53BC = 1;
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    v12 = this->fields.unusableShortageStarSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v12, (System_String_o *)StringLiteral_19622/*"icon_unusable_star"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SwitchChangeObjPos(
        BattleCommandComponent_o *this,
        bool isUp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *codeObject; // x21
  UnityEngine_Transform_o *friendIcon; // x0
  __int64 v8; // x1
  struct UnityEngine_Transform_array *stateCodePoints; // x8
  __int64 v10; // x9
  struct UnityEngine_Transform_array *stateArrowPoints; // x10
  UnityEngine_Transform_o *v12; // x21
  int v13; // s0
  __int64 v16; // x8
  struct UnityEngine_Transform_array *v17; // x8
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0
  struct UnityEngine_Transform_array *v22; // x9
  struct UnityEngine_GameObject_array *addObjectList; // x10
  UnityEngine_Transform_o *v24; // x20
  UnityEngine_Object_o *v25; // x21
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Transform_o *v27; // x21
  int v28; // s0
  struct UnityEngine_GameObject_array *v31; // x8
  UnityEngine_Object_o *v32; // x21
  struct UnityEngine_GameObject_array *v33; // x8
  UnityEngine_Transform_o *v34; // x19
  int v35; // s0
  __int64 v38; // x0

  if ( (byte_42E53B3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isUp, (_DWORD)method, v3);
    byte_42E53B3 = 1;
  }
  codeObject = (UnityEngine_Object_o *)this->fields.codeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(codeObject, 0LL, 0LL);
  if ( ((unsigned __int8)friendIcon & 1) == 0 )
  {
    stateCodePoints = this->fields.stateCodePoints;
    if ( stateCodePoints )
    {
      v10 = *(_QWORD *)&stateCodePoints->max_length;
      if ( v10 )
      {
        stateArrowPoints = this->fields.stateArrowPoints;
        if ( stateArrowPoints )
        {
          if ( *(_QWORD *)&stateArrowPoints->max_length )
          {
            if ( !(_DWORD)v10 )
              goto LABEL_52;
            friendIcon = stateCodePoints->m_Items[0];
            if ( !friendIcon )
              goto LABEL_51;
            v12 = this->fields.codeObject;
            *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(friendIcon, 0LL);
            if ( !v12 )
              goto LABEL_51;
            UnityEngine_Transform__set_position(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
            v16 = 0LL;
            if ( isUp )
            {
              friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
              if ( !friendIcon )
                goto LABEL_51;
              friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                        (UnityEngine_Behaviour_o *)friendIcon,
                                                        0LL);
              if ( ((unsigned __int8)friendIcon & 1) != 0 )
              {
                v17 = this->fields.stateCodePoints;
                if ( !v17 )
                  goto LABEL_51;
                if ( v17->max_length <= 1 )
                  goto LABEL_52;
                friendIcon = v17->m_Items[1];
                if ( !friendIcon )
                  goto LABEL_51;
                v18 = this->fields.codeObject;
                *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(friendIcon, 0LL);
                if ( !v18 )
                  goto LABEL_51;
                UnityEngine_Transform__set_position(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
                v16 = 2LL;
              }
              else
              {
                friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
                if ( !friendIcon )
                  goto LABEL_51;
                friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                          (UnityEngine_Behaviour_o *)friendIcon,
                                                          0LL);
                v16 = ((unsigned __int8)friendIcon & 1) == 0;
              }
            }
            v22 = this->fields.stateArrowPoints;
            if ( !v22 )
              goto LABEL_51;
            if ( (unsigned int)v16 >= v22->max_length )
              goto LABEL_52;
            addObjectList = this->fields.addObjectList;
            if ( !addObjectList )
              goto LABEL_51;
            if ( addObjectList->max_length <= 1 )
              goto LABEL_52;
            v24 = v22->m_Items[v16];
            v25 = (UnityEngine_Object_o *)addObjectList->m_Items[1];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v26 = this->fields.addObjectList;
              if ( !v26 )
                goto LABEL_51;
              if ( v26->max_length <= 1 )
                goto LABEL_52;
              friendIcon = (UnityEngine_Transform_o *)v26->m_Items[1];
              if ( !friendIcon )
                goto LABEL_51;
              friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0LL);
              if ( !v24 )
                goto LABEL_51;
              v27 = friendIcon;
              *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_position(v24, 0LL);
              if ( !v27 )
                goto LABEL_51;
              UnityEngine_Transform__set_position(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
            }
            v31 = this->fields.addObjectList;
            if ( !v31 )
              goto LABEL_51;
            if ( !v31->max_length )
            {
LABEL_52:
              v38 = sub_B5D6C8(friendIcon);
              sub_B5D668(v38, 0LL);
            }
            v32 = (UnityEngine_Object_o *)v31->m_Items[0];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v33 = this->fields.addObjectList;
              if ( !v33 )
                goto LABEL_51;
              if ( v33->max_length )
              {
                friendIcon = (UnityEngine_Transform_o *)v33->m_Items[0];
                if ( friendIcon )
                {
                  friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0LL);
                  if ( v24 )
                  {
                    v34 = friendIcon;
                    *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_position(v24, 0LL);
                    if ( v34 )
                    {
                      UnityEngine_Transform__set_position(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
                      return;
                    }
                  }
                }
LABEL_51:
                sub_B5D69C(friendIcon, v8);
              }
              goto LABEL_52;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct BattleCommandData_o *data; // x8
  BattleBuffData_o *battleBuffData; // x0
  BattleBuffData_BuffData_array *AllConnectedCommandCardBuff; // x0
  BattleBuffData_BuffData_array *v35; // x20
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x21
  __int64 v40; // x24
  BattleBuffData_BuffData_o *v41; // x22
  System_String_o *masterDataBytes; // x22
  System_String_o *v43; // x22
  System_String_o *v44; // x23
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  System_Xml_Schema_XmlSchemaObject_o *v47; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct BattleCommandData_o *v51; // x8
  struct BattleCommandData_o *v52; // x8
  __int64 v53; // x0
  System_Xml_XmlQualifiedName_o *key; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E53C8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EffectMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42E53C8 = 1;
  }
  key = 0LL;
  path = 0LL;
  BattleCommandComponent__ClearCardEffect(this, method);
  data = this->fields.data;
  if ( data )
  {
    battleBuffData = data->fields.battleBuffData;
    if ( battleBuffData )
    {
      AllConnectedCommandCardBuff = BattleBuffData__GetAllConnectedCommandCardBuff(battleBuffData, 0LL);
      if ( AllConnectedCommandCardBuff )
      {
        v35 = AllConnectedCommandCardBuff;
        if ( *(_QWORD *)&AllConnectedCommandCardBuff->max_length )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_48;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EffectMaster___);
          max_length = v35->max_length;
          if ( max_length >= 1 )
          {
            v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            v40 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v40 >= max_length )
              {
                v53 = sub_B5D6C8(Instance);
                sub_B5D668(v53, 0LL);
              }
              v41 = v35->m_Items[v40];
              if ( !v41 )
                break;
              if ( v41->fields.cardEffectId >= 1 )
              {
                Instance = (DataManager_o *)BattleBuffData_BuffData__isEnableCommandCardBuff(
                                              v35->m_Items[v40],
                                              this->fields.data,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  goto LABEL_14;
                Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v41, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v51 = this->fields.data;
                  if ( !v51 )
                    break;
                  if ( v41->fields.userCommandCodeId == v51->fields.userCommandCodeId )
                    goto LABEL_14;
                }
                Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v41, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v52 = this->fields.data;
                  if ( !v52 )
                    break;
                  if ( v41->fields.commandAssistId == v52->fields.commandAssistId
                    && v41->fields.cardIndex == v52->fields.servantCardIdsIndex )
                  {
LABEL_14:
                    if ( !v39 )
                      break;
                    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  v39,
                                                  v41->fields.cardEffectId,
                                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                    if ( Instance )
                    {
                      masterDataBytes = (System_String_o *)Instance->fields.masterDataBytes;
                      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
                      }
                      BattleEffectUtility__GetBattleCommonEffectPathAndName(
                        masterDataBytes,
                        &path,
                        (System_String_o **)&key,
                        0LL);
                      Instance = (DataManager_o *)this->fields.cardEffectDict;
                      if ( !Instance )
                        break;
                      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
                                                    key,
                                                    (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        v44 = (System_String_o *)key;
                        v43 = path;
                        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                        }
                        Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                    v43,
                                                                                    v44,
                                                                                    0LL);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        Instance = (DataManager_o *)UnityEngine_Object__op_Equality(
                                                      Manager__loadBattleCommonEffect,
                                                      0LL,
                                                      0LL);
                        if ( ((unsigned __int8)Instance & 1) == 0 )
                        {
                          objectRoot = this->fields.objectRoot;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          Instance = (DataManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                        (UILabel_o *)Manager__loadBattleCommonEffect,
                                                        objectRoot,
                                                        (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
                          if ( !Instance )
                            break;
                          v47 = (System_Xml_Schema_XmlSchemaObject_o *)Instance;
                          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              (UnityEngine_GameObject_o *)Instance,
                                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
                          Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                        Component_srcLineSprite,
                                                        0LL,
                                                        0LL);
                          if ( ((unsigned __int8)Instance & 1) != 0 )
                          {
                            text = this->fields.text;
                            if ( !text )
                              break;
                            bg = this->fields.bg;
                            if ( !bg || !Component_srcLineSprite )
                              break;
                            CardEffectComponent__SetCardEffectDepth(
                              (CardEffectComponent_o *)Component_srcLineSprite,
                              text->fields.mDepth,
                              bg->fields.mDepth,
                              0LL);
                          }
                          Instance = (DataManager_o *)this->fields.cardEffectDict;
                          if ( !Instance )
                            break;
                          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
                            key,
                            v47,
                            (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                        }
                      }
                    }
                  }
                }
              }
              max_length = v35->max_length;
              if ( (int)++v40 >= max_length )
                return;
            }
LABEL_48:
            sub_B5D69C(Instance, v37);
          }
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateCommandCardTypeChange(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  void *data; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__223_0; // x21
  Il2CppObject *v45; // x22
  struct BattleCommandComponent___c_StaticFields *v46; // x0
  int32_t Index; // w0
  unsigned int v48; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UISprite_o *v51; // x21
  Il2CppObject *v52; // x0
  System_String_o *v53; // x22
  UILabel_o *v54; // x21
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v55; // x22
  System_String_o *v56; // x19
  BattleCommandComponent_CardBuffData_o *v57; // x8
  Il2CppObject *v58; // x0
  int32_t restTurn; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E53C2 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__223_0__, v26, v27, v28);
    sub_B5D5C4(&BattleCommandComponent___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_4674/*"DISPLAY_REMAINING_TURN"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_19563/*"icon_commandchange_{0}"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1/*""*/, v38, v39, v40);
    byte_42E53C2 = 1;
  }
  specialCardBuffList = this->fields.specialCardBuffList;
  data = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    data = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)data + 23);
  _9__223_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__223_0;
  if ( !_9__223_0 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__223_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__223_0,
      v45,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__223_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    v46 = BattleCommandComponent___c_TypeInfo->static_fields;
    v46->__9__223_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__223_0;
    sub_B5D560(&v46->__9__223_0);
  }
  if ( !specialCardBuffList )
    goto LABEL_38;
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
            (System_Predicate_T__o *)_9__223_0,
            (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( Index >= 0 )
  {
    v48 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_38;
        v51 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type((BattleCommandData_o *)data, method);
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &type);
        v53 = System_String__Format((System_String_o *)StringLiteral_19563/*"icon_commandchange_{0}"*/, v52, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( !AtlasManager__SetEventSprite(v51, v53, 0LL) )
        {
          data = this->fields.specialCardBuffIcon;
          if ( !data )
            goto LABEL_38;
          UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v54 = this->fields.specialCardBuffTurn;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        data = LocalizationManager__Get((System_String_o *)StringLiteral_4674/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v55 = this->fields.specialCardBuffList;
        if ( v55 )
        {
          v56 = (System_String_o *)data;
          if ( v55->fields._size <= v48 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v57 = v55->fields._items->m_Items[v48];
          if ( v57 )
          {
            restTurn = v57->fields.restTurn;
            v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &restTurn);
            data = System_String__Format(v56, v58, 0LL);
            if ( v54 )
            {
              UILabel__set_text(v54, (System_String_o *)data, 0LL);
              return;
            }
          }
        }
LABEL_38:
        sub_B5D69C(data, method);
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateFixedCommandCard(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  void *v36; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__207_0; // x21
  Il2CppObject *v39; // x22
  struct BattleCommandComponent___c_StaticFields *v40; // x0
  int32_t Index; // w0
  unsigned int v42; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UILabel_o *v45; // x21
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v46; // x22
  System_String_o *v47; // x19
  BattleCommandComponent_CardBuffData_o *v48; // x8
  Il2CppObject *v49; // x0
  int32_t restTurn; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E53B4 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__207_0__, v23, v24, v25);
    sub_B5D5C4(&BattleCommandComponent___c_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_4674/*"DISPLAY_REMAINING_TURN"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_19523/*"icon_cardfixation"*/, v32, v33, v34);
    byte_42E53B4 = 1;
  }
  specialCardBuffList = this->fields.specialCardBuffList;
  v36 = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    v36 = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)v36 + 23);
  _9__207_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__207_0;
  if ( !_9__207_0 )
  {
    if ( (*((_BYTE *)v36 + 307) & 4) != 0 && !*((_DWORD *)v36 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__207_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__207_0,
      v39,
      Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__207_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    v40 = BattleCommandComponent___c_TypeInfo->static_fields;
    v40->__9__207_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__207_0;
    sub_B5D560(&v40->__9__207_0);
  }
  if ( !specialCardBuffList )
    goto LABEL_33;
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
            (System_Predicate_T__o *)_9__207_0,
            (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( Index >= 0 )
  {
    v42 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        v36 = this->fields.specialCardBuffIcon;
        if ( v36 )
        {
          UISprite__set_atlas((UISprite_o *)v36, this->fields.commandAtlas, 0LL);
          v36 = this->fields.specialCardBuffIcon;
          if ( v36 )
          {
            UISprite__set_spriteName((UISprite_o *)v36, (System_String_o *)StringLiteral_19523/*"icon_cardfixation"*/, 0LL);
            v45 = this->fields.specialCardBuffTurn;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v36 = LocalizationManager__Get((System_String_o *)StringLiteral_4674/*"DISPLAY_REMAINING_TURN"*/, 0LL);
            v46 = this->fields.specialCardBuffList;
            if ( v46 )
            {
              v47 = (System_String_o *)v36;
              if ( v46->fields._size <= v42 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v48 = v46->fields._items->m_Items[v42];
              if ( v48 )
              {
                restTurn = v48->fields.restTurn;
                v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &restTurn);
                v36 = System_String__Format(v47, v49, 0LL);
                if ( v45 )
                {
                  UILabel__set_text(v45, (System_String_o *)v36, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_33:
        sub_B5D69C(v36, method);
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(
        BattleCommandComponent_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x8
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  System_Collections_IEnumerator_o *updated; // x0
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v17; // x8
  float v18; // s0
  float cardBuffAlphaFor; // s1
  float v20; // s2
  float v21; // s0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v22; // x9
  int32_t v23; // w8
  UnityEngine_Object_o *v24; // x20

  if ( (byte_42E53C4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__,
      (_DWORD)method,
      v3,
      v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E53C4 = 1;
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    specialCardBuffList = this->fields.specialCardBuffList;
    if ( !specialCardBuffList || specialCardBuffList->fields._size < 1 )
      goto LABEL_34;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 && this->fields.isCardBuffAlphaAnim )
    {
      if ( !this->fields.isChangedBuffIcon )
      {
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v11);
        UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
        BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(this, v16);
        this->fields.isChangedBuffIcon = 1;
      }
      v17 = this->fields.specialCardBuffList;
      if ( !v17 )
        goto LABEL_36;
      if ( v17->fields._size != 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( !gameObject )
          goto LABEL_36;
        v18 = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
                gameObject,
                gameObject->klass[1]._1.element_class);
        cardBuffAlphaFor = this->fields.cardBuffAlphaFor;
        v20 = this->fields.cardBuffAlphaAnimTime + deltaTime;
        v21 = v18 + (float)((float)(cardBuffAlphaFor - v18) * 0.5);
        this->fields.cardBuffAlphaAnimTime = v20;
        if ( v20 >= 3.0 )
        {
          cardBuffAlphaFor = 0.0;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 0LL;
        }
        if ( v21 <= 0.01 && cardBuffAlphaFor <= 0.0 )
        {
          v22 = this->fields.specialCardBuffList;
          v23 = this->fields.cardBuffListIndex + 1;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
          this->fields.cardBuffListIndex = v23;
          if ( !v22 )
            goto LABEL_36;
          if ( v22->fields._size <= v23 )
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
LABEL_36:
        sub_B5D69C(gameObject, v11);
      }
    }
    else
    {
LABEL_34:
      BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v12);
    }
  }
  else
  {
    v24 = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
      if ( !gameObject )
        goto LABEL_36;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_36;
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
      LODWORD(data) = v10 > 0 && data->fields.treasureDvc > 0;
      if ( v6 )
      {
        if ( (_DWORD)data )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BuffMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  UISprite_o *nowTreasureDeviceTypeImage; // x20
  System_String_o *v21; // x21
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  UISpriteData_o *Sprite; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E53BB & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, buffId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_19527/*"icon_cardtypechange"*/, v15, v16, v17);
    byte_42E53BB = 1;
  }
  name = 0LL;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_23;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_WarQuestSelectionMaster,
          &name,
          buffId,
          (System_String_o *)StringLiteral_19527/*"icon_cardtypechange"*/,
          0LL) )
    goto LABEL_23;
  nowTreasureDeviceTypeImage = this->fields.nowTreasureDeviceTypeImage;
  v21 = name;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventSprite(nowTreasureDeviceTypeImage, v21, 0LL) )
    goto LABEL_22;
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(defaultTdTypeImageAtlas, 0LL, 0LL) )
  {
LABEL_23:
    LOBYTE(Sprite) = 0;
    return (char)Sprite;
  }
  Master_WarQuestSelectionMaster = (BuffMaster_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)Master_WarQuestSelectionMaster, name, 0LL);
  if ( !Sprite )
    return (char)Sprite;
  Master_WarQuestSelectionMaster = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !Master_WarQuestSelectionMaster
    || (UISprite__set_atlas((UISprite_o *)Master_WarQuestSelectionMaster, this->fields.defaultTdTypeImageAtlas, 0LL),
        (Master_WarQuestSelectionMaster = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(Master_WarQuestSelectionMaster, v19);
  }
  UISprite__set_spriteName((UISprite_o *)Master_WarQuestSelectionMaster, name, 0LL);
LABEL_22:
  LOBYTE(Sprite) = 1;
  return (char)Sprite;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__WaitForErrorViewFinished(
        BattleCommandComponent_o *this,
        float waitSeconds,
        System_String_o *busyVoiceSe,
        const MethodInfo *method)
{
  __int64 v4; // x3
  BattleCommandComponent__WaitForErrorViewFinished_d__239_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_42E53CE & 1) == 0 )
  {
    sub_B5D5C4(
      &BattleCommandComponent__WaitForErrorViewFinished_d__239_TypeInfo,
      (_DWORD)busyVoiceSe,
      (_DWORD)method,
      v4);
    byte_42E53CE = 1;
  }
  v8 = (BattleCommandComponent__WaitForErrorViewFinished_d__239_o *)sub_B5D694(BattleCommandComponent__WaitForErrorViewFinished_d__239_TypeInfo);
  BattleCommandComponent__WaitForErrorViewFinished_d__239___ctor(v8, 0, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  v8->fields.__4__this = this;
  sub_B5D560(&v8->fields.__4__this);
  v8->fields.waitSeconds = waitSeconds;
  v8->fields.busyVoiceSe = busyVoiceSe;
  sub_B5D560(&v8->fields.busyVoiceSe);
  return (System_Collections_IEnumerator_o *)v8;
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
    sub_B5D69C(this, buff);
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_1(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, buff);
  }
  return 0;
}


void __fastcall BattleCommandComponent__addCriticalBuff(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleCommandComponent___c__DisplayClass158_0_o *v18; // x21
  SeManager_o *Instance; // x0
  __int64 v20; // x1
  System_Action_o *v21; // x20
  BattleCommandComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  System_Collections_IEnumerator_o *v24; // x0
  System_String_o *CommonSeNameLocal; // x20
  System_String_o *CueSheet; // x21
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v28; // x0
  const MethodInfo *v29; // x1
  System_Collections_IEnumerator_o *v30; // x1

  if ( (byte_42E539A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_BattleCommandComponent___c__DisplayClass158_0__addCriticalBuff_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleCommandComponent___c__DisplayClass158_0_TypeInfo, v15, v16, v17);
    byte_42E539A = 1;
  }
  v18 = (BattleCommandComponent___c__DisplayClass158_0_o *)sub_B5D694(BattleCommandComponent___c__DisplayClass158_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass158_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_8;
  v18->fields.__4__this = this;
  sub_B5D560(&v18->fields);
  v18->fields.obj = obj;
  sub_B5D560(&v18->fields.obj);
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v18,
    Method_BattleCommandComponent___c__DisplayClass158_0__addCriticalBuff_b__0__,
    0LL);
  v24 = BattleCommandComponent__delayFrame(v22, v21, v23);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
  Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal(Instance, 7, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(Instance, v20);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime(Instance, CueSheet, CommonSeNameLocal, 0LL);
  v30 = BattleCommandComponent__PlayStarSe(v28, DefaultPreDelayTime / 1000.0, v29);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v30, 0LL);
}


void __fastcall BattleCommandComponent__addFirstAura(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *effectobj; // x19
  UnityEngine_GameObject_o *Object; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x0

  BattleCommandComponent__stopFirstAura(this, (const MethodInfo *)effect);
  effectobj = this->fields.effectobj;
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, effect, this->fields.objectRoot, 0LL, 0LL);
  if ( !effectobj )
    sub_B5D69C(Object, v7);
  v8 = Object;
  if ( Object )
  {
    Object = (UnityEngine_GameObject_o *)sub_B5D684(Object, effectobj->obj.klass->_1.element_class);
    if ( !Object )
    {
      v10 = sub_B5D6BC();
      sub_B5D668(v10, 0LL);
    }
  }
  if ( effectobj->max_length <= 4 )
  {
    v9 = sub_B5D6C8(Object);
    sub_B5D668(v9, 0LL);
  }
  effectobj->m_Items[4] = v8;
  sub_B5D560(&effectobj->m_Items[4]);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__addObject(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t type,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v14; // x22
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Object_o *v16; // x22
  System_String_o *v17; // x0
  UnityEngine_Object_o *v18; // x21
  UnityEngine_Transform_o *transform; // x22
  int v20; // s0
  BattleCommandComponent_o *v24; // x22
  System_String_o *v25; // x23
  struct UnityEngine_GameObject_array *v26; // x22
  Il2CppClass **v27; // x0
  struct UnityEngine_GameObject_array *v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  v31 = type;
  if ( (byte_42E5389 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, (_DWORD)name, type, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    this = (BattleCommandComponent_o *)sub_B5D5C4(&StringLiteral_18452/*"effect/"*/, v10, v11, v12);
    byte_42E5389 = 1;
  }
  addObjectList = v6->fields.addObjectList;
  if ( !addObjectList )
    goto LABEL_25;
  if ( addObjectList->max_length <= type )
    goto LABEL_26;
  v14 = (UnityEngine_Object_o *)addObjectList->m_Items[type];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v6->fields.addObjectList;
    if ( !v15 )
      goto LABEL_25;
    if ( v15->max_length <= type )
      goto LABEL_26;
    v16 = (UnityEngine_Object_o *)v15->m_Items[type];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v16, 0LL);
  }
  v17 = System_String__Concat_44577788((System_String_o *)StringLiteral_18452/*"effect/"*/, name, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_21082944(
                                       (BaseMonoBehaviour_o *)v6,
                                       v17,
                                       v6->fields.objectRoot,
                                       0LL,
                                       0LL);
  if ( !this )
    goto LABEL_25;
  v18 = (UnityEngine_Object_o *)this;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v20 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v20, 0LL),
        (this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, &v31)) == 0LL)
    || (v24 = this,
        v25 = (System_String_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, void *))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass[1]._1.image),
        v31 = *(_DWORD *)j_il2cpp_object_unbox_0(v24),
        UnityEngine_Object__set_name(v18, v25, 0LL),
        (v26 = v6->fields.addObjectList) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(this, name);
  }
  this = (BattleCommandComponent_o *)sub_B5D684(v18, v26->obj.klass->_1.element_class);
  if ( !this )
  {
    v30 = sub_B5D6BC();
    sub_B5D668(v30, 0LL);
  }
  if ( v26->max_length <= type )
    goto LABEL_26;
  v27 = &v26->obj.klass + type;
  v27[4] = (Il2CppClass *)v18;
  sub_B5D560(v27 + 4);
  v28 = v6->fields.addObjectList;
  if ( !v28 )
    goto LABEL_25;
  if ( v28->max_length <= type )
  {
LABEL_26:
    v29 = sub_B5D6C8(this);
    sub_B5D668(v29, 0LL);
  }
  this = (BattleCommandComponent_o *)v28->m_Items[type];
  if ( !this )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__attachEffect(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  UnityEngine_GameObject_o *Object_21082944; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *transform; // x22
  int v12; // s0
  UnityEngine_Transform_o *v15; // x22
  int v16; // s0
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v20; // x0
  Il2CppClass **v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_42E539E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18452/*"effect/"*/, (_DWORD)name, index, method);
    byte_42E539E = 1;
  }
  v7 = System_String__Concat_44577788((System_String_o *)StringLiteral_18452/*"effect/"*/, name, 0LL);
  Object_21082944 = BaseMonoBehaviour__createObject_21082944(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0LL,
                      0LL);
  if ( !Object_21082944 )
    goto LABEL_12;
  v10 = Object_21082944;
  transform = UnityEngine_GameObject__get_transform(Object_21082944, 0LL);
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15)
    || (UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(Object_21082944, v9);
  }
  if ( (signed int)effectobj->max_length > index )
  {
    v20 = sub_B5D684(v10, effectobj->obj.klass->_1.element_class);
    if ( !v20 )
    {
      v22 = sub_B5D6BC();
      sub_B5D668(v22, 0LL);
    }
    if ( effectobj->max_length <= index )
    {
      v23 = sub_B5D6C8(v20);
      sub_B5D668(v23, 0LL);
    }
    v21 = &effectobj->obj.klass + index;
    v21[4] = (Il2CppClass *)v10;
    sub_B5D560(v21 + 4);
  }
}


bool __fastcall BattleCommandComponent__checkCriticalPointValid(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_B5D69C(0LL, method);
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
  struct UnityEngine_GameObject_o **p_countUpFinishEffect; // x20
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

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
  v22 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
  z = v22.fields.z;
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
  v23.fields.x = v11;
  v23.fields.y = v12;
  v23.fields.z = v13;
  SpawnerObj = BattleCommandComponent__GetSpawnerObj(this, effect_fullcricomplete, v17, v23, v18);
  p_countUpFinishEffect = &this->fields.countUpFinishEffect;
  this->fields.countUpFinishEffect = SpawnerObj;
  sub_B5D560(&this->fields.countUpFinishEffect);
  transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (UnityEngine_Transform_o *)*p_countUpFinishEffect) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  this->fields.isCountUp = 0;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E53C7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E53C7 = 1;
  }
  v5 = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)sub_B5D694(BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_TypeInfo);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.__4__this = this;
  sub_B5D560(&v5->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__delayFrame(
        BattleCommandComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleCommandComponent__delayFrame_d__160_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E539C & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent__delayFrame_d__160_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    byte_42E539C = 1;
  }
  v5 = (BattleCommandComponent__delayFrame_d__160_o *)sub_B5D694(BattleCommandComponent__delayFrame_d__160_TypeInfo);
  BattleCommandComponent__delayFrame_d__160___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.action = action;
  sub_B5D560(&v5->fields.action);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleCommandComponent__endFashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Object_o *v8; // x19
  __int64 v9; // x0

  v4 = this;
  if ( (byte_42E53AE & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E53AE = 1;
  }
  effectobj = v4->fields.effectobj;
  if ( !effectobj )
    goto LABEL_16;
  if ( !effectobj->max_length )
    goto LABEL_17;
  v6 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.effectobj;
    if ( v7 )
    {
      if ( v7->max_length )
      {
        v8 = (UnityEngine_Object_o *)v7->m_Items[0];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v8, 0LL);
        return;
      }
LABEL_17:
      v9 = sub_B5D6C8(this);
      sub_B5D668(v9, 0LL);
    }
LABEL_16:
    sub_B5D69C(this, method);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__fadeoutEffect(
        BattleCommandComponent_o *this,
        bool isTresure,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleCommandComponent__fadeoutEffect_d__180_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42E53A0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent__fadeoutEffect_d__180_TypeInfo, isTresure, (_DWORD)method, v3);
    byte_42E53A0 = 1;
  }
  v6 = (BattleCommandComponent__fadeoutEffect_d__180_o *)sub_B5D694(BattleCommandComponent__fadeoutEffect_d__180_TypeInfo);
  BattleCommandComponent__fadeoutEffect_d__180___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.__4__this = this;
  sub_B5D560(&v6->fields.__4__this);
  v6->fields.isTresure = isTresure;
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__flashComboSvt(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct System_Boolean_array *sameflg; // x8
  __int64 v5; // x0

  if ( index >= 3 )
    goto LABEL_6;
  if ( !combo || (sameflg = combo->fields.sameflg) == 0LL )
    sub_B5D69C(this, index);
  if ( sameflg->max_length <= index )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
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
    sub_B5D69C(this, index);
  if ( combo->fields.flash )
    BattleCommandComponent__flashTypeCard(this, *(const MethodInfo **)&index);
}


void __fastcall BattleCommandComponent__flashServant(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  UnityEngine_Object_o *facetex; // x20
  __int64 v42; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *v45; // x21
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Component_o *v47; // x21
  struct UnityEngine_GameObject_array *v48; // x8
  UIWidget_o *v49; // x20
  UnityEngine_Shader_o *v50; // x21
  UnityEngine_Material_o *v51; // x22
  __int64 v52; // x0
  UnityEngine_Material_o *v53; // x21
  float v54; // s4
  float v55; // s5
  float v56; // s6
  float v57; // s7
  struct UnityEngine_GameObject_array *v58; // x8
  UnityEngine_GameObject_o *v59; // x20
  System_Object_array *v60; // x21
  __int64 v61; // x1
  Il2CppObject *v62; // x22
  __int64 v63; // x1
  Il2CppObject *v64; // x22
  __int64 v65; // x1
  Il2CppObject *v66; // x22
  __int64 v67; // x1
  __int64 v68; // x1
  System_Collections_Hashtable_o *v69; // x0
  float v70; // s4
  float v71; // s5
  float v72; // s6
  float v73; // s7
  struct UnityEngine_GameObject_array *v74; // x8
  UnityEngine_GameObject_o *v75; // x19
  __int64 v76; // x0
  __int64 v77; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_42E53AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&object___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&float_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18576/*"endFashSvt"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_22193/*"scale"*/, v35, v36, v37);
    sub_B5D5C4(&iTween_TypeInfo, v38, v39, v40);
    byte_42E53AB = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(facetex, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_66;
    effectobj = this->fields.effectobj;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !this->fields.nomalwidget )
      goto LABEL_66;
    v45 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.nomalwidget,
                                              0LL);
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_66;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                              (BaseMonoBehaviour_o *)this,
                                              v45,
                                              parent,
                                              0LL,
                                              0LL);
    if ( !effectobj )
      goto LABEL_66;
    v47 = gameObject;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)sub_B5D684(gameObject, effectobj->obj.klass->_1.element_class)) != 0LL )
    {
      if ( effectobj->max_length <= 1 )
        goto LABEL_67;
      effectobj->m_Items[1] = (UnityEngine_GameObject_o *)v47;
      sub_B5D560(&effectobj->m_Items[1]);
      v48 = this->fields.effectobj;
      if ( !v48 )
        goto LABEL_66;
      if ( v48->max_length <= 1 )
        goto LABEL_67;
      gameObject = (UnityEngine_Component_o *)v48->m_Items[1];
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !gameObject )
        goto LABEL_66;
      v49 = (UIWidget_o *)gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( !gameObject )
        goto LABEL_66;
      v79.fields.z = -5.0;
      v79.fields.x = 0.0;
      v79.fields.y = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v79, 0LL);
      this->fields.newMatriarl = 1;
      v50 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v49->klass->vtable._28_get_shader.method)(
                                      v49,
                                      v49->klass->vtable._29_set_shader.methodPtr);
      v51 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v51, v50, 0LL);
      ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v49->klass->vtable._25_set_material.method)(
        v49,
        v51,
        v49->klass->vtable._26_get_mainTexture.methodPtr);
      v52 = ((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v49->klass->vtable._24_get_material.method)(
              v49,
              v49->klass->vtable._25_set_material.methodPtr);
      v80.fields.r = 1.0;
      v53 = (UnityEngine_Material_o *)v52;
      v80.fields.a = 0.0;
      v80.fields.g = 1.0;
      v80.fields.b = 1.0;
      methoda.parameters = 0LL;
      methoda.rgctx_data = 0LL;
      UnityEngine_Color___ctor(v80, v54, v55, v56, v57, (const MethodInfo *)&methoda.parameters);
      if ( !v53 )
        goto LABEL_66;
      UnityEngine_Material__SetColor(
        v53,
        (System_String_o *)StringLiteral_16107/*"_AddColor"*/,
        *(UnityEngine_Color_o *)&methoda.parameters,
        0LL);
      UIWidget__set_depth(v49, this->fields.basedepth + 400, 0LL);
      v58 = this->fields.effectobj;
      if ( !v58 )
        goto LABEL_66;
      if ( v58->max_length <= 1 )
        goto LABEL_67;
      v59 = v58->m_Items[1];
      gameObject = (UnityEngine_Component_o *)sub_B5D5DC(object___TypeInfo, 8LL);
      if ( !gameObject )
        goto LABEL_66;
      v60 = (System_Object_array *)gameObject;
      gameObject = (UnityEngine_Component_o *)StringLiteral_22193/*"scale"*/;
      if ( StringLiteral_22193/*"scale"*/ )
      {
        gameObject = (UnityEngine_Component_o *)sub_B5D684(StringLiteral_22193/*"scale"*/, v60->obj.klass->_1.element_class);
        if ( !gameObject )
          goto LABEL_68;
        v61 = StringLiteral_22193/*"scale"*/;
      }
      else
      {
        v61 = 0LL;
      }
      if ( !v60->max_length )
        goto LABEL_67;
      v60->m_Items[0] = (Il2CppObject *)v61;
      sub_B5D560(v60->m_Items);
      methoda.klass = (Il2CppClass *)vdup_n_s32(0x3FE66666u).n64_u64[0];
      LODWORD(methoda.return_type) = 1065353216;
      gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &methoda.klass);
      v62 = (Il2CppObject *)gameObject;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)sub_B5D684(gameObject, v60->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v60->max_length <= 1 )
          goto LABEL_67;
        v60->m_Items[1] = v62;
        sub_B5D560(&v60->m_Items[1]);
        gameObject = (UnityEngine_Component_o *)StringLiteral_22982/*"time"*/;
        if ( StringLiteral_22982/*"time"*/ )
        {
          gameObject = (UnityEngine_Component_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v60->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_68;
          v63 = StringLiteral_22982/*"time"*/;
        }
        else
        {
          v63 = 0LL;
        }
        if ( v60->max_length <= 2 )
          goto LABEL_67;
        v60->m_Items[2] = (Il2CppObject *)v63;
        sub_B5D560(&v60->m_Items[2]);
        HIDWORD(methoda.name) = 1065353216;
        gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&methoda.name + 4);
        v64 = (Il2CppObject *)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)sub_B5D684(gameObject, v60->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v60->max_length <= 3 )
            goto LABEL_67;
          v60->m_Items[3] = v64;
          sub_B5D560(&v60->m_Items[3]);
          gameObject = (UnityEngine_Component_o *)StringLiteral_21544/*"oncompletetarget"*/;
          if ( StringLiteral_21544/*"oncompletetarget"*/ )
          {
            gameObject = (UnityEngine_Component_o *)sub_B5D684(StringLiteral_21544/*"oncompletetarget"*/, v60->obj.klass->_1.element_class);
            if ( !gameObject )
              goto LABEL_68;
            v65 = StringLiteral_21544/*"oncompletetarget"*/;
          }
          else
          {
            v65 = 0LL;
          }
          if ( v60->max_length <= 4 )
            goto LABEL_67;
          v60->m_Items[4] = (Il2CppObject *)v65;
          sub_B5D560(&v60->m_Items[4]);
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          v66 = (Il2CppObject *)gameObject;
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)sub_B5D684(gameObject, v60->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v60->max_length <= 5 )
              goto LABEL_67;
            v60->m_Items[5] = v66;
            sub_B5D560(&v60->m_Items[5]);
            gameObject = (UnityEngine_Component_o *)StringLiteral_21542/*"oncomplete"*/;
            if ( StringLiteral_21542/*"oncomplete"*/ )
            {
              gameObject = (UnityEngine_Component_o *)sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v60->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_68;
              v67 = StringLiteral_21542/*"oncomplete"*/;
            }
            else
            {
              v67 = 0LL;
            }
            if ( v60->max_length <= 6 )
              goto LABEL_67;
            v60->m_Items[6] = (Il2CppObject *)v67;
            sub_B5D560(&v60->m_Items[6]);
            gameObject = (UnityEngine_Component_o *)StringLiteral_18576/*"endFashSvt"*/;
            if ( !StringLiteral_18576/*"endFashSvt"*/ )
            {
              v68 = 0LL;
              goto LABEL_58;
            }
            gameObject = (UnityEngine_Component_o *)sub_B5D684(StringLiteral_18576/*"endFashSvt"*/, v60->obj.klass->_1.element_class);
            if ( gameObject )
            {
              v68 = StringLiteral_18576/*"endFashSvt"*/;
LABEL_58:
              if ( v60->max_length <= 7 )
                goto LABEL_67;
              v60->m_Items[7] = (Il2CppObject *)v68;
              sub_B5D560(&v60->m_Items[7]);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v69 = iTween__Hash(v60, 0LL);
              iTween__ScaleTo_43188764(v59, v69, 0LL);
              v74 = this->fields.effectobj;
              if ( v74 )
              {
                if ( v74->max_length > 1 )
                {
                  v75 = v74->m_Items[1];
                  v81.fields.r = 0.0;
                  v81.fields.g = 0.0;
                  v81.fields.b = 0.0;
                  v81.fields.a = 0.0;
                  methoda.methodPointer = 0LL;
                  methoda.invoker_method = 0LL;
                  UnityEngine_Color___ctor(v81, v70, v71, v72, v73, &methoda);
                  *(_QWORD *)&v82.fields.r = methoda.methodPointer;
                  *(_QWORD *)&v82.fields.b = methoda.invoker_method;
                  TweenColor__Begin(v75, 1.0, v82, 0LL);
                  return;
                }
LABEL_67:
                v76 = sub_B5D6C8(gameObject);
                sub_B5D668(v76, 0LL);
              }
LABEL_66:
              sub_B5D69C(gameObject, v42);
            }
          }
        }
      }
    }
LABEL_68:
    v77 = sub_B5D6BC();
    sub_B5D668(v77, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall BattleCommandComponent__flashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v36; // x20
  struct UnityEngine_GameObject_array *v37; // x8
  UnityEngine_Object_o *v38; // x20
  struct UnityEngine_GameObject_array *v39; // x20
  UnityEngine_GameObject_o *v40; // x21
  UnityEngine_Transform_o *v41; // x22
  UnityEngine_Transform_o *transform; // x0
  BattleCommandComponent_o *v43; // x21
  struct UnityEngine_GameObject_array *v44; // x8
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  float v46; // s4
  float v47; // s5
  float v48; // s6
  float v49; // s7
  struct UnityEngine_GameObject_array *v50; // x8
  UnityEngine_GameObject_o *v51; // x20
  struct UnityEngine_GameObject_array *v52; // x8
  UnityEngine_GameObject_o *v53; // x20
  BattleCommandComponent_o *v54; // x21
  __int64 v55; // x1
  BattleCommandComponent_o *v56; // x22
  __int64 v57; // x1
  BattleCommandComponent_o *v58; // x22
  __int64 v59; // x1
  BattleCommandComponent_o *v60; // x19
  __int64 v61; // x1
  __int64 v62; // x1
  System_Collections_Hashtable_o *v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v4 = this;
  if ( (byte_42E53AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&object___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&float_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18577/*"endFashTypeCard"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_22193/*"scale"*/, v29, v30, v31);
    this = (BattleCommandComponent_o *)sub_B5D5C4(&iTween_TypeInfo, v32, v33, v34);
    byte_42E53AD = 1;
  }
  effectobj = v4->fields.effectobj;
  if ( !effectobj )
    goto LABEL_77;
  if ( !effectobj->max_length )
    goto LABEL_78;
  v36 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v37 = v4->fields.effectobj;
    if ( !v37 )
      goto LABEL_77;
    if ( !v37->max_length )
      goto LABEL_78;
    v38 = (UnityEngine_Object_o *)v37->m_Items[0];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v38, 0LL);
  }
  this = (BattleCommandComponent_o *)v4->fields.icon;
  if ( !this )
    goto LABEL_77;
  v39 = v4->fields.effectobj;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.nomalwidget )
    goto LABEL_77;
  v40 = (UnityEngine_GameObject_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v4->fields.nomalwidget,
                                       0LL);
  if ( !this )
    goto LABEL_77;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_77;
  this = (BattleCommandComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !v4->fields.icon )
    goto LABEL_77;
  v41 = (UnityEngine_Transform_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v4->fields.icon,
                                       0LL);
  if ( !this )
    goto LABEL_77;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)v4,
                                       v40,
                                       v41,
                                       transform,
                                       0LL);
  if ( !v39 )
    goto LABEL_77;
  v43 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(this, v39->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( !v39->max_length )
    goto LABEL_78;
  v39->m_Items[0] = (UnityEngine_GameObject_o *)v43;
  sub_B5D560(v39->m_Items);
  v44 = v4->fields.effectobj;
  if ( !v44 )
    goto LABEL_77;
  if ( !v44->max_length )
    goto LABEL_78;
  this = (BattleCommandComponent_o *)v44->m_Items[0];
  if ( !this )
    goto LABEL_77;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                       ComponentInChildren_Dropdown_DropdownItem,
                                       0LL,
                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_77;
    UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, v4->fields.basedepth + 400, 0LL);
    v50 = v4->fields.effectobj;
    if ( !v50 )
      goto LABEL_77;
    if ( !v50->max_length )
      goto LABEL_78;
    v51 = v50->m_Items[0];
    v67.fields.r = 0.0;
    v67.fields.g = 0.0;
    v67.fields.b = 0.0;
    v67.fields.a = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Color___ctor(v67, v46, v47, v48, v49, &var40);
    *(_QWORD *)&v68.fields.r = var40.methodPointer;
    *(_QWORD *)&v68.fields.b = var40.invoker_method;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v51, 1.0, v68, 0LL);
  }
  v52 = v4->fields.effectobj;
  if ( !v52 )
    goto LABEL_77;
  if ( !v52->max_length )
    goto LABEL_78;
  v53 = v52->m_Items[0];
  this = (BattleCommandComponent_o *)sub_B5D5DC(object___TypeInfo, 8LL);
  if ( !this )
LABEL_77:
    sub_B5D69C(this, method);
  v54 = this;
  this = (BattleCommandComponent_o *)StringLiteral_22193/*"scale"*/;
  if ( StringLiteral_22193/*"scale"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(StringLiteral_22193/*"scale"*/, v54->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v55 = StringLiteral_22193/*"scale"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( !LODWORD(v54->fields.objectRoot) )
    goto LABEL_78;
  v54->fields.bg = (struct UISprite_o *)v55;
  sub_B5D560(&v54->fields.bg);
  var40.methodPointer = (Il2CppMethodPointer)0x4000000040000000LL;
  LODWORD(var40.invoker_method) = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &var40);
  v56 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(this, v54->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( LODWORD(v54->fields.objectRoot) <= 1 )
    goto LABEL_78;
  v54->fields.icon = (struct UISprite_o *)v56;
  sub_B5D560(&v54->fields.icon);
  this = (BattleCommandComponent_o *)StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v54->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v57 = StringLiteral_22982/*"time"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( LODWORD(v54->fields.objectRoot) <= 2 )
    goto LABEL_78;
  v54->fields.text = (struct UISprite_o *)v57;
  sub_B5D560(&v54->fields.text);
  HIDWORD(var40.klass) = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&var40.klass + 4);
  v58 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(this, v54->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( LODWORD(v54->fields.objectRoot) <= 3 )
    goto LABEL_78;
  v54->fields.facetex = (struct UITexture_o *)v58;
  sub_B5D560(&v54->fields.facetex);
  this = (BattleCommandComponent_o *)StringLiteral_21544/*"oncompletetarget"*/;
  if ( StringLiteral_21544/*"oncompletetarget"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(StringLiteral_21544/*"oncompletetarget"*/, v54->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v59 = StringLiteral_21544/*"oncompletetarget"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( LODWORD(v54->fields.objectRoot) <= 4 )
    goto LABEL_78;
  v54->fields.nobletex = (struct UITexture_o *)v59;
  sub_B5D560(&v54->fields.nobletex);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  v60 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(this, v54->klass->_1.element_class);
    if ( !this )
    {
LABEL_79:
      v65 = sub_B5D6BC();
      sub_B5D668(v65, 0LL);
    }
  }
  if ( LODWORD(v54->fields.objectRoot) <= 5 )
    goto LABEL_78;
  v54->fields.friendIcon = (struct UISprite_o *)v60;
  sub_B5D560(&v54->fields.friendIcon);
  this = (BattleCommandComponent_o *)StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v54->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v61 = StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( LODWORD(v54->fields.objectRoot) <= 6 )
    goto LABEL_78;
  v54->fields.sealedSprite = (struct UISprite_o *)v61;
  sub_B5D560(&v54->fields.sealedSprite);
  this = (BattleCommandComponent_o *)StringLiteral_18577/*"endFashTypeCard"*/;
  if ( StringLiteral_18577/*"endFashTypeCard"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(StringLiteral_18577/*"endFashTypeCard"*/, v54->klass->_1.element_class);
    if ( this )
    {
      v62 = StringLiteral_18577/*"endFashTypeCard"*/;
      goto LABEL_72;
    }
    goto LABEL_79;
  }
  v62 = 0LL;
LABEL_72:
  if ( LODWORD(v54->fields.objectRoot) <= 7 )
  {
LABEL_78:
    v64 = sub_B5D6C8(this);
    sub_B5D668(v64, 0LL);
  }
  v54->fields.unusableNpSprite = (struct UISprite_o *)v62;
  sub_B5D560(&v54->fields.unusableNpSprite);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v63 = iTween__Hash((System_Object_array *)v54, 0LL);
  iTween__ScaleTo_43188764(v53, v63, 0LL);
}


System_String_o *__fastcall BattleCommandComponent__getCardTypeSealSpriteName(
        BattleCommandComponent_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleCommandComponent_c *v8; // x0
  System_String_o **p_SEALED_CARDTYPE_ICON_QUICK; // x8
  BattleCommandComponent_c *v10; // x0
  BattleCommandComponent_c *v11; // x0

  if ( (byte_42E538D & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent_TypeInfo, commandType, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E538D = 1;
  }
  switch ( commandType )
  {
    case 3:
      v10 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v10 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v10->static_fields->SEALED_CARDTYPE_ICON_QUICK;
      break;
    case 2:
      v11 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v11 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v11->static_fields->SEALED_CARDTYPE_ICON_BUSTER;
      break;
    case 1:
      v8 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v8 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v8->static_fields->SEALED_CARDTYPE_ICON_ARTS;
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
    sub_B5D69C(0LL, method);
  return BattleCommandData__get_type(data, method);
}


int32_t __fastcall BattleCommandComponent__getCriticalCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8
  int32_t result; // w0

  data = this->fields.data;
  if ( !data )
    return 0;
  result = this->fields.boostedCriticalRate + data->fields.starcount / 10;
  if ( result >= 1 )
  {
    if ( result < 10 )
      return 1;
    else
      return result / 0xAu;
  }
  return result;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *powerUpCardIcon; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct UISprite_o *v8; // x8

  if ( (byte_42E5383 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5383 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL);
  if ( !v6 )
    return -1;
  v8 = this->fields.powerUpCardIcon;
  if ( !v8 )
    sub_B5D69C(v6, v7);
  return v8->fields.mDepth;
}


int32_t __fastcall BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(this, method);
  return data->fields.svtId;
}


int32_t __fastcall BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(this, method);
  return data->fields.svtlimit;
}


int32_t __fastcall BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(this, method);
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *__fastcall BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandSealStatus_o *result; // x0
  BattleCommandSealStatus_o **p_sealStatus; // x19
  BattleCommandSealStatus_o *sealStatus; // t1
  BattleCommandSealStatus_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_42E537D & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandSealStatus_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E537D = 1;
  }
  sealStatus = this->fields.sealStatus;
  p_sealStatus = &this->fields.sealStatus;
  result = sealStatus;
  if ( !sealStatus )
  {
    v8 = (BattleCommandSealStatus_o *)sub_B5D694(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v8, v9);
    *p_sealStatus = v8;
    sub_B5D560(p_sealStatus);
    return *p_sealStatus;
  }
  return result;
}


bool __fastcall BattleCommandComponent__get_isKindOfDontAction(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_B5D69C(0LL, v3);
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, v3);
}


bool __fastcall BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_B5D69C(0LL, v3);
  return BattleCommandSealStatus__get_HasKindOfSealed(SealStatus, v3);
}


BattleCommandData_o *__fastcall BattleCommandComponent__getcommandData(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.data;
}


void __fastcall BattleCommandComponent__hideOutCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UIWidget_o *nomalwidget; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct UnityEngine_GameObject_array *addObjectList; // x8
  __int64 v9; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x23
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_GameObject_array *v13; // x8
  __int64 v14; // x0

  if ( (byte_42E53A1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E53A1 = 1;
  }
  nomalwidget = this->fields.nomalwidget;
  if ( !nomalwidget
    || (((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
          nomalwidget,
          nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          0.0),
        BattleCommandComponent__DestroyEffectObject1(this, v6),
        (addObjectList = this->fields.addObjectList) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(nomalwidget, method);
  }
  v9 = 4LL;
  while ( 1 )
  {
    max_length = addObjectList->max_length;
    v11 = v9 - 4;
    if ( v9 - 4 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_19;
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&addObjectList->obj.klass + v9);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    nomalwidget = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      v13 = this->fields.addObjectList;
      if ( !v13 )
        goto LABEL_17;
      if ( v11 >= v13->max_length )
      {
LABEL_19:
        v14 = sub_B5D6C8(nomalwidget);
        sub_B5D668(v14, 0LL);
      }
      nomalwidget = (struct UIWidget_o *)*((_QWORD *)&v13->obj.klass + v9);
      if ( !nomalwidget )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nomalwidget, 0, 0LL);
    }
    addObjectList = this->fields.addObjectList;
    ++v9;
    if ( !addObjectList )
      goto LABEL_17;
  }
  BattleCommandComponent__CardEffectSetActive(this, 0, v7);
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
    sub_B5D69C(this, method);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


void __fastcall BattleCommandComponent__playNpAttackEffect(
        BattleCommandComponent_o *this,
        float ftime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  System_Object_array *v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x22
  __int64 v32; // x1
  Il2CppObject *v33; // x22
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  __int64 v36; // x1
  Il2CppObject *v37; // x22
  System_Collections_Hashtable_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x20
  System_Object_array *v40; // x21
  __int64 v41; // x1
  Il2CppObject *v42; // x22
  __int64 v43; // x1
  Il2CppObject *v44; // x22
  System_Collections_Hashtable_o *v45; // x0
  const MethodInfo *v46; // x2
  System_Collections_IEnumerator_o *v47; // x0
  __int64 v48; // x0
  __int64 v49; // x0
  float v50; // [xsp+0h] [xbp-60h] BYREF
  int v51; // [xsp+4h] [xbp-5Ch] BYREF
  float v52; // [xsp+8h] [xbp-58h] BYREF
  int v53; // [xsp+Ch] [xbp-54h] BYREF
  int v54; // [xsp+18h] [xbp-48h] BYREF
  int v55; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42E539F & 1) == 0 )
  {
    sub_B5D5C4(&object___TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&float_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_23763/*"z"*/, v19, v20, v21);
    sub_B5D5C4(&iTween_TypeInfo, v22, v23, v24);
    byte_42E539F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v26 = sub_B5D5DC(object___TypeInfo, 8LL);
  if ( !v26 )
    goto LABEL_59;
  v28 = (System_Object_array *)v26;
  v29 = StringLiteral_23627/*"x"*/;
  if ( StringLiteral_23627/*"x"*/ )
  {
    v29 = sub_B5D684(StringLiteral_23627/*"x"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
    v30 = StringLiteral_23627/*"x"*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_57;
  v28->m_Items[0] = (Il2CppObject *)v30;
  sub_B5D560(v28->m_Items);
  v55 = 0x40000000;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v55);
  v31 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B5D684(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_57;
  v28->m_Items[1] = v31;
  sub_B5D560(&v28->m_Items[1]);
  v29 = StringLiteral_23719/*"y"*/;
  if ( StringLiteral_23719/*"y"*/ )
  {
    v29 = sub_B5D684(StringLiteral_23719/*"y"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
    v32 = StringLiteral_23719/*"y"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_57;
  v28->m_Items[2] = (Il2CppObject *)v32;
  sub_B5D560(&v28->m_Items[2]);
  v54 = 0x40000000;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v54);
  v33 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B5D684(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_57;
  v28->m_Items[3] = v33;
  sub_B5D560(&v28->m_Items[3]);
  v29 = StringLiteral_23763/*"z"*/;
  if ( StringLiteral_23763/*"z"*/ )
  {
    v29 = sub_B5D684(StringLiteral_23763/*"z"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
    v34 = StringLiteral_23763/*"z"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v28->max_length <= 4 )
    goto LABEL_57;
  v28->m_Items[4] = (Il2CppObject *)v34;
  sub_B5D560(&v28->m_Items[4]);
  v53 = 1065353216;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v53);
  v35 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B5D684(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
  }
  if ( v28->max_length <= 5 )
    goto LABEL_57;
  v28->m_Items[5] = v35;
  sub_B5D560(&v28->m_Items[5]);
  v29 = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v29 = sub_B5D684(StringLiteral_22982/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
    v36 = StringLiteral_22982/*"time"*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v28->max_length <= 6 )
    goto LABEL_57;
  v28->m_Items[6] = (Il2CppObject *)v36;
  sub_B5D560(&v28->m_Items[6]);
  v52 = ftime + 0.1;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v52);
  v37 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B5D684(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
  }
  if ( v28->max_length <= 7 )
    goto LABEL_57;
  v28->m_Items[7] = v37;
  sub_B5D560(&v28->m_Items[7]);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v38 = iTween__Hash(v28, 0LL);
  iTween__ScaleTo_43188764(gameObject, v38, 0LL);
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v26 = sub_B5D5DC(object___TypeInfo, 4LL);
  if ( !v26 )
LABEL_59:
    sub_B5D69C(v26, v27);
  v40 = (System_Object_array *)v26;
  v29 = StringLiteral_23763/*"z"*/;
  if ( StringLiteral_23763/*"z"*/ )
  {
    v29 = sub_B5D684(StringLiteral_23763/*"z"*/, v40->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
    v41 = StringLiteral_23763/*"z"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( !v40->max_length )
    goto LABEL_57;
  v40->m_Items[0] = (Il2CppObject *)v41;
  sub_B5D560(v40->m_Items);
  v51 = 1144258560;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v51);
  v42 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B5D684(v29, v40->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
  }
  if ( v40->max_length <= 1 )
    goto LABEL_57;
  v40->m_Items[1] = v42;
  sub_B5D560(&v40->m_Items[1]);
  v29 = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v29 = sub_B5D684(StringLiteral_22982/*"time"*/, v40->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_58;
    v43 = StringLiteral_22982/*"time"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( v40->max_length <= 2 )
    goto LABEL_57;
  v40->m_Items[2] = (Il2CppObject *)v43;
  sub_B5D560(&v40->m_Items[2]);
  v50 = ftime;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v50);
  v44 = (Il2CppObject *)v29;
  if ( v29 )
  {
    v29 = sub_B5D684(v29, v40->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_58:
      v49 = sub_B5D6BC();
      sub_B5D668(v49, 0LL);
    }
  }
  if ( v40->max_length <= 3 )
  {
LABEL_57:
    v48 = sub_B5D6C8(v29);
    sub_B5D668(v48, 0LL);
  }
  v40->m_Items[3] = v44;
  sub_B5D560(&v40->m_Items[3]);
  v45 = iTween__Hash(v40, 0LL);
  iTween__RotateTo_43193856(v39, v45, 0LL);
  v47 = BattleCommandComponent__fadeoutEffect(this, 1, v46);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v47, 0LL);
}


void __fastcall BattleCommandComponent__playOpenNobleCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  BattleCommandComponent_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x0

  v4 = this;
  if ( (byte_42E5391 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleCommandComponent_o *)sub_B5D5C4(&StringLiteral_18480/*"effect/ef_noblecard"*/, v5, v6, v7);
    byte_42E5391 = 1;
  }
  effectobj = v4->fields.effectobj;
  if ( !effectobj )
    goto LABEL_21;
  if ( effectobj->max_length <= 2 )
    goto LABEL_22;
  v9 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v4->fields.effectobj;
    if ( !v10 )
      goto LABEL_21;
    if ( v10->max_length <= 2 )
      goto LABEL_22;
    v11 = (UnityEngine_Object_o *)v10->m_Items[2];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_35620448(v11, 0LL);
  }
  this = (BattleCommandComponent_o *)v4->fields.nomalwidget;
  if ( !this
    || (v12 = v4->fields.effectobj,
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_21082944(
                                             (BaseMonoBehaviour_o *)v4,
                                             (System_String_o *)StringLiteral_18480/*"effect/ef_noblecard"*/,
                                             transform,
                                             0LL,
                                             0LL),
        !v12) )
  {
LABEL_21:
    sub_B5D69C(this, method);
  }
  v14 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(this, v12->obj.klass->_1.element_class);
    if ( !this )
    {
      v16 = sub_B5D6BC();
      sub_B5D668(v16, 0LL);
    }
  }
  if ( v12->max_length <= 2 )
  {
LABEL_22:
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
  }
  v12->m_Items[2] = (UnityEngine_GameObject_o *)v14;
  sub_B5D560(&v12->m_Items[2]);
}


void __fastcall BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  __int64 v14; // x20
  unsigned __int64 v15; // x24
  __int64 v16; // x25
  UnityEngine_Transform_o *objectRoot; // x21
  __int64 v18; // x22
  System_String_o *v19; // x23
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x22
  __int64 v22; // x23
  __int64 v23; // x21
  Il2CppClass **v24; // x0
  struct UnityEngine_GameObject_array *v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  unsigned int v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E538A & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E538A = 1;
  }
  v28 = 0;
  gameObject = sub_B5D5DC(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2LL);
  if ( !gameObject )
LABEL_24:
    sub_B5D69C(gameObject, v12);
  v13 = *(_QWORD *)(gameObject + 24);
  v14 = gameObject;
  if ( (unsigned int)v13 <= 1 )
    goto LABEL_25;
  *(_DWORD *)(gameObject + 36) = 1;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    v16 = gameObject + 32;
    while ( v15 < (unsigned int)v13 )
    {
      v28 = *(_DWORD *)(v16 + 4 * v15);
      objectRoot = this->fields.objectRoot;
      gameObject = j_il2cpp_value_box_0(BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, &v28);
      if ( !gameObject )
        goto LABEL_24;
      v18 = gameObject;
      v19 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 360LL))(
                                 gameObject,
                                 *(_QWORD *)(*(_QWORD *)gameObject + 368LL));
      v28 = *(_DWORD *)j_il2cpp_object_unbox_0(v18);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v19, 1, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !NodeFromName )
          goto LABEL_24;
        addObjectList = this->fields.addObjectList;
        v22 = (int)v28;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0LL);
        if ( !addObjectList )
          goto LABEL_24;
        v23 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_B5D684(gameObject, addObjectList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v27 = sub_B5D6BC();
            sub_B5D668(v27, 0LL);
          }
        }
        if ( (unsigned int)v22 >= addObjectList->max_length )
          break;
        v24 = &addObjectList->obj.klass + v22;
        v24[4] = (Il2CppClass *)v23;
        sub_B5D560(v24 + 4);
        v25 = this->fields.addObjectList;
        if ( !v25 )
          goto LABEL_24;
        if ( v28 >= v25->max_length )
          break;
        gameObject = (__int64)v25->m_Items[v28];
        if ( !gameObject )
          goto LABEL_24;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      LODWORD(v13) = *(_DWORD *)(v14 + 24);
      if ( (__int64)++v15 >= (int)v13 )
        return;
    }
LABEL_25:
    v26 = sub_B5D6C8(gameObject);
    sub_B5D668(v26, 0LL);
  }
}


void __fastcall BattleCommandComponent__resetComboData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v8; // x8
  unsigned __int64 v9; // x21
  UnityEngine_Object_o *v10; // x19
  __int64 v11; // x0

  if ( (byte_42E539D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E539D = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_B5D69C(v5, v6);
  v8 = *(_QWORD *)&effectobj->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v8 )
      {
        v11 = sub_B5D6C8(v5);
        sub_B5D668(v11, 0LL);
      }
      v10 = (UnityEngine_Object_o *)effectobj->m_Items[v9];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( v5 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v10, 0LL);
      }
      LODWORD(v8) = effectobj->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)v8 );
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
    sub_B5D69C(criticallabel, v3);
  }
  DrumRollLabel__ChangeParamNonAnimation(criticallabel, 0, 1, 0LL);
}


void __fastcall BattleCommandComponent__resetSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleCommandData_o *data; // x8
  int32_t uniqueId; // w20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_Object_o *v15; // x19
  __int64 v16; // x0
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42E53AA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleCommandComponent_o *)sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v5, v6, v7);
    byte_42E53AA = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_20;
  uniqueId = data->fields.uniqueId;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__StopVoice(uniqueId, 0.0, 0LL);
  white = UnityEngine_Color__get_white(0LL);
  BattleCommandComponent__SetCardColor(v4, white, v10);
  BattleCommandComponent__resetSelectStamp(v4, v11);
  effectobj = v4->fields.effectobj;
  if ( !effectobj )
    goto LABEL_20;
  if ( effectobj->max_length <= 3 )
    goto LABEL_21;
  v13 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v4->fields.effectobj;
    if ( v14 )
    {
      if ( v14->max_length > 3 )
      {
        v15 = (UnityEngine_Object_o *)v14->m_Items[3];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v15, 0LL);
        return;
      }
LABEL_21:
      v16 = sub_B5D6C8(this);
      sub_B5D668(v16, 0LL);
    }
LABEL_20:
    sub_B5D69C(this, method);
  }
}


void __fastcall BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  __int64 v8; // x0

  v4 = this;
  if ( (byte_42E5395 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5395 = 1;
  }
  effectobj = v4->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( effectobj->max_length <= 5 )
  {
LABEL_15:
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
  v6 = (UnityEngine_Object_o *)effectobj->m_Items[5];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.effectobj;
    if ( !v7 )
      goto LABEL_14;
    if ( v7->max_length > 5 )
    {
      this = (BattleCommandComponent_o *)v4->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v7->m_Items[5], 1, 0LL);
        return;
      }
LABEL_14:
      sub_B5D69C(this, method);
    }
    goto LABEL_15;
  }
}


void __fastcall BattleCommandComponent__selectCard(
        BattleCommandComponent_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x1
  __int64 data; // x0
  const MethodInfo *v85; // x1
  struct BattleCommandData_o *v86; // x8
  int treasureDvc; // w21
  Voice_BATTLE_array *v88; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v90; // x2
  System_Array_o *v91; // x0
  __int64 *v92; // x8
  __int64 v93; // x1
  System_Collections_Generic_List_KeyValuePair_string__int___o *v94; // x21
  BattleCommandComponent___c_c *v95; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_string__int___int__o *_9__186_0; // x22
  Il2CppObject *v98; // x23
  struct BattleCommandComponent___c_StaticFields *v99; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Int32_array *v101; // x0
  int32_t size; // w25
  int v103; // w22
  System_Collections_Generic_KeyValuePair_string__int__o v104; // kr00_16
  struct BattleCommandData_o *v105; // x8
  System_String_o *key; // x21
  int32_t uniqueId; // w23
  System_String_o *LastVoiceType; // x0
  int v109; // w22
  struct BattleCommandData_o *v110; // x8
  int32_t svtId; // w23
  VoiceMaster_o *v112; // x22
  const MethodInfo *v113; // x4
  struct BattleServantData_o *svtData; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *v116; // x8
  int32_t v117; // w2
  struct BattleServantData_o *v118; // x8
  UnityEngine_Object_o *ServantActor; // x22
  int32_t v120; // w22
  struct BattleServantData_o *v121; // x8
  struct BattleCommandData_o *v122; // x9
  int32_t v123; // w23
  int32_t overwriteSvtVoiceId; // w25
  int32_t v125; // w24
  System_String_o *v126; // x21
  Il2CppObject *v127; // x0
  __int64 *v128; // x8
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v131; // x21
  __int64 v132; // x8
  __int64 v133; // x0
  __int64 v134; // x0
  int v135; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_KeyValuePair_string__int___o *voiceInfoList; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o grey; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E53A6 & 1) == 0 )
  {
    sub_B5D5C4(&Voice_BATTLE___TypeInfo, targetIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_KeyValuePair_string__int____, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoiceMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_string__int___int___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_KeyValuePair_string__int___int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&int_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__, v33, v34, v35);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546,
      v45,
      v46,
      v47);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3,
      v48,
      v49,
      v50);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0,
      v51,
      v52,
      v53);
    sub_B5D5C4(&Method_BattleCommandComponent___c__selectCard_b__186_0__, v54, v55, v56);
    sub_B5D5C4(&BattleCommandComponent___c_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Voice_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_16414/*"a"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_7128/*"HEROINE_CHANGECARDVOICE"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_18476/*"effect/ef_commandup_{0}{1:00}"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_21886/*"q"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_16747/*"b"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v78, v79, v80);
    byte_42E53A6 = 1;
  }
  voiceInfoList = 0LL;
  grey = UnityEngine_Color__get_grey(0LL);
  BattleCommandComponent__SetCardColor(this, grey, v81);
  BattleCommandComponent__stopFirstAura(this, v82);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v83) == 5 )
    return;
  data = BattleCommandComponent__get_isKindOfDontAction(this, v85);
  if ( (data & 1) != 0 )
    return;
  v86 = this->fields.data;
  if ( !v86 )
    goto LABEL_89;
  treasureDvc = v86->fields.treasureDvc;
  if ( treasureDvc <= 0 )
  {
    if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    FileName = Voice__getFileName(245, 0LL);
    if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v90) )
    {
      v91 = (System_Array_o *)sub_B5D5DC(Voice_BATTLE___TypeInfo, 6LL);
      v92 = &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
    }
    else
    {
      v91 = (System_Array_o *)sub_B5D5DC(Voice_BATTLE___TypeInfo, 3LL);
      v92 = &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
    }
    goto LABEL_19;
  }
  if ( treasureDvc != ConstantMaster__getValue((System_String_o *)StringLiteral_7128/*"HEROINE_CHANGECARDVOICE"*/, 0LL) )
  {
    v91 = (System_Array_o *)sub_B5D5DC(Voice_BATTLE___TypeInfo, 12LL);
    v92 = &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546;
LABEL_19:
    v93 = *v92;
    v88 = (Voice_BATTLE_array *)v91;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v91, (System_RuntimeFieldHandle_o)v93, 0LL);
    goto LABEL_20;
  }
  data = sub_B5D5DC(Voice_BATTLE___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_89;
  v88 = (Voice_BATTLE_array *)data;
  if ( !*(_DWORD *)(data + 24) )
  {
LABEL_90:
    v133 = sub_B5D6C8(data);
    sub_B5D668(v133, 0LL);
  }
  *(_DWORD *)(data + 32) = 252;
LABEL_20:
  data = (__int64)this->fields.svtData;
  if ( !data )
    goto LABEL_89;
  if ( BattleServantData__TryGetPlayableVoiceInfoList((BattleServantData_o *)data, &voiceInfoList, v88, 0LL) )
  {
    v94 = voiceInfoList;
    v95 = BattleCommandComponent___c_TypeInfo;
    if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
      v95 = BattleCommandComponent___c_TypeInfo;
    }
    static_fields = v95->static_fields;
    _9__186_0 = static_fields->__9__186_0;
    if ( !_9__186_0 )
    {
      if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v95);
        static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
      }
      v98 = (Il2CppObject *)static_fields->__9;
      _9__186_0 = (System_Func_KeyValuePair_string__int___int__o *)sub_B5D694(System_Func_KeyValuePair_string__int___int__TypeInfo);
      System_Func_KeyValuePair_string__int___int____ctor(
        _9__186_0,
        v98,
        Method_BattleCommandComponent___c__selectCard_b__186_0__,
        (const MethodInfo_279569C *)Method_System_Func_KeyValuePair_string__int___int___ctor__);
      v99 = BattleCommandComponent___c_TypeInfo->static_fields;
      v99->__9__186_0 = _9__186_0;
      sub_B5D560(&v99->__9__186_0);
    }
    v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_string__int___int_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v94,
                                                                  (System_Func_TSource__TResult__o *)_9__186_0,
                                                                  (const MethodInfo_1CB0534 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    v101 = System_Linq_Enumerable__ToArray_int_(
             v100,
             (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    data = RandomUtility__GetRandomRangeIndex(v101, 0, 0LL);
    if ( !voiceInfoList )
      goto LABEL_89;
    size = voiceInfoList->fields._size;
    v103 = data;
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v104 = BasicHelper__IndexValue_KeyValuePair_string__int__(
             (System_Collections_Generic_List_T__o *)voiceInfoList,
             data,
             voiceInfoList->fields._items->m_Items[0],
             (const MethodInfo_1AD8E64 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    v83 = *(const MethodInfo **)&v104.fields.value;
    data = (__int64)v104.fields.key;
    v105 = this->fields.data;
    if ( !v105 )
      goto LABEL_89;
    key = v104.fields.key;
    uniqueId = v105->fields.uniqueId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    LastVoiceType = ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0LL);
    data = System_String__op_Equality(LastVoiceType, v104.fields.key, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !voiceInfoList )
        goto LABEL_89;
      v109 = (v103 + 1) % size;
      if ( !voiceInfoList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      key = BasicHelper__IndexValue_KeyValuePair_string__int__(
              (System_Collections_Generic_List_T__o *)voiceInfoList,
              v109,
              voiceInfoList->fields._items->m_Items[0],
              (const MethodInfo_1AD8E64 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    }
    data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_89;
    data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)data,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceMaster___);
    v110 = this->fields.data;
    if ( !v110 )
      goto LABEL_89;
    svtId = v110->fields.svtId;
    v112 = (VoiceMaster_o *)data;
    data = (__int64)System_String__Concat_44577788((System_String_o *)StringLiteral_16096/*"_"*/, key, 0LL);
    if ( !v112 )
      goto LABEL_89;
    data = VoiceMaster__getFlagRequestNumber(v112, svtId, (System_String_o *)data, 0, 0LL);
    if ( (_DWORD)data )
    {
      svtData = this->fields.svtData;
      if ( !svtData )
        goto LABEL_89;
      if ( !svtData->fields.followerType )
      {
        perf = this->fields.perf;
        if ( !perf )
          goto LABEL_89;
        v116 = this->fields.data;
        if ( !v116 )
          goto LABEL_89;
        v117 = data;
        data = (__int64)perf->fields.data;
        if ( !data )
          goto LABEL_89;
        BattleData__AddServantVoicePlayed_18901908((BattleData_o *)data, v116->fields.svtId, v117, 0, v113);
      }
    }
    v118 = this->fields.svtData;
    if ( !v118 )
      goto LABEL_89;
    data = (__int64)this->fields.perf;
    if ( !data )
      goto LABEL_89;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             (BattlePerformance_o *)data,
                                             v118->fields.uniqueId,
                                             0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    data = UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !ServantActor )
        goto LABEL_89;
      if ( !BattleActorControl__isNoVoice((BattleActorControl_o *)ServantActor, 0LL) )
      {
        data = (__int64)this->fields.svtData;
        if ( data )
        {
          data = BattleServantData__getSvtId((BattleServantData_o *)data, 0LL);
          if ( this->fields.svtData )
          {
            v120 = data;
            data = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
            v121 = this->fields.svtData;
            if ( v121 )
            {
              v122 = this->fields.data;
              if ( v122 )
              {
                v123 = data;
                overwriteSvtVoiceId = v121->fields.overwriteSvtVoiceId;
                v125 = v122->fields.uniqueId;
                if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                }
                ServantAssetLoadManager__playBattleVoice(v120, v123, overwriteSvtVoiceId, key, 1.0, 0LL, v125, 0, 0LL);
                goto LABEL_68;
              }
            }
          }
        }
LABEL_89:
        sub_B5D69C(data, v83);
      }
    }
  }
LABEL_68:
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  v126 = (System_String_o *)StringLiteral_18476/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v83) == 3 )
  {
    v135 = targetIndex + 1;
    v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135);
    v128 = &StringLiteral_21886/*"q"*/;
LABEL_77:
    v126 = System_String__Format_44573324(v126, (Il2CppObject *)*v128, v127, 0LL);
    goto LABEL_78;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v83) == 1 )
  {
    v135 = targetIndex + 1;
    v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135);
    v128 = &StringLiteral_16414/*"a"*/;
    goto LABEL_77;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v83) == 2 )
  {
    v135 = targetIndex + 1;
    v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135);
    v128 = &StringLiteral_16747/*"b"*/;
    goto LABEL_77;
  }
LABEL_78:
  data = (__int64)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_89;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (__int64)BaseMonoBehaviour__createObject_21082944((BaseMonoBehaviour_o *)this, v126, transform, 0LL, 0LL);
  if ( !effectobj )
    goto LABEL_89;
  v131 = (UnityEngine_GameObject_o *)data;
  if ( data )
  {
    data = sub_B5D684(data, effectobj->obj.klass->_1.element_class);
    if ( !data )
    {
      v134 = sub_B5D6BC();
      sub_B5D668(v134, 0LL);
    }
  }
  if ( effectobj->max_length <= 3 )
    goto LABEL_90;
  effectobj->m_Items[3] = v131;
  sub_B5D560(&effectobj->m_Items[3]);
  data = (__int64)this->fields.perf;
  if ( !data )
    goto LABEL_89;
  v132 = *(_QWORD *)(data + 32);
  if ( !v132 )
    goto LABEL_89;
  if ( !targetIndex && *(int *)(v132 + 200) >= 1 )
    BattlePerformance__SetLimitTurnEffectFlag((BattlePerformance_o *)data, 0, 0LL);
}


void __fastcall BattleCommandComponent__setAttackCommandData(
        BattleCommandComponent_o *this,
        BattleCommandComponent_o *comp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x4
  struct BattleCommandData_o *data; // x8

  if ( !comp
    || (BattleCommandComponent__setData(this, comp->fields.data, comp->fields.svtData, 1, 1, 0, v3),
        this->fields.perf = comp->fields.perf,
        sub_B5D560(&this->fields.perf),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v6),
        (data = comp->fields.data) == 0LL) )
  {
    sub_B5D69C(this, comp);
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, data->fields.commandCardParam, 2, 0, v7);
}


void __fastcall BattleCommandComponent__setBuffIconList(
        BattleCommandComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  UnityEngine_Component_o *buffRoot; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x21
  BuffList_TYPE_array *qabTypes; // x22
  int32_t type; // w0
  System_Int32_array *Individualities; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListActive; // x0
  BuffList_TYPE_array *v75; // x22
  int32_t v76; // w0
  System_Int32_array *v77; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffList_31648088; // x0
  BuffList_TYPE_array *tdTypes; // x22
  BattleBuffData_BuffData_array *v81; // x0
  System_Collections_Generic_IEnumerable_T__o *v82; // x0
  struct BuffList_TYPE_array *v83; // x22
  BattleBuffData_BuffData_array *v84; // x3
  BattleBuffData_o *v85; // x0
  BuffList_TYPE_array *v86; // x1
  System_Int32_array *v87; // x2
  BuffList_TYPE_array *noneTdQabTypes; // x22
  int32_t v89; // w0
  System_Int32_array *v90; // x23
  BattleBuffData_BuffData_array *v91; // x0
  System_Collections_Generic_IEnumerable_T__o *v92; // x0
  struct BuffList_TYPE_array *v93; // x22
  int32_t v94; // w0
  System_Int32_array *v95; // x23
  System_Collections_Generic_IEnumerable_T__o *v96; // x0
  BuffList_TYPE_array *otherTypes; // x22
  BattleBuffData_BuffData_array *v98; // x0
  System_Collections_Generic_IEnumerable_T__o *v99; // x0
  BuffList_TYPE_array *v100; // x22
  BattleBuffData_BuffData_array *v101; // x0
  System_Collections_Generic_IEnumerable_T__o *v102; // x0
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v103; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v104; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v105; // x20
  System_Collections_Generic_List_int__o *v106; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  _BOOL8 v108; // x0
  __int64 v109; // x1
  WarEntity_o *Entity; // x0
  __int64 v111; // x1
  WarEntity_o *v112; // x21
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  unsigned __int64 v114; // x22
  unsigned __int64 max_length; // x9
  signed __int64 size; // x9
  Il2CppClass **v117; // x8
  Il2CppClass *v118; // x21
  BattleServantBuffIconComponent_o *v119; // x0
  int32_t v120; // w1
  __int64 v121; // x0
  System_Collections_Generic_List_Enumerator_T__o v122; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v123; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E5393 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleCommandComponent__setBuffIconList_b__136_0__, (_DWORD)buffData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleCommandComponent__setBuffIconList_b__136_1__, v6, v7, v8);
    sub_B5D5C4(&Method_BattleCommandComponent__setBuffIconList_b__136_2__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v60, v61, v62);
    sub_B5D5C4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v63, v64, v65);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v66, v67, v68);
    byte_42E5393 = 1;
  }
  memset(&v123, 0, sizeof(v123));
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
    goto LABEL_40;
  }
  buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
  if ( !buffRoot )
    goto LABEL_40;
  buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0LL);
  if ( !buffRoot )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 1, 0LL);
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_40;
  qabTypes = this->fields.qabTypes;
  type = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, (const MethodInfo *)buffData);
  Individualities = CardMaster__getIndividualities(type, 1, 0LL);
  ShowCommandBuffListActive = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  buffRoot = (UnityEngine_Component_o *)BattleBuffData__getBuffList_31648088(
                                          buffData,
                                          qabTypes,
                                          Individualities,
                                          ShowCommandBuffListActive,
                                          0LL);
  if ( !v70 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v70,
    (System_Collections_Generic_IEnumerable_T__o *)buffRoot,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_40;
  v75 = this->fields.qabTypes;
  v76 = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, (const MethodInfo *)buffData);
  v77 = CardMaster__getIndividualities(v76, 1, 0LL);
  ShowCommandBuffListPassive = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  BuffList_31648088 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31648088(
                                                                       buffData,
                                                                       v75,
                                                                       v77,
                                                                       ShowCommandBuffListPassive,
                                                                       0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v70,
    BuffList_31648088,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_40;
  if ( SLODWORD(buffRoot[2].klass) < 1 )
  {
    noneTdQabTypes = this->fields.noneTdQabTypes;
    v89 = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, (const MethodInfo *)buffData);
    v90 = CardMaster__getIndividualities(v89, 1, 0LL);
    v91 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v92 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31648088(
                                                           buffData,
                                                           noneTdQabTypes,
                                                           v90,
                                                           v91,
                                                           0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v70,
      v92,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    buffRoot = (UnityEngine_Component_o *)this->fields.data;
    if ( !buffRoot )
      goto LABEL_40;
    v93 = this->fields.noneTdQabTypes;
    v94 = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, (const MethodInfo *)buffData);
    v95 = CardMaster__getIndividualities(v94, 1, 0LL);
    v84 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v85 = buffData;
    v86 = v93;
    v87 = v95;
  }
  else
  {
    tdTypes = this->fields.tdTypes;
    v81 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v82 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31648088(
                                                           buffData,
                                                           tdTypes,
                                                           0LL,
                                                           v81,
                                                           0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v70,
      v82,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v83 = this->fields.tdTypes;
    v84 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v85 = buffData;
    v86 = v83;
    v87 = 0LL;
  }
  v96 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31648088(v85, v86, v87, v84, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v70,
    v96,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  otherTypes = this->fields.otherTypes;
  v98 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  v99 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31648088(
                                                         buffData,
                                                         otherTypes,
                                                         0LL,
                                                         v98,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v70,
    v99,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v100 = this->fields.otherTypes;
  v101 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  v102 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31648088(
                                                          buffData,
                                                          v100,
                                                          0LL,
                                                          v101,
                                                          0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v70,
    v102,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v103 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v103,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v70,
    (System_Predicate_T__o *)v103,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v104 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v104,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_1__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v70,
    (System_Predicate_T__o *)v104,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v105 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v105,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_2__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v70,
    (System_Predicate_T__o *)v105,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v106 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v106,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  buffRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffRoot )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)buffRoot,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v122,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v70,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v123 = v122;
  while ( 1 )
  {
    v108 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v123,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v108 )
      break;
    if ( !v123.fields.current )
      sub_B5D69C(v108, v109);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(v108, v109);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)v123.fields.current[1].klass,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    v112 = Entity;
    if ( !Entity )
      sub_B5D69C(0LL, v111);
    if ( !v106 )
      sub_B5D69C(Entity, v111);
    if ( !System_Collections_Generic_List_int___Contains(
            v106,
            (int32_t)Entity->fields.longName,
            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
      System_Collections_Generic_List_int___Add(
        v106,
        (int32_t)v112->fields.longName,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v123,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
LABEL_40:
    sub_B5D69C(buffRoot, buffData);
  v114 = 0LL;
  while ( 1 )
  {
    max_length = buffIconList->max_length;
    if ( (__int64)v114 >= (int)max_length )
      break;
    if ( !v106 )
      goto LABEL_40;
    if ( v114 >= max_length )
    {
      v121 = sub_B5D6C8(buffRoot);
      sub_B5D668(v121, 0LL);
    }
    size = v106->fields._size;
    v117 = &buffIconList->obj.klass + v114;
    v118 = v117[4];
    if ( (__int64)v114 >= size )
    {
      if ( !v118 )
        goto LABEL_40;
      v119 = (BattleServantBuffIconComponent_o *)v117[4];
      v120 = 0;
    }
    else
    {
      if ( v114 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v118 )
        goto LABEL_40;
      v119 = (BattleServantBuffIconComponent_o *)v117[4];
      v120 = v106->fields._items->m_Items[v114 + 1];
    }
    BattleServantBuffIconComponent__setImageId(v119, v120, 0LL);
    buffIconList = this->fields.buffIconList;
    ++v114;
    if ( !buffIconList )
      goto LABEL_40;
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
    sub_B5D69C(0LL, flg);
  UnityEngine_GameObject__SetActive(criticalObject, flg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setData(
        BattleCommandComponent_o *this,
        BattleCommandData_o *indata,
        BattleServantData_o *insvtData,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct BattleCommandData_o **p_data; // x24
  Spawner_o *spawner; // x0
  MethodInfo *v18; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  bool v20; // w25
  bool v21; // w21
  struct UnityEngine_GameObject_array *v22; // x8
  struct UnityEngine_GameObject_array **p_effectobj; // x26
  __int64 v24; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 v26; // x23
  UnityEngine_Object_o *v27; // x27
  struct UnityEngine_GameObject_array *v28; // x8
  struct UnityEngine_GameObject_array *v29; // x8
  UnityEngine_Object_o *v30; // x27
  const MethodInfo *v31; // x6
  BattleServantData_o *v32; // x1
  BattleBuffData_o *buffData; // x0
  struct BattleCommandData_o *v34; // x22
  const MethodInfo *v35; // x2
  struct BattleCommandData_o *data; // x8
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x4
  int32_t commandCardParam; // w1
  BattleCommandComponent_o *v41; // x0
  __int64 v42; // x0
  struct BattleServantData_o **p_svtData; // [xsp+0h] [xbp-60h]
  bool v44; // [xsp+Ch] [xbp-54h]
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E5384 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, (_DWORD)indata, (_DWORD)insvtData, isAttack);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E5384 = 1;
  }
  p_data = &this->fields.data;
  this->fields.data = indata;
  sub_B5D560(&this->fields.data);
  this->fields.svtData = insvtData;
  p_svtData = &this->fields.svtData;
  sub_B5D560(&this->fields.svtData);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_25;
  v44 = isAttack;
  v20 = isTDTypeChangeWindow;
  v21 = isShowBuffIcon;
  BattleCommandComponent__DestroyEffectObject1(this, v18);
  v22 = this->fields.effectobj;
  if ( !v22 )
    goto LABEL_25;
  p_effectobj = &this->fields.effectobj;
  v24 = 4LL;
  while ( 1 )
  {
    max_length = v22->max_length;
    v26 = v24 - 4;
    if ( v24 - 4 >= (int)max_length )
      break;
    if ( v26 >= max_length )
      goto LABEL_49;
    v27 = (UnityEngine_Object_o *)*((_QWORD *)&v22->obj.klass + v24);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
    if ( ((unsigned __int8)spawner & 1) != 0 )
    {
      if ( v26 < 5 )
      {
        v29 = *p_effectobj;
        if ( !*p_effectobj )
          goto LABEL_25;
        if ( v26 >= v29->max_length )
        {
LABEL_49:
          v42 = sub_B5D6C8(spawner);
          sub_B5D668(v42, 0LL);
        }
        v30 = (UnityEngine_Object_o *)*((_QWORD *)&v29->obj.klass + v24);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v30, 0LL);
      }
      else if ( v24 == 9 )
      {
        v28 = this->fields.effectobj;
        if ( !v28 )
          goto LABEL_25;
        if ( (*(_QWORD *)&v28->max_length & 0xFFFFFFFEuLL) <= 5 )
          goto LABEL_49;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_25;
        Spawner__Despawn(spawner, v28->m_Items[5], 1, 0LL);
      }
    }
    v22 = *p_effectobj;
    ++v24;
    if ( !*p_effectobj )
      goto LABEL_25;
  }
  *p_effectobj = (struct UnityEngine_GameObject_array *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, v22->max_length);
  sub_B5D560(&this->fields.effectobj);
  if ( *p_data )
  {
    if ( (*p_data)->fields.treasureDvc >= 1 )
    {
      v32 = *p_svtData;
      if ( *p_svtData )
      {
        buffData = v32->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, v32, 0LL) )
          {
            spawner = (Spawner_o *)*p_svtData;
            if ( !*p_svtData )
              goto LABEL_25;
            spawner = (Spawner_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)spawner, 0LL);
            if ( !spawner )
              goto LABEL_25;
            spawner = (Spawner_o *)TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)spawner, 0LL);
            if ( ((unsigned __int8)spawner & 1) != 0 && !v20 )
            {
              v18 = (MethodInfo *)*p_svtData;
              if ( !*p_svtData )
                goto LABEL_25;
              spawner = (Spawner_o *)v18[9].parameters;
              if ( !spawner )
                goto LABEL_25;
              v34 = *p_data;
              spawner = (Spawner_o *)BattleBuffData__getTDTypeChangeBuffData(
                                       (BattleBuffData_o *)spawner,
                                       (BattleServantData_o *)v18,
                                       0LL);
              if ( !spawner || !v34 )
                goto LABEL_25;
              v34->fields._type = HIDWORD(spawner->fields.resourcePrecacher);
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, 1, v44, v21, v20, 0, v31);
  data = this->fields.data;
  if ( !data || data->fields.starcount < 10 || !this->fields.isCountUp )
    goto LABEL_45;
  spawner = (Spawner_o *)this->fields.criticalObject;
  if ( !spawner )
LABEL_25:
    sub_B5D69C(spawner, v18);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spawner, 1, 0LL);
LABEL_45:
  v45.fields.r = 0.0;
  v45.fields.g = 0.0;
  v45.fields.b = 0.0;
  v45.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v45, 1, v35);
  v46.fields.r = 0.0;
  v46.fields.g = 0.0;
  v46.fields.b = 0.0;
  v46.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v46, 1, v37);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v38);
    commandCardParam = indata->fields.commandCardParam;
    v41 = this;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v38);
    v41 = this;
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(v41, commandCardParam, 2, 1, v39);
}


void __fastcall BattleCommandComponent__setData_18880188(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x22
  __int64 v22; // x23
  __int64 v23; // x24
  _DWORD *monitor; // x8
  int32_t v25; // w22
  __int64 v26; // x23
  __int64 v27; // x24
  int32_t v28; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  BattleCommandData_o *v31; // x23
  const MethodInfo *v32; // x5
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x6
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E5388 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandData_TypeInfo, (_DWORD)svtData, index, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E5388 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_18;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v23 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v23;
  *(_QWORD *)&v36.fields.fakeValue = v22;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL);
  if ( !v21 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v21,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Instance )
  {
    monitor = Instance[1].monitor;
    if ( monitor )
    {
      if ( monitor[6] <= (unsigned int)index )
      {
        v35 = sub_B5D6C8(Instance);
        sub_B5D668(v35, 0LL);
      }
      v25 = monitor[index + 8];
      v27 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = v27;
      *(_QWORD *)&v37.fields.fakeValue = v26;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      v31 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_18880712(v31, v25, v28, CommandDispLimitCount, CommandImageSvtId, v32);
      if ( v31 )
      {
        BattleCommandData__SetCommandCardParam(v31, svtData->fields.commandCardParam, index, v33);
        v31->fields.battleBuffData = svtData->fields.buffData;
        sub_B5D560(&v31->fields.battleBuffData);
        v31->fields.servantCardIdsIndex = index;
        BattleCommandComponent__setData(this, v31, svtData, 0, 1, 0, v34);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(Instance, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setDepth(
        BattleCommandComponent_o *this,
        int32_t basedepth,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UIWidget_o *bg; // x0
  int32_t v7; // w22
  int32_t v8; // w21
  UnityEngine_Object_o *assistSprite; // x23
  UnityEngine_Object_o *assistChargeTurnLabel; // x23
  UnityEngine_Object_o *assistRemainingTurnLabel; // x23
  int32_t v12; // w23
  UnityEngine_Object_o *donotsleepSprite; // x24
  UnityEngine_Object_o *donotPermanentSleep; // x24
  UnityEngine_Object_o *unusableShortageStarSprite; // x24
  UnityEngine_Object_o *unusableNpSprite; // x24
  UnityEngine_Object_o *donotActTypeSprite; // x24
  UnityEngine_Object_o *donotActWithTypeSp; // x24
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x24
  struct BattleServantBuffIconComponent_array *buffIconList; // x22
  int max_length; // w8
  unsigned int v22; // w23
  BattleServantBuffIconComponent_o *v23; // x8
  UnityEngine_Object_o *powerUpCardValue; // x21
  UnityEngine_Object_o *powerUpCardIcon; // x21
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x21
  __int64 v28; // x0

  if ( (byte_42E5382 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, basedepth, (_DWORD)method, v3);
    byte_42E5382 = 1;
  }
  bg = (UIWidget_o *)this->fields.bg;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 1, 0LL);
  bg = (UIWidget_o *)this->fields.facetex;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 2, 0LL);
  bg = (UIWidget_o *)this->fields.icon;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 3, 0LL);
  bg = (UIWidget_o *)this->fields.text;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 4, 0LL);
  bg = (UIWidget_o *)this->fields.nobletex;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 5, 0LL);
  bg = (UIWidget_o *)this->fields.codeTexture;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 6, 0LL);
  bg = (UIWidget_o *)this->fields.codeSprite;
  if ( !bg )
    goto LABEL_107;
  v7 = basedepth + 7;
  UIWidget__set_depth(bg, basedepth + 7, 0LL);
  bg = (UIWidget_o *)this->fields.chargeTurnLabel;
  if ( !bg )
    goto LABEL_107;
  v8 = basedepth + 11;
  UIWidget__set_depth(bg, basedepth + 11, 0LL);
  bg = (UIWidget_o *)this->fields.remainingTurnLabel;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, v8, 0LL);
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assistSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assistChargeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistChargeTurnLabel;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v8, 0LL);
  }
  assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assistRemainingTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistRemainingTurnLabel;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v8, 0LL);
  }
  bg = (UIWidget_o *)this->fields.sealedSprite;
  if ( !bg )
    goto LABEL_107;
  v12 = basedepth + 9;
  UIWidget__set_depth(bg, basedepth + 9, 0LL);
  bg = (UIWidget_o *)this->fields.donotactSprite;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, v12, 0LL);
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotsleepSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotsleepSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotPermanentSleep, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotPermanentSleep;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableShortageStarSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  unusableNpSprite = (UnityEngine_Object_o *)this->fields.unusableNpSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(unusableNpSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableNpSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  donotActTypeSprite = (UnityEngine_Object_o *)this->fields.donotActTypeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotActTypeSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActTypeSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 10, 0LL);
  }
  donotActWithTypeSp = (UnityEngine_Object_o *)this->fields.donotActWithTypeSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotActWithTypeSp, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActWithTypeSp;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.treasureDeviceErrorSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, v7, 1, 0LL);
  bg = (UIWidget_o *)this->fields.friendIcon;
  if ( !bg || (UIWidget__set_depth(bg, basedepth + 10, 0LL), (buffIconList = this->fields.buffIconList) == 0LL) )
LABEL_107:
    sub_B5D69C(bg, *(_QWORD *)&basedepth);
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= max_length )
      {
        v28 = sub_B5D6C8(bg);
        sub_B5D668(v28, 0LL);
      }
      v23 = buffIconList->m_Items[v22];
      if ( !v23 )
        goto LABEL_107;
      bg = (UIWidget_o *)v23->fields.iconSprite;
      if ( !bg )
        goto LABEL_107;
      UIWidget__set_depth(bg, v8, 0LL);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v22 < max_length );
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerUpCardValue, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardValue;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 12, 0LL);
  }
  restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 13, 0LL);
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
  this->fields.perf = inPerf;
  sub_B5D560(&this->fields.perf);
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
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v5; // x0
  __int64 v6; // x0

  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_B5D69C(this, stamp);
  if ( stamp )
  {
    this = (BattleCommandComponent_o *)sub_B5D684(stamp, effectobj->obj.klass->_1.element_class);
    if ( !this )
    {
      v6 = sub_B5D6BC();
      sub_B5D668(v6, 0LL);
    }
  }
  if ( effectobj->max_length <= 5 )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  effectobj->m_Items[5] = stamp;
  sub_B5D560(&effectobj->m_Items[5]);
}


void __fastcall BattleCommandComponent__setShader(
        BattleCommandComponent_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *facetex; // x21
  struct UITexture_o *v10; // x20
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E5381 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, (_DWORD)shaderName, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E5381 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v10 = this->fields.facetex;
    v11 = UnityEngine_Shader__Find(shaderName, 0LL);
    v12 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v12, v11, 0LL);
    if ( !v10 )
      sub_B5D69C(v13, v14);
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v10->klass->vtable._25_set_material.method)(
      v10,
      v12,
      v10->klass->vtable._26_get_mainTexture.methodPtr);
  }
}


void __fastcall BattleCommandComponent__setTarget(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  this->fields.target = target;
  sub_B5D560(&this->fields.target);
}


void __fastcall BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E53A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, flg, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E53A4 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v10 )
  {
    if ( !Component_WebViewObject )
      sub_B5D69C(v10, v11);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, flg, 0LL);
  }
}


void __fastcall BattleCommandComponent__startComboCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  white = UnityEngine_Color__get_white(0LL);
  BattleCommandComponent__SetCardColor(this, white, v3);
  BattleCommandComponent__resetSelectStamp(this, v4);
}


void __fastcall BattleCommandComponent__startCountUp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleCommandData_o *data; // x8
  struct BattleCommandData_o *v9; // x8
  DrumRollLabel_o *criticallabel; // x20
  int32_t v11; // w21
  DrumRollLabel_CompleteEventHandler_o *v12; // x22

  v4 = this;
  if ( (byte_42E5397 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleCommandComponent_compCriticallabel__, (_DWORD)method, v2, v3);
    this = (BattleCommandComponent_o *)sub_B5D5C4(&DrumRollLabel_CompleteEventHandler_TypeInfo, v5, v6, v7);
    byte_42E5397 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  this = (BattleCommandComponent_o *)v4->fields.criticalObject;
  if ( data->fields.starcount <= 0 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(this, method);
  }
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (BattleCommandComponent_o *)v4->fields.criticallabel;
  v4->fields.isCountUp = 1;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__setParam((DrumRollLabel_o *)this, 0, 0LL);
  this = (BattleCommandComponent_o *)v4->fields.criticallabel;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__ChangeParamNonAnimation((DrumRollLabel_o *)this, 0, 1, 0LL);
  v9 = v4->fields.data;
  criticallabel = v4->fields.criticallabel;
  v11 = v9 ? v4->fields.boostedCriticalRate + v9->fields.starcount / 10 : 0;
  v12 = (DrumRollLabel_CompleteEventHandler_o *)sub_B5D694(DrumRollLabel_CompleteEventHandler_TypeInfo);
  DrumRollLabel_CompleteEventHandler___ctor(
    v12,
    (Il2CppObject *)v4,
    Method_BattleCommandComponent_compCriticallabel__,
    0LL);
  if ( !criticallabel )
    goto LABEL_15;
  DrumRollLabel__changeParam(criticallabel, v11, 1, v12, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__startMoveFloat(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float v5; // s0
  const MethodInfo *v6; // x2

  if ( (byte_42E538F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16540/*"anim_commandfloat"*/, (_DWORD)method, v2, v3);
    byte_42E538F = 1;
  }
  v5 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16540/*"anim_commandfloat"*/, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Component_o *nomalwidget; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *transform; // x20
  int v16; // s0
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v20; // x20
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_Object_o *v22; // x19
  __int64 v23; // x0

  if ( (byte_42E5390 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E5390 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v12 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)nomalwidget & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_31;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_WebViewObject, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_31;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v12, 0LL);
    }
  }
  nomalwidget = (UnityEngine_Component_o *)this->fields.nomalwidget;
  if ( !nomalwidget
    || (nomalwidget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nomalwidget, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nomalwidget, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v16, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_31:
    sub_B5D69C(nomalwidget, v14);
  }
  if ( effectobj->max_length <= 2 )
    goto LABEL_32;
  v20 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
  if ( ((unsigned __int8)nomalwidget & 1) != 0 )
  {
    v21 = this->fields.effectobj;
    if ( v21 )
    {
      if ( v21->max_length > 2 )
      {
        v22 = (UnityEngine_Object_o *)v21->m_Items[2];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__DestroyImmediate_35620448(v22, 0LL);
        return;
      }
LABEL_32:
      v23 = sub_B5D6C8(nomalwidget);
      sub_B5D668(v23, 0LL);
    }
    goto LABEL_31;
  }
}


void __fastcall BattleCommandComponent__stopFirstAura(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x0

  v4 = this;
  if ( (byte_42E5394 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5394 = 1;
  }
  effectobj = v4->fields.effectobj;
  if ( !effectobj )
    goto LABEL_18;
  if ( effectobj->max_length <= 4 )
    goto LABEL_19;
  v6 = (UnityEngine_Object_o *)effectobj->m_Items[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.effectobj;
    if ( v7 )
    {
      if ( v7->max_length <= 4 )
        goto LABEL_19;
      v8 = (UnityEngine_Object_o *)v7->m_Items[4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v8, 0LL);
      this = (BattleCommandComponent_o *)v4->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.objectRoot) > 4 )
        {
          this->fields.nobletex = 0LL;
          sub_B5D560(&this->fields.nobletex);
          return;
        }
LABEL_19:
        v9 = sub_B5D6C8(this);
        sub_B5D668(v9, 0LL);
      }
    }
LABEL_18:
    sub_B5D69C(this, method);
  }
}


void __fastcall BattleCommandComponent__transformSvtFace(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleCommandComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct BattleCommandData_o *data; // x21
  struct BattleCommandData_o *v10; // x21
  struct BattleCommandData_o *v11; // x21
  struct BattleCommandData_o *v12; // x21
  BattleCommandComponent_o **p_facetex; // x19
  UITexture_o *facetex; // x21
  struct BattleCommandData_o *v15; // x8
  int32_t imageSvtId; // w20
  int32_t svtlimit; // w22
  int32_t loadsvtLimit; // w23
  UnityEngine_Object_o *v19; // x20

  v5 = this;
  if ( (byte_42E538B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)svtData, (_DWORD)method, v3);
    this = (BattleCommandComponent_o *)sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v6, v7, v8);
    byte_42E538B = 1;
  }
  data = v5->fields.data;
  if ( data )
  {
    if ( !svtData )
      goto LABEL_31;
    if ( svtData->fields.uniqueId == data->fields.uniqueId )
    {
      data->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
      v10 = v5->fields.data;
      this = (BattleCommandComponent_o *)BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      if ( !v10 )
        goto LABEL_31;
      v10->fields.imageSvtId = (int)this;
      v11 = v5->fields.data;
      this = (BattleCommandComponent_o *)BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      if ( !v11 )
        goto LABEL_31;
      v11->fields.svtlimit = (int)this;
      v12 = v5->fields.data;
      this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(svtData, 1, 0LL);
      if ( !v12 )
        goto LABEL_31;
      v12->fields._loadsvtLimit = (int)this;
      this = (BattleCommandComponent_o *)v5->fields.data;
      if ( !this )
        goto LABEL_31;
      this = (BattleCommandComponent_o *)BattleCommandData__get_type(
                                           (BattleCommandData_o *)this,
                                           (const MethodInfo *)svtData);
      p_facetex = (BattleCommandComponent_o **)&v5->fields.facetex;
      facetex = v5->fields.facetex;
      if ( (_DWORD)this == 5 )
      {
        if ( facetex )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v5->fields.facetex, 0, 0LL);
          return;
        }
LABEL_31:
        sub_B5D69C(this, svtData);
      }
      v15 = v5->fields.data;
      if ( !v15 )
        goto LABEL_31;
      imageSvtId = v15->fields.imageSvtId;
      if ( imageSvtId <= 0 )
        imageSvtId = v15->fields.svtId;
      svtlimit = v15->fields.svtlimit;
      if ( v15->fields._loadsvtLimit == -1 )
        loadsvtLimit = v15->fields.svtlimit;
      else
        loadsvtLimit = v15->fields._loadsvtLimit;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      *p_facetex = (BattleCommandComponent_o *)ServantAssetLoadManager__loadCommandCard(
                                                 facetex,
                                                 imageSvtId,
                                                 loadsvtLimit,
                                                 svtlimit,
                                                 0LL);
      sub_B5D560(p_facetex);
      v19 = (UnityEngine_Object_o *)*p_facetex;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
      {
        this = *p_facetex;
        if ( !*p_facetex )
          goto LABEL_31;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        this = *p_facetex;
        if ( !*p_facetex )
          goto LABEL_31;
        UIWidget__set_height((UIWidget_o *)this, 191, 0LL);
        this = *p_facetex;
        if ( !*p_facetex )
          goto LABEL_31;
        UIWidget__set_width((UIWidget_o *)this, 191, 0LL);
      }
    }
  }
}


void __fastcall BattleCommandComponent__updateClassMag(
        BattleCommandComponent_o *this,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleCommandComponent_o *v5; // x19
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v7; // x21
  struct UnityEngine_GameObject_array *v8; // x8
  UnityEngine_Object_o *v9; // x21
  struct UnityEngine_GameObject_array *v10; // x8
  struct UnityEngine_GameObject_array *v11; // x8
  const MethodInfo *v12; // x2
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *data; // x8
  float ShowClassMagnification; // s0
  struct UnityEngine_GameObject_array *v16; // x8
  struct UnityEngine_GameObject_array *v17; // x8
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42E53AF & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)targetSvt, (_DWORD)method, v3);
    byte_42E53AF = 1;
  }
  if ( targetSvt && v5->fields.data )
  {
    addObjectList = v5->fields.addObjectList;
    if ( !addObjectList )
      goto LABEL_38;
    if ( !addObjectList->max_length )
      goto LABEL_39;
    v7 = (UnityEngine_Object_o *)addObjectList->m_Items[0];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v8 = v5->fields.addObjectList;
      if ( !v8 )
        goto LABEL_38;
      if ( v8->max_length <= 1 )
        goto LABEL_39;
      v9 = (UnityEngine_Object_o *)v8->m_Items[1];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v10 = v5->fields.addObjectList;
        if ( !v10 )
          goto LABEL_38;
        if ( !v10->max_length )
          goto LABEL_39;
        this = (BattleCommandComponent_o *)v10->m_Items[0];
        if ( !this )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v11 = v5->fields.addObjectList;
        if ( !v11 )
          goto LABEL_38;
        if ( v11->max_length <= 1 )
          goto LABEL_39;
        this = (BattleCommandComponent_o *)v11->m_Items[1];
        if ( !this
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
              (perf = v5->fields.perf) == 0LL)
          || (data = v5->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)perf->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)BattleData__getServantData(
                                                   (BattleData_o *)this,
                                                   data->fields.uniqueId,
                                                   v12),
              !v5->fields.perf) )
        {
LABEL_38:
          sub_B5D69C(this, targetSvt);
        }
        ShowClassMagnification = BattlePerformance__getShowClassMagnification(
                                   v5->fields.perf,
                                   v5->fields.data,
                                   (BattleServantData_o *)this,
                                   targetSvt,
                                   0LL);
        if ( ShowClassMagnification > 1.0 )
        {
          v16 = v5->fields.addObjectList;
          if ( !v16 )
            goto LABEL_38;
          if ( v16->max_length > 1 )
          {
            this = (BattleCommandComponent_o *)v16->m_Items[1];
            if ( !this )
              goto LABEL_38;
            goto LABEL_36;
          }
          goto LABEL_39;
        }
        if ( ShowClassMagnification < 1.0 )
        {
          v17 = v5->fields.addObjectList;
          if ( !v17 )
            goto LABEL_38;
          if ( v17->max_length )
          {
            this = (BattleCommandComponent_o *)v17->m_Items[0];
            if ( !this )
              goto LABEL_38;
LABEL_36:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            return;
          }
LABEL_39:
          v18 = sub_B5D6C8(this);
          sub_B5D668(v18, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct BattleCommandData_o *data; // x8
  int32_t v10; // w20
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x22
  DrumRollLabel_o *v13; // x0
  int32_t v14; // w1
  DrumRollLabel_CompleteEventHandler_o *v15; // x3
  DrumRollLabel_CompleteEventHandler_o *v16; // x21

  if ( (byte_42E5398 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleCommandComponent_compCriticallabel__, isNonAnimation, (_DWORD)method, v3);
    sub_B5D5C4(&DrumRollLabel_CompleteEventHandler_TypeInfo, v6, v7, v8);
    byte_42E5398 = 1;
  }
  data = this->fields.data;
  if ( !data || (v10 = this->fields.boostedCriticalRate + data->fields.starcount / 10, v10 <= 0) )
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
    sub_B5D69C(criticalObject, isNonAnimation);
  }
  if ( isNonAnimation )
  {
    DrumRollLabel__ChangeParamNonAnimation(criticallabel, v10, 0, 0LL);
  }
  else
  {
    if ( v10 >= criticallabel->fields.nowvalue )
    {
      v16 = (DrumRollLabel_CompleteEventHandler_o *)sub_B5D694(DrumRollLabel_CompleteEventHandler_TypeInfo);
      DrumRollLabel_CompleteEventHandler___ctor(
        v16,
        (Il2CppObject *)this,
        Method_BattleCommandComponent_compCriticallabel__,
        0LL);
      v13 = criticallabel;
      v14 = v10;
      v15 = v16;
    }
    else
    {
      v13 = this->fields.criticallabel;
      v14 = v10;
      v15 = 0LL;
    }
    DrumRollLabel__changeParam(v13, v14, 1, v15, 0.0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__updateSelectedEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent_o *v4; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Transform_o *v8; // x20
  struct UnityEngine_GameObject_array *v9; // x8
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0
  struct UnityEngine_GameObject_array *v19; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_Object_o *v21; // x20
  struct UnityEngine_GameObject_array *v22; // x8
  __int64 v23; // x0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E5396 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5396 = 1;
  }
  effectobj = v4->fields.effectobj;
  if ( !effectobj )
    goto LABEL_39;
  if ( effectobj->max_length <= 3 )
  {
LABEL_40:
    v23 = sub_B5D6C8(this);
    sub_B5D668(v23, 0LL);
  }
  v6 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.effectobj;
    if ( !v7 )
      goto LABEL_39;
    if ( v7->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v7->m_Items[3];
    if ( !this )
      goto LABEL_39;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !v4->fields.nomalwidget )
      goto LABEL_39;
    v8 = (UnityEngine_Transform_o *)this;
    this = (BattleCommandComponent_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v4->fields.nomalwidget,
                                         0LL);
    if ( !v8 )
      goto LABEL_39;
    UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)this, 0LL);
    v9 = v4->fields.effectobj;
    if ( !v9 )
      goto LABEL_39;
    if ( v9->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v9->m_Items[3];
    if ( !this )
      goto LABEL_39;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
    v14 = v4->fields.effectobj;
    if ( !v14 )
      goto LABEL_39;
    if ( v14->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v14->m_Items[3];
    if ( !this )
      goto LABEL_39;
    v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_up(0LL);
    if ( !v15 )
      goto LABEL_39;
    UnityEngine_Transform__set_eulerAngles(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
    v19 = v4->fields.effectobj;
    if ( !v19 )
      goto LABEL_39;
    if ( v19->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v19->m_Items[3];
    if ( !this )
      goto LABEL_39;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_39;
    v24.fields.x = 1.0;
    v24.fields.y = 1.0;
    v24.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v24, 0LL);
  }
  v20 = v4->fields.effectobj;
  if ( !v20 )
    goto LABEL_39;
  if ( v20->max_length <= 4 )
    goto LABEL_40;
  v21 = (UnityEngine_Object_o *)v20->m_Items[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v22 = v4->fields.effectobj;
    if ( !v22 )
      goto LABEL_39;
    if ( v22->max_length > 4 )
    {
      this = (BattleCommandComponent_o *)v22->m_Items[4];
      if ( this )
      {
        this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.objectRoot, 0LL);
          return;
        }
      }
LABEL_39:
      sub_B5D69C(this, method);
    }
    goto LABEL_40;
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
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  char v19; // w1
  char v20; // w2
  __int64 v21; // x3
  char v22; // w1
  char v23; // w2
  __int64 v24; // x3
  char v25; // w1
  char v26; // w2
  __int64 v27; // x3
  char v28; // w1
  char v29; // w2
  __int64 v30; // x3
  char v31; // w1
  char v32; // w2
  __int64 v33; // x3
  char v34; // w1
  char v35; // w2
  __int64 v36; // x3
  char v37; // w1
  char v38; // w2
  __int64 v39; // x3
  char v40; // w1
  char v41; // w2
  __int64 v42; // x3
  char v43; // w1
  char v44; // w2
  __int64 v45; // x3
  char v46; // w1
  char v47; // w2
  __int64 v48; // x3
  char v49; // w1
  char v50; // w2
  __int64 v51; // x3
  char v52; // w1
  char v53; // w2
  __int64 v54; // x3
  char v55; // w1
  char v56; // w2
  __int64 v57; // x3
  char v58; // w1
  char v59; // w2
  __int64 v60; // x3
  char v61; // w1
  char v62; // w2
  __int64 v63; // x3
  System_String_o *v64; // x21
  __int64 v65; // x28
  UnityEngine_Transform_o *transform; // x26
  __int64 v67; // x0
  __int64 v68; // x1
  int v69; // s0
  __int64 v72; // x1
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v74; // x0
  __int64 v75; // x1
  const MethodInfo *v76; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v78; // x2
  struct BattleServantData_o *svtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v81; // x1
  BattleCommandData_o *data; // x0
  __int64 v83; // x1
  UnityEngine_Behaviour_o *facetex; // x0
  __int64 v85; // x1
  UnityEngine_Behaviour_o *icon; // x0
  __int64 v87; // x1
  UnityEngine_Behaviour_o *text; // x0
  __int64 v89; // x1
  UISprite_o *bg; // x0
  __int64 v91; // x1
  UIWidget_o *v92; // x0
  __int64 v93; // x1
  UIWidget_o *v94; // x0
  __int64 v95; // x1
  UnityEngine_Behaviour_o *friendIcon; // x0
  BattleCommandSealStatus_o *v97; // x20
  const MethodInfo *v98; // x1
  const MethodInfo *v99; // x2
  BattleCommandData_o *v100; // x23
  UnityEngine_Object_o *perf; // x25
  BattleServantData_o *v102; // x24
  _BOOL8 v103; // x0
  __int64 v104; // x1
  struct BattlePerformance_o *v105; // x8
  BattleData_o *v106; // x25
  BattleCommandSealStatus_o *v107; // x26
  const MethodInfo *v108; // x4
  __int64 v109; // x0
  __int64 v110; // x1
  UIWidget_o **p_facetex; // x23
  UITexture_o *v112; // x24
  struct BattleCommandData_o *v113; // x8
  int32_t imageSvtId; // w25
  int32_t svtlimit; // w26
  int32_t loadsvtLimit; // w27
  UnityEngine_Object_o *Manager__loadCommandCard; // x24
  __int64 v118; // x1
  UnityEngine_Behaviour_o *v119; // x0
  __int64 v120; // x1
  UnityEngine_Behaviour_o *v121; // x0
  UnityEngine_Object_o *v122; // x24
  _BOOL8 v123; // x0
  __int64 v124; // x1
  UnityEngine_Behaviour_o *v125; // x0
  struct BattleCommandData_o *v126; // x8
  UnityEngine_Object_o *v127; // x22
  const MethodInfo *v128; // x1
  __int64 v129; // x1
  __int64 v130; // x1
  BattleCommandData_o *v131; // x0
  const MethodInfo *v132; // x1
  __int64 *v133; // x8
  BattleCommandData_o *v134; // x0
  BattleCommandData_o *v135; // x0
  Il2CppObject *v136; // x22
  UnityEngine_Behaviour_o *v137; // x0
  __int64 v138; // x0
  __int64 v139; // x1
  struct BattleCommandData_o *v140; // x8
  UISprite_o *v141; // x23
  FileName_c *v142; // x0
  __int64 v143; // x1
  UnityEngine_Behaviour_o *v144; // x0
  __int64 v145; // x0
  UISprite_o *v146; // x23
  FileName_c *v147; // x0
  __int64 v148; // x1
  UnityEngine_Behaviour_o *v149; // x0
  UISprite_o *v150; // x23
  System_String_o *v151; // x0
  UISprite_o *v152; // x21
  System_String_o *v153; // x0
  UISprite_o *v154; // x21
  System_String_o *v155; // x0
  __int64 v156; // x0
  __int64 v157; // x1
  struct UISprite_o *v158; // x21
  UISpriteData_o *AtlasSprite; // x0
  __int64 v160; // x1
  int width; // w22
  UISpriteData_o *v162; // x0
  __int64 v163; // x1
  __int64 v164; // x1
  UnityEngine_Component_o *v165; // x0
  UnityEngine_GameObject_o *v166; // x0
  __int64 v167; // x1
  UnityEngine_Transform_o *v168; // x21
  __int64 v169; // x0
  __int64 v170; // x1
  int v171; // s0
  __int64 v174; // x0
  const MethodInfo *v175; // x1
  struct BattleCommandData_o *v176; // x8
  UnityEngine_Behaviour_o *v177; // x0
  __int64 v178; // x0
  __int64 v179; // x1
  struct BattleCommandData_o *v180; // x8
  int32_t svtId; // w21
  UITexture_o *nobletex; // x22
  int32_t v183; // w23
  int32_t treasureDvc; // w24
  bool Manager__loadNobleName; // w21
  UnityEngine_Object_o *v186; // x22
  __int64 v187; // x1
  const MethodInfo *v188; // x2
  UnityEngine_Component_o *v189; // x0
  UnityEngine_GameObject_o *v190; // x0
  __int64 v191; // x1
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v193; // x1
  const MethodInfo *v194; // x2
  UISprite_o *v195; // x0
  const MethodInfo *v196; // x3
  const MethodInfo *v197; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v199; // x1
  const MethodInfo *v200; // x3
  BattleCommandData_o *v201; // x0
  UISprite_o *donotActTypeSprite; // x20
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v204; // x2
  System_String_o *CardTypeSealSpriteName; // x0
  UnityEngine_Object_o *displayRemainingTurn; // x20
  UILabel_o *v207; // x20
  System_String_o *v208; // x21
  const MethodInfo *v209; // x1
  BattleCommandSealStatus_o *v210; // x0
  __int64 v211; // x1
  struct BattleBuffData_BuffData_o *SleepBuff_k__BackingField; // x8
  int32_t turn; // w8
  int v214; // w8
  Il2CppObject *v215; // x1
  System_String_o *v216; // x0
  struct BattleCommandData_o *v217; // x8
  __int64 v218; // x0
  __int64 v219; // x1
  const MethodInfo *v220; // x2
  struct BattleCommandData_o *v221; // x8
  const MethodInfo *v222; // x2
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v224; // x8
  UILabel_o *v225; // x19
  System_String_o *v226; // x1
  BattleCommandData_o *v227; // x0
  int32_t v228; // [xsp+8h] [xbp-58h] BYREF
  int32_t v229; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E538C & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandSealStatus_TypeInfo, initFlg, isAttack, isShowBuffIcon);
    sub_B5D5C4(&FileName_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_17445/*"card_bg_blank"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_4674/*"DISPLAY_REMAINING_TURN"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_21397/*"none"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_16675/*"arts"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_17466/*"card_txt_{0}"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_17330/*"buster"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_21943/*"quick"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_17458/*"card_icon_{0}"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_17447/*"card_bg_{0}"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_1/*""*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_18875/*"extra"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_17446/*"card_bg_np{0}"*/, v61, v62, v63);
    byte_42E538C = 1;
  }
  v229 = 0;
  if ( !this->fields.data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
    goto LABEL_170;
  }
  v64 = (System_String_o *)StringLiteral_17447/*"card_bg_{0}"*/;
  v65 = StringLiteral_21397/*"none"*/;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v69 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    sub_B5D69C(v67, v68);
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v69, 0LL);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_B5D69C(0LL, v72);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
      nomalwidget,
      nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v74 )
    sub_B5D69C(0LL, v75);
  UnityEngine_GameObject__SetActive(v74, 1, 0LL);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_B5D69C(0LL, v76);
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
    svtData = this->fields.svtData;
    if ( svtData && isShowBuffIcon )
      BattleCommandComponent__setBuffIconList(this, svtData->fields.buffData, v78);
    else
      BattleCommandComponent__setBuffIconList(this, 0LL, v78);
  }
  data = this->fields.data;
  if ( !data )
    sub_B5D69C(0LL, v76);
  if ( BattleCommandData__get_type(data, v76) == 5 )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_B5D69C(0LL, v83);
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0LL);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_B5D69C(0LL, v85);
    UnityEngine_Behaviour__set_enabled(icon, 0, 0LL);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_B5D69C(0LL, v87);
    UnityEngine_Behaviour__set_enabled(text, 0, 0LL);
    bg = this->fields.bg;
    if ( !bg )
      sub_B5D69C(0LL, v89);
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_17445/*"card_bg_blank"*/, 0LL);
    v92 = (UIWidget_o *)this->fields.bg;
    if ( !v92 )
      sub_B5D69C(0LL, v91);
    UIWidget__set_height(v92, 170, 0LL);
    v94 = (UIWidget_o *)this->fields.bg;
    if ( !v94 )
      sub_B5D69C(0LL, v93);
    UIWidget__set_width(v94, 133, 0LL);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_B5D69C(0LL, v95);
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0LL);
    v97 = (BattleCommandSealStatus_o *)sub_B5D694(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v97, v98);
    this->fields.sealStatus = v97;
    sub_B5D560(&this->fields.sealStatus);
    goto LABEL_155;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  v100 = this->fields.data;
  v102 = this->fields.svtData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v103 = UnityEngine_Object__op_Implicit(perf, 0LL);
  if ( v103 )
  {
    v105 = this->fields.perf;
    if ( !v105 )
      sub_B5D69C(v103, v104);
    v106 = v105->fields.data;
  }
  else
  {
    v106 = 0LL;
  }
  v107 = (BattleCommandSealStatus_o *)sub_B5D694(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_18884632(v107, v100, v102, v106, v108);
  this->fields.sealStatus = v107;
  sub_B5D560(&this->fields.sealStatus);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v112 = this->fields.facetex;
  v113 = this->fields.data;
  if ( !v113 )
    sub_B5D69C(v109, v110);
  imageSvtId = v113->fields.imageSvtId;
  if ( imageSvtId <= 0 )
    imageSvtId = v113->fields.svtId;
  svtlimit = v113->fields.svtlimit;
  if ( v113->fields._loadsvtLimit == -1 )
    loadsvtLimit = v113->fields.svtlimit;
  else
    loadsvtLimit = v113->fields._loadsvtLimit;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v112,
                                                       imageSvtId,
                                                       loadsvtLimit,
                                                       svtlimit,
                                                       0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCard, 0LL, 0LL) )
  {
    *p_facetex = (UIWidget_o *)Manager__loadCommandCard;
    sub_B5D560(&this->fields.facetex);
  }
  v119 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v119 )
    sub_B5D69C(0LL, v118);
  UnityEngine_Behaviour__set_enabled(v119, 1, 0LL);
  v121 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v121 )
    sub_B5D69C(0LL, v120);
  UnityEngine_Behaviour__set_enabled(v121, 1, 0LL);
  v122 = (UnityEngine_Object_o *)*p_facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v123 = UnityEngine_Object__op_Inequality(v122, 0LL, 0LL);
  if ( v123 )
  {
    v125 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v125 )
        sub_B5D69C(0LL, v124);
      UnityEngine_Behaviour__set_enabled(v125, 0, 0LL);
    }
    else
    {
      if ( !v125 )
        sub_B5D69C(0LL, v124);
      UnityEngine_Behaviour__set_enabled(v125, 1, 0LL);
    }
  }
  v126 = this->fields.data;
  if ( !v126 )
    sub_B5D69C(v123, v124);
  v127 = (UnityEngine_Object_o *)*p_facetex;
  if ( v126->fields.treasureDvc < 1 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v127, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_B5D69C(0LL, v128);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_B5D69C(0LL, v130);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v127, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_B5D69C(0LL, v128);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_B5D69C(0LL, v129);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
    v64 = (System_String_o *)StringLiteral_17446/*"card_bg_np{0}"*/;
  }
  v131 = this->fields.data;
  if ( !v131 )
    sub_B5D69C(0LL, v128);
  if ( BattleCommandData__get_type(v131, v128) == 2 )
  {
    v133 = &StringLiteral_17330/*"buster"*/;
  }
  else
  {
    v134 = this->fields.data;
    if ( !v134 )
      sub_B5D69C(0LL, v132);
    if ( BattleCommandData__get_type(v134, v132) == 3 )
    {
      v133 = &StringLiteral_21943/*"quick"*/;
    }
    else
    {
      v135 = this->fields.data;
      if ( !v135 )
        sub_B5D69C(0LL, v132);
      if ( BattleCommandData__get_type(v135, v132) != 1 )
      {
        v227 = this->fields.data;
        if ( !v227 )
          sub_B5D69C(0LL, v132);
        if ( BattleCommandData__get_type(v227, v132) == 4 )
          v136 = (Il2CppObject *)StringLiteral_18875/*"extra"*/;
        else
          v136 = (Il2CppObject *)v65;
        goto LABEL_86;
      }
      v133 = &StringLiteral_16675/*"arts"*/;
    }
  }
  v136 = (Il2CppObject *)*v133;
LABEL_86:
  v137 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v137 )
    sub_B5D69C(0LL, v132);
  UnityEngine_Behaviour__set_enabled(v137, 0, 0LL);
  v140 = this->fields.data;
  if ( !v140 )
    sub_B5D69C(v138, v139);
  if ( v140->fields.follower )
  {
    v141 = this->fields.friendIcon;
    v142 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v141 )
      sub_B5D69C(v142, v139);
    UISprite__set_spriteName(v141, FileName_TypeInfo->static_fields->friendIconName, 0LL);
    v144 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v144 )
      sub_B5D69C(0LL, v143);
    UnityEngine_Behaviour__set_enabled(v144, 1, 0LL);
    v140 = this->fields.data;
    if ( !v140 )
      sub_B5D69C(v145, v139);
  }
  if ( v140->fields.flgEventJoin )
  {
    v146 = this->fields.friendIcon;
    v147 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v146 )
      sub_B5D69C(v147, v139);
    UISprite__set_spriteName(v146, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
    v149 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v149 )
      sub_B5D69C(0LL, v148);
    UnityEngine_Behaviour__set_enabled(v149, 1, 0LL);
  }
  v150 = this->fields.bg;
  v151 = System_String__Format(v64, v136, 0LL);
  if ( !v150 )
    sub_B5D69C(v151, v151);
  UISprite__set_spriteName(v150, v151, 0LL);
  v152 = this->fields.icon;
  v153 = System_String__Format((System_String_o *)StringLiteral_17458/*"card_icon_{0}"*/, v136, 0LL);
  if ( !v152 )
    sub_B5D69C(v153, v153);
  UISprite__set_spriteName(v152, v153, 0LL);
  v154 = this->fields.text;
  v155 = System_String__Format((System_String_o *)StringLiteral_17466/*"card_txt_{0}"*/, v136, 0LL);
  if ( !v154 )
    sub_B5D69C(v155, v155);
  UISprite__set_spriteName(v154, v155, 0LL);
  v158 = this->fields.text;
  if ( !v158 )
    sub_B5D69C(v156, v157);
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !AtlasSprite )
    sub_B5D69C(0LL, v160);
  if ( !this->fields.text )
    sub_B5D69C(AtlasSprite, v160);
  width = AtlasSprite->fields.width;
  v162 = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !v162 )
    sub_B5D69C(0LL, v163);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float, float, float, float))v158->klass->vtable._18_SetRect.method)(
    v158,
    v158->klass->vtable._19_ParentHasChanged.methodPtr,
    0.0,
    0.0,
    (float)width,
    (float)v162->fields.height);
  v165 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v165 )
    sub_B5D69C(0LL, v164);
  v166 = UnityEngine_Component__get_gameObject(v165, 0LL);
  if ( !v166 )
    sub_B5D69C(0LL, v167);
  v168 = UnityEngine_GameObject__get_transform(v166, 0LL);
  *(UnityEngine_Vector3_o *)&v171 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v168 )
    sub_B5D69C(v169, v170);
  UnityEngine_Transform__set_localPosition(v168, *(UnityEngine_Vector3_o *)&v171, 0LL);
  v176 = this->fields.data;
  if ( !v176 )
    sub_B5D69C(v174, v175);
  if ( v176->fields.treasureDvc >= 1 )
  {
    v177 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v177 )
      sub_B5D69C(0LL, v175);
    UnityEngine_Behaviour__set_enabled(v177, 0, 0LL);
    v180 = this->fields.data;
    if ( !v180 )
      sub_B5D69C(v178, v179);
    svtId = v180->fields.imageSvtId;
    nobletex = this->fields.nobletex;
    if ( svtId <= 0 )
      svtId = v180->fields.svtId;
    v183 = v180->fields._loadsvtLimit;
    if ( v183 == -1 )
      v183 = v180->fields.svtlimit;
    treasureDvc = v180->fields.treasureDvc;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, svtId, v183, treasureDvc, 0LL);
    v186 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v186, 0LL, 0LL) )
    {
      v189 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v189 )
        sub_B5D69C(0LL, v187);
      v190 = UnityEngine_Component__get_gameObject(v189, 0LL);
      if ( !v190 )
        sub_B5D69C(0LL, v191);
      UnityEngine_GameObject__SetActive(v190, Manager__loadNobleName, 0LL);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v188);
  }
  BattleCommandComponent__InitUnusableMarks(this, v175);
  if ( !isTDTypeChangeWindow )
  {
    v195 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v193);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v195,
      (UnityEngine_Component_o *)v195,
      1,
      v196);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v197);
    if ( !SealStatus )
      sub_B5D69C(0LL, v199);
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, v199);
    if ( (_DWORD)PrioredStatus == 1 )
    {
      BattleCommandComponent__SetActiveComponent(
        PrioredStatus,
        (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
        1,
        v200);
      displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      PrioredStatus = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(displayRemainingTurn, 0LL, 0LL);
      if ( ((unsigned __int8)PrioredStatus & 1) != 0 )
      {
        v207 = this->fields.displayRemainingTurn;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v208 = LocalizationManager__Get((System_String_o *)StringLiteral_4674/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v210 = BattleCommandComponent__get_SealStatus(this, v209);
        if ( !v210 )
          sub_B5D69C(0LL, v211);
        SleepBuff_k__BackingField = v210->fields._SleepBuff_k__BackingField;
        if ( !SleepBuff_k__BackingField )
          sub_B5D69C(v210, v211);
        turn = SleepBuff_k__BackingField->fields.turn;
        if ( turn + 1 >= 0 )
          v214 = turn + 1;
        else
          v214 = turn + 2;
        v228 = BattleUtility__FloorToInt((float)(v214 >> 1), 0LL);
        v215 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v228);
        v216 = System_String__Format(v208, v215, 0LL);
        if ( !v207 )
          sub_B5D69C(v216, v216);
        UILabel__set_text(v207, v216, 0LL);
      }
    }
    else if ( (_DWORD)PrioredStatus == 8 )
    {
      v201 = this->fields.data;
      if ( !v201 )
        sub_B5D69C(0LL, v193);
      donotActTypeSprite = this->fields.donotActTypeSprite;
      type = (BattleCommandComponent_o *)BattleCommandData__get_type(v201, v193);
      CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v204);
      if ( !donotActTypeSprite )
        sub_B5D69C(CardTypeSealSpriteName, CardTypeSealSpriteName);
      UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0LL);
    }
  }
  v217 = this->fields.data;
  if ( !v217 )
    sub_B5D69C(PrioredStatus, v193);
  BattleCommandComponent__SetCommandCodeView_18885764(this, v217->fields.commandCodeId, v194);
  v221 = this->fields.data;
  if ( !v221 )
    sub_B5D69C(v218, v219);
  BattleCommandComponent__SetCommandAssistView(this, v221->fields.commandAssistId, v220);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v222);
LABEL_155:
  BattleCommandComponent__setTouchFlg(this, 1, v99);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(svtId_label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v224 = this->fields.data;
    if ( v224 )
    {
      v225 = this->fields.svtId_label;
      v229 = v224->fields.svtId;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v229, 0LL);
      if ( v225 )
      {
        if ( gameObject )
          v226 = (System_String_o *)gameObject;
        else
          v226 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text(v225, v226, 0LL);
        return;
      }
    }
LABEL_170:
    sub_B5D69C(gameObject, v81);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0

  if ( (byte_42E7C06 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v5, v6, v7);
    byte_42E7C06 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(7, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    preDelayTime = this->fields.preDelayTime;
    v10 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v10, preDelayTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v10;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleCommandComponent__PlayStarSe_d__159_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239___ctor(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239__MoveNext(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent__WaitForErrorViewFinished_d__239_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleCommandComponent_o *_4__this; // x20
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o *tdErrorAfterAction; // x0
  System_String_o **p_busyVoiceSe; // x22
  System_String_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  int v27; // w8
  System_String_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  v4 = this;
  if ( (byte_42E7C07 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleCommandComponent__WaitForErrorViewFinished_d__239_o *)sub_B5D5C4(
                                                                          &UnityEngine_WaitForSeconds_TypeInfo,
                                                                          v5,
                                                                          v6,
                                                                          v7);
    byte_42E7C07 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      waitSeconds = v4->fields.waitSeconds;
      v10 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v10, waitSeconds, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v10;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields.__2__current,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      LOBYTE(tdErrorAfterAction) = 1;
      v4->fields.__1__state = 1;
      return (char)tdErrorAfterAction;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_25;
      BattleCommandComponent__startMoveFloat(_4__this, 0LL);
      p_busyVoiceSe = &v4->fields.busyVoiceSe;
      if ( System_String__IsNullOrEmpty(v4->fields.busyVoiceSe, 0LL) )
        goto LABEL_21;
LABEL_9:
      v19 = *p_busyVoiceSe;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      if ( SoundManager__isBusyVoice(v19, 0LL) )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(p__2__current, 0LL, v20, v21, v22, v23, v24, v25);
        v27 = 2;
LABEL_19:
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v27;
        LOBYTE(tdErrorAfterAction) = 1;
        return (char)tdErrorAfterAction;
      }
LABEL_14:
      v28 = *p_busyVoiceSe;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      this = (BattleCommandComponent__WaitForErrorViewFinished_d__239_o *)SoundManager__isBusySe(v28, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(p__2__current, 0LL, v29, v30, v31, v32, v33, v34);
        v27 = 3;
        goto LABEL_19;
      }
      if ( !_4__this )
LABEL_25:
        sub_B5D69C(this, method);
LABEL_21:
      tdErrorAfterAction = _4__this->fields.tdErrorAfterAction;
      if ( tdErrorAfterAction )
      {
        System_Action__Invoke(tdErrorAfterAction, 0LL);
LABEL_23:
        LOBYTE(tdErrorAfterAction) = 0;
      }
      return (char)tdErrorAfterAction;
    case 2:
      p_busyVoiceSe = &v4->fields.busyVoiceSe;
      v4->fields.__1__state = -1;
      goto LABEL_9;
    case 3:
      p_busyVoiceSe = &v4->fields.busyVoiceSe;
      v4->fields.__1__state = -1;
      goto LABEL_14;
    default:
      goto LABEL_23;
  }
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__WaitForErrorViewFinished_d__239__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleCommandComponent__WaitForErrorViewFinished_d__239_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239__System_IDisposable_Dispose(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C03 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent___c_TypeInfo, v1, v2, v3);
    byte_42E7C03 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleCommandComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleCommandComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall BattleCommandComponent___c___ctor(BattleCommandComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleCommandComponent___c___SetSpecialCommandCardBuffData_b__221_1(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *a,
        BattleCommandComponent_CardBuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleCommandComponent___c___UpdateCommandCardTypeChange_b__223_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B5D69C(this, 0LL);
  return c->fields.buffType == 156;
}


bool __fastcall BattleCommandComponent___c___UpdateFixedCommandCard_b__207_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B5D69C(this, 0LL);
  return c->fields.buffType == 131;
}


int32_t __fastcall BattleCommandComponent___c___selectCard_b__186_0(
        BattleCommandComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_42E7C04 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__,
      x.fields.key,
      x.fields.value,
      method);
    byte_42E7C04 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent___c__DisplayClass158_0_o *v4; // x19
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v7; // x8
  UnityEngine_Object_o *obj; // x19

  v4 = this;
  if ( (byte_42E7C05 & 1) == 0 )
  {
    this = (BattleCommandComponent___c__DisplayClass158_0_o *)sub_B5D5C4(
                                                                &UnityEngine_Object_TypeInfo,
                                                                (_DWORD)method,
                                                                v2,
                                                                v3);
    byte_42E7C05 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent___c__DisplayClass158_0_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.__4__this;
    if ( v7 )
    {
      this = (BattleCommandComponent___c__DisplayClass158_0_o *)v7->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v4->fields.obj, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_B5D69C(this, method);
  }
  obj = (UnityEngine_Object_o *)v4->fields.obj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(obj, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass221_0___ctor(
        BattleCommandComponent___c__DisplayClass221_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCommandComponent___c__DisplayClass221_0___SetSpecialCommandCardBuffData_b__0(
        BattleCommandComponent___c__DisplayClass221_0_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B5D69C(this, 0LL);
  return c->fields.buffType == this->fields.buffType;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228___ctor(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__MoveNext(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleCommandComponent_o *_4__this; // x21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  struct UISprite_o *v8; // x8
  UnityEngine_Object_o *mAtlas; // x20
  bool v10; // w20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0

  v4 = this;
  if ( (byte_42E7C08 & 1) == 0 )
  {
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)sub_B5D5C4(
                                                                                &UnityEngine_Object_TypeInfo,
                                                                                (_DWORD)method,
                                                                                v2,
                                                                                v3);
    byte_42E7C08 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)_4__this->fields.specialCardBuffIcon;
    if ( !this )
      goto LABEL_28;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
    if ( !this )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_28;
      specialCardBuffIcon = (UnityEngine_Object_o *)_4__this->fields.specialCardBuffIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
      {
        this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)_4__this->fields.specialCardBuffIcon;
        if ( this )
        {
          this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)_4__this->fields.specialCardBuffIcon;
            if ( this )
            {
              UISprite__set_atlas((UISprite_o *)this, 0LL, 0LL);
              goto LABEL_16;
            }
          }
        }
LABEL_28:
        sub_B5D69C(this, method);
      }
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_28;
LABEL_16:
  v8 = _4__this->fields.specialCardBuffIcon;
  if ( !v8 )
    goto LABEL_28;
  mAtlas = (UnityEngine_Object_o *)v8->fields.mAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL);
  v4->fields.__2__current = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, 0LL, v11, v12, v13, v14, v15, v16);
  if ( v10 )
  {
    result = 1;
    v4->fields.__1__state = 1;
  }
  else
  {
    v4->fields.__1__state = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__System_IDisposable_Dispose(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *action; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    if ( !action )
      sub_B5D69C(0LL, method);
    System_Action__Invoke(action, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleCommandComponent__delayFrame_d__160_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleCommandComponent__fadeoutEffect_d__180__MoveNext(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleCommandComponent__fadeoutEffect_d__180_o *v8; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t _1__state; // w8
  DefCoroutine_c *v13; // x0
  System_Int32_array **milliSecSix; // x1
  BattleServantConfConponent_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_o *_4__this; // x19
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x21
  struct UnityEngine_GameObject_array *v27; // x8
  UnityEngine_Transform_o *v28; // x20
  struct UnityEngine_GameObject_array *v29; // x8
  UnityEngine_Transform_o *v30; // x20
  int v31; // s0
  __int64 v34; // x0
  __int64 v35; // x0

  v8 = this;
  if ( (byte_42E7C09 & 1) == 0 )
  {
    sub_B5D5C4(&DefCoroutine_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    this = (BattleCommandComponent__fadeoutEffect_d__180_o *)sub_B5D5C4(&StringLiteral_18475/*"effect/ef_commandburn_s01"*/, v9, v10, v11);
    byte_42E7C09 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
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
        if ( v8->fields.isTresure )
        {
LABEL_28:
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
          this = (BattleCommandComponent__fadeoutEffect_d__180_o *)BaseMonoBehaviour__createObject_21082944(
                                                                     (BaseMonoBehaviour_o *)_4__this,
                                                                     (System_String_o *)StringLiteral_18475/*"effect/ef_commandburn_s01"*/,
                                                                     transform,
                                                                     0LL,
                                                                     0LL);
          if ( effectobj )
          {
            v26 = (System_Int32_array **)this;
            if ( this )
            {
              this = (BattleCommandComponent__fadeoutEffect_d__180_o *)sub_B5D684(
                                                                         this,
                                                                         effectobj->obj.klass->_1.element_class);
              if ( !this )
              {
                v35 = sub_B5D6BC(0LL);
                sub_B5D668(v35, 0LL);
              }
            }
            if ( effectobj->max_length <= 1 )
              goto LABEL_31;
            effectobj->m_Items[1] = (UnityEngine_GameObject_o *)v26;
            sub_B5D560((BattleServantConfConponent_o *)&effectobj->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
            v27 = _4__this->fields.effectobj;
            if ( !v27 )
              goto LABEL_30;
            if ( v27->max_length <= 1 )
              goto LABEL_31;
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)v27->m_Items[1];
            if ( !this )
              goto LABEL_30;
            v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
            if ( !this )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0LL);
            if ( !this )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_Transform__get_parent(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
            if ( !v28 )
              goto LABEL_30;
            UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)this, 0LL);
            v29 = _4__this->fields.effectobj;
            if ( !v29 )
              goto LABEL_30;
            if ( v29->max_length <= 1 )
            {
LABEL_31:
              v34 = sub_B5D6C8(this);
              sub_B5D668(v34, 0LL);
            }
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)v29->m_Items[1];
            if ( this )
            {
              v30 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
              *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_one(0LL);
              if ( v30 )
              {
                UnityEngine_Transform__set_localScale(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
                goto LABEL_28;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_B5D69C(this, method);
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v13 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v13 = DefCoroutine_TypeInfo;
  }
  milliSecSix = (System_Int32_array **)v13->static_fields->milliSecSix;
  v8->fields.__2__current = (Il2CppObject *)milliSecSix;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B5D560(p__2__current, milliSecSix, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleCommandComponent__fadeoutEffect_d__180_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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