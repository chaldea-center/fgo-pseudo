void __fastcall SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Int32_array **v13; // x1
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_String_array *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_4214A8A & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_12775/*"Servants"*/, v9);
    sub_B0D8A4(&StringLiteral_16184/*"_blurOnOff"*/, v10);
    sub_B0D8A4(&StringLiteral_16205/*"_mapIdVal"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4214A8A = 1;
  }
  v13 = (System_Int32_array **)StringLiteral_12775/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12775/*"Servants"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.voiceTypeName, v13, v2, v3, v4, v5, v6, v7);
  v14 = (System_Int32_array **)StringLiteral_16205/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16205/*"_mapIdVal"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.reelUvIdKey, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_16184/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16184/*"_blurOnOff"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.reelBlurKey, v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.voiceDataStr, v28, v29, v30, v31, v32, v33, v34);
  v35 = (struct System_String_array *)sub_B0D8BC(string___TypeInfo, 0LL);
  this->fields.voiceIdArray = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.voiceIdArray,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SlotEffectComponent__CommonBlurFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        bool flg,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x20
  __int64 v7; // x1
  float v8; // s8
  int32_t size; // w8
  unsigned int v10; // w21

  v6 = this;
  if ( (byte_4214A85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__, list);
    this = (SlotEffectComponent_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, v7);
    byte_4214A85 = 1;
  }
  if ( flg )
    v8 = 1.0;
  else
    v8 = 0.0;
  if ( !list )
    goto LABEL_15;
  size = list->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( size <= v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (SlotEffectComponent_o *)list->fields._items->m_Items[v10];
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, v6->fields.reelBlurKey, v8, 0LL);
      size = list->fields._size;
      if ( (int)++v10 >= size )
        return;
    }
LABEL_15:
    sub_B0D97C(this);
  }
}


void __fastcall SlotEffectComponent__CommonReelFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x21
  unsigned int v7; // w22
  __int64 v8; // x0

  v6 = this;
  if ( (byte_4214A84 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, list);
    byte_4214A84 = 1;
  }
  if ( !ids )
    goto LABEL_14;
  if ( (int)ids->max_length >= 1 )
  {
    v7 = 0;
    while ( list )
    {
      if ( list->fields._size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (SlotEffectComponent_o *)list->fields._items->m_Items[v7];
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( v7 >= ids->max_length )
      {
        v8 = sub_B0D9A8(this);
        sub_B0D948(v8, 0LL);
      }
      if ( !this )
        break;
      UnityEngine_Material__SetFloat(
        (UnityEngine_Material_o *)this,
        v6->fields.reelUvIdKey,
        (float)ids->m_Items[++v7],
        0LL);
      if ( (signed int)v7 >= (signed int)ids->max_length )
        return;
    }
LABEL_14:
    sub_B0D97C(this);
  }
}


void __fastcall SlotEffectComponent__EndGimmick(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *endCallback; // x0

  endCallback = this->fields.endCallback;
  if ( endCallback )
    System_Action__Invoke(endCallback, 0LL);
}


void __fastcall SlotEffectComponent__PlaySe(
        SlotEffectComponent_o *this,
        System_String_o *seName,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_array *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int max_length; // w8
  System_String_o *v9; // x19
  System_String_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_4214A88 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, seName);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4214A88 = 1;
  }
  v5 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_17;
  if ( !v5->max_length )
    goto LABEL_18;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !seName || (v5 = System_String__Split(seName, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_17:
    sub_B0D97C(v5);
  max_length = v5->max_length;
  if ( !max_length )
  {
LABEL_18:
    v11 = sub_B0D9A8(v5);
    sub_B0D948(v11, 0LL);
  }
  v9 = v5->m_Items[0];
  if ( max_length >= 2 )
  {
    v10 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe_24977004(v9, v10, v7);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v9, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__PlayVoice(SlotEffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SlotEffectComponent_o *v5; // x19
  __int64 v6; // x1
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  System_String_o *voiceDataStr; // x19
  System_String_o *v10; // x20
  SeManager_c *v11; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v13; // x0

  v5 = this;
  if ( (byte_4214A89 & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, *(_QWORD *)&index);
    this = (SlotEffectComponent_o *)sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4214A89 = 1;
  }
  voiceIdArray = v5->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_B0D97C(this);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
    {
      v13 = sub_B0D9A8(this);
      sub_B0D948(v13, 0LL);
    }
    voiceDataStr = v5->fields.voiceDataStr;
    v10 = voiceIdArray->m_Items[index];
    v11 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v11 = SeManager_TypeInfo;
    }
    DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playVoice_24977528(voiceDataStr, v10, DEFAULT_VOLUME, 0LL, v3);
  }
}


void __fastcall SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_4214A87 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214A87 = 1;
  }
  voiceDataStr = this->fields.voiceDataStr;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__releaseAudioAssetStorage(voiceDataStr, method);
}


void __fastcall SlotEffectComponent__SetCenterReelBlur(
        SlotEffectComponent_o *this,
        int32_t isOn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.centerReelList, isOn == 1, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__SetGimmick(
        SlotEffectComponent_o *this,
        int32_t svtId,
        BattleActionData_GimmickData_o *data,
        System_Action_o *endCb,
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
  Il2CppObject *voiceTypeName; // x23
  Il2CppObject *v27; // x0
  struct System_String_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_T__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  struct System_Int32_array *indexArray; // x8
  struct System_Int32_array *animationTypes; // x9
  __int64 v40; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  struct System_Object_array *resultVoiceIdArray; // x23
  System_Int32_array **v45; // x21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v46; // x22
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v47; // x23
  __int64 v48; // x9
  System_Collections_Generic_List_T__o *Item; // x0
  __int64 v50; // x9
  System_Int32_array **v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct System_String_array *v58; // x22
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct System_String_array **p_voiceIdArray; // x20
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x3
  System_String_o *v73; // x20
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x0
  int32_t v77; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4214A83 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Shuffle_object___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_BasicHelper_Shuffle_string___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__AddRange__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__AddRange__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__Clear__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object___ctor___67887608, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v20);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_B0D8A4(&SoundManager_TypeInfo, v22);
    sub_B0D8A4(&string___TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_23721/*"{0}_{1}"*/, v24);
    sub_B0D8A4(&StringLiteral_23254/*"voice"*/, v25);
    byte_4214A83 = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v77 = svtId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
  v28 = System_String__Format_43845440((System_String_o *)StringLiteral_23721/*"{0}_{1}"*/, voiceTypeName, v27, 0LL);
  this->fields.voiceDataStr = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.voiceDataStr,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !data )
    goto LABEL_37;
  indexArray = data->fields.indexArray;
  if ( !indexArray )
    goto LABEL_37;
  if ( !indexArray->max_length )
    goto LABEL_38;
  animationTypes = data->fields.animationTypes;
  if ( !animationTypes )
    goto LABEL_37;
  v40 = indexArray->m_Items[1];
  if ( (unsigned int)v40 >= animationTypes->max_length )
    goto LABEL_38;
  this->fields.animationType = animationTypes->m_Items[v40 + 1];
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v41 )
    goto LABEL_37;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v41,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_string__AddRange__);
  v35 = BasicHelper__Shuffle_string_(
          (System_Collections_Generic_List_T__o *)v41,
          (const MethodInfo_1709CF8 *)Method_BasicHelper_Shuffle_string___);
  if ( !v35 )
    goto LABEL_37;
  if ( !v35->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray
    || (v45 = (System_Int32_array **)v35->fields._items->m_Items[0],
        v46 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B0D974(
                                                                                 System_Collections_Generic_List_object__TypeInfo,
                                                                                 v42,
                                                                                 v43),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v46,
          resultVoiceIdArray->max_length,
          (const MethodInfo_2FC4AF4 *)Method_System_Collections_Generic_List_object___ctor___67887608),
        !v46) )
  {
LABEL_37:
    sub_B0D97C(v35);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v46,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_object__AddRange__);
  if ( v46->fields._size <= (unsigned int)v40 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v47 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v46->fields._items->m_Items[v40];
  if ( !v47 )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v46,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_object__Clear__);
    sub_B0D97C(v76);
  }
  v48 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v47->klass->_2.bitflags2 + 1) < (unsigned int)v48
    || (System_Collections_Generic_Dictionary_string__object__c *)v47->klass->_2.typeHierarchy[v48 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = (System_Collections_Generic_List_T__o *)sub_B0DC70(v47);
LABEL_40:
    v35 = (System_Collections_Generic_List_T__o *)sub_B0DC70(Item);
    goto LABEL_41;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v46,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_object__Clear__);
  Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                   v47,
                                                   (System_Type_o *)StringLiteral_23254/*"voice"*/,
                                                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v50 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v50
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v50 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_40;
    }
  }
  v35 = BasicHelper__Shuffle_string_(Item, (const MethodInfo_1709CF8 *)Method_BasicHelper_Shuffle_object___);
  if ( !v35 )
    goto LABEL_37;
  if ( !v35->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v35 = (System_Collections_Generic_List_T__o *)v35->fields._items->m_Items[0];
  if ( !v35 )
    goto LABEL_37;
  v51 = (System_Int32_array **)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, Il2CppMethodPointer))v35->klass->vtable._3_ToString.method)(
                                 v35,
                                 v35->klass->vtable._4_unknown.methodPtr);
  v35 = (System_Collections_Generic_List_T__o *)sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v35 )
    goto LABEL_37;
  v58 = (struct System_String_array *)v35;
  if ( v45 )
  {
    v35 = (System_Collections_Generic_List_T__o *)sub_B0D964(v45, v35->klass->_1.element_class);
    if ( !v35 )
      goto LABEL_41;
  }
  if ( !v58->max_length )
    goto LABEL_38;
  v58->m_Items[0] = (System_String_o *)v45;
  sub_B0D840((BattleServantConfConponent_o *)v58->m_Items, v45, v52, v53, v54, v55, v56, v57);
  if ( v51 )
  {
    v35 = (System_Collections_Generic_List_T__o *)sub_B0D964(v51, v58->obj.klass->_1.element_class);
    if ( !v35 )
    {
LABEL_41:
      v75 = sub_B0D99C(v35);
      sub_B0D948(v75, 0LL);
    }
  }
  if ( v58->max_length <= 1 )
  {
LABEL_38:
    v74 = sub_B0D9A8(v35);
    sub_B0D948(v74, 0LL);
  }
  v58->m_Items[1] = (System_String_o *)v51;
  sub_B0D840((BattleServantConfConponent_o *)&v58->m_Items[1], v51, v59, v60, v61, v62, v63, v64);
  this->fields.voiceIdArray = v58;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_B0D840((BattleServantConfConponent_o *)p_voiceIdArray, (System_Int32_array **)v58, v66, v67, v68, v69, v70, v71);
  v73 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v73, endCb, 1, v72);
}


