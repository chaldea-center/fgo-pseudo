void __fastcall BattleCommandComponent___cctor(const MethodInfo *method)
{
  struct BattleCommandComponent_StaticFields *static_fields; // x0
  struct BattleCommandComponent_StaticFields *v2; // x0
  struct BattleCommandComponent_StaticFields *v3; // x0
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s4
  float v20; // s5
  float v21; // s6
  BattleCommandComponent_c *v22; // x8
  struct BattleCommandComponent_StaticFields *v23; // x0
  struct BattleCommandComponent_StaticFields *v24; // x0
  struct UnityEngine_Color_o v25; // [xsp+0h] [xbp-70h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434E790 & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent_TypeInfo);
    sub_B70694(&StringLiteral_19584/*"icon_cardsealed_quick"*/);
    sub_B70694(&StringLiteral_22305/*"se_"*/);
    sub_B70694(&StringLiteral_19582/*"icon_cardsealed_arts"*/);
    sub_B70694(&StringLiteral_19583/*"icon_cardsealed_buster"*/);
    sub_B70694(&StringLiteral_23491/*"v_"*/);
    byte_434E790 = 1;
  }
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_19582/*"icon_cardsealed_arts"*/;
  sub_B70630(static_fields);
  v2 = BattleCommandComponent_TypeInfo->static_fields;
  v2->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_19583/*"icon_cardsealed_buster"*/;
  sub_B70630(&v2->SEALED_CARDTYPE_ICON_BUSTER);
  v3 = BattleCommandComponent_TypeInfo->static_fields;
  v3->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_19584/*"icon_cardsealed_quick"*/;
  sub_B70630(&v3->SEALED_CARDTYPE_ICON_QUICK);
  v27.fields.r = 1.0;
  v27.fields.g = 1.0;
  v27.fields.b = 1.0;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  UnityEngine_Color___ctor_41064944(v27, v4, v5, v6, (const MethodInfo *)&methoda.token);
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = *(struct UnityEngine_Color_o *)&methoda.token;
  v28.fields.r = 0.69804;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v28.fields.g = 0.69804;
  v28.fields.b = 0.69804;
  UnityEngine_Color___ctor_41064944(v28, v7, v8, v9, (const MethodInfo *)&methoda.rgctx_data);
  v29.fields.b = 0.58824;
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault = *(struct UnityEngine_Color_o *)&methoda.rgctx_data;
  v29.fields.g = 0.93333;
  v29.fields.r = 1.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Color___ctor_41064944(v29, v10, v11, v12, (const MethodInfo *)&methoda.return_type);
  v30.fields.b = 0.070588;
  BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientTopOnBoosted = *(struct UnityEngine_Color_o *)&methoda.return_type;
  v30.fields.g = 0.63529;
  v30.fields.r = 1.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Color___ctor_41064944(v30, v13, v14, v15, (const MethodInfo *)&methoda.name);
  v31.fields.b = 0.52549;
  BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted = *(struct UnityEngine_Color_o *)&methoda.name;
  v31.fields.g = 0.88627;
  v31.fields.r = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_41064944(v31, v16, v17, v18, &methoda);
  v32.fields.g = 0.53725;
  v32.fields.b = 0.0;
  BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientTopOnBoosted = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v32.fields.r = 0.83137;
  v25 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41064944(v32, v19, v20, v21, (const MethodInfo *)&v25);
  v22 = BattleCommandComponent_TypeInfo;
  BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientBottomOnBoosted = v25;
  v23 = v22->static_fields;
  v23->voiceIdPrefix = (struct System_String_o *)StringLiteral_23491/*"v_"*/;
  sub_B70630(&v23->voiceIdPrefix);
  v24 = BattleCommandComponent_TypeInfo->static_fields;
  v24->seIdPrefix = (struct System_String_o *)StringLiteral_22305/*"se_"*/;
  sub_B70630(&v24->seIdPrefix);
}


void __fastcall BattleCommandComponent___ctor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_Array_o *v4; // x20
  System_Array_o *v5; // x20
  System_Array_o *v6; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_RuntimeFieldHandle_o v9; // 0:w1.4
  System_RuntimeFieldHandle_o v10; // 0:w1.4
  System_RuntimeFieldHandle_o v11; // 0:w1.4
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_434E78F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_B70694(&BuffList_TYPE___TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437);
    sub_B70694(&Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870);
    sub_B70694(&Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9);
    sub_B70694(&Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468);
    byte_434E78F = 1;
  }
  this->fields.effectobj = (struct UnityEngine_GameObject_array *)sub_B706AC(UnityEngine_GameObject___TypeInfo, 6LL);
  sub_B70630(&this->fields.effectobj);
  this->fields.addObjectList = (struct UnityEngine_GameObject_array *)sub_B706AC(UnityEngine_GameObject___TypeInfo, 2LL);
  sub_B70630(&this->fields.addObjectList);
  v3 = (System_Array_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 13LL);
  v9.fields.value = Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v3, v9, 0LL);
  this->fields.qabTypes = (struct BuffList_TYPE_array *)v3;
  sub_B70630(&this->fields.qabTypes);
  v4 = (System_Array_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 4LL);
  v10.fields.value = Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v4, v10, 0LL);
  this->fields.noneTdQabTypes = (struct BuffList_TYPE_array *)v4;
  sub_B70630(&this->fields.noneTdQabTypes);
  v5 = (System_Array_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 3LL);
  v11.fields.value = Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v5, v11, 0LL);
  this->fields.tdTypes = (struct BuffList_TYPE_array *)v5;
  sub_B70630(&this->fields.tdTypes);
  v6 = (System_Array_o *)sub_B706AC(BuffList_TYPE___TypeInfo, 15LL);
  v12.fields.value = Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v6, v12, 0LL);
  this->fields.otherTypes = (struct BuffList_TYPE_array *)v6;
  sub_B70630(&this->fields.otherTypes);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v7;
  sub_B70630(&this->fields.specialCardBuffList);
  this->fields.cardBuffAlphaFor = 1.0;
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v8;
  sub_B70630(&this->fields.cardEffectDict);
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
  this->fields.boostedCriticalRate += UnityEngine_Mathf__Clamp_41069588(v5, 0, toAdd, 0LL);
  BattleCommandComponent__ChangeCriticalLabelColor(this, v6);
  BattleCommandComponent__updateCount(this, 0, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__CardEffectSetActive(
        BattleCommandComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *cardEffectDict; // x0
  bool v6; // w19
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434E787 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_434E787 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(cardEffectDict, (const MethodInfo_2F4F78C *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_B7076C(cardEffectDict, value);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_26682B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v6 = value;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v8,
            (const MethodInfo_277CB58 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v8.fields.currentValue )
      sub_B7076C(0LL, v7);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8.fields.currentValue, v6, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v8,
    (const MethodInfo_277CB54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCardEffectMaskForInside(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *cardEffectDict; // x0
  changeVColor_array *v4; // x0
  __int64 v5; // x1
  changeVColor_array *v6; // x19
  int max_length; // w8
  int i; // w22
  UnityEngine_ParticleSystemRenderer_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_434E789 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_434E789 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(cardEffectDict, (const MethodInfo_2F4F78C *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_B7076C(cardEffectDict, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_26682B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v13,
            (const MethodInfo_277CB58 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v13.fields.currentValue )
      sub_B7076C(0LL, v10);
    v4 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
           (UnityEngine_GameObject_o *)v13.fields.currentValue,
           (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v6 = v4;
    if ( !v4 )
      sub_B7076C(0LL, v5);
    max_length = v4->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
          v11 = sub_B70798(v4);
          sub_B70738(v11, 0LL);
        }
        v9 = (UnityEngine_ParticleSystemRenderer_o *)v6->m_Items[i];
        if ( !v9 )
          sub_B7076C(0LL, v5);
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v9, 1, 0LL);
        max_length = v6->max_length;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v13,
    (const MethodInfo_277CB54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  void *criticallabel; // x0
  int v4; // w8
  void *v5; // x20
  unsigned int v6; // w22
  UILabel_o *v7; // x21
  UILabel_o *criticalPercentLabel; // x20
  __int64 v9; // x0

  if ( (byte_434E743 & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____69251240);
    byte_434E743 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_19;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____69251240);
  if ( !criticallabel )
    goto LABEL_19;
  v4 = *((_DWORD *)criticallabel + 6);
  v5 = criticallabel;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v4 )
      {
        v9 = sub_B70798(criticallabel);
        sub_B70738(v9, 0LL);
      }
      criticallabel = BattleCommandComponent_TypeInfo;
      v7 = (UILabel_o *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
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
        goto LABEL_13;
    }
LABEL_19:
    sub_B7076C(criticallabel, method);
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
  BattleCommandComponent_o *v3; // x19
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  int size; // w8
  __int64 cardBuffListIndex; // x21
  BattleCommandComponent_CardBuffData_o *v7; // x8
  int32_t buffType; // w8

  v3 = this;
  if ( (byte_434E783 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    this = (BattleCommandComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    byte_434E783 = 1;
  }
  specialCardBuffList = v3->fields.specialCardBuffList;
  if ( !specialCardBuffList )
    goto LABEL_13;
  size = specialCardBuffList->fields._size;
  cardBuffListIndex = v3->fields.cardBuffListIndex;
  if ( size <= (int)cardBuffListIndex )
  {
LABEL_11:
    BattleCommandComponent__SetCardBuffAlphaAnimFlag(v3, 0, v2);
    return;
  }
  if ( size <= (unsigned int)cardBuffListIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v7 = specialCardBuffList->fields._items->m_Items[cardBuffListIndex];
  if ( !v7 )
LABEL_13:
    sub_B7076C(this, method);
  buffType = v7->fields.buffType;
  if ( buffType != 156 )
  {
    if ( buffType == 131 )
    {
      BattleCommandComponent__UpdateFixedCommandCard(v3, method);
      return;
    }
    goto LABEL_11;
  }
  BattleCommandComponent__UpdateCommandCardTypeChange(v3, method);
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
    sub_B7076C(0LL, v4);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *cardEffectDict; // x0
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434E788 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_434E788 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
    goto LABEL_13;
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                cardEffectDict,
                                                                                                (const MethodInfo_2F4F78C *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !cardEffectDict )
    goto LABEL_13;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v5,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_26682B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v5,
            (const MethodInfo_277CB58 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v5.fields.currentValue;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)currentValue, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v5,
    (const MethodInfo_277CB54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
LABEL_13:
    sub_B7076C(cardEffectDict, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)cardEffectDict,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
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
  __int64 v9; // x0

  v2 = this;
  if ( (byte_434E76A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    this = (BattleCommandComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E76A = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_27;
  if ( effectobj->max_length <= 1 )
    goto LABEL_28;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.newMatriarl )
    {
      v5 = v2->fields.effectobj;
      if ( !v5 )
        goto LABEL_27;
      if ( v5->max_length <= 1 )
        goto LABEL_28;
      this = (BattleCommandComponent_o *)v5->m_Items[1];
      if ( !this )
        goto LABEL_27;
      this = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !this )
        goto LABEL_27;
      v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                     this,
                                     this->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v6, 0LL);
      v2->fields.newMatriarl = 0;
    }
    v7 = v2->fields.effectobj;
    if ( v7 )
    {
      if ( v7->max_length <= 1 )
        goto LABEL_28;
      v8 = (UnityEngine_Object_o *)v7->m_Items[1];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v8, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.objectRoot) > 1 )
        {
          this->fields.icon = 0LL;
          sub_B70630(&this->fields.icon);
          return;
        }
LABEL_28:
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
      }
    }
LABEL_27:
    sub_B7076C(this, method);
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
    sub_B7076C(0LL, method);
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
  v24 = Spawner__Spawn_26327220(spawner, (UnityEngine_Object_o *)prefab, v31, v33, 0LL);
  GameObjectExtensions__SetParent(v24, (UnityEngine_Component_o *)parent, 0LL);
  if ( !v24
    || (transform = UnityEngine_GameObject__get_transform(v24, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v26, 0LL),
        (v14 = UnityEngine_GameObject__get_transform(v24, 0LL)) == 0LL) )
  {
LABEL_6:
    sub_B7076C(v14, v15);
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
  DrumRollLabel_o *criticallabel; // x0
  UnityEngine_Object_o *countUpFinishEffect; // x20
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x19

  if ( (byte_434E742 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E742 = 1;
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
      sub_B70630(p_countUpFinishEffect);
      return;
    }
LABEL_11:
    sub_B7076C(criticallabel, method);
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

  if ( (byte_434E784 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E784 = 1;
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
    sub_B7076C(powerUpCardValue, v6);
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
  UnityEngine_Object_o *Object_31182080; // x0
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v10; // x19

  if ( (byte_434E73C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_AnimationClip_TypeInfo);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BattleDataDefine_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_16586/*"anim_erroraction"*/);
    byte_434E73C = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_34;
  Object_31182080 = AssetData__GetObject_31182080(AssetStorage, (System_String_o *)StringLiteral_16586/*"anim_erroraction"*/, 0LL);
  if ( Object_31182080 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_31182080->klass == UnityEngine_AnimationClip_TypeInfo )
      v8 = Object_31182080;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
  {
    this->fields.isSettedTreasureDeviceErrorAnim = 1;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( v8 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v8, 0LL);
        if ( Component_WebViewObject )
        {
          SimpleAnimation__AddClip(
            (SimpleAnimation_o *)Component_WebViewObject,
            (UnityEngine_AnimationClip_o *)v8,
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
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        return;
      if ( v8 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v8, 0LL);
        if ( v10 )
        {
          UnityEngine_Animation__AddClip(
            (UnityEngine_Animation_o *)v10,
            (UnityEngine_AnimationClip_o *)v8,
            (System_String_o *)AssetStorage,
            0LL);
          return;
        }
      }
    }
LABEL_34:
    sub_B7076C(AssetStorage, v6);
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

  if ( (byte_434E73B & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BattleDataDefine_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_2834/*"BattleAssetUIAtlas"*/);
    sub_B70694(&StringLiteral_19635/*"icon_error"*/);
    byte_434E73B = 1;
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    v4 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v4 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v4->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_2834/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720)) == 0LL
      || (AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.treasureDeviceErrorSprite) == 0LL) )
    {
      sub_B7076C(AssetStorage, v7);
    }
    UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_19635/*"icon_error"*/, 0LL);
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
  struct Spawner_o **p_spawner; // x20
  UnityEngine_Object_o *spawner; // x21
  const MethodInfo *v5; // x1
  Spawner_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_434E73D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_434E73D = 1;
  }
  p_spawner = &this->fields.spawner;
  this->fields.spawner = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  sub_B70630(&this->fields.spawner);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
  {
    v6 = *p_spawner;
    if ( !*p_spawner
      || (Spawner__Precache_26326572(v6, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0LL),
          (v6 = this->fields.spawner) == 0LL) )
    {
      sub_B7076C(v6, v5);
    }
    Spawner__Precache_26326572(v6, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0LL);
  }
  BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(this, v5);
  BattleCommandComponent__InitTreasureDeviceErrorAnimation(this, v7);
}


bool __fastcall BattleCommandComponent__IsAnimationBusy(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_434E78D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E78D = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v7 )
  {
    if ( Component_WebViewObject )
      return SimpleAnimation__IsPlaying((SimpleAnimation_o *)Component_WebViewObject, animationName, 0LL);
LABEL_16:
    sub_B7076C(v7, v8);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( !v7 )
    return 0;
  if ( !v6 )
    goto LABEL_16;
  return UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v6, animationName, 0LL);
}


bool __fastcall BattleCommandComponent__IsMaxCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B7076C(this, method);
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
    sub_B7076C(criticalObject, method);
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
  if ( (byte_434E761 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (BattleCommandComponent_o *)sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_434E761 = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData )
    goto LABEL_13;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (BattleCommandComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v13, 0LL);
  if ( !v4->fields.svtData
    || (v8 = (int)this,
        this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(v4->fields.svtData, 1, 0LL),
        (v9 = v4->fields.svtData) == 0LL) )
  {
LABEL_13:
    sub_B7076C(this, voiceTypeId);
  }
  v10 = (int)this;
  overwriteSvtVoiceId = v9->fields.overwriteSvtVoiceId;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__checkBattleVoice(v8, v10, overwriteSvtVoiceId, voiceTypeId, 0, 0LL);
}


void __fastcall BattleCommandComponent__OnClickEvent(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x2
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  int32_t markindex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434E75E & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23116/*"touchCommandCard"*/);
    byte_434E75E = 1;
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
      v6 = this->fields.target;
      markindex = data->fields.markindex;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex, v4);
      if ( !v6 )
        sub_B7076C(v7, v8);
      UnityEngine_GameObject__SendMessage_41092628(v6, (System_String_o *)StringLiteral_23116/*"touchCommandCard"*/, v7, 0LL);
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
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int32_t markindex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434E75F & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_8694/*"LongPress"*/);
    byte_434E75F = 1;
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
      v7 = this->fields.target;
      markindex = data->fields.markindex;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex, v5);
      if ( !v7 )
        sub_B7076C(v8, v9);
      UnityEngine_GameObject__SendMessage_41092628(v7, (System_String_o *)StringLiteral_8694/*"LongPress"*/, v8, 0LL);
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
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Object_o *v8; // x21
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v10; // x1
  UnityEngine_AnimationState_c *klass; // x8
  UnityEngine_AnimationState_o *v12; // x21
  unsigned __int64 v13; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v15; // x0

  v4 = *(long double *)&simpleAnimationTime;
  if ( (byte_434E74A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_434E74A = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v8 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
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
        UnityEngine_Animation__Play_51542184((UnityEngine_Animation_o *)v8, animationName, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B7076C(Item, v10);
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
  v12 = Item;
  if ( *(_WORD *)&Item->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v13;
      p_offset += 2;
      if ( v13 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    v15 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_13:
    v15 = sub_B08590(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_AnimationState_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v4);
  SimpleAnimation__Play_16672920((SimpleAnimation_o *)Component_WebViewObject, animationName, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  BattleCommandComponent__PlayStarSe_d__158_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_434E757 & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent__PlayStarSe_d__158_TypeInfo);
    byte_434E757 = 1;
  }
  v4 = (BattleCommandComponent__PlayStarSe_d__158_o *)sub_B70764(BattleCommandComponent__PlayStarSe_d__158_TypeInfo);
  BattleCommandComponent__PlayStarSe_d__158___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B7076C(v5, v6);
  v4->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleCommandComponent__PlayTDErrorAnimation(
        BattleCommandComponent_o *this,
        System_Action_o *tdErrorAfterAction,
        const MethodInfo *method)
{
  _BOOL4 IsAnimationBusy; // w21
  System_Delegate_o *v6; // x0
  System_Action_o **p_tdErrorAfterAction; // x20
  __int64 v8; // x1
  BattleServantData_o *svtData; // x0
  struct BattleServantData_o *v10; // x8
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  BattleCommandComponent_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_434E78E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&StringLiteral_22306/*"se_ba41"*/);
    sub_B70694(&StringLiteral_16586/*"anim_erroraction"*/);
    sub_B70694(&StringLiteral_16584/*"anim_commandfloat"*/);
    byte_434E78E = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_16584/*"anim_commandfloat"*/, method);
  v6 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.tdErrorAfterAction,
         (System_Delegate_o *)tdErrorAfterAction,
         0LL);
  if ( v6 && (System_Action_c *)v6->klass != System_Action_TypeInfo )
  {
    v14 = (BattleCommandComponent_o *)sub_B70A60(v6);
    BattleCommandComponent___ctor(v14, v15);
  }
  else
  {
    p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
    this->fields.tdErrorAfterAction = (struct System_Action_o *)v6;
    sub_B70630(&this->fields.tdErrorAfterAction);
    if ( !this->fields.isSettedTreasureDeviceErrorAnim || !IsAnimationBusy )
    {
      if ( *p_tdErrorAfterAction )
        System_Action__Invoke(*p_tdErrorAfterAction, 0LL);
    }
    else
    {
      svtData = this->fields.svtData;
      if ( !svtData
        || (BattleServantData__AddTDErrorTouchCount(svtData, 0LL), (v10 = this->fields.svtData) == 0LL)
        || (svtData = (BattleServantData_o *)v10->fields.deckSvt) == 0LL )
      {
        sub_B7076C(svtData, v8);
      }
      TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                   (BattleDeckServantData_o *)svtData,
                                   (System_String_o *)StringLiteral_22306/*"se_ba41"*/,
                                   0LL);
      BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v12);
      BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16586/*"anim_erroraction"*/, 0.0, v13);
    }
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
  Il2CppObject *v19; // x20
  __int64 v20; // x2
  Il2CppObject *v21; // x0
  BattleCommandComponent_c *v22; // x0
  BattleCommandComponent_c *v23; // x0
  _QWORD *v24; // x8
  System_Reflection_MethodBase_o *v25; // x0
  int v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_434E78B & 1) == 0 )
  {
    sub_B70694(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
    sub_B70694(&BattleCommandComponent_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&StringLiteral_24026/*"{0}_{1:D0}_{2}"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E78B = 1;
  }
  v8 = 0LL;
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
          v10 = (int)svtData;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
          svtData = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( svtData )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                            (ServantAssetLoadManager_o *)svtData,
                            v10,
                            DispLimitCount,
                            0LL);
            v13 = BattleCommandComponent_TypeInfo;
            v14 = VoicePrefix;
            if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
              v13 = BattleCommandComponent_TypeInfo;
            }
            svtData = (BattleServantData_o *)System_String__Replace_44765404(
                                               voiceSeId,
                                               v13->static_fields->voiceIdPrefix,
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            v15 = this->fields.svtData;
            if ( v15 )
            {
              v16 = (System_String_o *)svtData;
              overwriteSvtVoiceId = v15->fields.overwriteSvtVoiceId;
              if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              }
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
              v28 = v10;
              v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v18);
              v27 = v14;
              v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v20);
              return System_String__Format_44759232(
                       (System_String_o *)StringLiteral_24026/*"{0}_{1:D0}_{2}"*/,
                       v19,
                       v21,
                       (Il2CppObject *)v16,
                       0LL);
            }
          }
        }
      }
