void __fastcall SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_Int32_array **v21; // x1
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_String_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42E78F6 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_12887/*"Servants"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16329/*"_blurOnOff"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16350/*"_mapIdVal"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42E78F6 = 1;
  }
  v21 = (System_Int32_array **)StringLiteral_12887/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12887/*"Servants"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.voiceTypeName, v21, v2, v3, v4, v5, v6, v7);
  v22 = (System_Int32_array **)StringLiteral_16350/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16350/*"_mapIdVal"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.reelUvIdKey, v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Int32_array **)StringLiteral_16329/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16329/*"_blurOnOff"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.reelBlurKey, v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.voiceDataStr, v36, v37, v38, v39, v40, v41, v42);
  v43 = (struct System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
  this->fields.voiceIdArray = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceIdArray,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SlotEffectComponent__CommonBlurFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        bool flg,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x20
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  float v10; // s8
  int32_t size; // w8
  unsigned int v12; // w21

  v6 = this;
  if ( (byte_42E78F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__, (_DWORD)list, flg, method);
    this = (SlotEffectComponent_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_MeshRenderer__get_Item__,
                                      v7,
                                      v8,
                                      v9);
    byte_42E78F1 = 1;
  }
  if ( flg )
    v10 = 1.0;
  else
    v10 = 0.0;
  if ( !list )
    goto LABEL_15;
  size = list->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (SlotEffectComponent_o *)list->fields._items->m_Items[v12];
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, v6->fields.reelBlurKey, v10, 0LL);
      size = list->fields._size;
      if ( (int)++v12 >= size )
        return;
    }
LABEL_15:
    sub_B5D69C(this, list);
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
  if ( (byte_42E78F0 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_MeshRenderer__get_Item__,
                                      (_DWORD)list,
                                      (_DWORD)ids,
                                      method);
    byte_42E78F0 = 1;
  }
  if ( !ids )
    goto LABEL_14;
  if ( (int)ids->max_length >= 1 )
  {
    v7 = 0;
    while ( list )
    {
      if ( list->fields._size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (SlotEffectComponent_o *)list->fields._items->m_Items[v7];
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( v7 >= ids->max_length )
      {
        v8 = sub_B5D6C8(this);
        sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, list);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  int max_length; // w8
  System_String_o *v12; // x19
  System_String_o *v13; // x20
  __int64 v14; // x0

  if ( (byte_42E78F4 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)seName, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E78F4 = 1;
  }
  v8 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v8 )
    goto LABEL_17;
  v9 = (const MethodInfo *)v8;
  if ( !v8->max_length )
    goto LABEL_18;
  LOWORD(v8->m_Items[0]) = 58;
  if ( !seName || (v8 = System_String__Split(seName, (System_Char_array *)v8, 0LL)) == 0LL )
LABEL_17:
    sub_B5D69C(v8, v9);
  max_length = v8->max_length;
  if ( !max_length )
  {
LABEL_18:
    v14 = sub_B5D6C8(v8);
    sub_B5D668(v14, 0LL);
  }
  v12 = v8->m_Items[0];
  if ( max_length >= 2 )
  {
    v13 = v8->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe_23390804(v12, v13, v10);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v12, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__PlayVoice(SlotEffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SlotEffectComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  System_String_o *voiceDataStr; // x19
  System_String_o *v12; // x20
  SeManager_c *v13; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v15; // x0

  v5 = this;
  if ( (byte_42E78F5 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, index, (_DWORD)method, v3);
    this = (SlotEffectComponent_o *)sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    byte_42E78F5 = 1;
  }
  voiceIdArray = v5->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_B5D69C(this, *(_QWORD *)&index);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
    {
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
    }
    voiceDataStr = v5->fields.voiceDataStr;
    v12 = voiceIdArray->m_Items[index];
    v13 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v13 = SeManager_TypeInfo;
    }
    DEFAULT_VOLUME = v13->static_fields->DEFAULT_VOLUME;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playVoice_23391328(voiceDataStr, v12, DEFAULT_VOLUME, 0LL, v3);
  }
}


void __fastcall SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *voiceDataStr; // x19

  if ( (byte_42E78F3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E78F3 = 1;
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


void __fastcall SlotEffectComponent__SetGimmick(
        SlotEffectComponent_o *this,
        int32_t svtId,
        BattleActionData_GimmickData_o *data,
        System_Action_o *endCb,
        const MethodInfo *method)
{
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
  Il2CppObject *voiceTypeName; // x23
  Il2CppObject *v61; // x0
  struct System_String_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_List_T__o *v69; // x0
  __int64 v70; // x1
  struct System_Int32_array *indexArray; // x8
  struct System_Int32_array *animationTypes; // x9
  __int64 v73; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x22
  struct System_Object_array *resultVoiceIdArray; // x23
  System_Int32_array **v76; // x21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v77; // x22
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v78; // x23
  __int64 v79; // x9
  System_Collections_Generic_List_T__o *Item; // x0
  __int64 v81; // x9
  System_Int32_array **v82; // x23
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct System_String_array *v89; // x22
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct System_String_array **p_voiceIdArray; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  const MethodInfo *v103; // x3
  System_String_o *v104; // x20
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  int32_t v109; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E78EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Shuffle_object___, svtId, (_DWORD)data, endCb);
    sub_B5D5C4(&Method_BasicHelper_Shuffle_string___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&int_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__AddRange__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__AddRange__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__Clear__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object___ctor___68742896, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Item__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&SoundManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&string___TypeInfo, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_23485/*"voice"*/, v57, v58, v59);
    byte_42E78EF = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v109 = svtId;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109);
  v62 = System_String__Format_44573324((System_String_o *)StringLiteral_23955/*"{0}_{1}"*/, voiceTypeName, v61, 0LL);
  this->fields.voiceDataStr = v62;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voiceDataStr,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
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
  v73 = indexArray->m_Items[1];
  if ( (unsigned int)v73 >= animationTypes->max_length )
    goto LABEL_38;
  this->fields.animationType = animationTypes->m_Items[v73 + 1];
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v74 )
    goto LABEL_37;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v74,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_string__AddRange__);
  v69 = BasicHelper__Shuffle_string_(
          (System_Collections_Generic_List_T__o *)v74,
          (const MethodInfo_1AD98F4 *)Method_BasicHelper_Shuffle_string___);
  if ( !v69 )
    goto LABEL_37;
  if ( !v69->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray
    || (v76 = (System_Int32_array **)v69->fields._items->m_Items[0],
        v77 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B5D694(System_Collections_Generic_List_object__TypeInfo),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v77,
          resultVoiceIdArray->max_length,
          (const MethodInfo_30563CC *)Method_System_Collections_Generic_List_object___ctor___68742896),
        !v77) )
  {
LABEL_37:
    sub_B5D69C(v69, v70);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v77,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_object__AddRange__);
  if ( v77->fields._size <= (unsigned int)v73 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v78 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v77->fields._items->m_Items[v73];
  if ( !v78 )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v77,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_object__Clear__);
    sub_B5D69C(v107, v108);
  }
  v79 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v78->klass->_2.bitflags2 + 1) < (unsigned int)v79
    || (System_Collections_Generic_Dictionary_string__object__c *)v78->klass->_2.typeHierarchy[v79 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = (System_Collections_Generic_List_T__o *)sub_B5D990(v78);
LABEL_40:
    sub_B5D990(Item);
    goto LABEL_41;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v77,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_object__Clear__);
  Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                   v78,
                                                   (System_Type_o *)StringLiteral_23485/*"voice"*/,
                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v81 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v81
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v81 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_40;
    }
  }
  v69 = BasicHelper__Shuffle_string_(Item, (const MethodInfo_1AD98F4 *)Method_BasicHelper_Shuffle_object___);
  if ( !v69 )
    goto LABEL_37;
  if ( !v69->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v69 = (System_Collections_Generic_List_T__o *)v69->fields._items->m_Items[0];
  if ( !v69 )
    goto LABEL_37;
  v82 = (System_Int32_array **)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, Il2CppMethodPointer))v69->klass->vtable._3_ToString.method)(
                                 v69,
                                 v69->klass->vtable._4_unknown.methodPtr);
  v69 = (System_Collections_Generic_List_T__o *)sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !v69 )
    goto LABEL_37;
  v89 = (struct System_String_array *)v69;
  if ( v76 )
  {
    v69 = (System_Collections_Generic_List_T__o *)sub_B5D684(v76, v69->klass->_1.element_class);
    if ( !v69 )
      goto LABEL_41;
  }
  if ( !v89->max_length )
    goto LABEL_38;
  v89->m_Items[0] = (System_String_o *)v76;
  sub_B5D560((BattleServantConfConponent_o *)v89->m_Items, v76, v83, v84, v85, v86, v87, v88);
  if ( v82 )
  {
    v69 = (System_Collections_Generic_List_T__o *)sub_B5D684(v82, v89->obj.klass->_1.element_class);
    if ( !v69 )
    {
LABEL_41:
      v106 = sub_B5D6BC();
      sub_B5D668(v106, 0LL);
    }
  }
  if ( v89->max_length <= 1 )
  {
LABEL_38:
    v105 = sub_B5D6C8(v69);
    sub_B5D668(v105, 0LL);
  }
  v89->m_Items[1] = (System_String_o *)v82;
  sub_B5D560((BattleServantConfConponent_o *)&v89->m_Items[1], v82, v90, v91, v92, v93, v94, v95);
  this->fields.voiceIdArray = v89;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_voiceIdArray,
    (System_Int32_array **)v89,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  v104 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v104, endCb, 1, v103);
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
  Il2CppObject *animationName; // x19
  Il2CppObject *v23; // x0
  System_String_o *v24; // x19
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v26; // x20
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int32_t animationType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E78F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)animCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v10, v11, v12);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_23963/*"{0}{1}"*/, v19, v20, v21);
    byte_42E78F2 = 1;
  }
  this->fields.endCallback = animCallback;
  sub_B5D560(
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
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType);
  v24 = System_String__Format_44573324((System_String_o *)StringLiteral_23963/*"{0}{1}"*/, animationName, v23, 0LL);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v26 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v27 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v27 )
  {
    if ( Component_WebViewObject )
    {
      SimpleAnimation__Play_16676044((SimpleAnimation_o *)Component_WebViewObject, v24, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v27, v28);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v27 = UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
  if ( v27 )
  {
    if ( !v26 )
      goto LABEL_16;
    UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v26, v24, 0LL);
  }
}