void __fastcall SlotEffectComponent__SetLeftReelBlur(
        SlotEffectComponent_o *this,
        int32_t isOn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.leftReelList, isOn == 1, v3);
}


void __fastcall SlotEffectComponent__SetReelVal(
        SlotEffectComponent_o *this,
        System_Int32_array *leftReel,
        System_Int32_array *centerReel,
        System_Int32_array *rightReel,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  SlotEffectComponent__CommonReelFunc(this, this->fields.leftReelList, leftReel, (const MethodInfo *)rightReel);
  SlotEffectComponent__CommonReelFunc(this, this->fields.centerReelList, centerReel, v8);
  SlotEffectComponent__CommonReelFunc(this, this->fields.rightReelList, rightReel, v9);
}


void __fastcall SlotEffectComponent__SetRightReelBlur(
        SlotEffectComponent_o *this,
        int32_t isOn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.rightReelList, isOn == 1, v3);
}


void __fastcall SlotEffectComponent__StartGimmick(
        SlotEffectComponent_o *this,
        System_Action_o *animCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *animationName; // x19
  Il2CppObject *v15; // x0
  System_String_o *v16; // x19
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v18; // x20
  _BOOL8 v19; // x0
  int32_t animationType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4214A86 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, animCallback);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_23729/*"{0}{1}"*/, v13);
    byte_4214A86 = 1;
  }
  this->fields.endCallback = animCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)animCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  animationName = (Il2CppObject *)this->fields.animationName;
  animationType = this->fields.animationType;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType);
  v16 = System_String__Format_43845440((System_String_o *)StringLiteral_23729/*"{0}{1}"*/, animationName, v15, 0LL);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v18 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v19 )
  {
    if ( Component_WebViewObject )
    {
      SimpleAnimation__Play_50482404((SimpleAnimation_o *)Component_WebViewObject, v16, 0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(v19);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v19 = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( v19 )
  {
    if ( !v18 )
      goto LABEL_16;
    UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)v18, v16, 0LL);
  }
}