LABEL_32:
      sub_B7076C(svtData, v7);
    }
    v22 = BattleCommandComponent_TypeInfo;
    if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
      v22 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v22->static_fields->seIdPrefix, 0LL) )
    {
      v23 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v23 = BattleCommandComponent_TypeInfo;
      }
      v8 = System_String__Replace_44765404(
             voiceSeId,
             v23->static_fields->seIdPrefix,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
      v24 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 75) & 2) != 0 )
        v24 = (_QWORD *)sub_B7069C(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v25 = (System_Reflection_MethodBase_o *)sub_B70678(v24, v24[3]);
      OverwriteAssetSoundName__PlaySe(v25, v8, 0LL);
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
    sub_B7076C(svtData, method);
  }
  v8 = BattleCommandComponent__PlayTDErrorVoiceSe(this, (System_String_o *)svtData, data->fields.uniqueId, v6);
  v10 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattleCommandComponent__ReleaseNobleGaugeEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nobleGaugeEffect; // x20
  struct UnityEngine_GameObject_o **p_nobleGaugeEffect; // x19
  UnityEngine_GameObject_o *v5; // x20
  UnityEngine_Object_o *v6; // x20

  if ( (byte_434E74E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&iTween_TypeInfo);
    byte_434E74E = 1;
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
    v5 = *p_nobleGaugeEffect;
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_42945068(v5, 0LL);
    v6 = (UnityEngine_Object_o *)*p_nobleGaugeEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v6, 0LL);
    *p_nobleGaugeEffect = 0LL;
    sub_B70630(p_nobleGaugeEffect);
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
    sub_B7076C(0LL, v3);
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

  if ( (byte_434E781 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E781 = 1;
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
    v5 = this->fields.specialCardBuffIcon;
    if ( !v5 )
      sub_B7076C(0LL, v4);
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
  unsigned int v6; // w22
  UILabel_o *v7; // x21
  UILabel_o *criticalPercentLabel; // x20
  __int64 v9; // x0

  if ( (byte_434E744 & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____69251240);
    byte_434E744 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_19;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____69251240);
  if ( !criticallabel )
    goto LABEL_19;
  v4 = *((_DWORD *)criticallabel + 6);
  v5 = criticallabel;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v4 )
      {
        v9 = sub_B70798(criticallabel);
        sub_B70738(v9, 0LL);
      }
      criticallabel = BattleCommandComponent_TypeInfo;
      v7 = (UILabel_o *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
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
        goto LABEL_13;
    }
LABEL_19:
    sub_B7076C(criticallabel, method);
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
    sub_B7076C(this, method);
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

  if ( (byte_434E777 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E777 = 1;
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
      sub_B7076C(gameObject, v7);
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

  if ( (byte_434E77E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E77E = 1;
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
      sub_B7076C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetCardBuffAlphaAnimFlag(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_434E77D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E77D = 1;
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
      sub_B7076C(gameObject, v6);
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
  if ( (byte_434E765 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E765 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.facetex;
    if ( !v10 )
      goto LABEL_34;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color(v10, v17, 0LL);
  }
  bg = (UnityEngine_Object_o *)this->fields.bg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bg, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.bg;
    if ( !v10 )
      goto LABEL_34;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color(v10, v18, 0LL);
  }
  codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(codeSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.codeSprite;
    if ( !v10 )
      goto LABEL_34;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v10, v19, 0LL);
  }
  codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(codeTexture, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.codeTexture;
    if ( !v10 )
      goto LABEL_34;
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_34:
    sub_B7076C(v10, v9);
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
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *assistChargeTurnLabel; // x21
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  __int64 v12; // x1
  void *buffData; // x0
  UnityEngine_Object_o *assistSprite; // x21
  struct BattleCommandData_o *data; // x8
  struct BattleServantData_o *svtData; // x8
  int v17; // w8
  unsigned int v18; // w9
  _DWORD *v19; // x21
  struct BattleCommandData_o *v20; // x10
  int32_t v21; // w21
  int v22; // t1
  UIWidget_o *v23; // x22
  int v24; // s0
  UILabel_o *v28; // x22
  UILabel_o *v29; // x21
  __int64 v30; // x0
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_434E767 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_2437/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/);
    byte_434E767 = 1;
  }
  if ( this->fields.isInBattle )
  {
    v34.fields.r = 0.0;
    v34.fields.g = 0.0;
    v34.fields.b = 0.0;
    v34.fields.a = 0.0;
    v31.fields.r = r;
    v31.fields.g = g;
    v31.fields.b = b;
    v31.fields.a = a;
    if ( UnityEngine_Color__op_Equality(v31, v34, 0LL) )
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
          v33.fields.r = r;
          v33.fields.g = g;
          v33.fields.b = b;
          v33.fields.a = a;
          UIWidget__set_color((UIWidget_o *)buffData, v33, 0LL);
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
                v17 = *((_DWORD *)buffData + 6);
                if ( v17 >= 1 )
                {
                  v18 = 0;
                  while ( 1 )
                  {
                    if ( v18 >= v17 )
                    {
                      v30 = sub_B70798(buffData);
                      sub_B70738(v30, 0LL);
                    }
                    v19 = (_DWORD *)*((_QWORD *)buffData + (int)v18 + 4);
                    if ( !v19 )
                      goto LABEL_52;
                    v20 = this->fields.data;
                    if ( !v20 )
                      goto LABEL_52;
                    if ( v19[87] == v20->fields.commandAssistId && v19[88] == v20->fields.servantCardIdsIndex )
                      break;
                    if ( (int)++v18 >= v17 )
                      goto LABEL_45;
                  }
                  v22 = v19[28];
                  v21 = (_DWORD)v19 + 112;
                  if ( v22 >= 1 )
                  {
                    v23 = (UIWidget_o *)this->fields.assistSprite;
                    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL);
                    if ( !v23 )
                      goto LABEL_52;
                    UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
                    buffData = this->fields.assistChargeTurnLabel;
                    if ( !buffData )
                      goto LABEL_52;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    buffData = this->fields.assistRemainingTurnLabel;
                    if ( !buffData )
                      goto LABEL_52;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    v28 = this->fields.assistChargeTurnLabel;
                    buffData = System_Int32__ToString(v21, 0LL);
                    if ( !v28 )
                      goto LABEL_52;
                    UILabel__set_text(v28, (System_String_o *)buffData, 0LL);
                    v29 = this->fields.assistRemainingTurnLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2437/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                    if ( !v29 )
                      goto LABEL_52;
                    UILabel__set_text(v29, (System_String_o *)buffData, 0LL);
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
                  sub_B7076C(buffData, v12);
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
  UnityEngine_Behaviour_o *Master_WarQuestSelectionMaster; // x0
  BattleData_c *v8; // x0
  int32_t EventId; // w21
  UISprite_o *v10; // x20
  System_String_o *v11; // x21

  if ( (byte_434E770 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BattleData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E770 = 1;
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
      v8 = BattleData_TypeInfo;
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      EventId = BattleData__GetEventId((const MethodInfo *)v8);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UnityEngine_Behaviour_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
          v10 = this->fields.assistSprite;
          v11 = System_Int32__ToString((int)Master_WarQuestSelectionMaster + 48, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          if ( AtlasManager__SetEventSprite(v10, v11, 0LL) )
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
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
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
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *chargeTurnLabel; // x21
  UnityEngine_Object_o *remainingTurnLabel; // x21
  __int64 v12; // x1
  void *buffData; // x0
  UnityEngine_Object_o *codeTexture; // x21
  UnityEngine_Object_o *codeSprite; // x21
  struct BattleCommandData_o *data; // x8
  struct BattleServantData_o *svtData; // x8
  int v18; // w8
  unsigned int v19; // w9
  __int64 v20; // x21
  struct BattleCommandData_o *v21; // x10
  int32_t v22; // w21
  int v23; // t1
  UIWidget_o *v24; // x22
  int v25; // s0
  UILabel_o *v29; // x22
  UILabel_o *v30; // x21
  __int64 v31; // x0
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_434E766 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_2437/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/);
    byte_434E766 = 1;
  }
  if ( this->fields.isInBattle )
  {
    v35.fields.r = 0.0;
    v35.fields.g = 0.0;
    v35.fields.b = 0.0;
    v35.fields.a = 0.0;
    v32.fields.r = r;
    v32.fields.g = g;
    v32.fields.b = b;
    v32.fields.a = a;
    if ( UnityEngine_Color__op_Equality(v32, v35, 0LL) )
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
        v34.fields.r = r;
        v34.fields.g = g;
        v34.fields.b = b;
        v34.fields.a = a;
        UIWidget__set_color((UIWidget_o *)buffData, v34, 0LL);
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
              v18 = *((_DWORD *)buffData + 6);
              if ( v18 >= 1 )
              {
                v19 = 0;
                while ( 1 )
                {
                  if ( v19 >= v18 )
                  {
                    v31 = sub_B70798(buffData);
                    sub_B70738(v31, 0LL);
                  }
                  v20 = *((_QWORD *)buffData + (int)v19 + 4);
                  if ( !v20 )
                    goto LABEL_61;
                  v21 = this->fields.data;
                  if ( !v21 )
                    goto LABEL_61;
                  if ( *(_QWORD *)(v20 + 88) == v21->fields.userCommandCodeId )
                    break;
                  if ( (int)++v19 >= v18 )
                    goto LABEL_54;
                }
                v23 = *(_DWORD *)(v20 + 112);
                v22 = v20 + 112;
                if ( v23 >= 1 )
                {
                  if ( this->fields.isCodeTextureView )
                    v24 = (UIWidget_o *)this->fields.codeTexture;
                  else
                    v24 = (UIWidget_o *)this->fields.codeSprite;
                  *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_gray(0LL);
                  if ( !v24 )
                    goto LABEL_61;
                  UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v25, 0LL);
                  buffData = this->fields.chargeTurnLabel;
                  if ( !buffData )
                    goto LABEL_61;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  buffData = this->fields.remainingTurnLabel;
                  if ( !buffData )
                    goto LABEL_61;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  v29 = this->fields.chargeTurnLabel;
                  buffData = System_Int32__ToString(v22, 0LL);
                  if ( !v29 )
                    goto LABEL_61;
                  UILabel__set_text(v29, (System_String_o *)buffData, 0LL);
                  v30 = this->fields.remainingTurnLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2437/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                  if ( !v30 )
                    goto LABEL_61;
                  UILabel__set_text(v30, (System_String_o *)buffData, 0LL);
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
                sub_B7076C(buffData, v12);
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
  struct UITexture_o **p_codeTexture; // x19
  UITexture_o *v8; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture; // x20
  UserServantEntity_o *Entity; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w20
  UISprite_o *codeSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_434E76E & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B70694(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434E76E = 1;
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
      v8 = *p_codeTexture;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture(
                                                                  v8,
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
        sub_B70630(p_codeTexture);
      }
      return;
    }
LABEL_32:
    sub_B7076C(codeTexture, v5);
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !codeTexture )
    goto LABEL_32;
  codeTexture = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)codeTexture,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !codeTexture )
    goto LABEL_32;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)codeTexture,
             userCommandCodeId,
             (const MethodInfo_21C0668 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    v12 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v15.fields.currentCryptoKey = v12;
    *(_QWORD *)&v15.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v15, 0LL);
  }
  else
  {
    v13 = -1;
  }
  codeSprite = this->fields.codeSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, v13, 0LL);
}


void __fastcall BattleCommandComponent__SetCommandCodeView_18924384(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  struct UITexture_o **p_codeTexture; // x20
  UITexture_o *v8; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_26997720; // x19
  UISprite_o *codeSprite; // x20

  if ( (byte_434E76F & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_434E76F = 1;
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
    sub_B7076C(codeTexture, v5);
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
      v8 = *p_codeTexture;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture_26997720 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_26997720(
                                                                           v8,
                                                                           commandCodeId,
                                                                           0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_26997720, 0LL, 0LL) )
      {
        *p_codeTexture = (struct UITexture_o *)Manager__loadCommandCodeTexture_26997720;
        sub_B70630(p_codeTexture);
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
  if ( (byte_434E78A & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E78A = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( effectobj->max_length <= effectType )
  {
LABEL_15:
    v10 = sub_B70798(this);
    sub_B70738(v10, 0LL);
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
      sub_B7076C(this, *(_QWORD *)&effectType);
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
  UnityEngine_Object_o *donotPermanentSleep; // x20
  UISprite_o *v4; // x19

  if ( (byte_434E77C & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_19671/*"icon_sleep_2"*/);
    byte_434E77C = 1;
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(donotPermanentSleep, 0LL, 0LL) )
  {
    v4 = this->fields.donotPermanentSleep;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v4, (System_String_o *)StringLiteral_19671/*"icon_sleep_2"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotsleepSprite; // x20
  UISprite_o *v4; // x19

  if ( (byte_434E77B & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_19670/*"icon_sleep"*/);
    byte_434E77B = 1;
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(donotsleepSprite, 0LL, 0LL) )
  {
    v4 = this->fields.donotsleepSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v4, (System_String_o *)StringLiteral_19670/*"icon_sleep"*/, 0LL);
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
    sub_B7076C(chargeTurnLabel, active);
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
    sub_B7076C(assistChargeTurnLabel, active);
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

  if ( (byte_434E774 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E774 = 1;
  }
  LockInfo = (UnityEngine_Object_o *)this->fields.LockInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LockInfo, 0LL, 0LL) )
  {
    v7 = this->fields.LockInfo;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isLock, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetNobleGaugeEffect(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  this->fields.nobleGaugeEffect = effect;
  sub_B70630(&this->fields.nobleGaugeEffect);
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

  if ( (byte_434E776 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E776 = 1;
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
    v12 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v12 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0LL);
        if ( gameObject )
        {
          v15 = 0;
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
LABEL_17:
          UnityEngine_GameObject__SetActive(gameObject, v15, 0LL);
          return;
        }
      }
    }
    sub_B7076C(gameObject, v11);
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
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434E775 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_709/*"+{0:#,0}"*/);
    byte_434E775 = 1;
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
    v8 = this->fields.powerUpCardValue;
    v11 = powerUpValue;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v9);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_709/*"+{0:#,0}"*/, v10, 0LL);
    if ( !v8 )
LABEL_14:
      sub_B7076C(gameObject, v6);
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
  BattleCommandComponent___c__DisplayClass222_0_o *v11; // x24
  void *Index; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x25
  int32_t v16; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x8
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v19; // x21
  BattleCommandComponent_CardBuffData_o *v20; // x8
  int32_t v21; // w24
  BattleCommandComponent_CardBuffData_o *v22; // x23
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v23; // x20
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__222_1; // x21
  Il2CppObject *v26; // x22
  struct BattleCommandComponent___c_StaticFields *v27; // x0
  const MethodInfo *v28; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v29; // x8

  if ( (byte_434E77F & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent_CardBuffData_TypeInfo);
    sub_B70694(&Method_System_Comparison_BattleCommandComponent_CardBuffData___ctor__);
    sub_B70694(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_B70694(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    sub_B70694(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_B70694(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__222_1__);
    sub_B70694(&Method_BattleCommandComponent___c__DisplayClass222_0__SetSpecialCommandCardBuffData_b__0__);
    sub_B70694(&BattleCommandComponent___c__DisplayClass222_0_TypeInfo);
    sub_B70694(&BattleCommandComponent___c_TypeInfo);
    byte_434E77F = 1;
  }
  v11 = (BattleCommandComponent___c__DisplayClass222_0_o *)sub_B70764(BattleCommandComponent___c__DisplayClass222_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass222_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_32;
  v11->fields.buffType = buffType;
  specialCardBuffList = this->fields.specialCardBuffList;
  v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BattleCommandComponent___c__DisplayClass222_0__SetSpecialCommandCardBuffData_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
  if ( !specialCardBuffList )
    goto LABEL_32;
  Index = (void *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                    (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
                    (System_Predicate_T__o *)v15,
                    (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  v16 = (int)Index;
  if ( active )
  {
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.specialCardBuffList;
    if ( ((unsigned int)Index & 0x80000000) == 0 )
    {
      if ( v17 )
      {
        if ( v17->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v18 = v17->fields._items->m_Items[(int)Index];
        if ( v18 )
        {
          v18->fields.missionConditionDetailId = turn;
          v19 = this->fields.specialCardBuffList;
          if ( v19 )
          {
            if ( v19->fields._size <= (unsigned int)Index )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v20 = v19->fields._items->m_Items[(int)Index];
            if ( v20 )
            {
              v20->fields.addOrder = addOrder;
              goto LABEL_21;
            }
          }
        }
      }
LABEL_32:
      sub_B7076C(Index, v13);
    }
    v21 = v11->fields.buffType;
    v22 = (BattleCommandComponent_CardBuffData_o *)sub_B70764(BattleCommandComponent_CardBuffData_TypeInfo);
    BattleCommandComponent_CardBuffData___ctor(v22, v21, turn, addOrder, 0LL);
    if ( !v17 )
      goto LABEL_32;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v17,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__);
  }
  else if ( ((unsigned int)Index & 0x80000000) == 0 )
  {
    Index = this->fields.specialCardBuffList;
    if ( !Index )
      goto LABEL_32;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Index,
      v16,
      (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
LABEL_21:
  v23 = this->fields.specialCardBuffList;
  Index = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Index = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)Index + 23);
  _9__222_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__222_1;
  if ( !_9__222_1 )
  {
    if ( (*((_BYTE *)Index + 307) & 4) != 0 && !*((_DWORD *)Index + 56) )
    {
      j_il2cpp_runtime_class_init_0(Index);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__222_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__222_1,
      v26,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__222_1__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BattleCommandComponent_CardBuffData___ctor__);
    v27 = BattleCommandComponent___c_TypeInfo->static_fields;
    v27->__9__222_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)_9__222_1;
    sub_B70630(&v27->__9__222_1);
  }
  if ( !v23 )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__222_1,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__);
  v29 = this->fields.specialCardBuffList;
  if ( !v29 )
    goto LABEL_32;
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v29->fields._size > 0, v28);
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
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434E773 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_2477/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/);
    byte_434E773 = 1;
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
      v11 = this->fields.restTreasureDeviceChangeTurnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2477/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, 0LL);
      v15 = turn;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v13);
      gameObject = (UnityEngine_Component_o *)System_String__Format(v12, v14, 0LL);
      if ( !v11 )
LABEL_20:
        sub_B7076C(gameObject, v9);
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
  struct UISprite_o *v8; // x8
  UnityEngine_Object_o *v9; // x19

  if ( (byte_434E778 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E778 = 1;
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
    v6 = UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL);
    if ( v6 )
    {
      v8 = this->fields.nowTreasureDeviceTypeImage;
      if ( !v8 )
        sub_B7076C(v6, v7);
      *p_defaultTdTypeImageAtlas = v8->fields.mAtlas;
      sub_B70630(&this->fields.defaultTdTypeImageAtlas);
    }
  }
  v9 = (UnityEngine_Object_o *)*p_defaultTdTypeImageAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
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
  DrumRollLabel_o *v9; // x0
  int32_t v10; // w1
  DrumRollLabel_CompleteEventHandler_o *v11; // x3
  DrumRollLabel_CompleteEventHandler_o *v12; // x22

  if ( (byte_434E755 & 1) == 0 )
  {
    sub_B70694(&Method_BattleCommandComponent_compCriticallabel__);
    sub_B70694(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_434E755 = 1;
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
    sub_B7076C(criticallabel, *(_QWORD *)&count);
  }
  if ( v8->fields.nowvalue <= count )
  {
    v12 = (DrumRollLabel_CompleteEventHandler_o *)sub_B70764(DrumRollLabel_CompleteEventHandler_TypeInfo);
    DrumRollLabel_CompleteEventHandler___ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0LL);
    v9 = v8;
    v10 = count;
    v11 = v12;
  }
  else
  {
    v9 = this->fields.criticallabel;
    v10 = count;
    v11 = 0LL;
  }
  DrumRollLabel__changeParam(v9, v10, 1, v11, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__SetUnusableShortageStarSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  UISprite_o *v4; // x19

  if ( (byte_434E77A & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_19681/*"icon_unusable_star"*/);
    byte_434E77A = 1;
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    v4 = this->fields.unusableShortageStarSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v4, (System_String_o *)StringLiteral_19681/*"icon_unusable_star"*/, 0LL);
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
  __int64 v37; // x0

  if ( (byte_434E771 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E771 = 1;
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
      v9 = *(_QWORD *)&stateCodePoints->max_length;
      if ( v9 )
      {
        stateArrowPoints = this->fields.stateArrowPoints;
        if ( stateArrowPoints )
        {
          if ( *(_QWORD *)&stateArrowPoints->max_length )
          {
            if ( !(_DWORD)v9 )
              goto LABEL_52;
            friendIcon = stateCodePoints->m_Items[0];
            if ( !friendIcon )
              goto LABEL_51;
            v11 = this->fields.codeObject;
            *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(friendIcon, 0LL);
            if ( !v11 )
              goto LABEL_51;
            UnityEngine_Transform__set_position(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
            v15 = 0LL;
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
                v16 = this->fields.stateCodePoints;
                if ( !v16 )
                  goto LABEL_51;
                if ( v16->max_length <= 1 )
                  goto LABEL_52;
                friendIcon = v16->m_Items[1];
                if ( !friendIcon )
                  goto LABEL_51;
                v17 = this->fields.codeObject;
                *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_position(friendIcon, 0LL);
                if ( !v17 )
                  goto LABEL_51;
                UnityEngine_Transform__set_position(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
                v15 = 2LL;
              }
              else
              {
                friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
                if ( !friendIcon )
                  goto LABEL_51;
                friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                          (UnityEngine_Behaviour_o *)friendIcon,
                                                          0LL);
                v15 = ((unsigned __int8)friendIcon & 1) == 0;
              }
            }
            v21 = this->fields.stateArrowPoints;
            if ( !v21 )
              goto LABEL_51;
            if ( (unsigned int)v15 >= v21->max_length )
              goto LABEL_52;
            addObjectList = this->fields.addObjectList;
            if ( !addObjectList )
              goto LABEL_51;
            if ( addObjectList->max_length <= 1 )
              goto LABEL_52;
            v23 = v21->m_Items[v15];
            v24 = (UnityEngine_Object_o *)addObjectList->m_Items[1];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v25 = this->fields.addObjectList;
              if ( !v25 )
                goto LABEL_51;
              if ( v25->max_length <= 1 )
                goto LABEL_52;
              friendIcon = (UnityEngine_Transform_o *)v25->m_Items[1];
              if ( !friendIcon )
                goto LABEL_51;
              friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0LL);
              if ( !v23 )
                goto LABEL_51;
              v26 = friendIcon;
              *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_position(v23, 0LL);
              if ( !v26 )
                goto LABEL_51;
              UnityEngine_Transform__set_position(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
            }
            v30 = this->fields.addObjectList;
            if ( !v30 )
              goto LABEL_51;
            if ( !v30->max_length )
            {
LABEL_52:
              v37 = sub_B70798(friendIcon);
              sub_B70738(v37, 0LL);
            }
            v31 = (UnityEngine_Object_o *)v30->m_Items[0];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v32 = this->fields.addObjectList;
              if ( !v32 )
                goto LABEL_51;
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
LABEL_51:
                sub_B7076C(friendIcon, v7);
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
  struct BattleCommandData_o *data; // x8
  BattleBuffData_o *battleBuffData; // x0
  BattleBuffData_BuffData_array *AllConnectedCommandCardBuff; // x0
  BattleBuffData_BuffData_array *v6; // x20
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  __int64 v11; // x24
  BattleBuffData_BuffData_o *v12; // x22
  System_String_o *masterDataBytes; // x22
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  System_Xml_Schema_XmlSchemaObject_o *v18; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct BattleCommandData_o *v22; // x8
  struct BattleCommandData_o *v23; // x8
  __int64 v24; // x0
  System_Xml_XmlQualifiedName_o *key; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_434E786 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434E786 = 1;
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
        v6 = AllConnectedCommandCardBuff;
        if ( *(_QWORD *)&AllConnectedCommandCardBuff->max_length )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_48;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EffectMaster___);
          max_length = v6->max_length;
          if ( max_length >= 1 )
          {
            v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            v11 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v11 >= max_length )
              {
                v24 = sub_B70798(Instance);
                sub_B70738(v24, 0LL);
              }
              v12 = v6->m_Items[v11];
              if ( !v12 )
                break;
              if ( v12->fields.cardEffectId >= 1 )
              {
                Instance = (DataManager_o *)BattleBuffData_BuffData__isEnableCommandCardBuff(
                                              v6->m_Items[v11],
                                              this->fields.data,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  goto LABEL_14;
                Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v12, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v22 = this->fields.data;
                  if ( !v22 )
                    break;
                  if ( v12->fields.userCommandCodeId == v22->fields.userCommandCodeId )
                    goto LABEL_14;
                }
                Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v12, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v23 = this->fields.data;
                  if ( !v23 )
                    break;
                  if ( v12->fields.commandAssistId == v23->fields.commandAssistId
                    && v12->fields.cardIndex == v23->fields.servantCardIdsIndex )
                  {
LABEL_14:
                    if ( !v10 )
                      break;
                    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  v10,
                                                  v12->fields.cardEffectId,
                                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
                                                    (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        v15 = (System_String_o *)key;
                        v14 = path;
                        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                        }
                        Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                    v14,
                                                                                    v15,
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
                                                        (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
                          if ( !Instance )
                            break;
                          v18 = (System_Xml_Schema_XmlSchemaObject_o *)Instance;
                          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              (UnityEngine_GameObject_o *)Instance,
                                                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
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
                            v18,
                            (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                        }
                      }
                    }
                  }
                }
              }
              max_length = v6->max_length;
              if ( (int)++v11 >= max_length )
                return;
            }
LABEL_48:
            sub_B7076C(Instance, v8);
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
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  void *data; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__224_0; // x21
  Il2CppObject *v7; // x22
  struct BattleCommandComponent___c_StaticFields *v8; // x0
  int32_t Index; // w0
  unsigned int v10; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UISprite_o *v13; // x21
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  System_String_o *v16; // x22
  UILabel_o *v17; // x21
  __int64 v18; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v19; // x22
  System_String_o *v20; // x19
  BattleCommandComponent_CardBuffData_o *v21; // x8
  Il2CppObject *v22; // x0
  int32_t restTurn; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434E780 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    sub_B70694(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_B70694(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__224_0__);
    sub_B70694(&BattleCommandComponent___c_TypeInfo);
    sub_B70694(&StringLiteral_4684/*"DISPLAY_REMAINING_TURN"*/);
    sub_B70694(&StringLiteral_19621/*"icon_commandchange_{0}"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E780 = 1;
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
  _9__224_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__224_0;
  if ( !_9__224_0 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__224_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__224_0,
      v7,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__224_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    v8 = BattleCommandComponent___c_TypeInfo->static_fields;
    v8->__9__224_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__224_0;
    sub_B70630(&v8->__9__224_0);
  }
  if ( !specialCardBuffList )
    goto LABEL_38;
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
            (System_Predicate_T__o *)_9__224_0,
            (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( Index >= 0 )
  {
    v10 = Index;
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
        v13 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type((BattleCommandData_o *)data, method);
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &type, v14);
        v16 = System_String__Format((System_String_o *)StringLiteral_19621/*"icon_commandchange_{0}"*/, v15, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( !AtlasManager__SetEventSprite(v13, v16, 0LL) )
        {
          data = this->fields.specialCardBuffIcon;
          if ( !data )
            goto LABEL_38;
          UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v17 = this->fields.specialCardBuffTurn;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        data = LocalizationManager__Get((System_String_o *)StringLiteral_4684/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v19 = this->fields.specialCardBuffList;
        if ( v19 )
        {
          v20 = (System_String_o *)data;
          if ( v19->fields._size <= v10 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v21 = v19->fields._items->m_Items[v10];
          if ( v21 )
          {
            restTurn = v21->fields.restTurn;
            v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &restTurn, v18);
            data = System_String__Format(v20, v22, 0LL);
            if ( v17 )
            {
              UILabel__set_text(v17, (System_String_o *)data, 0LL);
              return;
            }
          }
        }
LABEL_38:
        sub_B7076C(data, method);
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
  BattleCommandData_o *data; // x0
  int32_t type; // w0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x20
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  __int64 *v11; // x8
  __int64 v12; // x2
  __int64 v13; // x2
  struct UnityEngine_GameObject_array *effectobj; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x0
  int v19; // [xsp+Ch] [xbp-24h] BYREF
  int v20; // [xsp+18h] [xbp-18h] BYREF
  int v21; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_434E764 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_16458/*"a"*/);
    sub_B70694(&StringLiteral_18525/*"effect/ef_commandup_{0}{1:00}"*/);
    sub_B70694(&StringLiteral_21953/*"q"*/);
    sub_B70694(&StringLiteral_16791/*"b"*/);
    byte_434E764 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  type = BattleCommandData__get_type(data, *(const MethodInfo **)&targetIndex);
  if ( (unsigned int)targetIndex > 2 || type == 4 || BattleCommandComponent__get_isKindOfDontAction(this, v7) )
    return;
  data = this->fields.data;
  if ( !data )
LABEL_24:
    sub_B7076C(data, *(_QWORD *)&targetIndex);
  v8 = (System_String_o *)StringLiteral_18525/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__get_type(data, *(const MethodInfo **)&targetIndex) == 3 )
  {
    v21 = targetIndex + 1;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v9);
    v11 = &StringLiteral_21953/*"q"*/;
LABEL_16:
    v8 = System_String__Format_44753704(v8, (Il2CppObject *)*v11, v10, 0LL);
    goto LABEL_17;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  if ( BattleCommandData__get_type(data, *(const MethodInfo **)&targetIndex) == 1 )
  {
    v20 = targetIndex + 1;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v12);
    v11 = &StringLiteral_16458/*"a"*/;
    goto LABEL_16;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  if ( BattleCommandData__get_type(data, *(const MethodInfo **)&targetIndex) == 2 )
  {
    v19 = targetIndex + 1;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v13);
    v11 = &StringLiteral_16791/*"b"*/;
    goto LABEL_16;
  }
LABEL_17:
  data = (BattleCommandData_o *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_24;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (BattleCommandData_o *)BaseMonoBehaviour__createObject_20856580(
                                  (BaseMonoBehaviour_o *)this,
                                  v8,
                                  transform,
                                  0LL,
                                  0LL);
  if ( !effectobj )
    goto LABEL_24;
  v16 = (UnityEngine_GameObject_o *)data;
  if ( data )
  {
    data = (BattleCommandData_o *)sub_B70754(data, effectobj->obj.klass->_1.element_class);
    if ( !data )
    {
      v18 = sub_B7078C();
      sub_B70738(v18, 0LL);
    }
  }
  if ( effectobj->max_length <= 3 )
  {
    v17 = sub_B70798(data);
    sub_B70738(v17, 0LL);
  }
  effectobj->m_Items[3] = v16;
  sub_B70630(&effectobj->m_Items[3]);
}


void __fastcall BattleCommandComponent__UpdateFixedCommandCard(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  void *v4; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__208_0; // x21
  Il2CppObject *v7; // x22
  struct BattleCommandComponent___c_StaticFields *v8; // x0
  int32_t Index; // w0
  unsigned int v10; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UILabel_o *v13; // x21
  __int64 v14; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v15; // x22
  System_String_o *v16; // x19
  BattleCommandComponent_CardBuffData_o *v17; // x8
  Il2CppObject *v18; // x0
  int32_t restTurn; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434E772 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    sub_B70694(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_B70694(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__208_0__);
    sub_B70694(&BattleCommandComponent___c_TypeInfo);
    sub_B70694(&StringLiteral_4684/*"DISPLAY_REMAINING_TURN"*/);
    sub_B70694(&StringLiteral_19581/*"icon_cardfixation"*/);
    byte_434E772 = 1;
  }
  specialCardBuffList = this->fields.specialCardBuffList;
  v4 = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    v4 = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)v4 + 23);
  _9__208_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__208_0;
  if ( !_9__208_0 )
  {
    if ( (*((_BYTE *)v4 + 307) & 4) != 0 && !*((_DWORD *)v4 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__208_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__208_0,
      v7,
      Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__208_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    v8 = BattleCommandComponent___c_TypeInfo->static_fields;
    v8->__9__208_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__208_0;
    sub_B70630(&v8->__9__208_0);
  }
  if ( !specialCardBuffList )
    goto LABEL_33;
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
            (System_Predicate_T__o *)_9__208_0,
            (const MethodInfo_3026134 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( Index >= 0 )
  {
    v10 = Index;
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
        v4 = this->fields.specialCardBuffIcon;
        if ( v4 )
        {
          UISprite__set_atlas((UISprite_o *)v4, this->fields.commandAtlas, 0LL);
          v4 = this->fields.specialCardBuffIcon;
          if ( v4 )
          {
            UISprite__set_spriteName((UISprite_o *)v4, (System_String_o *)StringLiteral_19581/*"icon_cardfixation"*/, 0LL);
            v13 = this->fields.specialCardBuffTurn;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v4 = LocalizationManager__Get((System_String_o *)StringLiteral_4684/*"DISPLAY_REMAINING_TURN"*/, 0LL);
            v15 = this->fields.specialCardBuffList;
            if ( v15 )
            {
              v16 = (System_String_o *)v4;
              if ( v15->fields._size <= v10 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
              v17 = v15->fields._items->m_Items[v10];
              if ( v17 )
              {
                restTurn = v17->fields.restTurn;
                v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &restTurn, v14);
                v4 = System_String__Format(v16, v18, 0LL);
                if ( v13 )
                {
                  UILabel__set_text(v13, (System_String_o *)v4, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_33:
        sub_B7076C(v4, method);
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateSealStatus(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x20
  UnityEngine_Object_o *perf; // x22
  BattleServantData_o *svtData; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  BattleData_o *v8; // x22
  struct BattlePerformance_o *v9; // x8
  BattleCommandSealStatus_o *v10; // x23
  const MethodInfo *v11; // x4

  if ( (byte_434E763 & 1) == 0 )
  {
    sub_B70694(&BattleCommandSealStatus_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E763 = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  data = this->fields.data;
  svtData = this->fields.svtData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Implicit(perf, 0LL);
  v8 = 0LL;
  if ( v6 )
  {
    v9 = this->fields.perf;
    if ( !v9 )
      sub_B7076C(v6, v7);
    v8 = v9->fields.data;
  }
  v10 = (BattleCommandSealStatus_o *)sub_B70764(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_18923196(v10, data, svtData, v8, v11);
  this->fields.sealStatus = v10;
  sub_B70630(&this->fields.sealStatus);
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

  if ( (byte_434E782 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E782 = 1;
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
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v6);
        UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
        BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(this, v11);
        this->fields.isChangedBuffIcon = 1;
      }
      v12 = this->fields.specialCardBuffList;
      if ( !v12 )
        goto LABEL_36;
      if ( v12->fields._size != 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( !gameObject )
          goto LABEL_36;
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
            goto LABEL_36;
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
LABEL_36:
        sub_B7076C(gameObject, v6);
      }
    }
    else
    {
LABEL_34:
      BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v7);
    }
  }
  else
  {
    v19 = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
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
  BuffMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  UISprite_o *nowTreasureDeviceTypeImage; // x20
  System_String_o *v8; // x21
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  UISpriteData_o *Sprite; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434E779 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_19585/*"icon_cardtypechange"*/);
    byte_434E779 = 1;
  }
  name = 0LL;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_23;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_WarQuestSelectionMaster,
          &name,
          buffId,
          (System_String_o *)StringLiteral_19585/*"icon_cardtypechange"*/,
          0LL) )
    goto LABEL_23;
  nowTreasureDeviceTypeImage = this->fields.nowTreasureDeviceTypeImage;
  v8 = name;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventSprite(nowTreasureDeviceTypeImage, v8, 0LL) )
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
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
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
  BattleCommandComponent__WaitForErrorViewFinished_d__240_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_434E78C & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent__WaitForErrorViewFinished_d__240_TypeInfo);
    byte_434E78C = 1;
  }
  v7 = (BattleCommandComponent__WaitForErrorViewFinished_d__240_o *)sub_B70764(BattleCommandComponent__WaitForErrorViewFinished_d__240_TypeInfo);
  BattleCommandComponent__WaitForErrorViewFinished_d__240___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.__4__this = this;
  sub_B70630(&v7->fields.__4__this);
  v7->fields.waitSeconds = waitSeconds;
  v7->fields.busyVoiceSe = busyVoiceSe;
  sub_B70630(&v7->fields.busyVoiceSe);
  return (System_Collections_IEnumerator_o *)v7;
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__135_0(
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
    sub_B7076C(this, buff);
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__135_1(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B7076C(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, 0LL)
      && !BattleBuffData_BuffData__isEnableCommandCardBuff(buff, this->fields.data, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__135_2(
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
    sub_B7076C(this, buff);
  }
  return 0;
}


void __fastcall BattleCommandComponent__addCriticalBuff(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass157_0_o *v5; // x21
  SeManager_o *Instance; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x20
  BattleCommandComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *v11; // x0
  System_String_o *CommonSeNameLocal; // x20
  System_String_o *CueSheet; // x21
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_IEnumerator_o *v17; // x1

  if ( (byte_434E756 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&Method_BattleCommandComponent___c__DisplayClass157_0__addCriticalBuff_b__0__);
    sub_B70694(&BattleCommandComponent___c__DisplayClass157_0_TypeInfo);
    byte_434E756 = 1;
  }
  v5 = (BattleCommandComponent___c__DisplayClass157_0_o *)sub_B70764(BattleCommandComponent___c__DisplayClass157_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass157_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  v5->fields.__4__this = this;
  sub_B70630(&v5->fields);
  v5->fields.obj = obj;
  sub_B70630(&v5->fields.obj);
  v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass157_0__addCriticalBuff_b__0__,
    0LL);
  v11 = BattleCommandComponent__delayFrame(v9, v8, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
  Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal(Instance, 7, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_B7076C(Instance, v7);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime(Instance, CueSheet, CommonSeNameLocal, 0LL);
  v17 = BattleCommandComponent__PlayStarSe(v15, DefaultPreDelayTime / 1000.0, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v17, 0LL);
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
    sub_B7076C(Object, v7);
  v8 = Object;
  if ( Object )
  {
    Object = (UnityEngine_GameObject_o *)sub_B70754(Object, effectobj->obj.klass->_1.element_class);
    if ( !Object )
    {
      v10 = sub_B7078C();
      sub_B70738(v10, 0LL);
    }
  }
  if ( effectobj->max_length <= 4 )
  {
    v9 = sub_B70798(Object);
    sub_B70738(v9, 0LL);
  }
  effectobj->m_Items[4] = v8;
  sub_B70630(&effectobj->m_Items[4]);
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Transform_o *transform; // x22
  int v14; // s0
  __int64 v18; // x2
  BattleCommandComponent_o *v19; // x22
  System_String_o *v20; // x23
  struct UnityEngine_GameObject_array *v21; // x22
  Il2CppClass **v22; // x0
  struct UnityEngine_GameObject_array *v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  v26 = type;
  if ( (byte_434E746 & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_B70694(&StringLiteral_18501/*"effect/"*/);
    byte_434E746 = 1;
  }
  addObjectList = v6->fields.addObjectList;
  if ( !addObjectList )
    goto LABEL_25;
  if ( addObjectList->max_length <= type )
    goto LABEL_26;
  v8 = (UnityEngine_Object_o *)addObjectList->m_Items[type];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.addObjectList;
    if ( !v9 )
      goto LABEL_25;
    if ( v9->max_length <= type )
      goto LABEL_26;
    v10 = (UnityEngine_Object_o *)v9->m_Items[type];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v10, 0LL);
  }
  v11 = System_String__Concat_44758168((System_String_o *)StringLiteral_18501/*"effect/"*/, name, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_20856580(
                                       (BaseMonoBehaviour_o *)v6,
                                       v11,
                                       v6->fields.objectRoot,
                                       0LL,
                                       0LL);
  if ( !this )
    goto LABEL_25;
  v12 = (UnityEngine_Object_o *)this;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v14 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v14, 0LL),
        (this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(
                                              BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo,
                                              &v26,
                                              v18)) == 0LL)
    || (v19 = this,
        v20 = (System_String_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, void *))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass[1]._1.image),
        v26 = *(_DWORD *)j_il2cpp_object_unbox_0(v19),
        UnityEngine_Object__set_name(v12, v20, 0LL),
        (v21 = v6->fields.addObjectList) == 0LL) )
  {
LABEL_25:
    sub_B7076C(this, name);
  }
  this = (BattleCommandComponent_o *)sub_B70754(v12, v21->obj.klass->_1.element_class);
  if ( !this )
  {
    v25 = sub_B7078C();
    sub_B70738(v25, 0LL);
  }
  if ( v21->max_length <= type )
    goto LABEL_26;
  v22 = &v21->obj.klass + type;
  v22[4] = (Il2CppClass *)v12;
  sub_B70630(v22 + 4);
  v23 = v6->fields.addObjectList;
  if ( !v23 )
    goto LABEL_25;
  if ( v23->max_length <= type )
  {
LABEL_26:
    v24 = sub_B70798(this);
    sub_B70738(v24, 0LL);
  }
  this = (BattleCommandComponent_o *)v23->m_Items[type];
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
  UnityEngine_GameObject_o *Object_20856580; // x0
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

  if ( (byte_434E75A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18501/*"effect/"*/);
    byte_434E75A = 1;
  }
  v7 = System_String__Concat_44758168((System_String_o *)StringLiteral_18501/*"effect/"*/, name, 0LL);
  Object_20856580 = BaseMonoBehaviour__createObject_20856580(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0LL,
                      0LL);
  if ( !Object_20856580 )
    goto LABEL_12;
  v10 = Object_20856580;
  transform = UnityEngine_GameObject__get_transform(Object_20856580, 0LL);
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
    sub_B7076C(Object_20856580, v9);
  }
  if ( (signed int)effectobj->max_length > index )
  {
    v20 = sub_B70754(v10, effectobj->obj.klass->_1.element_class);
    if ( !v20 )
    {
      v22 = sub_B7078C();
      sub_B70738(v22, 0LL);
    }
    if ( effectobj->max_length <= index )
    {
      v23 = sub_B70798(v20);
      sub_B70738(v23, 0LL);
    }
    v21 = &effectobj->obj.klass + index;
    v21[4] = (Il2CppClass *)v10;
    sub_B70630(v21 + 4);
  }
}


bool __fastcall BattleCommandComponent__checkCriticalPointValid(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_B7076C(0LL, method);
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
  sub_B70630(&this->fields.countUpFinishEffect);
  transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (UnityEngine_Transform_o *)*p_countUpFinishEffect) == 0LL) )
  {
LABEL_14:
    sub_B7076C(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  this->fields.isCountUp = 0;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_434E785 & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_TypeInfo);
    byte_434E785 = 1;
  }
  v3 = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *)sub_B70764(BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_TypeInfo);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  v3->fields.__4__this = this;
  sub_B70630(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__delayFrame(
        BattleCommandComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  BattleCommandComponent__delayFrame_d__159_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_434E758 & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent__delayFrame_d__159_TypeInfo);
    byte_434E758 = 1;
  }
  v4 = (BattleCommandComponent__delayFrame_d__159_o *)sub_B70764(BattleCommandComponent__delayFrame_d__159_TypeInfo);
  BattleCommandComponent__delayFrame_d__159___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B7076C(v5, v6);
  v4->fields.action = action;
  sub_B70630(&v4->fields.action);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleCommandComponent__endFashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x0

  v2 = this;
  if ( (byte_434E76C & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E76C = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_16;
  if ( !effectobj->max_length )
    goto LABEL_17;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( v5->max_length )
      {
        v6 = (UnityEngine_Object_o *)v5->m_Items[0];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36067208(v6, 0LL);
        return;
      }
LABEL_17:
      v7 = sub_B70798(this);
      sub_B70738(v7, 0LL);
    }
LABEL_16:
    sub_B7076C(this, method);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__fadeoutEffect(
        BattleCommandComponent_o *this,
        bool isTresure,
        const MethodInfo *method)
{
  BattleCommandComponent__fadeoutEffect_d__179_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_434E75C & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent__fadeoutEffect_d__179_TypeInfo);
    byte_434E75C = 1;
  }
  v5 = (BattleCommandComponent__fadeoutEffect_d__179_o *)sub_B70764(BattleCommandComponent__fadeoutEffect_d__179_TypeInfo);
  BattleCommandComponent__fadeoutEffect_d__179___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.__4__this = this;
  sub_B70630(&v5->fields.__4__this);
  v5->fields.isTresure = isTresure;
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
  __int64 v5; // x0

  if ( index >= 3 )
    goto LABEL_6;
  if ( !combo || (sameflg = combo->fields.sameflg) == 0LL )
    sub_B7076C(this, index);
  if ( sameflg->max_length <= index )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
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
    sub_B7076C(this, index);
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
  UnityEngine_Component_o *v9; // x21
  struct UnityEngine_GameObject_array *v10; // x8
  UIWidget_o *v11; // x20
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x22
  __int64 v14; // x0
  UnityEngine_Material_o *v15; // x21
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  System_Object_array *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *v28; // x22
  __int64 v29; // x1
  Il2CppObject *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x1
  System_Collections_Hashtable_o *v33; // x0
  float v34; // s4
  float v35; // s5
  float v36; // s6
  float v37; // s7
  struct UnityEngine_GameObject_array *v38; // x8
  UnityEngine_GameObject_o *v39; // x19
  __int64 v40; // x0
  __int64 v41; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_434E769 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&UnityEngine_Vector3_TypeInfo);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21607/*"oncompletetarget"*/);
    sub_B70694(&StringLiteral_18626/*"endFashSvt"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&StringLiteral_16138/*"_AddColor"*/);
    sub_B70694(&StringLiteral_22261/*"scale"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_434E769 = 1;
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
    v7 = (UnityEngine_GameObject_o *)gameObject;
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
                                              v7,
                                              parent,
                                              0LL,
                                              0LL);
    if ( !effectobj )
      goto LABEL_66;
    v9 = gameObject;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)sub_B70754(gameObject, effectobj->obj.klass->_1.element_class)) != 0LL )
    {
      if ( effectobj->max_length <= 1 )
        goto LABEL_67;
      effectobj->m_Items[1] = (UnityEngine_GameObject_o *)v9;
      sub_B70630(&effectobj->m_Items[1]);
      v10 = this->fields.effectobj;
      if ( !v10 )
        goto LABEL_66;
      if ( v10->max_length <= 1 )
        goto LABEL_67;
      gameObject = (UnityEngine_Component_o *)v10->m_Items[1];
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !gameObject )
        goto LABEL_66;
      v11 = (UIWidget_o *)gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( !gameObject )
        goto LABEL_66;
      v43.fields.z = -5.0;
      v43.fields.x = 0.0;
      v43.fields.y = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v43, 0LL);
      this->fields.newMatriarl = 1;
      v12 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v11->klass->vtable._28_get_shader.method)(
                                      v11,
                                      v11->klass->vtable._29_set_shader.methodPtr);
      v13 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v13, v12, 0LL);
      ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v11->klass->vtable._25_set_material.method)(
        v11,
        v13,
        v11->klass->vtable._26_get_mainTexture.methodPtr);
      v14 = ((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v11->klass->vtable._24_get_material.method)(
              v11,
              v11->klass->vtable._25_set_material.methodPtr);
      v44.fields.r = 1.0;
      v15 = (UnityEngine_Material_o *)v14;
      v44.fields.a = 0.0;
      v44.fields.g = 1.0;
      v44.fields.b = 1.0;
      methoda.parameters = 0LL;
      methoda.rgctx_data = 0LL;
      UnityEngine_Color___ctor(v44, v16, v17, v18, v19, (const MethodInfo *)&methoda.parameters);
      if ( !v15 )
        goto LABEL_66;
      UnityEngine_Material__SetColor(
        v15,
        (System_String_o *)StringLiteral_16138/*"_AddColor"*/,
        *(UnityEngine_Color_o *)&methoda.parameters,
        0LL);
      UIWidget__set_depth(v11, this->fields.basedepth + 400, 0LL);
      v20 = this->fields.effectobj;
      if ( !v20 )
        goto LABEL_66;
      if ( v20->max_length <= 1 )
        goto LABEL_67;
      v21 = v20->m_Items[1];
      gameObject = (UnityEngine_Component_o *)sub_B706AC(object___TypeInfo, 8LL);
      if ( !gameObject )
        goto LABEL_66;
      v22 = (System_Object_array *)gameObject;
      gameObject = (UnityEngine_Component_o *)StringLiteral_22261/*"scale"*/;
      if ( StringLiteral_22261/*"scale"*/ )
      {
        gameObject = (UnityEngine_Component_o *)sub_B70754(StringLiteral_22261/*"scale"*/, v22->obj.klass->_1.element_class);
        if ( !gameObject )
          goto LABEL_68;
        v23 = StringLiteral_22261/*"scale"*/;
      }
      else
      {
        v23 = 0LL;
      }
      if ( !v22->max_length )
        goto LABEL_67;
      v22->m_Items[0] = (Il2CppObject *)v23;
      sub_B70630(v22->m_Items);
      methoda.klass = (Il2CppClass *)vdup_n_s32(0x3FE66666u).n64_u64[0];
      LODWORD(methoda.return_type) = 1065353216;
      gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &methoda.klass, v24);
      v25 = (Il2CppObject *)gameObject;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)sub_B70754(gameObject, v22->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v22->max_length <= 1 )
          goto LABEL_67;
        v22->m_Items[1] = v25;
        sub_B70630(&v22->m_Items[1]);
        gameObject = (UnityEngine_Component_o *)StringLiteral_23053/*"time"*/;
        if ( StringLiteral_23053/*"time"*/ )
        {
          gameObject = (UnityEngine_Component_o *)sub_B70754(StringLiteral_23053/*"time"*/, v22->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_68;
          v26 = StringLiteral_23053/*"time"*/;
        }
        else
        {
          v26 = 0LL;
        }
        if ( v22->max_length <= 2 )
          goto LABEL_67;
        v22->m_Items[2] = (Il2CppObject *)v26;
        sub_B70630(&v22->m_Items[2]);
        HIDWORD(methoda.name) = 1065353216;
        gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&methoda.name + 4, v27);
        v28 = (Il2CppObject *)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)sub_B70754(gameObject, v22->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v22->max_length <= 3 )
            goto LABEL_67;
          v22->m_Items[3] = v28;
          sub_B70630(&v22->m_Items[3]);
          gameObject = (UnityEngine_Component_o *)StringLiteral_21607/*"oncompletetarget"*/;
          if ( StringLiteral_21607/*"oncompletetarget"*/ )
          {
            gameObject = (UnityEngine_Component_o *)sub_B70754(StringLiteral_21607/*"oncompletetarget"*/, v22->obj.klass->_1.element_class);
            if ( !gameObject )
              goto LABEL_68;
            v29 = StringLiteral_21607/*"oncompletetarget"*/;
          }
          else
          {
            v29 = 0LL;
          }
          if ( v22->max_length <= 4 )
            goto LABEL_67;
          v22->m_Items[4] = (Il2CppObject *)v29;
          sub_B70630(&v22->m_Items[4]);
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          v30 = (Il2CppObject *)gameObject;
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)sub_B70754(gameObject, v22->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v22->max_length <= 5 )
              goto LABEL_67;
            v22->m_Items[5] = v30;
            sub_B70630(&v22->m_Items[5]);
            gameObject = (UnityEngine_Component_o *)StringLiteral_21605/*"oncomplete"*/;
            if ( StringLiteral_21605/*"oncomplete"*/ )
            {
              gameObject = (UnityEngine_Component_o *)sub_B70754(StringLiteral_21605/*"oncomplete"*/, v22->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_68;
              v31 = StringLiteral_21605/*"oncomplete"*/;
            }
            else
            {
              v31 = 0LL;
            }
            if ( v22->max_length <= 6 )
              goto LABEL_67;
            v22->m_Items[6] = (Il2CppObject *)v31;
            sub_B70630(&v22->m_Items[6]);
            gameObject = (UnityEngine_Component_o *)StringLiteral_18626/*"endFashSvt"*/;
            if ( !StringLiteral_18626/*"endFashSvt"*/ )
            {
              v32 = 0LL;
              goto LABEL_58;
            }
            gameObject = (UnityEngine_Component_o *)sub_B70754(StringLiteral_18626/*"endFashSvt"*/, v22->obj.klass->_1.element_class);
            if ( gameObject )
            {
              v32 = StringLiteral_18626/*"endFashSvt"*/;
LABEL_58:
              if ( v22->max_length <= 7 )
                goto LABEL_67;
              v22->m_Items[7] = (Il2CppObject *)v32;
              sub_B70630(&v22->m_Items[7]);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v33 = iTween__Hash(v22, 0LL);
              iTween__ScaleTo_42832904(v21, v33, 0LL);
              v38 = this->fields.effectobj;
              if ( v38 )
              {
                if ( v38->max_length > 1 )
                {
                  v39 = v38->m_Items[1];
                  v45.fields.r = 0.0;
                  v45.fields.g = 0.0;
                  v45.fields.b = 0.0;
                  v45.fields.a = 0.0;
                  methoda.methodPointer = 0LL;
                  methoda.invoker_method = 0LL;
                  UnityEngine_Color___ctor(v45, v34, v35, v36, v37, &methoda);
                  *(_QWORD *)&v46.fields.r = methoda.methodPointer;
                  *(_QWORD *)&v46.fields.b = methoda.invoker_method;
                  TweenColor__Begin(v39, 1.0, v46, 0LL);
                  return;
                }
LABEL_67:
                v40 = sub_B70798(gameObject);
                sub_B70738(v40, 0LL);
              }
LABEL_66:
              sub_B7076C(gameObject, v4);
            }
          }
        }
      }
    }
LABEL_68:
    v41 = sub_B7078C();
    sub_B70738(v41, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_Transform_o *v9; // x22
  UnityEngine_Transform_o *transform; // x0
  BattleCommandComponent_o *v11; // x21
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  struct UnityEngine_GameObject_array *v18; // x8
  UnityEngine_GameObject_o *v19; // x20
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  BattleCommandComponent_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  BattleCommandComponent_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  BattleCommandComponent_o *v28; // x22
  __int64 v29; // x1
  BattleCommandComponent_o *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x1
  System_Collections_Hashtable_o *v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v2 = this;
  if ( (byte_434E76B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&UnityEngine_Vector3_TypeInfo);
    sub_B70694(&StringLiteral_18627/*"endFashTypeCard"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21607/*"oncompletetarget"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&StringLiteral_22261/*"scale"*/);
    this = (BattleCommandComponent_o *)sub_B70694(&iTween_TypeInfo);
    byte_434E76B = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_77;
  if ( !effectobj->max_length )
    goto LABEL_78;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_77;
    if ( !v5->max_length )
      goto LABEL_78;
    v6 = (UnityEngine_Object_o *)v5->m_Items[0];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v6, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.icon;
  if ( !this )
    goto LABEL_77;
  v7 = v2->fields.effectobj;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v2->fields.nomalwidget )
    goto LABEL_77;
  v8 = (UnityEngine_GameObject_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                       0LL);
  if ( !this )
    goto LABEL_77;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_77;
  this = (BattleCommandComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !v2->fields.icon )
    goto LABEL_77;
  v9 = (UnityEngine_Transform_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.icon,
                                       0LL);
  if ( !this )
    goto LABEL_77;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v2, v8, v9, transform, 0LL);
  if ( !v7 )
    goto LABEL_77;
  v11 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B70754(this, v7->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( !v7->max_length )
    goto LABEL_78;
  v7->m_Items[0] = (UnityEngine_GameObject_o *)v11;
  sub_B70630(v7->m_Items);
  v12 = v2->fields.effectobj;
  if ( !v12 )
    goto LABEL_77;
  if ( !v12->max_length )
    goto LABEL_78;
  this = (BattleCommandComponent_o *)v12->m_Items[0];
  if ( !this )
    goto LABEL_77;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
    UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, v2->fields.basedepth + 400, 0LL);
    v18 = v2->fields.effectobj;
    if ( !v18 )
      goto LABEL_77;
    if ( !v18->max_length )
      goto LABEL_78;
    v19 = v18->m_Items[0];
    v37.fields.r = 0.0;
    v37.fields.g = 0.0;
    v37.fields.b = 0.0;
    v37.fields.a = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Color___ctor(v37, v14, v15, v16, v17, &var40);
    *(_QWORD *)&v38.fields.r = var40.methodPointer;
    *(_QWORD *)&v38.fields.b = var40.invoker_method;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v19, 1.0, v38, 0LL);
  }
  v20 = v2->fields.effectobj;
  if ( !v20 )
    goto LABEL_77;
  if ( !v20->max_length )
    goto LABEL_78;
  v21 = v20->m_Items[0];
  this = (BattleCommandComponent_o *)sub_B706AC(object___TypeInfo, 8LL);
  if ( !this )
LABEL_77:
    sub_B7076C(this, method);
  v22 = this;
  this = (BattleCommandComponent_o *)StringLiteral_22261/*"scale"*/;
  if ( StringLiteral_22261/*"scale"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B70754(StringLiteral_22261/*"scale"*/, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v23 = StringLiteral_22261/*"scale"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !LODWORD(v22->fields.objectRoot) )
    goto LABEL_78;
  v22->fields.bg = (struct UISprite_o *)v23;
  sub_B70630(&v22->fields.bg);
  var40.methodPointer = (Il2CppMethodPointer)0x4000000040000000LL;
  LODWORD(var40.invoker_method) = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &var40, v24);
  v25 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B70754(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( LODWORD(v22->fields.objectRoot) <= 1 )
    goto LABEL_78;
  v22->fields.icon = (struct UISprite_o *)v25;
  sub_B70630(&v22->fields.icon);
  this = (BattleCommandComponent_o *)StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B70754(StringLiteral_23053/*"time"*/, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v26 = StringLiteral_23053/*"time"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( LODWORD(v22->fields.objectRoot) <= 2 )
    goto LABEL_78;
  v22->fields.text = (struct UISprite_o *)v26;
  sub_B70630(&v22->fields.text);
  HIDWORD(var40.klass) = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&var40.klass + 4, v27);
  v28 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B70754(this, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( LODWORD(v22->fields.objectRoot) <= 3 )
    goto LABEL_78;
  v22->fields.facetex = (struct UITexture_o *)v28;
  sub_B70630(&v22->fields.facetex);
  this = (BattleCommandComponent_o *)StringLiteral_21607/*"oncompletetarget"*/;
  if ( StringLiteral_21607/*"oncompletetarget"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B70754(StringLiteral_21607/*"oncompletetarget"*/, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v29 = StringLiteral_21607/*"oncompletetarget"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( LODWORD(v22->fields.objectRoot) <= 4 )
    goto LABEL_78;
  v22->fields.nobletex = (struct UITexture_o *)v29;
  sub_B70630(&v22->fields.nobletex);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  v30 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B70754(this, v22->klass->_1.element_class);
    if ( !this )
    {
LABEL_79:
      v35 = sub_B7078C();
      sub_B70738(v35, 0LL);
    }
  }
  if ( LODWORD(v22->fields.objectRoot) <= 5 )
    goto LABEL_78;
  v22->fields.friendIcon = (struct UISprite_o *)v30;
  sub_B70630(&v22->fields.friendIcon);
  this = (BattleCommandComponent_o *)StringLiteral_21605/*"oncomplete"*/;
  if ( StringLiteral_21605/*"oncomplete"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B70754(StringLiteral_21605/*"oncomplete"*/, v22->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v31 = StringLiteral_21605/*"oncomplete"*/;
  }
  else
  {
    v31 = 0LL;
  }
  if ( LODWORD(v22->fields.objectRoot) <= 6 )
    goto LABEL_78;
  v22->fields.sealedSprite = (struct UISprite_o *)v31;
  sub_B70630(&v22->fields.sealedSprite);
  this = (BattleCommandComponent_o *)StringLiteral_18627/*"endFashTypeCard"*/;
  if ( StringLiteral_18627/*"endFashTypeCard"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B70754(StringLiteral_18627/*"endFashTypeCard"*/, v22->klass->_1.element_class);
    if ( this )
    {
      v32 = StringLiteral_18627/*"endFashTypeCard"*/;
      goto LABEL_72;
    }
    goto LABEL_79;
  }
  v32 = 0LL;
LABEL_72:
  if ( LODWORD(v22->fields.objectRoot) <= 7 )
  {
LABEL_78:
    v34 = sub_B70798(this);
    sub_B70738(v34, 0LL);
  }
  v22->fields.unusableNpSprite = (struct UISprite_o *)v32;
  sub_B70630(&v22->fields.unusableNpSprite);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v33 = iTween__Hash((System_Object_array *)v22, 0LL);
  iTween__ScaleTo_42832904(v21, v33, 0LL);
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

  if ( (byte_434E749 & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E749 = 1;
  }
  switch ( commandType )
  {
    case 3:
      v6 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v6 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v6->static_fields->SEALED_CARDTYPE_ICON_QUICK;
      break;
    case 2:
      v7 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v7 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v7->static_fields->SEALED_CARDTYPE_ICON_BUSTER;
      break;
    case 1:
      v4 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
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
    sub_B7076C(0LL, method);
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
  UnityEngine_Object_o *powerUpCardIcon; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8

  if ( (byte_434E740 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E740 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.powerUpCardIcon;
  if ( !v6 )
    sub_B7076C(v4, v5);
  return v6->fields.mDepth;
}


int32_t __fastcall BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B7076C(this, method);
  return data->fields.svtId;
}


int32_t __fastcall BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B7076C(this, method);
  return data->fields.svtlimit;
}


int32_t __fastcall BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B7076C(this, method);
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *__fastcall BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *result; // x0
  BattleCommandSealStatus_o **p_sealStatus; // x19
  BattleCommandSealStatus_o *sealStatus; // t1
  BattleCommandSealStatus_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_434E73A & 1) == 0 )
  {
    sub_B70694(&BattleCommandSealStatus_TypeInfo);
    byte_434E73A = 1;
  }
  sealStatus = this->fields.sealStatus;
  p_sealStatus = &this->fields.sealStatus;
  result = sealStatus;
  if ( !sealStatus )
  {
    v6 = (BattleCommandSealStatus_o *)sub_B70764(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v6, v7);
    *p_sealStatus = v6;
    sub_B70630(p_sealStatus);
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
    sub_B7076C(0LL, v3);
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, v3);
}


bool __fastcall BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_B7076C(0LL, v3);
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
  struct UIWidget_o *nomalwidget; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct UnityEngine_GameObject_array *addObjectList; // x8
  __int64 v7; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  __int64 v12; // x0

  if ( (byte_434E75D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E75D = 1;
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
LABEL_17:
    sub_B7076C(nomalwidget, method);
  }
  v7 = 4LL;
  while ( 1 )
  {
    max_length = addObjectList->max_length;
    v9 = v7 - 4;
    if ( v7 - 4 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_19;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&addObjectList->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    nomalwidget = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      v11 = this->fields.addObjectList;
      if ( !v11 )
        goto LABEL_17;
      if ( v9 >= v11->max_length )
      {
LABEL_19:
        v12 = sub_B70798(nomalwidget);
        sub_B70738(v12, 0LL);
      }
      nomalwidget = (struct UIWidget_o *)*((_QWORD *)&v11->obj.klass + v7);
      if ( !nomalwidget )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nomalwidget, 0, 0LL);
    }
    addObjectList = this->fields.addObjectList;
    ++v7;
    if ( !addObjectList )
      goto LABEL_17;
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
    sub_B7076C(this, method);
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
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  System_Object_array *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x22
  System_Collections_Hashtable_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x20
  System_Object_array *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x22
  System_Collections_Hashtable_o *v31; // x0
  const MethodInfo *v32; // x2
  System_Collections_IEnumerator_o *v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  float v36; // [xsp+0h] [xbp-60h] BYREF
  int v37; // [xsp+4h] [xbp-5Ch] BYREF
  float v38; // [xsp+8h] [xbp-58h] BYREF
  int v39; // [xsp+Ch] [xbp-54h] BYREF
  int v40; // [xsp+18h] [xbp-48h] BYREF
  int v41; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_434E75B & 1) == 0 )
  {
    sub_B70694(&object___TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_23699/*"x"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_23791/*"y"*/);
    sub_B70694(&StringLiteral_23835/*"z"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_434E75B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = sub_B706AC(object___TypeInfo, 8LL);
  if ( !v6 )
    goto LABEL_59;
  v8 = (System_Object_array *)v6;
  v9 = StringLiteral_23699/*"x"*/;
  if ( StringLiteral_23699/*"x"*/ )
  {
    v9 = sub_B70754(StringLiteral_23699/*"x"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v10 = StringLiteral_23699/*"x"*/;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v8->max_length )
    goto LABEL_57;
  v8->m_Items[0] = (Il2CppObject *)v10;
  sub_B70630(v8->m_Items);
  v41 = 0x40000000;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v41, v11);
  v12 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_B70754(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_57;
  v8->m_Items[1] = v12;
  sub_B70630(&v8->m_Items[1]);
  v9 = StringLiteral_23791/*"y"*/;
  if ( StringLiteral_23791/*"y"*/ )
  {
    v9 = sub_B70754(StringLiteral_23791/*"y"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v13 = StringLiteral_23791/*"y"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_57;
  v8->m_Items[2] = (Il2CppObject *)v13;
  sub_B70630(&v8->m_Items[2]);
  v40 = 0x40000000;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v40, v14);
  v15 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_B70754(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_57;
  v8->m_Items[3] = v15;
  sub_B70630(&v8->m_Items[3]);
  v9 = StringLiteral_23835/*"z"*/;
  if ( StringLiteral_23835/*"z"*/ )
  {
    v9 = sub_B70754(StringLiteral_23835/*"z"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v16 = StringLiteral_23835/*"z"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v8->max_length <= 4 )
    goto LABEL_57;
  v8->m_Items[4] = (Il2CppObject *)v16;
  sub_B70630(&v8->m_Items[4]);
  v39 = 1065353216;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v39, v17);
  v18 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_B70754(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( v8->max_length <= 5 )
    goto LABEL_57;
  v8->m_Items[5] = v18;
  sub_B70630(&v8->m_Items[5]);
  v9 = StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v9 = sub_B70754(StringLiteral_23053/*"time"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v19 = StringLiteral_23053/*"time"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v8->max_length <= 6 )
    goto LABEL_57;
  v8->m_Items[6] = (Il2CppObject *)v19;
  sub_B70630(&v8->m_Items[6]);
  v38 = ftime + 0.1;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v38, v20);
  v21 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_B70754(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( v8->max_length <= 7 )
    goto LABEL_57;
  v8->m_Items[7] = v21;
  sub_B70630(&v8->m_Items[7]);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v22 = iTween__Hash(v8, 0LL);
  iTween__ScaleTo_42832904(gameObject, v22, 0LL);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = sub_B706AC(object___TypeInfo, 4LL);
  if ( !v6 )
LABEL_59:
    sub_B7076C(v6, v7);
  v24 = (System_Object_array *)v6;
  v9 = StringLiteral_23835/*"z"*/;
  if ( StringLiteral_23835/*"z"*/ )
  {
    v9 = sub_B70754(StringLiteral_23835/*"z"*/, v24->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v25 = StringLiteral_23835/*"z"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v24->max_length )
    goto LABEL_57;
  v24->m_Items[0] = (Il2CppObject *)v25;
  sub_B70630(v24->m_Items);
  v37 = 1144258560;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v37, v26);
  v27 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_B70754(v9, v24->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_57;
  v24->m_Items[1] = v27;
  sub_B70630(&v24->m_Items[1]);
  v9 = StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v9 = sub_B70754(StringLiteral_23053/*"time"*/, v24->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_58;
    v28 = StringLiteral_23053/*"time"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_57;
  v24->m_Items[2] = (Il2CppObject *)v28;
  sub_B70630(&v24->m_Items[2]);
  v36 = ftime;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v36, v29);
  v30 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_B70754(v9, v24->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_58:
      v35 = sub_B7078C();
      sub_B70738(v35, 0LL);
    }
  }
  if ( v24->max_length <= 3 )
  {
LABEL_57:
    v34 = sub_B70798(v9);
    sub_B70738(v34, 0LL);
  }
  v24->m_Items[3] = v30;
  sub_B70630(&v24->m_Items[3]);
  v31 = iTween__Hash(v24, 0LL);
  iTween__RotateTo_42837996(v23, v31, 0LL);
  v33 = BattleCommandComponent__fadeoutEffect(this, 1, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
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
  BattleCommandComponent_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x0

  v2 = this;
  if ( (byte_434E74D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_B70694(&StringLiteral_18529/*"effect/ef_noblecard"*/);
    byte_434E74D = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_21;
  if ( effectobj->max_length <= 2 )
    goto LABEL_22;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_21;
    if ( v5->max_length <= 2 )
      goto LABEL_22;
    v6 = (UnityEngine_Object_o *)v5->m_Items[2];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_36067420(v6, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.nomalwidget;
  if ( !this
    || (v7 = v2->fields.effectobj,
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_20856580(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_18529/*"effect/ef_noblecard"*/,
                                             transform,
                                             0LL,
                                             0LL),
        !v7) )
  {
LABEL_21:
    sub_B7076C(this, method);
  }
  v9 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B70754(this, v7->obj.klass->_1.element_class);
    if ( !this )
    {
      v11 = sub_B7078C();
      sub_B70738(v11, 0LL);
    }
  }
  if ( v7->max_length <= 2 )
  {
LABEL_22:
    v10 = sub_B70798(this);
    sub_B70738(v10, 0LL);
  }
  v7->m_Items[2] = (UnityEngine_GameObject_o *)v9;
  sub_B70630(&v7->m_Items[2]);
}


void __fastcall BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x8
  __int64 v7; // x20
  unsigned __int64 v8; // x24
  __int64 v9; // x25
  UnityEngine_Transform_o *objectRoot; // x21
  __int64 v11; // x22
  System_String_o *v12; // x23
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x22
  __int64 v15; // x23
  __int64 v16; // x21
  Il2CppClass **v17; // x0
  struct UnityEngine_GameObject_array *v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  unsigned int v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_434E747 & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo);
    sub_B70694(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E747 = 1;
  }
  v21 = 0;
  gameObject = sub_B706AC(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2LL);
  if ( !gameObject )
LABEL_24:
    sub_B7076C(gameObject, v4);
  v6 = *(_QWORD *)(gameObject + 24);
  v7 = gameObject;
  if ( (unsigned int)v6 <= 1 )
    goto LABEL_25;
  *(_DWORD *)(gameObject + 36) = 1;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    v9 = gameObject + 32;
    while ( v8 < (unsigned int)v6 )
    {
      v21 = *(_DWORD *)(v9 + 4 * v8);
      objectRoot = this->fields.objectRoot;
      gameObject = j_il2cpp_value_box_0(BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, &v21, v5);
      if ( !gameObject )
        goto LABEL_24;
      v11 = gameObject;
      v12 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 360LL))(
                                 gameObject,
                                 *(_QWORD *)(*(_QWORD *)gameObject + 368LL));
      v21 = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v12, 1, 0LL);
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
        v15 = (int)v21;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0LL);
        if ( !addObjectList )
          goto LABEL_24;
        v16 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_B70754(gameObject, addObjectList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v20 = sub_B7078C();
            sub_B70738(v20, 0LL);
          }
        }
        if ( (unsigned int)v15 >= addObjectList->max_length )
          break;
        v17 = &addObjectList->obj.klass + v15;
        v17[4] = (Il2CppClass *)v16;
        sub_B70630(v17 + 4);
        v18 = this->fields.addObjectList;
        if ( !v18 )
          goto LABEL_24;
        if ( v21 >= v18->max_length )
          break;
        gameObject = (__int64)v18->m_Items[v21];
        if ( !gameObject )
          goto LABEL_24;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      LODWORD(v6) = *(_DWORD *)(v7 + 24);
      if ( (__int64)++v8 >= (int)v6 )
        return;
    }
LABEL_25:
    v19 = sub_B70798(gameObject);
    sub_B70738(v19, 0LL);
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
  __int64 v9; // x0

  if ( (byte_434E759 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E759 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_B7076C(v3, v4);
  v6 = *(_QWORD *)&effectobj->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v6 )
      {
        v9 = sub_B70798(v3);
        sub_B70738(v9, 0LL);
      }
      v8 = (UnityEngine_Object_o *)effectobj->m_Items[v7];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v3 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( v3 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36067208(v8, 0LL);
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
    sub_B7076C(criticallabel, v3);
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
  __int64 v11; // x0
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_434E768 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_434E768 = 1;
  }
  data = v2->fields.data;
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
  BattleCommandComponent__SetCardColor(v2, white, v5);
  BattleCommandComponent__resetSelectStamp(v2, v6);
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_20;
  if ( effectobj->max_length <= 3 )
    goto LABEL_21;
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v2->fields.effectobj;
    if ( v9 )
    {
      if ( v9->max_length > 3 )
      {
        v10 = (UnityEngine_Object_o *)v9->m_Items[3];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36067208(v10, 0LL);
        return;
      }
LABEL_21:
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
LABEL_20:
    sub_B7076C(this, method);
  }
}


void __fastcall BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  __int64 v6; // x0

  v2 = this;
  if ( (byte_434E751 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E751 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( effectobj->max_length <= 5 )
  {
LABEL_15:
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
  }
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[5];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_14;
    if ( v5->max_length > 5 )
    {
      this = (BattleCommandComponent_o *)v2->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v5->m_Items[5], 1, 0LL);
        return;
      }
LABEL_14:
      sub_B7076C(this, method);
    }
    goto LABEL_15;
  }
}


void __fastcall BattleCommandComponent__selectCard(
        BattleCommandComponent_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  __int64 data; // x0
  const MethodInfo *v9; // x1
  struct BattleCommandData_o *v10; // x8
  int treasureDvc; // w21
  Voice_BATTLE_array *v12; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v14; // x2
  System_Array_o *v15; // x0
  __int64 *v16; // x8
  __int64 v17; // x1
  System_Collections_Generic_List_KeyValuePair_string__int___o *v18; // x21
  BattleCommandComponent___c_c *v19; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_string__int___int__o *_9__185_0; // x22
  Il2CppObject *v22; // x23
  struct BattleCommandComponent___c_StaticFields *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  int32_t size; // w25
  int v27; // w22
  System_Collections_Generic_KeyValuePair_string__int__o v28; // kr00_16
  struct BattleCommandData_o *v29; // x8
  System_String_o *key; // x21
  int32_t uniqueId; // w23
  System_String_o *LastVoiceType; // x0
  int v33; // w22
  struct BattleCommandData_o *v34; // x8
  int32_t svtId; // w23
  VoiceMaster_o *v36; // x22
  const MethodInfo *v37; // x4
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
  Il2CppObject *v52; // x0
  __int64 *v53; // x8
  __int64 v54; // x2
  __int64 v55; // x2
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v58; // x21
  __int64 v59; // x8
  __int64 v60; // x0
  __int64 v61; // x0
  int v62; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_KeyValuePair_string__int___o *voiceInfoList; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o grey; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434E762 & 1) == 0 )
  {
    sub_B70694(&Voice_BATTLE___TypeInfo);
    sub_B70694(&Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    sub_B70694(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Func_KeyValuePair_string__int___int___ctor__);
    sub_B70694(&System_Func_KeyValuePair_string__int___int__TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546);
    sub_B70694(&Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3);
    sub_B70694(&Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0);
    sub_B70694(&Method_BattleCommandComponent___c__selectCard_b__185_0__);
    sub_B70694(&BattleCommandComponent___c_TypeInfo);
    sub_B70694(&Voice_TypeInfo);
    sub_B70694(&StringLiteral_16458/*"a"*/);
    sub_B70694(&StringLiteral_7143/*"HEROINE_CHANGECARDVOICE"*/);
    sub_B70694(&StringLiteral_18525/*"effect/ef_commandup_{0}{1:00}"*/);
    sub_B70694(&StringLiteral_21953/*"q"*/);
    sub_B70694(&StringLiteral_16791/*"b"*/);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_434E762 = 1;
  }
  voiceInfoList = 0LL;
  grey = UnityEngine_Color__get_grey(0LL);
  BattleCommandComponent__SetCardColor(this, grey, v5);
  BattleCommandComponent__stopFirstAura(this, v6);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v7) == 5 )
    return;
  data = BattleCommandComponent__get_isKindOfDontAction(this, v9);
  if ( (data & 1) != 0 )
    return;
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_89;
  treasureDvc = v10->fields.treasureDvc;
  if ( treasureDvc <= 0 )
  {
    if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    FileName = Voice__getFileName(245, 0LL);
    if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v14) )
    {
      v15 = (System_Array_o *)sub_B706AC(Voice_BATTLE___TypeInfo, 6LL);
      v16 = &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
    }
    else
    {
      v15 = (System_Array_o *)sub_B706AC(Voice_BATTLE___TypeInfo, 3LL);
      v16 = &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
    }
    goto LABEL_19;
  }
  if ( treasureDvc != ConstantMaster__getValue((System_String_o *)StringLiteral_7143/*"HEROINE_CHANGECARDVOICE"*/, 0LL) )
  {
    v15 = (System_Array_o *)sub_B706AC(Voice_BATTLE___TypeInfo, 12LL);
    v16 = &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546;
LABEL_19:
    v17 = *v16;
    v12 = (Voice_BATTLE_array *)v15;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v15, (System_RuntimeFieldHandle_o)v17, 0LL);
    goto LABEL_20;
  }
  data = sub_B706AC(Voice_BATTLE___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_89;
  v12 = (Voice_BATTLE_array *)data;
  if ( !*(_DWORD *)(data + 24) )
  {
LABEL_90:
    v60 = sub_B70798(data);
    sub_B70738(v60, 0LL);
  }
  *(_DWORD *)(data + 32) = 252;
LABEL_20:
  data = (__int64)this->fields.svtData;
  if ( !data )
    goto LABEL_89;
  if ( BattleServantData__TryGetPlayableVoiceInfoList((BattleServantData_o *)data, &voiceInfoList, v12, 0LL) )
  {
    v18 = voiceInfoList;
    v19 = BattleCommandComponent___c_TypeInfo;
    if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
      v19 = BattleCommandComponent___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__185_0 = static_fields->__9__185_0;
    if ( !_9__185_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__185_0 = (System_Func_KeyValuePair_string__int___int__o *)sub_B70764(System_Func_KeyValuePair_string__int___int__TypeInfo);
      System_Func_KeyValuePair_string__int___int____ctor(
        _9__185_0,
        v22,
        Method_BattleCommandComponent___c__selectCard_b__185_0__,
        (const MethodInfo_299C004 *)Method_System_Func_KeyValuePair_string__int___int___ctor__);
      v23 = BattleCommandComponent___c_TypeInfo->static_fields;
      v23->__9__185_0 = _9__185_0;
      sub_B70630(&v23->__9__185_0);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_string__int___int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                                 (System_Func_TSource__TResult__o *)_9__185_0,
                                                                 (const MethodInfo_1CC0EEC *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    v25 = System_Linq_Enumerable__ToArray_int_(
            v24,
            (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    data = RandomUtility__GetRandomRangeIndex(v25, 0, 0LL);
    if ( !voiceInfoList )
      goto LABEL_89;
    size = voiceInfoList->fields._size;
    v27 = data;
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v28 = BasicHelper__IndexValue_KeyValuePair_string__int__(
            (System_Collections_Generic_List_T__o *)voiceInfoList,
            data,
            voiceInfoList->fields._items->m_Items[0],
            (const MethodInfo_1BDEBB8 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    v7 = *(const MethodInfo **)&v28.fields.value;
    data = (__int64)v28.fields.key;
    v29 = this->fields.data;
    if ( !v29 )
      goto LABEL_89;
    key = v28.fields.key;
    uniqueId = v29->fields.uniqueId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    LastVoiceType = ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0LL);
    data = System_String__op_Equality(LastVoiceType, v28.fields.key, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !voiceInfoList )
        goto LABEL_89;
      v33 = (v27 + 1) % size;
      if ( !voiceInfoList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      key = BasicHelper__IndexValue_KeyValuePair_string__int__(
              (System_Collections_Generic_List_T__o *)voiceInfoList,
              v33,
              voiceInfoList->fields._items->m_Items[0],
              (const MethodInfo_1BDEBB8 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    }
    data = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_89;
    data = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)data,
                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_VoiceMaster___);
    v34 = this->fields.data;
    if ( !v34 )
      goto LABEL_89;
    svtId = v34->fields.svtId;
    v36 = (VoiceMaster_o *)data;
    data = (__int64)System_String__Concat_44758168((System_String_o *)StringLiteral_16127/*"_"*/, key, 0LL);
    if ( !v36 )
      goto LABEL_89;
    data = VoiceMaster__getFlagRequestNumber(v36, svtId, (System_String_o *)data, 0, 0LL);
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
        v40 = this->fields.data;
        if ( !v40 )
          goto LABEL_89;
        v41 = data;
        data = (__int64)perf->fields.data;
        if ( !data )
          goto LABEL_89;
        BattleData__AddServantVoicePlayed_18940528((BattleData_o *)data, v40->fields.svtId, v41, 0, v37);
      }
    }
    v42 = this->fields.svtData;
    if ( !v42 )
      goto LABEL_89;
    data = (__int64)this->fields.perf;
    if ( !data )
      goto LABEL_89;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             (BattlePerformance_o *)data,
                                             v42->fields.uniqueId,
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
            v44 = data;
            data = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
            v45 = this->fields.svtData;
            if ( v45 )
            {
              v46 = this->fields.data;
              if ( v46 )
              {
                v47 = data;
                overwriteSvtVoiceId = v45->fields.overwriteSvtVoiceId;
                v49 = v46->fields.uniqueId;
                if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                }
                ServantAssetLoadManager__playBattleVoice(v44, v47, overwriteSvtVoiceId, key, 1.0, 0LL, v49, 0, 0LL);
                goto LABEL_68;
              }
            }
          }
        }
LABEL_89:
        sub_B7076C(data, v7);
      }
    }
  }
LABEL_68:
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  v50 = (System_String_o *)StringLiteral_18525/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v7) == 3 )
  {
    v62 = targetIndex + 1;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v51);
    v53 = &StringLiteral_21953/*"q"*/;
LABEL_77:
    v50 = System_String__Format_44753704(v50, (Il2CppObject *)*v53, v52, 0LL);
    goto LABEL_78;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v7) == 1 )
  {
    v62 = targetIndex + 1;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v54);
    v53 = &StringLiteral_16458/*"a"*/;
    goto LABEL_77;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v7) == 2 )
  {
    v62 = targetIndex + 1;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v55);
    v53 = &StringLiteral_16791/*"b"*/;
    goto LABEL_77;
  }
LABEL_78:
  data = (__int64)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_89;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (__int64)BaseMonoBehaviour__createObject_20856580((BaseMonoBehaviour_o *)this, v50, transform, 0LL, 0LL);
  if ( !effectobj )
    goto LABEL_89;
  v58 = (UnityEngine_GameObject_o *)data;
  if ( data )
  {
    data = sub_B70754(data, effectobj->obj.klass->_1.element_class);
    if ( !data )
    {
      v61 = sub_B7078C();
      sub_B70738(v61, 0LL);
    }
  }
  if ( effectobj->max_length <= 3 )
    goto LABEL_90;
  effectobj->m_Items[3] = v58;
  sub_B70630(&effectobj->m_Items[3]);
  data = (__int64)this->fields.perf;
  if ( !data )
    goto LABEL_89;
  v59 = *(_QWORD *)(data + 32);
  if ( !v59 )
    goto LABEL_89;
  if ( !targetIndex && *(int *)(v59 + 200) >= 1 )
    BattlePerformance__SetLimitTurnEffectFlag((BattlePerformance_o *)data, 0, 0LL);
}


void __fastcall BattleCommandComponent__setAttackCommandData(
        BattleCommandComponent_o *this,
        BattleCommandComponent_o *comp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x4
  struct BattleCommandData_o *data; // x8

  if ( !comp
    || (BattleCommandComponent__setData(this, comp->fields.data, comp->fields.svtData, 1, 1, 0, 1, v3),
        this->fields.perf = comp->fields.perf,
        sub_B70630(&this->fields.perf),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v6),
        (data = comp->fields.data) == 0LL) )
  {
    sub_B7076C(this, comp);
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, data->fields.commandCardParam, 2, 0, v7);
}


void __fastcall BattleCommandComponent__setBuffIconList(
        BattleCommandComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Component_o *buffRoot; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  BuffList_TYPE_array *qabTypes; // x22
  int32_t type; // w0
  System_Int32_array *Individualities; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListActive; // x0
  BuffList_TYPE_array *v11; // x22
  int32_t v12; // w0
  System_Int32_array *v13; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffList_31731308; // x0
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
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v39; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v40; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v41; // x20
  System_Collections_Generic_List_int__o *v42; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  _BOOL8 v44; // x0
  __int64 v45; // x1
  WarEntity_o *Entity; // x0
  __int64 v47; // x1
  WarEntity_o *v48; // x21
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  unsigned __int64 v50; // x22
  unsigned __int64 max_length; // x9
  signed __int64 size; // x9
  Il2CppClass **v53; // x8
  Il2CppClass *v54; // x21
  BattleServantBuffIconComponent_o *v55; // x0
  int32_t v56; // w1
  __int64 v57; // x0
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_434E74F & 1) == 0 )
  {
    sub_B70694(&Method_BattleCommandComponent__setBuffIconList_b__135_0__);
    sub_B70694(&Method_BattleCommandComponent__setBuffIconList_b__135_1__);
    sub_B70694(&Method_BattleCommandComponent__setBuffIconList_b__135_2__);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Predicate_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434E74F = 1;
  }
  memset(&v59, 0, sizeof(v59));
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
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_40;
  qabTypes = this->fields.qabTypes;
  type = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, (const MethodInfo *)buffData);
  Individualities = CardMaster__getIndividualities(type, 1, 0LL);
  ShowCommandBuffListActive = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  buffRoot = (UnityEngine_Component_o *)BattleBuffData__getBuffList_31731308(
                                          buffData,
                                          qabTypes,
                                          Individualities,
                                          ShowCommandBuffListActive,
                                          0LL);
  if ( !v6 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
    (System_Collections_Generic_IEnumerable_T__o *)buffRoot,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_40;
  v11 = this->fields.qabTypes;
  v12 = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, (const MethodInfo *)buffData);
  v13 = CardMaster__getIndividualities(v12, 1, 0LL);
  ShowCommandBuffListPassive = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  BuffList_31731308 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31731308(
                                                                       buffData,
                                                                       v11,
                                                                       v13,
                                                                       ShowCommandBuffListPassive,
                                                                       0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
    BuffList_31731308,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_40;
  if ( SLODWORD(buffRoot[2].klass) < 1 )
  {
    noneTdQabTypes = this->fields.noneTdQabTypes;
    v25 = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, (const MethodInfo *)buffData);
    v26 = CardMaster__getIndividualities(v25, 1, 0LL);
    v27 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v28 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31731308(
                                                           buffData,
                                                           noneTdQabTypes,
                                                           v26,
                                                           v27,
                                                           0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
      v28,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    buffRoot = (UnityEngine_Component_o *)this->fields.data;
    if ( !buffRoot )
      goto LABEL_40;
    v29 = this->fields.noneTdQabTypes;
    v30 = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, (const MethodInfo *)buffData);
    v31 = CardMaster__getIndividualities(v30, 1, 0LL);
    v20 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v21 = buffData;
    v22 = v29;
    v23 = v31;
  }
  else
  {
    tdTypes = this->fields.tdTypes;
    v17 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v18 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31731308(
                                                           buffData,
                                                           tdTypes,
                                                           0LL,
                                                           v17,
                                                           0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
      v18,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v19 = this->fields.tdTypes;
    v20 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v21 = buffData;
    v22 = v19;
    v23 = 0LL;
  }
  v32 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31731308(v21, v22, v23, v20, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
    v32,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  otherTypes = this->fields.otherTypes;
  v34 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  v35 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31731308(
                                                         buffData,
                                                         otherTypes,
                                                         0LL,
                                                         v34,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
    v35,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v36 = this->fields.otherTypes;
  v37 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  v38 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31731308(
                                                         buffData,
                                                         v36,
                                                         0LL,
                                                         v37,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
    v38,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v39 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v39,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__135_0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v6,
    (System_Predicate_T__o *)v39,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v40 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v40,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__135_1__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v6,
    (System_Predicate_T__o *)v40,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v41 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v41,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__135_2__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v6,
    (System_Predicate_T__o *)v41,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v42 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  buffRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffRoot )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)buffRoot,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v58,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v59,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v44 )
      break;
    if ( !v59.fields.current )
      sub_B7076C(v44, v45);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7076C(v44, v45);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)v59.fields.current[1].klass,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    v48 = Entity;
    if ( !Entity )
      sub_B7076C(0LL, v47);
    if ( !v42 )
      sub_B7076C(Entity, v47);
    if ( !System_Collections_Generic_List_int___Contains(
            v42,
            (int32_t)Entity->fields.longName,
            (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
      System_Collections_Generic_List_int___Add(
        v42,
        (int32_t)v48->fields.longName,
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v59,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
LABEL_40:
    sub_B7076C(buffRoot, buffData);
  v50 = 0LL;
  while ( 1 )
  {
    max_length = buffIconList->max_length;
    if ( (__int64)v50 >= (int)max_length )
      break;
    if ( !v42 )
      goto LABEL_40;
    if ( v50 >= max_length )
    {
      v57 = sub_B70798(buffRoot);
      sub_B70738(v57, 0LL);
    }
    size = v42->fields._size;
    v53 = &buffIconList->obj.klass + v50;
    v54 = v53[4];
    if ( (__int64)v50 >= size )
    {
      if ( !v54 )
        goto LABEL_40;
      v55 = (BattleServantBuffIconComponent_o *)v53[4];
      v56 = 0;
    }
    else
    {
      if ( v50 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( !v54 )
        goto LABEL_40;
      v55 = (BattleServantBuffIconComponent_o *)v53[4];
      v56 = v42->fields._items->m_Items[v50 + 1];
    }
    BattleServantBuffIconComponent__setImageId(v55, v56, 0LL);
    buffIconList = this->fields.buffIconList;
    ++v50;
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
    sub_B7076C(0LL, flg);
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
  struct BattleCommandData_o **p_data; // x25
  Spawner_o *spawner; // x0
  MethodInfo *v16; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  struct UnityEngine_GameObject_array *v18; // x8
  struct UnityEngine_GameObject_array **p_effectobj; // x27
  __int64 v20; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v22; // x24
  UnityEngine_Object_o *v23; // x28
  struct UnityEngine_GameObject_array *v24; // x8
  struct UnityEngine_GameObject_array *v25; // x8
  UnityEngine_Object_o *v26; // x28
  const MethodInfo *v27; // x6
  BattleServantData_o *v28; // x1
  BattleBuffData_o *buffData; // x0
  struct BattleCommandData_o *v30; // x22
  const MethodInfo *v31; // x2
  struct BattleCommandData_o *data; // x8
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  int32_t commandCardParam; // w1
  BattleCommandComponent_o *v37; // x0
  __int64 v38; // x0
  struct BattleServantData_o **p_svtData; // [xsp+0h] [xbp-60h]
  bool v41; // [xsp+Ch] [xbp-54h]
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434E741 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E741 = 1;
  }
  p_data = &this->fields.data;
  this->fields.data = indata;
  sub_B70630(&this->fields.data);
  this->fields.svtData = insvtData;
  p_svtData = &this->fields.svtData;
  sub_B70630(&this->fields.svtData);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_25;
  v41 = isInit;
  BattleCommandComponent__DestroyEffectObject1(this, v16);
  v18 = this->fields.effectobj;
  if ( !v18 )
    goto LABEL_25;
  p_effectobj = &this->fields.effectobj;
  v20 = 4LL;
  while ( 1 )
  {
    max_length = v18->max_length;
    v22 = v20 - 4;
    if ( v20 - 4 >= (int)max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_49;
    v23 = (UnityEngine_Object_o *)*((_QWORD *)&v18->obj.klass + v20);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
    if ( ((unsigned __int8)spawner & 1) != 0 )
    {
      if ( v22 < 5 )
      {
        v25 = *p_effectobj;
        if ( !*p_effectobj )
          goto LABEL_25;
        if ( v22 >= v25->max_length )
        {
LABEL_49:
          v38 = sub_B70798(spawner);
          sub_B70738(v38, 0LL);
        }
        v26 = (UnityEngine_Object_o *)*((_QWORD *)&v25->obj.klass + v20);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36067208(v26, 0LL);
      }
      else if ( v20 == 9 )
      {
        v24 = this->fields.effectobj;
        if ( !v24 )
          goto LABEL_25;
        if ( (*(_QWORD *)&v24->max_length & 0xFFFFFFFEuLL) <= 5 )
          goto LABEL_49;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_25;
        Spawner__Despawn(spawner, v24->m_Items[5], 1, 0LL);
      }
    }
    v18 = *p_effectobj;
    ++v20;
    if ( !*p_effectobj )
      goto LABEL_25;
  }
  *p_effectobj = (struct UnityEngine_GameObject_array *)sub_B706AC(UnityEngine_GameObject___TypeInfo, v18->max_length);
  sub_B70630(&this->fields.effectobj);
  if ( *p_data )
  {
    if ( (*p_data)->fields.treasureDvc >= 1 )
    {
      v28 = *p_svtData;
      if ( *p_svtData )
      {
        buffData = v28->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, v28, 0LL) )
          {
            spawner = (Spawner_o *)*p_svtData;
            if ( !*p_svtData )
              goto LABEL_25;
            spawner = (Spawner_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)spawner, 0LL);
            if ( !spawner )
              goto LABEL_25;
            spawner = (Spawner_o *)TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)spawner, 0LL);
            if ( ((unsigned __int8)spawner & 1) != 0 && !isTDTypeChangeWindow )
            {
              v16 = (MethodInfo *)*p_svtData;
              if ( !*p_svtData )
                goto LABEL_25;
              spawner = (Spawner_o *)v16[9].parameters;
              if ( !spawner )
                goto LABEL_25;
              v30 = *p_data;
              spawner = (Spawner_o *)BattleBuffData__getTDTypeChangeBuffData(
                                       (BattleBuffData_o *)spawner,
                                       (BattleServantData_o *)v16,
                                       0LL);
              if ( !spawner || !v30 )
                goto LABEL_25;
              v30->fields._type = HIDWORD(spawner->fields.resourcePrecacher);
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, v41, isAttack, isShowBuffIcon, isTDTypeChangeWindow, 0, v27);
  data = this->fields.data;
  if ( !data || data->fields.starcount < 10 || !this->fields.isCountUp )
    goto LABEL_45;
  spawner = (Spawner_o *)this->fields.criticalObject;
  if ( !spawner )
LABEL_25:
    sub_B7076C(spawner, v16);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spawner, 1, 0LL);
LABEL_45:
  v42.fields.r = 0.0;
  v42.fields.g = 0.0;
  v42.fields.b = 0.0;
  v42.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v42, 1, v31);
  v43.fields.r = 0.0;
  v43.fields.g = 0.0;
  v43.fields.b = 0.0;
  v43.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v43, 1, v33);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v34);
    commandCardParam = indata->fields.commandCardParam;
    v37 = this;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v34);
    v37 = this;
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(v37, commandCardParam, 2, 1, v35);
}


void __fastcall BattleCommandComponent__setData_18919324(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  _DWORD *monitor; // x8
  int32_t v13; // w22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  BattleCommandData_o *v19; // x23
  const MethodInfo *v20; // x5
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x7
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_434E745 & 1) == 0 )
  {
    sub_B70694(&BattleCommandData_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434E745 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_18;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v11 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v24, 0LL);
  if ( !v9 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v9,
                                (int32_t)Instance,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Instance )
  {
    monitor = Instance[1].monitor;
    if ( monitor )
    {
      if ( monitor[6] <= (unsigned int)index )
      {
        v23 = sub_B70798(Instance);
        sub_B70738(v23, 0LL);
      }
      v13 = monitor[index + 8];
      v15 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v25.fields.currentCryptoKey = v15;
      *(_QWORD *)&v25.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v25, 0LL);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      v19 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_18919852(v19, v13, v16, CommandDispLimitCount, CommandImageSvtId, v20);
      if ( v19 )
      {
        BattleCommandData__SetCommandCardParam(v19, svtData->fields.commandCardParam, index, v21);
        v19->fields.battleBuffData = svtData->fields.buffData;
        sub_B70630(&v19->fields.battleBuffData);
        v19->fields.servantCardIdsIndex = index;
        BattleCommandComponent__setData(this, v19, svtData, 0, 1, 0, 1, v22);
        return;
      }
    }
LABEL_18:
    sub_B7076C(Instance, v8);
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
  __int64 v27; // x0

  if ( (byte_434E73F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E73F = 1;
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
  v6 = basedepth + 7;
  UIWidget__set_depth(bg, basedepth + 7, 0LL);
  bg = (UIWidget_o *)this->fields.chargeTurnLabel;
  if ( !bg )
    goto LABEL_107;
  v7 = basedepth + 11;
  UIWidget__set_depth(bg, basedepth + 11, 0LL);
  bg = (UIWidget_o *)this->fields.remainingTurnLabel;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, v7, 0LL);
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
    UIWidget__set_depth(bg, v6, 0LL);
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
    UIWidget__set_depth(bg, v7, 0LL);
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
    UIWidget__set_depth(bg, v7, 0LL);
  }
  bg = (UIWidget_o *)this->fields.sealedSprite;
  if ( !bg )
    goto LABEL_107;
  v11 = basedepth + 9;
  UIWidget__set_depth(bg, basedepth + 9, 0LL);
  bg = (UIWidget_o *)this->fields.donotactSprite;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, v11, 0LL);
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
    UIWidget__set_depth(bg, v11, 0LL);
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
    UIWidget__set_depth(bg, v11, 0LL);
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
    UIWidget__set_depth(bg, v11, 0LL);
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
    UIWidget__set_depth(bg, v11, 0LL);
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
    UIWidget__set_depth(bg, v11, 0LL);
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
    UIWidget__set_depth(bg, v11, 0LL);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, v6, 1, 0LL);
  bg = (UIWidget_o *)this->fields.friendIcon;
  if ( !bg || (UIWidget__set_depth(bg, basedepth + 10, 0LL), (buffIconList = this->fields.buffIconList) == 0LL) )
LABEL_107:
    sub_B7076C(bg, *(_QWORD *)&basedepth);
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    do
    {
      if ( v21 >= max_length )
      {
        v27 = sub_B70798(bg);
        sub_B70738(v27, 0LL);
      }
      v22 = buffIconList->m_Items[v21];
      if ( !v22 )
        goto LABEL_107;
      bg = (UIWidget_o *)v22->fields.iconSprite;
      if ( !bg )
        goto LABEL_107;
      UIWidget__set_depth(bg, v7, 0LL);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v21 < max_length );
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
  sub_B70630(&this->fields.perf);
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
    sub_B7076C(this, stamp);
  if ( stamp )
  {
    this = (BattleCommandComponent_o *)sub_B70754(stamp, effectobj->obj.klass->_1.element_class);
    if ( !this )
    {
      v6 = sub_B7078C();
      sub_B70738(v6, 0LL);
    }
  }
  if ( effectobj->max_length <= 5 )
  {
    v5 = sub_B70798(this);
    sub_B70738(v5, 0LL);
  }
  effectobj->m_Items[5] = stamp;
  sub_B70630(&effectobj->m_Items[5]);
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

  if ( (byte_434E73E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E73E = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = this->fields.facetex;
    v7 = UnityEngine_Shader__Find(shaderName, 0LL);
    v8 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0LL);
    if ( !v6 )
      sub_B7076C(v9, v10);
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
  this->fields.target = target;
  sub_B70630(&this->fields.target);
}


void __fastcall BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_434E760 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E760 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v6 )
  {
    if ( !Component_WebViewObject )
      sub_B7076C(v6, v7);
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
  BattleCommandComponent_o *v2; // x19
  struct BattleCommandData_o *data; // x8
  struct BattleCommandData_o *v4; // x8
  DrumRollLabel_o *criticallabel; // x20
  int32_t v6; // w21
  DrumRollLabel_CompleteEventHandler_o *v7; // x22

  v2 = this;
  if ( (byte_434E753 & 1) == 0 )
  {
    sub_B70694(&Method_BattleCommandComponent_compCriticallabel__);
    this = (BattleCommandComponent_o *)sub_B70694(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_434E753 = 1;
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
    sub_B7076C(this, method);
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
  v6 = v4 ? v2->fields.boostedCriticalRate + v4->fields.starcount / 10 : 0;
  v7 = (DrumRollLabel_CompleteEventHandler_o *)sub_B70764(DrumRollLabel_CompleteEventHandler_TypeInfo);
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

  if ( (byte_434E74B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16584/*"anim_commandfloat"*/);
    byte_434E74B = 1;
  }
  v3 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16584/*"anim_commandfloat"*/, v3, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Component_o *nomalwidget; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x20
  int v8; // s0
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_Object_o *v14; // x19
  __int64 v15; // x0

  if ( (byte_434E74C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E74C = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v4 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
    nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      if ( !v4 )
        goto LABEL_31;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v4, 0LL);
    }
  }
  nomalwidget = (UnityEngine_Component_o *)this->fields.nomalwidget;
  if ( !nomalwidget
    || (nomalwidget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nomalwidget, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nomalwidget, 0LL),
        *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v8, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_31:
    sub_B7076C(nomalwidget, v6);
  }
  if ( effectobj->max_length <= 2 )
    goto LABEL_32;
  v12 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)nomalwidget & 1) != 0 )
  {
    v13 = this->fields.effectobj;
    if ( v13 )
    {
      if ( v13->max_length > 2 )
      {
        v14 = (UnityEngine_Object_o *)v13->m_Items[2];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__DestroyImmediate_36067420(v14, 0LL);
        return;
      }
LABEL_32:
      v15 = sub_B70798(nomalwidget);
      sub_B70738(v15, 0LL);
    }
    goto LABEL_31;
  }
}


void __fastcall BattleCommandComponent__stopFirstAura(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x0

  v2 = this;
  if ( (byte_434E750 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E750 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_18;
  if ( effectobj->max_length <= 4 )
    goto LABEL_19;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( v5->max_length <= 4 )
        goto LABEL_19;
      v6 = (UnityEngine_Object_o *)v5->m_Items[4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v6, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.objectRoot) > 4 )
        {
          this->fields.nobletex = 0LL;
          sub_B70630(&this->fields.nobletex);
          return;
        }
LABEL_19:
        v7 = sub_B70798(this);
        sub_B70738(v7, 0LL);
      }
    }
LABEL_18:
    sub_B7076C(this, method);
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
  const MethodInfo *v11; // x2
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *data; // x8
  float ShowClassMagnification; // s0
  struct UnityEngine_GameObject_array *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  __int64 v17; // x0

  v4 = this;
  if ( (byte_434E76D & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E76D = 1;
  }
  if ( targetSvt && v4->fields.data )
  {
    addObjectList = v4->fields.addObjectList;
    if ( !addObjectList )
      goto LABEL_38;
    if ( !addObjectList->max_length )
      goto LABEL_39;
    v6 = (UnityEngine_Object_o *)addObjectList->m_Items[0];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v4->fields.addObjectList;
      if ( !v7 )
        goto LABEL_38;
      if ( v7->max_length <= 1 )
        goto LABEL_39;
      v8 = (UnityEngine_Object_o *)v7->m_Items[1];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.addObjectList;
        if ( !v9 )
          goto LABEL_38;
        if ( !v9->max_length )
          goto LABEL_39;
        this = (BattleCommandComponent_o *)v9->m_Items[0];
        if ( !this )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v10 = v4->fields.addObjectList;
        if ( !v10 )
          goto LABEL_38;
        if ( v10->max_length <= 1 )
          goto LABEL_39;
        this = (BattleCommandComponent_o *)v10->m_Items[1];
        if ( !this
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
              (perf = v4->fields.perf) == 0LL)
          || (data = v4->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)perf->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)BattleData__getServantData(
                                                   (BattleData_o *)this,
                                                   data->fields.uniqueId,
                                                   v11),
              !v4->fields.perf) )
        {
LABEL_38:
          sub_B7076C(this, targetSvt);
        }
        ShowClassMagnification = BattlePerformance__getShowClassMagnification(
                                   v4->fields.perf,
                                   v4->fields.data,
                                   (BattleServantData_o *)this,
                                   targetSvt,
                                   0LL);
        if ( ShowClassMagnification > 1.0 )
        {
          v15 = v4->fields.addObjectList;
          if ( !v15 )
            goto LABEL_38;
          if ( v15->max_length > 1 )
          {
            this = (BattleCommandComponent_o *)v15->m_Items[1];
            if ( !this )
              goto LABEL_38;
            goto LABEL_36;
          }
          goto LABEL_39;
        }
        if ( ShowClassMagnification < 1.0 )
        {
          v16 = v4->fields.addObjectList;
          if ( !v16 )
            goto LABEL_38;
          if ( v16->max_length )
          {
            this = (BattleCommandComponent_o *)v16->m_Items[0];
            if ( !this )
              goto LABEL_38;
LABEL_36:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            return;
          }
LABEL_39:
          v17 = sub_B70798(this);
          sub_B70738(v17, 0LL);
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
  struct BattleCommandData_o *data; // x8
  int32_t v6; // w20
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x22
  DrumRollLabel_o *v9; // x0
  int32_t v10; // w1
  DrumRollLabel_CompleteEventHandler_o *v11; // x3
  DrumRollLabel_CompleteEventHandler_o *v12; // x21

  if ( (byte_434E754 & 1) == 0 )
  {
    sub_B70694(&Method_BattleCommandComponent_compCriticallabel__);
    sub_B70694(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_434E754 = 1;
  }
  data = this->fields.data;
  if ( !data || (v6 = this->fields.boostedCriticalRate + data->fields.starcount / 10, v6 <= 0) )
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
    sub_B7076C(criticalObject, isNonAnimation);
  }
  if ( isNonAnimation )
  {
    DrumRollLabel__ChangeParamNonAnimation(criticallabel, v6, 0, 0LL);
  }
  else
  {
    if ( v6 >= criticallabel->fields.nowvalue )
    {
      v12 = (DrumRollLabel_CompleteEventHandler_o *)sub_B70764(DrumRollLabel_CompleteEventHandler_TypeInfo);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__updateSelectedEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Transform_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0
  struct UnityEngine_GameObject_array *v17; // x8
  struct UnityEngine_GameObject_array *v18; // x8
  UnityEngine_Object_o *v19; // x20
  struct UnityEngine_GameObject_array *v20; // x8
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_434E752 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E752 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_39;
  if ( effectobj->max_length <= 3 )
  {
LABEL_40:
    v21 = sub_B70798(this);
    sub_B70738(v21, 0LL);
  }
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_39;
    if ( v5->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v5->m_Items[3];
    if ( !this )
      goto LABEL_39;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !v2->fields.nomalwidget )
      goto LABEL_39;
    v6 = (UnityEngine_Transform_o *)this;
    this = (BattleCommandComponent_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                         0LL);
    if ( !v6 )
      goto LABEL_39;
    UnityEngine_Transform__set_parent(v6, (UnityEngine_Transform_o *)this, 0LL);
    v7 = v2->fields.effectobj;
    if ( !v7 )
      goto LABEL_39;
    if ( v7->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v7->m_Items[3];
    if ( !this )
      goto LABEL_39;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL);
    v12 = v2->fields.effectobj;
    if ( !v12 )
      goto LABEL_39;
    if ( v12->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v12->m_Items[3];
    if ( !this )
      goto LABEL_39;
    v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_up(0LL);
    if ( !v13 )
      goto LABEL_39;
    UnityEngine_Transform__set_eulerAngles(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
    v17 = v2->fields.effectobj;
    if ( !v17 )
      goto LABEL_39;
    if ( v17->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v17->m_Items[3];
    if ( !this )
      goto LABEL_39;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_39;
    v22.fields.x = 1.0;
    v22.fields.y = 1.0;
    v22.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v22, 0LL);
  }
  v18 = v2->fields.effectobj;
  if ( !v18 )
    goto LABEL_39;
  if ( v18->max_length <= 4 )
    goto LABEL_40;
  v19 = (UnityEngine_Object_o *)v18->m_Items[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = v2->fields.effectobj;
    if ( !v20 )
      goto LABEL_39;
    if ( v20->max_length > 4 )
    {
      this = (BattleCommandComponent_o *)v20->m_Items[4];
      if ( this )
      {
        this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.objectRoot, 0LL);
          return;
        }
      }
LABEL_39:
      sub_B7076C(this, method);
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
  System_String_o *v13; // x21
  __int64 v14; // x28
  UnityEngine_Transform_o *transform; // x26
  __int64 v16; // x0
  __int64 v17; // x1
  int v18; // s0
  __int64 v21; // x1
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v27; // x2
  struct BattleServantData_o *svtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  BattleCommandData_o *data; // x0
  __int64 v32; // x1
  UnityEngine_Behaviour_o *facetex; // x0
  __int64 v34; // x1
  UnityEngine_Behaviour_o *icon; // x0
  __int64 v36; // x1
  UnityEngine_Behaviour_o *text; // x0
  __int64 v38; // x1
  UISprite_o *bg; // x0
  __int64 v40; // x1
  UIWidget_o *v41; // x0
  __int64 v42; // x1
  UIWidget_o *v43; // x0
  __int64 v44; // x1
  UnityEngine_Behaviour_o *friendIcon; // x0
  BattleCommandSealStatus_o *v46; // x20
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x2
  BattleCommandData_o *v49; // x23
  UnityEngine_Object_o *perf; // x25
  BattleServantData_o *v51; // x24
  _BOOL8 v52; // x0
  __int64 v53; // x1
  struct BattlePerformance_o *v54; // x8
  BattleData_o *v55; // x25
  BattleCommandSealStatus_o *v56; // x26
  const MethodInfo *v57; // x4
  __int64 v58; // x0
  __int64 v59; // x1
  UIWidget_o **p_facetex; // x23
  UITexture_o *v61; // x24
  struct BattleCommandData_o *v62; // x8
  int32_t imageSvtId; // w25
  int32_t svtlimit; // w26
  int32_t loadsvtLimit; // w27
  UnityEngine_Object_o *Manager__loadCommandCard; // x24
  __int64 v67; // x1
  UnityEngine_Behaviour_o *v68; // x0
  __int64 v69; // x1
  UnityEngine_Behaviour_o *v70; // x0
  UnityEngine_Object_o *v71; // x24
  _BOOL8 v72; // x0
  __int64 v73; // x1
  UnityEngine_Behaviour_o *v74; // x0
  struct BattleCommandData_o *v75; // x8
  UnityEngine_Object_o *v76; // x22
  const MethodInfo *v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  BattleCommandData_o *v80; // x0
  const MethodInfo *v81; // x1
  __int64 *v82; // x8
  BattleCommandData_o *v83; // x0
  BattleCommandData_o *v84; // x0
  Il2CppObject *v85; // x22
  UnityEngine_Behaviour_o *v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  struct BattleCommandData_o *v89; // x8
  UISprite_o *v90; // x23
  FileName_c *v91; // x0
  __int64 v92; // x1
  UnityEngine_Behaviour_o *v93; // x0
  __int64 v94; // x0
  UISprite_o *v95; // x23
  FileName_c *v96; // x0
  __int64 v97; // x1
  UnityEngine_Behaviour_o *v98; // x0
  UISprite_o *v99; // x23
  System_String_o *v100; // x0
  UISprite_o *v101; // x21
  System_String_o *v102; // x0
  UISprite_o *v103; // x21
  System_String_o *v104; // x0
  __int64 v105; // x0
  __int64 v106; // x1
  struct UISprite_o *v107; // x21
  UISpriteData_o *AtlasSprite; // x0
  __int64 v109; // x1
  int width; // w22
  UISpriteData_o *v111; // x0
  __int64 v112; // x1
  __int64 v113; // x1
  UnityEngine_Component_o *v114; // x0
  UnityEngine_GameObject_o *v115; // x0
  __int64 v116; // x1
  UnityEngine_Transform_o *v117; // x21
  __int64 v118; // x0
  __int64 v119; // x1
  int v120; // s0
  __int64 v123; // x0
  const MethodInfo *v124; // x1
  struct BattleCommandData_o *v125; // x8
  UnityEngine_Behaviour_o *v126; // x0
  __int64 v127; // x0
  __int64 v128; // x1
  struct BattleCommandData_o *v129; // x8
  int32_t svtId; // w21
  UITexture_o *nobletex; // x22
  int32_t v132; // w23
  int32_t treasureDvc; // w24
  bool Manager__loadNobleName; // w21
  UnityEngine_Object_o *v135; // x22
  __int64 v136; // x1
  const MethodInfo *v137; // x2
  UnityEngine_Component_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  __int64 v140; // x1
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v142; // x1
  const MethodInfo *v143; // x2
  UISprite_o *v144; // x0
  const MethodInfo *v145; // x3
  const MethodInfo *v146; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v148; // x1
  const MethodInfo *v149; // x3
  BattleCommandData_o *v150; // x0
  UISprite_o *donotActTypeSprite; // x20
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v153; // x2
  System_String_o *CardTypeSealSpriteName; // x0
  UnityEngine_Object_o *displayRemainingTurn; // x20
  UILabel_o *v156; // x20
  System_String_o *v157; // x21
  const MethodInfo *v158; // x1
  BattleCommandSealStatus_o *v159; // x0
  __int64 v160; // x1
  struct BattleBuffData_BuffData_o *SleepBuff_k__BackingField; // x8
  int32_t turn; // w8
  int v163; // w8
  __int64 v164; // x2
  Il2CppObject *v165; // x1
  System_String_o *v166; // x0
  struct BattleCommandData_o *v167; // x8
  __int64 v168; // x0
  __int64 v169; // x1
  const MethodInfo *v170; // x2
  struct BattleCommandData_o *v171; // x8
  const MethodInfo *v172; // x2
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v174; // x8
  UILabel_o *v175; // x19
  System_String_o *v176; // x1
  BattleCommandData_o *v177; // x0
  int32_t v178; // [xsp+8h] [xbp-58h] BYREF
  int32_t v179; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_434E748 & 1) == 0 )
  {
    sub_B70694(&BattleCommandSealStatus_TypeInfo);
    sub_B70694(&FileName_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_17492/*"card_bg_blank"*/);
    sub_B70694(&StringLiteral_4684/*"DISPLAY_REMAINING_TURN"*/);
    sub_B70694(&StringLiteral_21460/*"none"*/);
    sub_B70694(&StringLiteral_16719/*"arts"*/);
    sub_B70694(&StringLiteral_17513/*"card_txt_{0}"*/);
    sub_B70694(&StringLiteral_17377/*"buster"*/);
    sub_B70694(&StringLiteral_22010/*"quick"*/);
    sub_B70694(&StringLiteral_17505/*"card_icon_{0}"*/);
    sub_B70694(&StringLiteral_17494/*"card_bg_{0}"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_18925/*"extra"*/);
    sub_B70694(&StringLiteral_17493/*"card_bg_np{0}"*/);
    byte_434E748 = 1;
  }
  v179 = 0;
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
  v13 = (System_String_o *)StringLiteral_17494/*"card_bg_{0}"*/;
  v14 = StringLiteral_21460/*"none"*/;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    sub_B7076C(v16, v17);
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_B7076C(0LL, v21);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
      nomalwidget,
      nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v23 )
    sub_B7076C(0LL, v24);
  UnityEngine_GameObject__SetActive(v23, 1, 0LL);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_B7076C(0LL, v25);
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
    svtData = this->fields.svtData;
    if ( svtData && isShowBuffIcon )
      BattleCommandComponent__setBuffIconList(this, svtData->fields.buffData, v27);
    else
      BattleCommandComponent__setBuffIconList(this, 0LL, v27);
  }
  data = this->fields.data;
  if ( !data )
    sub_B7076C(0LL, v25);
  if ( BattleCommandData__get_type(data, v25) == 5 )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_B7076C(0LL, v32);
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0LL);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_B7076C(0LL, v34);
    UnityEngine_Behaviour__set_enabled(icon, 0, 0LL);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_B7076C(0LL, v36);
    UnityEngine_Behaviour__set_enabled(text, 0, 0LL);
    bg = this->fields.bg;
    if ( !bg )
      sub_B7076C(0LL, v38);
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_17492/*"card_bg_blank"*/, 0LL);
    v41 = (UIWidget_o *)this->fields.bg;
    if ( !v41 )
      sub_B7076C(0LL, v40);
    UIWidget__set_height(v41, 170, 0LL);
    v43 = (UIWidget_o *)this->fields.bg;
    if ( !v43 )
      sub_B7076C(0LL, v42);
    UIWidget__set_width(v43, 133, 0LL);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_B7076C(0LL, v44);
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0LL);
    v46 = (BattleCommandSealStatus_o *)sub_B70764(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v46, v47);
    this->fields.sealStatus = v46;
    sub_B70630(&this->fields.sealStatus);
    goto LABEL_155;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  v49 = this->fields.data;
  v51 = this->fields.svtData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v52 = UnityEngine_Object__op_Implicit(perf, 0LL);
  if ( v52 )
  {
    v54 = this->fields.perf;
    if ( !v54 )
      sub_B7076C(v52, v53);
    v55 = v54->fields.data;
  }
  else
  {
    v55 = 0LL;
  }
  v56 = (BattleCommandSealStatus_o *)sub_B70764(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_18923196(v56, v49, v51, v55, v57);
  this->fields.sealStatus = v56;
  sub_B70630(&this->fields.sealStatus);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v61 = this->fields.facetex;
  v62 = this->fields.data;
  if ( !v62 )
    sub_B7076C(v58, v59);
  imageSvtId = v62->fields.imageSvtId;
  if ( imageSvtId <= 0 )
    imageSvtId = v62->fields.svtId;
  svtlimit = v62->fields.svtlimit;
  if ( v62->fields._loadsvtLimit == -1 )
    loadsvtLimit = v62->fields.svtlimit;
  else
    loadsvtLimit = v62->fields._loadsvtLimit;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v61,
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
    sub_B70630(&this->fields.facetex);
  }
  v68 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v68 )
    sub_B7076C(0LL, v67);
  UnityEngine_Behaviour__set_enabled(v68, 1, 0LL);
  v70 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v70 )
    sub_B7076C(0LL, v69);
  UnityEngine_Behaviour__set_enabled(v70, 1, 0LL);
  v71 = (UnityEngine_Object_o *)*p_facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v72 = UnityEngine_Object__op_Inequality(v71, 0LL, 0LL);
  if ( v72 )
  {
    v74 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v74 )
        sub_B7076C(0LL, v73);
      UnityEngine_Behaviour__set_enabled(v74, 0, 0LL);
    }
    else
    {
      if ( !v74 )
        sub_B7076C(0LL, v73);
      UnityEngine_Behaviour__set_enabled(v74, 1, 0LL);
    }
  }
  v75 = this->fields.data;
  if ( !v75 )
    sub_B7076C(v72, v73);
  v76 = (UnityEngine_Object_o *)*p_facetex;
  if ( v75->fields.treasureDvc < 1 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_B7076C(0LL, v77);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_B7076C(0LL, v79);
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
    if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_B7076C(0LL, v77);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_B7076C(0LL, v78);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
    v13 = (System_String_o *)StringLiteral_17493/*"card_bg_np{0}"*/;
  }
  v80 = this->fields.data;
  if ( !v80 )
    sub_B7076C(0LL, v77);
  if ( BattleCommandData__get_type(v80, v77) == 2 )
  {
    v82 = &StringLiteral_17377/*"buster"*/;
  }
  else
  {
    v83 = this->fields.data;
    if ( !v83 )
      sub_B7076C(0LL, v81);
    if ( BattleCommandData__get_type(v83, v81) == 3 )
    {
      v82 = &StringLiteral_22010/*"quick"*/;
    }
    else
    {
      v84 = this->fields.data;
      if ( !v84 )
        sub_B7076C(0LL, v81);
      if ( BattleCommandData__get_type(v84, v81) != 1 )
      {
        v177 = this->fields.data;
        if ( !v177 )
          sub_B7076C(0LL, v81);
        if ( BattleCommandData__get_type(v177, v81) == 4 )
          v85 = (Il2CppObject *)StringLiteral_18925/*"extra"*/;
        else
          v85 = (Il2CppObject *)v14;
        goto LABEL_86;
      }
      v82 = &StringLiteral_16719/*"arts"*/;
    }
  }
  v85 = (Il2CppObject *)*v82;
LABEL_86:
  v86 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v86 )
    sub_B7076C(0LL, v81);
  UnityEngine_Behaviour__set_enabled(v86, 0, 0LL);
  v89 = this->fields.data;
  if ( !v89 )
    sub_B7076C(v87, v88);
  if ( v89->fields.follower )
  {
    v90 = this->fields.friendIcon;
    v91 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v90 )
      sub_B7076C(v91, v88);
    UISprite__set_spriteName(v90, FileName_TypeInfo->static_fields->friendIconName, 0LL);
    v93 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v93 )
      sub_B7076C(0LL, v92);
    UnityEngine_Behaviour__set_enabled(v93, 1, 0LL);
    v89 = this->fields.data;
    if ( !v89 )
      sub_B7076C(v94, v88);
  }
  if ( v89->fields.flgEventJoin )
  {
    v95 = this->fields.friendIcon;
    v96 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v95 )
      sub_B7076C(v96, v88);
    UISprite__set_spriteName(v95, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
    v98 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v98 )
      sub_B7076C(0LL, v97);
    UnityEngine_Behaviour__set_enabled(v98, 1, 0LL);
  }
  v99 = this->fields.bg;
  v100 = System_String__Format(v13, v85, 0LL);
  if ( !v99 )
    sub_B7076C(v100, v100);
  UISprite__set_spriteName(v99, v100, 0LL);
  v101 = this->fields.icon;
  v102 = System_String__Format((System_String_o *)StringLiteral_17505/*"card_icon_{0}"*/, v85, 0LL);
  if ( !v101 )
    sub_B7076C(v102, v102);
  UISprite__set_spriteName(v101, v102, 0LL);
  v103 = this->fields.text;
  v104 = System_String__Format((System_String_o *)StringLiteral_17513/*"card_txt_{0}"*/, v85, 0LL);
  if ( !v103 )
    sub_B7076C(v104, v104);
  UISprite__set_spriteName(v103, v104, 0LL);
  v107 = this->fields.text;
  if ( !v107 )
    sub_B7076C(v105, v106);
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !AtlasSprite )
    sub_B7076C(0LL, v109);
  if ( !this->fields.text )
    sub_B7076C(AtlasSprite, v109);
  width = AtlasSprite->fields.width;
  v111 = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !v111 )
    sub_B7076C(0LL, v112);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float, float, float, float))v107->klass->vtable._18_SetRect.method)(
    v107,
    v107->klass->vtable._19_ParentHasChanged.methodPtr,
    0.0,
    0.0,
    (float)width,
    (float)v111->fields.height);
  v114 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v114 )
    sub_B7076C(0LL, v113);
  v115 = UnityEngine_Component__get_gameObject(v114, 0LL);
  if ( !v115 )
    sub_B7076C(0LL, v116);
  v117 = UnityEngine_GameObject__get_transform(v115, 0LL);
  *(UnityEngine_Vector3_o *)&v120 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v117 )
    sub_B7076C(v118, v119);
  UnityEngine_Transform__set_localPosition(v117, *(UnityEngine_Vector3_o *)&v120, 0LL);
  v125 = this->fields.data;
  if ( !v125 )
    sub_B7076C(v123, v124);
  if ( v125->fields.treasureDvc >= 1 )
  {
    v126 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v126 )
      sub_B7076C(0LL, v124);
    UnityEngine_Behaviour__set_enabled(v126, 0, 0LL);
    v129 = this->fields.data;
    if ( !v129 )
      sub_B7076C(v127, v128);
    svtId = v129->fields.imageSvtId;
    nobletex = this->fields.nobletex;
    if ( svtId <= 0 )
      svtId = v129->fields.svtId;
    v132 = v129->fields._loadsvtLimit;
    if ( v132 == -1 )
      v132 = v129->fields.svtlimit;
    treasureDvc = v129->fields.treasureDvc;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, svtId, v132, treasureDvc, 0LL);
    v135 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v135, 0LL, 0LL) )
    {
      v138 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v138 )
        sub_B7076C(0LL, v136);
      v139 = UnityEngine_Component__get_gameObject(v138, 0LL);
      if ( !v139 )
        sub_B7076C(0LL, v140);
      UnityEngine_GameObject__SetActive(v139, Manager__loadNobleName, 0LL);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v137);
  }
  BattleCommandComponent__InitUnusableMarks(this, v124);
  if ( !isTDTypeChangeWindow )
  {
    v144 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v142);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v144,
      (UnityEngine_Component_o *)v144,
      1,
      v145);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v146);
    if ( !SealStatus )
      sub_B7076C(0LL, v148);
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, v148);
    if ( (_DWORD)PrioredStatus == 1 )
    {
      BattleCommandComponent__SetActiveComponent(
        PrioredStatus,
        (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
        1,
        v149);
      displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      PrioredStatus = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(displayRemainingTurn, 0LL, 0LL);
      if ( ((unsigned __int8)PrioredStatus & 1) != 0 )
      {
        v156 = this->fields.displayRemainingTurn;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v157 = LocalizationManager__Get((System_String_o *)StringLiteral_4684/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v159 = BattleCommandComponent__get_SealStatus(this, v158);
        if ( !v159 )
          sub_B7076C(0LL, v160);
        SleepBuff_k__BackingField = v159->fields._SleepBuff_k__BackingField;
        if ( !SleepBuff_k__BackingField )
          sub_B7076C(v159, v160);
        turn = SleepBuff_k__BackingField->fields.turn;
        if ( turn + 1 >= 0 )
          v163 = turn + 1;
        else
          v163 = turn + 2;
        v178 = BattleUtility__FloorToInt((float)(v163 >> 1), 0LL);
        v165 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178, v164);
        v166 = System_String__Format(v157, v165, 0LL);
        if ( !v156 )
          sub_B7076C(v166, v166);
        UILabel__set_text(v156, v166, 0LL);
      }
    }
    else if ( (_DWORD)PrioredStatus == 8 )
    {
      v150 = this->fields.data;
      if ( !v150 )
        sub_B7076C(0LL, v142);
      donotActTypeSprite = this->fields.donotActTypeSprite;
      type = (BattleCommandComponent_o *)BattleCommandData__get_type(v150, v142);
      CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v153);
      if ( !donotActTypeSprite )
        sub_B7076C(CardTypeSealSpriteName, CardTypeSealSpriteName);
      UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0LL);
    }
  }
  v167 = this->fields.data;
  if ( !v167 )
    sub_B7076C(PrioredStatus, v142);
  BattleCommandComponent__SetCommandCodeView_18924384(this, v167->fields.commandCodeId, v143);
  v171 = this->fields.data;
  if ( !v171 )
    sub_B7076C(v168, v169);
  BattleCommandComponent__SetCommandAssistView(this, v171->fields.commandAssistId, v170);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v172);
LABEL_155:
  BattleCommandComponent__setTouchFlg(this, 1, v48);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(svtId_label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v174 = this->fields.data;
    if ( v174 )
    {
      v175 = this->fields.svtId_label;
      v179 = v174->fields.svtId;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v179, 0LL);
      if ( v175 )
      {
        if ( gameObject )
          v176 = (System_String_o *)gameObject;
        else
          v176 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text(v175, v176, 0LL);
        return;
      }
    }
LABEL_170:
    sub_B7076C(gameObject, v30);
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


void __fastcall BattleCommandComponent__PlayStarSe_d__158___ctor(
        BattleCommandComponent__PlayStarSe_d__158_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__PlayStarSe_d__158__MoveNext(
        BattleCommandComponent__PlayStarSe_d__158_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  bool result; // w0

  if ( (byte_435136E & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_435136E = 1;
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
    v5 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, preDelayTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__158__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__PlayStarSe_d__158_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__PlayStarSe_d__158__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__PlayStarSe_d__158_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleCommandComponent__PlayStarSe_d__158_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__158__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__PlayStarSe_d__158_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__PlayStarSe_d__158__System_IDisposable_Dispose(
        BattleCommandComponent__PlayStarSe_d__158_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__240___ctor(
        BattleCommandComponent__WaitForErrorViewFinished_d__240_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__240__MoveNext(
        BattleCommandComponent__WaitForErrorViewFinished_d__240_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__WaitForErrorViewFinished_d__240_o *v2; // x19
  BattleCommandComponent_o *_4__this; // x20
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *tdErrorAfterAction; // x0
  System_String_o **p_busyVoiceSe; // x22
  System_String_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  int v22; // w8
  System_String_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  v2 = this;
  if ( (byte_435136F & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    this = (BattleCommandComponent__WaitForErrorViewFinished_d__240_o *)sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_435136F = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      waitSeconds = v2->fields.waitSeconds;
      v5 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, waitSeconds, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v5;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields.__2__current,
        (System_Int32_array **)v5,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      LOBYTE(tdErrorAfterAction) = 1;
      v2->fields.__1__state = 1;
      return (char)tdErrorAfterAction;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_25;
      BattleCommandComponent__startMoveFloat(_4__this, 0LL);
      p_busyVoiceSe = &v2->fields.busyVoiceSe;
      if ( System_String__IsNullOrEmpty(v2->fields.busyVoiceSe, 0LL) )
        goto LABEL_21;
LABEL_9:
      v14 = *p_busyVoiceSe;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      if ( SoundManager__isBusyVoice(v14, 0LL) )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B70630(p__2__current, 0LL, v15, v16, v17, v18, v19, v20);
        v22 = 2;
LABEL_19:
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v22;
        LOBYTE(tdErrorAfterAction) = 1;
        return (char)tdErrorAfterAction;
      }
LABEL_14:
      v23 = *p_busyVoiceSe;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      this = (BattleCommandComponent__WaitForErrorViewFinished_d__240_o *)SoundManager__isBusySe(v23, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B70630(p__2__current, 0LL, v24, v25, v26, v27, v28, v29);
        v22 = 3;
        goto LABEL_19;
      }
      if ( !_4__this )
LABEL_25:
        sub_B7076C(this, method);
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
      p_busyVoiceSe = &v2->fields.busyVoiceSe;
      v2->fields.__1__state = -1;
      goto LABEL_9;
    case 3:
      p_busyVoiceSe = &v2->fields.busyVoiceSe;
      v2->fields.__1__state = -1;
      goto LABEL_14;
    default:
      goto LABEL_23;
  }
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__240__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__240_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__WaitForErrorViewFinished_d__240__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__WaitForErrorViewFinished_d__240_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleCommandComponent__WaitForErrorViewFinished_d__240_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__240__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__240_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__240__System_IDisposable_Dispose(
        BattleCommandComponent__WaitForErrorViewFinished_d__240_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_435136B & 1) == 0 )
  {
    sub_B70694(&BattleCommandComponent___c_TypeInfo);
    byte_435136B = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleCommandComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleCommandComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleCommandComponent___c___ctor(BattleCommandComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleCommandComponent___c___SetSpecialCommandCardBuffData_b__222_1(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *a,
        BattleCommandComponent_CardBuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleCommandComponent___c___UpdateCommandCardTypeChange_b__224_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B7076C(this, 0LL);
  return c->fields.buffType == 156;
}


bool __fastcall BattleCommandComponent___c___UpdateFixedCommandCard_b__208_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B7076C(this, 0LL);
  return c->fields.buffType == 131;
}


int32_t __fastcall BattleCommandComponent___c___selectCard_b__185_0(
        BattleCommandComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_435136C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_435136C = 1;
  }
  return value;
}


void __fastcall BattleCommandComponent___c__DisplayClass157_0___ctor(
        BattleCommandComponent___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass157_0___addCriticalBuff_b__0(
        BattleCommandComponent___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass157_0_o *v2; // x19
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v5; // x8
  UnityEngine_Object_o *obj; // x19

  v2 = this;
  if ( (byte_435136D & 1) == 0 )
  {
    this = (BattleCommandComponent___c__DisplayClass157_0_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435136D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent___c__DisplayClass157_0_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (BattleCommandComponent___c__DisplayClass157_0_o *)v5->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v2->fields.obj, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_B7076C(this, method);
  }
  obj = (UnityEngine_Object_o *)v2->fields.obj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(obj, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass222_0___ctor(
        BattleCommandComponent___c__DisplayClass222_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCommandComponent___c__DisplayClass222_0___SetSpecialCommandCardBuffData_b__0(
        BattleCommandComponent___c__DisplayClass222_0_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B7076C(this, 0LL);
  return c->fields.buffType == this->fields.buffType;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229___ctor(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229__MoveNext(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleCommandComponent_o *_4__this; // x21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x20
  bool v8; // w20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4351370 & 1) == 0 )
  {
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351370 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *)_4__this->fields.specialCardBuffIcon;
    if ( !this )
      goto LABEL_28;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *)UnityEngine_Component__get_gameObject(
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
      v2->fields.__1__state = -1;
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
        this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *)_4__this->fields.specialCardBuffIcon;
        if ( this )
        {
          this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *)_4__this->fields.specialCardBuffIcon;
            if ( this )
            {
              UISprite__set_atlas((UISprite_o *)this, 0LL, 0LL);
              goto LABEL_16;
            }
          }
        }
LABEL_28:
        sub_B7076C(this, method);
      }
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_28;
LABEL_16:
  v6 = _4__this->fields.specialCardBuffIcon;
  if ( !v6 )
    goto LABEL_28;
  mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL);
  v2->fields.__2__current = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.__2__current, 0LL, v9, v10, v11, v12, v13, v14);
  if ( v8 )
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


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229__System_IDisposable_Dispose(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__229_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__delayFrame_d__159___ctor(
        BattleCommandComponent__delayFrame_d__159_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__delayFrame_d__159__MoveNext(
        BattleCommandComponent__delayFrame_d__159_o *this,
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
      sub_B7076C(0LL, method);
    System_Action__Invoke(action, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__159__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__delayFrame_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__delayFrame_d__159__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__delayFrame_d__159_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleCommandComponent__delayFrame_d__159_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__159__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__delayFrame_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__delayFrame_d__159__System_IDisposable_Dispose(
        BattleCommandComponent__delayFrame_d__159_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__179___ctor(
        BattleCommandComponent__fadeoutEffect_d__179_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleCommandComponent__fadeoutEffect_d__179__MoveNext(
        BattleCommandComponent__fadeoutEffect_d__179_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleCommandComponent__fadeoutEffect_d__179_o *v8; // x20
  int32_t _1__state; // w8
  DefCoroutine_c *v10; // x0
  System_Int32_array **milliSecSix; // x1
  BattleServantConfConponent_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_o *_4__this; // x19
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x21
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_Transform_o *v25; // x20
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Transform_o *v27; // x20
  int v28; // s0
  __int64 v31; // x0
  __int64 v32; // x0

  v8 = this;
  if ( (byte_4351371 & 1) == 0 )
  {
    sub_B70694(&DefCoroutine_TypeInfo);
    this = (BattleCommandComponent__fadeoutEffect_d__179_o *)sub_B70694(&StringLiteral_18524/*"effect/ef_commandburn_s01"*/);
    byte_4351371 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleCommandComponent__fadeoutEffect_d__179_o *)_4__this->fields.nomalwidget;
      if ( this )
      {
        ((void (__fastcall *)(BattleCommandComponent__fadeoutEffect_d__179_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
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
        this = (BattleCommandComponent__fadeoutEffect_d__179_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)_4__this,
                                                                   0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattleCommandComponent__fadeoutEffect_d__179_o *)BaseMonoBehaviour__createObject_20856580(
                                                                     (BaseMonoBehaviour_o *)_4__this,
                                                                     (System_String_o *)StringLiteral_18524/*"effect/ef_commandburn_s01"*/,
                                                                     transform,
                                                                     0LL,
                                                                     0LL);
          if ( effectobj )
          {
            v23 = (System_Int32_array **)this;
            if ( this )
            {
              this = (BattleCommandComponent__fadeoutEffect_d__179_o *)sub_B70754(
                                                                         this,
                                                                         effectobj->obj.klass->_1.element_class);
              if ( !this )
              {
                v32 = sub_B7078C(0LL);
                sub_B70738(v32, 0LL);
              }
            }
            if ( effectobj->max_length <= 1 )
              goto LABEL_31;
            effectobj->m_Items[1] = (UnityEngine_GameObject_o *)v23;
            sub_B70630((BattleServantConfConponent_o *)&effectobj->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
            v24 = _4__this->fields.effectobj;
            if ( !v24 )
              goto LABEL_30;
            if ( v24->max_length <= 1 )
              goto LABEL_31;
            this = (BattleCommandComponent__fadeoutEffect_d__179_o *)v24->m_Items[1];
            if ( !this )
              goto LABEL_30;
            v25 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            this = (BattleCommandComponent__fadeoutEffect_d__179_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
            if ( !this )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__179_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0LL);
            if ( !this )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__179_o *)UnityEngine_Transform__get_parent(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
            if ( !v25 )
              goto LABEL_30;
            UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)this, 0LL);
            v26 = _4__this->fields.effectobj;
            if ( !v26 )
              goto LABEL_30;
            if ( v26->max_length <= 1 )
            {
LABEL_31:
              v31 = sub_B70798(this);
              sub_B70738(v31, 0LL);
            }
            this = (BattleCommandComponent__fadeoutEffect_d__179_o *)v26->m_Items[1];
            if ( this )
            {
              v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
              *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_one(0LL);
              if ( v27 )
              {
                UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
                goto LABEL_28;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_B7076C(this, method);
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v10 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v10 = DefCoroutine_TypeInfo;
  }
  milliSecSix = (System_Int32_array **)v10->static_fields->milliSecSix;
  v8->fields.__2__current = (Il2CppObject *)milliSecSix;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B70630(p__2__current, milliSecSix, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__179__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__fadeoutEffect_d__179_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__fadeoutEffect_d__179__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__fadeoutEffect_d__179_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleCommandComponent__fadeoutEffect_d__179_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__179__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__fadeoutEffect_d__179_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__179__System_IDisposable_Dispose(
        BattleCommandComponent__fadeoutEffect_d__179_o *this,
        const MethodInfo *method)
{
  ;
}