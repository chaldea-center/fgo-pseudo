void __fastcall TitleInfoEventBulletinBoardComponent___ctor(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  this->fields.rubyRelativePositionY = 12.0;
  *(_QWORD *)&this->fields.spaceBetweenMessages = 0x42AA000040A00000LL;
  *(_OWORD *)&this->fields.wipeIconFadeOutStartTime = xmmword_3148790;
  this->fields.wipeIconCrossFadeTime = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        float setPos,
        bool isNotRandom,
        bool isSetUp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_GameObject_o *baseLabel; // x22
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x23
  ScriptLineMessage_o *Component_srcLineSprite; // x0
  ScriptLineMessage_o *v16; // x22
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o *v22; // x8
  System_String_o *msg; // x1
  int32_t NextMessageId; // w24
  const MethodInfo *v25; // x2
  struct UISprite_o *baseIcon; // x8
  float mWidth; // s0
  const MethodInfo *v28; // x2
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  const MethodInfo *v30; // x3
  System_Collections_IEnumerator_o *v31; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDF8E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___, isNotRandom);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScriptLineMessage__Add__, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FDF8E = 1;
  }
  baseLabel = this->fields.baseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)baseLabel,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v13 )
    goto LABEL_23;
  v14 = v13;
  Component_srcLineSprite = (ScriptLineMessage_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v13,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  v16 = Component_srcLineSprite;
  ScriptLineMessage__Init(Component_srcLineSprite, 0LL);
  if ( isNotRandom )
  {
    switchInfo = this->fields.switchInfo;
    if ( switchInfo )
    {
      switchCount = this->fields.switchCount;
      if ( (unsigned int)switchCount >= switchInfo->max_length )
      {
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      v22 = switchInfo->m_Items[switchCount];
      if ( v22 )
      {
        msg = v22->fields.msg;
        NextMessageId = -1;
        goto LABEL_18;
      }
    }
LABEL_23:
    sub_B170D4();
  }
  NextMessageId = TitleInfoEventBulletinBoardComponent__GetNextMessageId(this, v18);
  msg = TitleInfoEventBulletinBoardComponent__GetMessage(this, NextMessageId, v25);
  if ( this->fields.isDispBaseIcon )
  {
    baseIcon = this->fields.baseIcon;
    if ( !baseIcon )
      goto LABEL_23;
    mWidth = (float)baseIcon->fields.mWidth;
  }
  else
  {
    mWidth = 0.0;
  }
  setPos = mWidth + setPos;
LABEL_18:
  ((void (__fastcall *)(ScriptLineMessage_o *, System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v16->klass->vtable._7_SetText.method)(
    v16,
    msg,
    0LL,
    0LL,
    0LL,
    0LL,
    v16->klass[1]._1.image);
  UnityEngine_GameObject__SetActive(v14, 1, 0LL);
  GameObjectExtensions__SetParent(v14, (UnityEngine_Component_o *)this->fields.scrollerPanel, 0LL);
  v39.fields.y = v16->fields.rubyLineHeight;
  v39.fields.x = 0.0;
  v39.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(v14, v39, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v14, one, 0LL);
  GameObjectExtensions__SetLocalPositionX(v14, setPos, 0LL);
  TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(this, v16, v28);
  labels = this->fields.labels;
  if ( !labels )
    goto LABEL_23;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)labels,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ScriptLineMessage__Add__);
  if ( !isNotRandom && this->fields.isDispWipeIcon )
  {
    v31 = TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(this, NextMessageId, isSetUp, v30);
    started = UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
    this->fields.coroutine = started;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.coroutine,
      (System_Int32_array **)started,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *lineMessage,
        const MethodInfo *method)
{
  ScriptMessageLabel_array *DispLabelArray; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  ScriptMessageLabel_array *v9; // x20
  unsigned int v10; // w22
  ScriptMessageLabel_o *v11; // x24
  UnityEngine_Object_o *main; // x21
  UnityEngine_Object_o *ruby; // x21
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDF91 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, lineMessage);
    byte_40FDF91 = 1;
  }
  if ( this->fields.rubyRelativePositionY != 0.0 )
  {
    if ( !lineMessage )
      goto LABEL_24;
    DispLabelArray = ScriptLineMessage__GetDispLabelArray(lineMessage, 0LL);
    if ( !DispLabelArray )
      goto LABEL_24;
    max_length = DispLabelArray->max_length;
    v9 = DispLabelArray;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
        {
          sub_B17100(DispLabelArray, v6, v7);
          sub_B170A0();
        }
        v11 = v9->m_Items[v10];
        if ( !v11 )
          break;
        main = (UnityEngine_Object_o *)v11->fields.main;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        DispLabelArray = (ScriptMessageLabel_array *)UnityEngine_Object__op_Equality(main, 0LL, 0LL);
        if ( ((unsigned __int8)DispLabelArray & 1) == 0 )
        {
          ruby = (UnityEngine_Object_o *)v11->fields.ruby;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          DispLabelArray = (ScriptMessageLabel_array *)UnityEngine_Object__op_Equality(ruby, 0LL, 0LL);
          if ( ((unsigned __int8)DispLabelArray & 1) == 0 )
          {
            v14 = (UnityEngine_Component_o *)v11->fields.ruby;
            if ( !v14 )
              break;
            gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
            if ( !v11->fields.main )
              break;
            v16 = gameObject;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v11->fields.main, 0LL);
            if ( !transform )
              break;
            localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
            GameObjectExtensions__SetLocalPositionY(
              v16,
              localPosition.fields.y + this->fields.rubyRelativePositionY,
              0LL);
          }
        }
        max_length = v9->max_length;
        if ( (int)++v10 >= max_length )
          return;
      }
LABEL_24:
      sub_B170D4();
    }
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v10; // x0
  int v11; // w20
  System_Collections_Generic_Dictionary_int__bool__o *v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+0h] [xbp-70h] BYREF
  int v15; // [xsp+2Ch] [xbp-44h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_40FDF94 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v8);
    byte_40FDF94 = 1;
  }
  memset(&v16, 0, 32);
  v15 = 0;
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v14,
    showStatusDic,
    (const MethodInfo_2DD5C0C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v16.fields.dictionary = *(_OWORD *)&v14.fields.dictionary;
  v16.fields.current = v14.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v16,
            (const MethodInfo_2724684 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !BYTE4(v16.fields.current.fields.key) )
    {
      v14.fields.getEnumeratorRetType = 62;
      v15 = 1;
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        &v16,
        (const MethodInfo_27247D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      v15 = 0;
      return;
    }
  }
  v14.fields.getEnumeratorRetType = 62;
  v15 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v16,
    (const MethodInfo_27247D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v15 = 0;
  v10 = this->fields.showStatusDic;
  if ( !v10 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v14,
    v10,
    (const MethodInfo_2DD5C0C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v16.fields.dictionary = *(_OWORD *)&v14.fields.dictionary;
  v16.fields.current = v14.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v16,
            (const MethodInfo_2724684 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
    EventRewardSaveData__SetBulletInBoardMessageState(
      this->fields.eventId,
      (int32_t)v16.fields.current.fields.key,
      0,
      0LL);
  v14.fields.getEnumeratorRetType = 131;
  v11 = ++v15;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v16,
    (const MethodInfo_27247D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  if ( v11 )
  {
    if ( *((_DWORD *)&v14.fields.current.fields.value + v11 + 1) == 131 )
      v15 = v11 - 1;
  }
  v12 = this->fields.showStatusDic;
  if ( !v12 )
LABEL_18:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__bool___Clear(
    v12,
    (const MethodInfo_2DD585C *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v13);
}


void __fastcall TitleInfoEventBulletinBoardComponent__DeleteLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *label,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FDF89 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, label);
    byte_40FDF89 = 1;
  }
  if ( !label )
    sub_B170D4();
  ScriptLineMessage__DeleteLabels(label, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventBulletinBoardComponent__GetMessage(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *result; // x0
  Il2CppObject *current; // x21
  System_String_o **p_monitor; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *monitor; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  _DWORD *v21; // x8
  __int64 v22; // x8
  System_String_o *v23; // x19
  char v24; // w20
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FDF96 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v7);
    byte_40FDF96 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  result = (System_String_o *)this->fields.messages;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    v26 = v25;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__) )
      {
        v24 = 0;
        v23 = 0LL;
        goto LABEL_16;
      }
      current = v26.fields.current;
      if ( !v26.fields.current )
        sub_B170D4();
    }
    while ( LODWORD(v26.fields.current[1].klass) != id );
    p_monitor = (System_String_o **)&v26.fields.current[1].monitor;
    if ( System_String__IsNullOrEmpty((System_String_o *)v26.fields.current[1].monitor, 0LL)
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[2].monitor, 0LL) )
    {
      this->fields.isSwitchWipe = 1;
      monitor = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)current[2].monitor;
      this->fields.switchInfo = monitor;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.switchInfo,
        (System_Int32_array **)monitor,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v21 = current[2].monitor;
      if ( !v21 )
        sub_B170D4();
      if ( !v21[6] )
      {
        sub_B17100(v18, v19, v20);
        sub_B170A0();
      }
      v22 = *((_QWORD *)v21 + 4);
      if ( !v22 )
        sub_B170D4();
      p_monitor = (System_String_o **)(v22 + 32);
    }
    v23 = *p_monitor;
    v24 = 2;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( ((v24 + 2) & 3) != 0 )
      return 0LL;
    else
      return v23;
  }
  return result;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextMessageId(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  const MethodInfo *v40; // x1
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  bool v56; // zf
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x23
  TitleInfoEventBulletinBoardComponent_o *v58; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v59; // x24
  System_Func_TSource__bool__o *v60; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x1
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  TitleInfoEventBulletinBoardComponent___c_c *v66; // x0
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__57_0; // x22
  Il2CppObject *v69; // x23
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  LastUsedDeckNumberManager_LastUsedInfo_o *UsedDeckNumberManager_LastUsedInfo; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v82; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v84; // x22
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  WeightRate_int__o *v89; // x21
  int size; // w8
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v91; // x8
  int32_t Data; // w23
  int v93; // w19
  int32_t v94; // w0
  int32_t v95; // w0
  int32_t eventId; // w0
  const MethodInfo *v97; // x3
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *v99; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v100; // [xsp+10h] [xbp-C0h] BYREF
  int v101; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v102; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v103; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_40FDF95 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v16);
    sub_B16FFC(&Method_System_Func_EventBulletinBoardEntity__bool___ctor__, v17);
    sub_B16FFC(&System_Func_EventBulletinBoardEntity__bool__TypeInfo, v18);
    sub_B16FFC(
      &Method_System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity___ctor__,
      v19);
    sub_B16FFC(&System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v26);
    sub_B16FFC(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v27);
    sub_B16FFC(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__, v28);
    sub_B16FFC(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__, v29);
    sub_B16FFC(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo, v30);
    sub_B16FFC(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__, v31);
    sub_B16FFC(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo, v32);
    sub_B16FFC(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v33);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v34);
    sub_B16FFC(&Method_WeightRate_int__getData__, v35);
    sub_B16FFC(&Method_WeightRate_int__getData___66776248, v36);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v37);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v38);
    sub_B16FFC(&WeightRate_int__TypeInfo, v39);
    byte_40FDF95 = 1;
  }
  memset(&v103, 0, 32);
  memset(&v102, 0, sizeof(v102));
  v101 = 0;
  v99 = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *)sub_B170CC(
                                                                          TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___ctor(v99, 0LL);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v40);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo,
                                                                                                  v41,
                                                                                                  v42,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_51;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v100,
    showStatusDic,
    (const MethodInfo_2DD5C0C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v103.fields.dictionary = *(_OWORD *)&v100.fields.dictionary;
  v103.fields.current = v100.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v103,
            (const MethodInfo_2724684 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    v51 = sub_B170CC(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo, v47, v48, v49, v50);
    TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___ctor(
      (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)v51,
      0LL);
    if ( !v51 )
      sub_B170D4();
    v56 = ((__int64)v103.fields.current.fields.key & 0xFF00000000LL) == 0;
    *(_QWORD *)(v51 + 16) = v103.fields.current.fields.key;
    if ( v56 )
    {
      messages = this->fields.messages;
      v58 = this;
      v59 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_EventBulletinBoardEntity__bool__TypeInfo,
                                                                                 v52,
                                                                                 v53,
                                                                                 v54,
                                                                                 v55);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v59,
        (Il2CppObject *)v51,
        Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_EventBulletinBoardEntity__bool___ctor__);
      v60 = (System_Func_TSource__bool__o *)v59;
      this = v58;
      v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)messages,
                                                                     v60,
                                                                     (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
      if ( !v45 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v45,
        v61,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    }
  }
  v100.fields.getEnumeratorRetType = 123;
  v101 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v103,
    (const MethodInfo_27247D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v101 = 0;
  v66 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  if ( (BYTE3(TitleInfoEventBulletinBoardComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    v66 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  }
  static_fields = v66->static_fields;
  _9__57_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    }
    v69 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B170CC(System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo, v62, v63, v64, v65);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__57_0,
      v69,
      Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__,
      (const MethodInfo_2B75C40 *)Method_System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity___ctor__);
    v70 = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    v70->__9__57_0 = (struct System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__o *)_9__57_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v70->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  UsedDeckNumberManager_LastUsedInfo = System_Linq_Enumerable__Aggregate_LastUsedDeckNumberManager_LastUsedInfo_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                                         (System_Func_TSource__TSource__TSource__o *)_9__57_0,
                                         (const MethodInfo_18C6320 *)Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
  if ( !UsedDeckNumberManager_LastUsedInfo )
    goto LABEL_51;
  if ( !v99 )
    goto LABEL_51;
  v99->fields.minDispOrderNum = (int32_t)UsedDeckNumberManager_LastUsedInfo[1].klass;
  v82 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventBulletinBoardEntity__bool__TypeInfo,
                                                                             v78,
                                                                             v79,
                                                                             v80,
                                                                             v81);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v82,
    (Il2CppObject *)v99,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventBulletinBoardEntity__bool___ctor__);
  v83 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v45,
          (System_Func_TSource__bool__o *)v82,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  v84 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v83,
                                                                                         (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  v89 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v85, v86, v87, v88);
  WeightRate_int____ctor(v89, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  if ( !v84 )
    goto LABEL_51;
  size = v84->fields._size;
  if ( size >= 2 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v100,
      v84,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    v102.fields.current = v100.fields.current.fields.key;
    *(_OWORD *)&v102.fields.list = *(_OWORD *)&v100.fields.dictionary;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v102,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__) )
    {
      if ( !v102.fields.current )
        sub_B170D4();
      if ( !v89 )
        sub_B170D4();
      WeightRate_int___setWeight(
        v89,
        HIDWORD(v102.fields.current[2].klass),
        (int32_t)v102.fields.current[1].klass,
        (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
    }
    v100.fields.getEnumeratorRetType = 276;
    v93 = ++v101;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v102,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( v93 && *((_DWORD *)&v100.fields.current.fields.value + v93 + 1) == 276 )
      v101 = v93 - 1;
    if ( !v89 )
      goto LABEL_51;
    v94 = UnityEngine_Random__Range_34843248(0, v89->fields.totalweight, 0LL);
    Data = WeightRate_int___getData(v89, v94, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
  }
  else
  {
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v91 = v84->fields._items->m_Items[0];
    if ( !v91 )
      goto LABEL_51;
    Data = (int32_t)v91->fields.buff;
  }
  if ( this->fields.isLastSeed )
  {
    if ( System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v84,
           (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___) >= 2
      && Data == this->fields.lastMessageId )
    {
      if ( !v89 )
        goto LABEL_51;
      v95 = UnityEngine_Random__Range_34843248(0, v89->fields.totalweight, 0LL);
      Data = WeightRate_int___getData_44944076(
               v89,
               v95,
               this->fields.lastMessageId,
               (const MethodInfo_2ADCACC *)Method_WeightRate_int__getData___66776248);
    }
    eventId = this->fields.eventId;
    this->fields.isLastSeed = 0;
    EventRewardSaveData__SetBulletInBoardLastMessageId(eventId, 0, 0LL);
  }
  if ( !v45 )
LABEL_51:
    sub_B170D4();
  if ( v45->fields._size == 1 )
  {
    this->fields.isLastSeed = 1;
    this->fields.lastMessageId = Data;
    EventRewardSaveData__SetBulletInBoardLastMessageId(Data, 0, 0LL);
  }
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, Data, 1, 0LL);
  TitleInfoEventBulletinBoardComponent__SetShowStatus(this, Data, 1, v97);
  return Data;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextRandomIdx(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *randomQue; // x0
  System_Collections_Generic_List_int__o **p_randomQue; // x20
  System_Collections_Generic_List_int__o *v15; // x22
  int size; // w8
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v18; // w21
  int32_t v19; // w22
  System_Collections_Generic_List_int__o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_Collections_Generic_List_int__o *v28; // x19

  if ( (byte_40FDF98 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__RemoveAt__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___, v12);
    byte_40FDF98 = 1;
  }
  p_randomQue = &this->fields.randomQue;
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___RemoveAt(
      randomQue,
      0,
      (const MethodInfo_2F121A8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v15 = *p_randomQue;
    if ( !*p_randomQue )
      goto LABEL_22;
    size = v15->fields._size;
    if ( size <= 1 )
    {
      if ( !size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      messages = this->fields.messages;
      if ( !messages )
LABEL_22:
        sub_B170D4();
      v18 = 0;
      v19 = v15->fields._items->m_Items[1];
      while ( v18 < messages->fields._size )
      {
        if ( v19 != v18 )
        {
          if ( !*p_randomQue )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            *p_randomQue,
            v18,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          messages = this->fields.messages;
        }
        ++v18;
        if ( !messages )
          goto LABEL_22;
      }
      TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        (System_Collections_Generic_List_T__o *)*p_randomQue,
        1,
        (const MethodInfo_2253DE0 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    }
  }
  else
  {
    v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.randomQue = v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.randomQue,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v27);
  }
  v28 = *p_randomQue;
  if ( !*p_randomQue )
    goto LABEL_22;
  if ( !v28->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return v28->fields._items->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__Init(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t dispType,
        int32_t eventId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *v13; // x22
  struct UIPanel_o *scrollerPanel; // x8
  float z; // s0
  System_String_o *baseIconName; // x22
  UISprite_o *baseIcon; // x23
  System_String_o *wipeIconFrameName; // x22
  UISprite_o *wipeIconFrame; // x23
  struct UISprite_o *v20; // x0
  struct UISprite_o *bulletinBg; // x0
  struct UISprite_o *bulletinTitle; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_Dictionary_int__bool__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t BulletInBoardLastMessageId; // w0
  const MethodInfo *v37; // x2
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDF8A & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&dispType);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v10);
    byte_40FDF8A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v38 = TitleInfoEventBulletinBoardComponent__localPosByDispType(this, dispType, v12);
  GameObjectExtensions__SetLocalPosition(gameObject, v38, 0LL);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v13, one, 0LL);
  scrollerPanel = this->fields.scrollerPanel;
  if ( !scrollerPanel )
    goto LABEL_18;
  z = scrollerPanel->fields.mClipRange.fields.z;
  this->fields.left = z * -0.5;
  this->fields.right = z * 0.5;
  baseIcon = this->fields.baseIcon;
  baseIconName = this->fields.baseIconName;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseIcon, baseIconName, 0LL);
  AtlasManager__SetBanner(this->fields.bulletinBg, this->fields.bulletinBgName, 0LL);
  AtlasManager__SetBanner(this->fields.bulletinTitle, this->fields.bulletinTitleName, 0LL);
  if ( this->fields.isDispWipeIcon )
  {
    wipeIconFrame = this->fields.wipeIconFrame;
    wipeIconFrameName = this->fields.wipeIconFrameName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(wipeIconFrame, wipeIconFrameName, 0LL);
  }
  v20 = this->fields.baseIcon;
  if ( !v20
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
          v20,
          v20->klass->vtable._34_get_minWidth.methodPtr),
        (bulletinBg = this->fields.bulletinBg) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))bulletinBg->klass->vtable._33_MakePixelPerfect.method)(
          bulletinBg,
          bulletinBg->klass->vtable._34_get_minWidth.methodPtr),
        (bulletinTitle = this->fields.bulletinTitle) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))bulletinTitle->klass->vtable._33_MakePixelPerfect.method)(
          bulletinTitle,
          bulletinTitle->klass->vtable._34_get_minWidth.methodPtr),
        (v23 = (UnityEngine_Component_o *)this->fields.baseIcon) == 0LL)
    || (v24 = UnityEngine_Component__get_gameObject(v23, 0LL)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v24, this->fields.isDispBaseIcon, 0LL);
  this->fields.eventId = eventId;
  v29 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v25,
                                                                v26,
                                                                v27,
                                                                v28);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v29,
    (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.showStatusDic = v29;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.showStatusDic,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BulletInBoardLastMessageId = EventRewardSaveData__GetBulletInBoardLastMessageId(this->fields.eventId, 0LL);
  this->fields.lastMessageId = BulletInBoardLastMessageId;
  this->fields.isLastSeed = BulletInBoardLastMessageId > 0;
  TitleInfoEventBulletinBoardComponent__LoadAssetData(this, callBack, v37);
}


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_2253DE0 *method)
{
  int32_t v6; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  unsigned int v9; // w23
  unsigned int v10; // w24
  unsigned int v11; // w25
  unsigned int v12; // w0

  if ( !list )
    sub_B170D4();
  v6 = ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)();
  v7 = withoutFirst;
  if ( v6 > v7 )
  {
    v8 = v6;
    v9 = v7;
    do
    {
      v10 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
              list,
              v9);
      v11 = UnityEngine_Random__Range_34843248(v7, v8, 0LL);
      v12 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
              list,
              v11);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, _QWORD))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v9,
        v12);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, _QWORD))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v11,
        v10);
      ++v9;
    }
    while ( v8 != v9 );
  }
  return list;
}


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle_object_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_2253ED8 *method)
{
  int32_t v6; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  unsigned int v9; // w23
  __int64 v10; // x24
  unsigned int v11; // w25
  __int64 v12; // x0

  if ( !list )
    sub_B170D4();
  v6 = ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)();
  v7 = withoutFirst;
  if ( v6 > v7 )
  {
    v8 = v6;
    v9 = v7;
    do
    {
      v10 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
              list,
              v9);
      v11 = UnityEngine_Random__Range_34843248(v7, v8, 0LL);
      v12 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
              list,
              v11);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, __int64))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v9,
        v12);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, __int64))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v11,
        v10);
      ++v9;
    }
    while ( v8 != v9 );
  }
  return list;
}


void __fastcall TitleInfoEventBulletinBoardComponent__LoadAssetData(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x0
  System_String_o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  AssetLoader_LoadEndDataHandler_o *v30; // x20

  if ( (byte_40FDF97 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callBack);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__, v8);
    sub_B16FFC(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6184, v10);
    byte_40FDF97 = 1;
  }
  v11 = sub_B170CC(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, callBack, method, v3, v4);
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___ctor(
    (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = callBack;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callBack, v18, v19, v20, v21, v22, v23);
  v24 = System_Int32__ToString((int)this + 248, 0LL);
  v25 = System_String__Concat_43743732((System_String_o *)StringLiteral_6184, v24, 0LL);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v26, v27, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v11,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v25, v30, 1, 0LL);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetRandomQueue(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v6; // w20
  System_Collections_Generic_List_int__o *randomQue; // x0

  if ( (byte_40FDF99 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v3);
    sub_B16FFC(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___, v4);
    byte_40FDF99 = 1;
  }
  messages = this->fields.messages;
  if ( !messages )
LABEL_8:
    sub_B170D4();
  v6 = 0;
  while ( 1 )
  {
    randomQue = this->fields.randomQue;
    if ( v6 >= messages->fields._size )
      break;
    if ( randomQue )
    {
      System_Collections_Generic_List_int___Add(
        randomQue,
        v6,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      messages = this->fields.messages;
      ++v6;
      if ( messages )
        continue;
    }
    goto LABEL_8;
  }
  TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
    (System_Collections_Generic_List_T__o *)randomQue,
    0,
    (const MethodInfo_2253DE0 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  Il2CppObject *current; // x23
  const MethodInfo *v10; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v12; // x0
  const MethodInfo *v13; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FDF93 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v7);
    byte_40FDF93 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  messages = this->fields.messages;
  if ( !messages )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)messages,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__) )
  {
    current = v17.fields.current;
    if ( !v17.fields.current )
      sub_B170D4();
    if ( EventRewardSaveData__GetBulletInBoardMessageState(
           this->fields.eventId,
           (int32_t)v17.fields.current[1].klass,
           0LL) )
    {
      TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 1, v10);
    }
    showStatusDic = this->fields.showStatusDic;
    if ( !showStatusDic )
      sub_B170D4();
    if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            showStatusDic,
            (int32_t)current[1].klass,
            (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      goto LABEL_14;
    v12 = this->fields.showStatusDic;
    if ( !v12 )
      sub_B170D4();
    if ( System_Collections_Generic_Dictionary_int__bool___get_Item(
           v12,
           (int32_t)current[1].klass,
           (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
    {
LABEL_14:
      v14 = this->fields.showStatusDic;
      if ( !v14 )
        sub_B170D4();
      if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
             v14,
             (int32_t)current[1].klass,
             (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      {
        continue;
      }
    }
    TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 0, v13);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__SetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isShow,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  bool v10; // w0

  if ( (byte_40FDF92 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v8);
    byte_40FDF92 = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic
    || (v10 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                showStatusDic,
                id,
                (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__),
        !this->fields.showStatusDic) )
  {
    sub_B170D4();
  }
  if ( v10 )
    System_Collections_Generic_Dictionary_int__bool___set_Item(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  else
    System_Collections_Generic_Dictionary_int__bool___Add(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_2DD5680 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, id, isShow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__SetUp(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Collections_Generic_List_EventBulletinBoardEntity__o *boardMessages,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UILabel_o *svtNameLabel; // x0
  UISprite_o *wipeIcon; // x0
  UISprite_o *wipeIcon2; // x0
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  const MethodInfo *v19; // x3

  if ( (byte_40FDF8C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, boardMessages);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FDF8C = 1;
  }
  this->fields.messages = boardMessages;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.messages,
    (System_Int32_array **)boardMessages,
    *(System_String_array ***)&eventId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventId = eventId;
  TitleInfoEventBulletinBoardComponent__resetLabelList(this, v13);
  coroutine = this->fields.coroutine;
  if ( coroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_34804984((UnityEngine_MonoBehaviour_o *)this, coroutine, 0LL);
  svtNameLabel = this->fields.svtNameLabel;
  if ( !svtNameLabel
    || (UILabel__set_text(svtNameLabel, (System_String_o *)StringLiteral_1, 0LL),
        (wipeIcon = this->fields.wipeIcon) == 0LL)
    || (UISprite__set_atlas(wipeIcon, 0LL, 0LL), (wipeIcon2 = this->fields.wipeIcon2) == 0LL)
    || (UISprite__set_atlas(wipeIcon2, 0LL, 0LL), (showStatusDic = this->fields.showStatusDic) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_int__bool___Clear(
    showStatusDic,
    (const MethodInfo_2DD585C *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  if ( boardMessages )
  {
    if ( boardMessages->fields._size >= 1 )
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        this,
        this->fields.right + *(&this->fields.setUpSpaceBetweenMessages + 1),
        0,
        1,
        v19);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isSetUp,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FDF8F & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo, *(_QWORD *)&id);
    byte_40FDF8F = 1;
  }
  v8 = sub_B170CC(
         TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo,
         *(_QWORD *)&id,
         isSetUp,
         method,
         v4);
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51___ctor(
    (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 48) = id;
  *(_BYTE *)(v8 + 32) = isSetUp;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventBulletinBoardComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x23
  EventBulletinBoardEntity_BulletinBoardInfo_o *v8; // x8
  UILabel_o *svtNameLabel; // x0
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v10; // x9
  __int64 v11; // x8
  __int64 v12; // x10
  EventBulletinBoardEntity_BulletinBoardInfo_o *v13; // x9
  UISprite_o *v14; // x21
  int32_t eventId; // w20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x22
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *wipeIcon; // x0
  UnityEngine_Component_o *wipeIcon2; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x0
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v24; // x8
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_40FDF90 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v4);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B16FFC(&StringLiteral_18601, v5);
    byte_40FDF90 = 1;
  }
  switchInfo = v3->fields.switchInfo;
  if ( !switchInfo )
    goto LABEL_25;
  switchCount = v3->fields.switchCount;
  if ( (unsigned int)switchCount >= switchInfo->max_length )
    goto LABEL_26;
  v8 = switchInfo->m_Items[switchCount];
  if ( !v8 )
    goto LABEL_25;
  svtNameLabel = v3->fields.svtNameLabel;
  if ( !svtNameLabel )
    goto LABEL_25;
  UILabel__set_text(svtNameLabel, v8->fields.name, 0LL);
  v10 = v3->fields.switchInfo;
  v11 = 160LL;
  if ( (switchCount & 1) != 0 )
    v11 = 168LL;
  if ( !v10 )
    goto LABEL_25;
  v12 = v3->fields.switchCount;
  if ( (unsigned int)v12 >= v10->max_length )
  {
LABEL_26:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v13 = v10->m_Items[v12];
  if ( !v13 )
    goto LABEL_25;
  v14 = *(UISprite_o **)((char *)&v3->klass + v11);
  eventId = v3->fields.eventId;
  iconId = v13->fields.iconId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v17 = System_String__Format((System_String_o *)StringLiteral_18601, v16, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, v14, v17, 0LL);
  if ( (switchCount & 1) == 0 )
  {
    wipeIcon2 = (UnityEngine_Component_o *)v3->fields.wipeIcon2;
    if ( wipeIcon2 )
    {
      gameObject = UnityEngine_Component__get_gameObject(wipeIcon2, 0LL);
      TweenAlpha__Begin(gameObject, v3->fields.wipeIconCrossFadeTime, 0.0, 0LL);
      wipeIcon = (UnityEngine_Component_o *)v3->fields.wipeIcon;
      if ( wipeIcon )
        goto LABEL_21;
    }
LABEL_25:
    sub_B170D4();
  }
  v18 = (UnityEngine_Component_o *)v3->fields.wipeIcon;
  if ( !v18 )
    goto LABEL_25;
  v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
  TweenAlpha__Begin(v19, v3->fields.wipeIconCrossFadeTime, 0.0, 0LL);
  wipeIcon = (UnityEngine_Component_o *)v3->fields.wipeIcon2;
  if ( !wipeIcon )
    goto LABEL_25;
LABEL_21:
  v23 = UnityEngine_Component__get_gameObject(wipeIcon, 0LL);
  TweenAlpha__Begin(v23, v3->fields.wipeIconCrossFadeTime, 1.0, 0LL);
  v24 = v3->fields.switchInfo;
  if ( !v24 )
    goto LABEL_25;
  if ( v3->fields.switchCount >= (signed int)(v24->max_length - 1) )
  {
    v3->fields.isSwitchWipe = 0;
    v3->fields.switchCount = 0;
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__Update(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  char v11; // w22
  float v12; // s0
  float v13; // s9
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  float v16; // s0
  UnityEngine_GameObject_o *v17; // x0
  float LocalPositionX; // s0
  TitleInfoEventBulletinBoardComponent_o *v19; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_ScriptLineMessage__o *v22; // x20
  struct System_Collections_Generic_List_ScriptLineMessage__o *v23; // x0
  float right; // s0
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FDF88 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__, v8);
    byte_40FDF88 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  labels = this->fields.labels;
  if ( labels )
  {
    messages = this->fields.messages;
    if ( messages )
    {
      if ( messages->fields._size < 1 )
        return;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v26,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)labels,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
      v11 = 0;
      v27 = v26;
      v12 = 0.0;
LABEL_7:
      v13 = v12;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v27,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__) )
      {
        current = v27.fields.current;
        if ( !v27.fields.current )
          sub_B170D4();
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27.fields.current, 0LL);
        v16 = -(float)(UnityEngine_Time__get_deltaTime(0LL) * this->fields.spaceBetweenMessages);
        GameObjectExtensions__AddLocalPositionX(gameObject, v16, 0LL);
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v17, 0LL);
        v12 = LocalPositionX + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)current, 0LL).fields.x;
        v11 |= v12 < this->fields.left;
        if ( v12 > v13 )
          goto LABEL_7;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v27,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
      if ( (v11 & 1) == 0 )
        goto LABEL_18;
      v22 = this->fields.labels;
      if ( v22 )
      {
        if ( !v22->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        TitleInfoEventBulletinBoardComponent__DeleteLabel(v19, v22->fields._items->m_Items[0], v20);
        v23 = this->fields.labels;
        if ( v23 )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v23,
            0,
            (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
LABEL_18:
          right = this->fields.right;
          if ( v13 < right )
          {
            if ( this->fields.isSwitchWipe )
            {
              ++this->fields.switchCount;
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, right, 1, 0, v21);
              TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(this, v25);
            }
            else
            {
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(
                this,
                v13 + this->fields.setUpSpaceBetweenMessages,
                0,
                0,
                v21);
            }
          }
          return;
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TitleInfoEventBulletinBoardComponent__localPosByDispType(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  char x_low; // w8
  float *p_y; // x8
  float *p_z; // x9
  float *p_messageScrollSpeed; // x10
  float v9; // s1
  float v10; // s0
  float v11; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDF8B & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, *(_QWORD *)&dispType);
    byte_40FDF8B = 1;
  }
  x_low = LOBYTE(this->fields.TerminalFSLocalPos.fields.x);
  if ( x_low )
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    x_low = !FSUtility__IsUnderVista(0LL);
  }
  if ( dispType == 1 )
  {
    if ( (x_low & 1) != 0 )
    {
      p_y = &this->fields.EventFSLocalPos.fields.y;
      p_z = &this->fields.EventFSLocalPos.fields.z;
      p_messageScrollSpeed = &this->fields.messageScrollSpeed;
    }
    else
    {
      p_y = &this->fields.EventLocalPos.fields.y;
      p_z = &this->fields.EventLocalPos.fields.z;
      p_messageScrollSpeed = (float *)&this->fields.enableFSPos;
    }
  }
  else if ( (x_low & 1) != 0 )
  {
    p_y = &this->fields.TerminalFSLocalPos.fields.y;
    p_z = &this->fields.TerminalFSLocalPos.fields.z;
    p_messageScrollSpeed = &this->fields.EventFSLocalPos.fields.x;
  }
  else
  {
    p_y = &this->fields.TerminalLocalPos.fields.y;
    p_z = &this->fields.TerminalLocalPos.fields.z;
    p_messageScrollSpeed = &this->fields.EventLocalPos.fields.x;
  }
  v9 = *p_z;
  v10 = *p_y;
  v11 = *p_messageScrollSpeed;
  result.fields.z = v11;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}


void __fastcall TitleInfoEventBulletinBoardComponent__resetLabelList(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o **p_labels; // x20
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_int__o *randomQue; // x0
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FDF8D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ScriptLineMessage___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ScriptLineMessage__TypeInfo, v12);
    byte_40FDF8D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  p_labels = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.labels;
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)labels,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
      if ( !v15 )
        break;
      TitleInfoEventBulletinBoardComponent__DeleteLabel(
        (TitleInfoEventBulletinBoardComponent_o *)v15,
        (ScriptLineMessage_o *)v26.fields.current,
        v16);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    if ( !*p_labels )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      *p_labels,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ScriptLineMessage__Clear__);
  }
  else
  {
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ScriptLineMessage__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    *p_labels = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.labels,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___Clear(
      randomQue,
      (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v25);
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51___ctor(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__MoveNext(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x23
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x8
  float v25; // s8
  UnityEngine_WaitForSeconds_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  bool result; // w0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Component_o *wipeIcon2; // x0
  UnityEngine_GameObject_o *v37; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *bulletinBoardMst_5__2; // x0
  struct EventBulletinBoardEntity_o **p_ent_5__3; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  UILabel_o *svtNameLabel; // x0
  System_String_o *name; // x1
  struct EventBulletinBoardEntity_o *ent_5__3; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v48; // x8
  int32_t eventId; // w20
  UISprite_o *wipeIcon; // x21
  Il2CppObject *v51; // x0
  System_String_o *v52; // x22
  UnityEngine_Component_o *v53; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventBulletinBoardEntity_o *v55; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v56; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v57; // x8
  float wipeIconFadeOutTime; // s8
  UnityEngine_WaitForSeconds_o *v59; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_40F7822 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_18601, v9);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)sub_B16FFC(&StringLiteral_1, v10);
    byte_40F7822 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_41;
    ent_5__3 = v3->fields._ent_5__3;
    if ( !ent_5__3 )
      goto LABEL_41;
    script = ent_5__3->fields.script;
    if ( !script )
      goto LABEL_41;
    if ( script->max_length )
    {
      v48 = script->m_Items[0];
      if ( !v48 )
        goto LABEL_41;
      eventId = _4__this->fields.eventId;
      wipeIcon = _4__this->fields.wipeIcon;
      iconId = v48->fields.iconId;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      v52 = System_String__Format((System_String_o *)StringLiteral_18601, v51, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI_28584872(eventId, wipeIcon, v52, 0LL);
      v53 = (UnityEngine_Component_o *)_4__this->fields.wipeIcon;
      if ( !v53 )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject(v53, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)TweenAlpha__Begin(
                                                                                           gameObject,
                                                                                           _4__this->fields.wipeIconFadeInTime,
                                                                                           1.0,
                                                                                           0LL);
      v55 = v3->fields._ent_5__3;
      if ( !v55 )
        goto LABEL_41;
      v56 = v55->fields.script;
      if ( !v56 )
        goto LABEL_41;
      if ( v56->max_length )
      {
        v57 = v56->m_Items[0];
        if ( !v57 )
          goto LABEL_41;
        svtNameLabel = _4__this->fields.svtNameLabel;
        if ( !svtNameLabel )
          goto LABEL_41;
        name = v57->fields.name;
        goto LABEL_38;
      }
    }
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      v34 = (UnityEngine_Component_o *)_4__this->fields.wipeIcon;
      if ( v34 )
      {
        v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
        TweenAlpha__Begin(v35, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
        wipeIcon2 = (UnityEngine_Component_o *)_4__this->fields.wipeIcon2;
        if ( wipeIcon2 )
        {
          v37 = UnityEngine_Component__get_gameObject(wipeIcon2, 0LL);
          TweenAlpha__Begin(v37, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
          bulletinBoardMst_5__2 = (DataMasterBase_WarMaster__WarEntity__int__o *)v3->fields._bulletinBoardMst_5__2;
          if ( bulletinBoardMst_5__2 )
          {
            p_ent_5__3 = &v3->fields._ent_5__3;
            if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   bulletinBoardMst_5__2,
                   (WarEntity_o **)&v3->fields._ent_5__3,
                   v3->fields.id,
                   (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__) )
            {
              if ( !*p_ent_5__3 )
                goto LABEL_41;
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)(*p_ent_5__3)->fields.script, 0LL) )
              {
                wipeIconFadeOutTime = _4__this->fields.wipeIconFadeOutTime;
                v59 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(
                                                        UnityEngine_WaitForSeconds_TypeInfo,
                                                        v40,
                                                        v41,
                                                        v42,
                                                        v43);
                UnityEngine_WaitForSeconds___ctor(v59, wipeIconFadeOutTime, 0LL);
                v3->fields.__2__current = (Il2CppObject *)v59;
                p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
                sub_B16F98(p__2__current, (System_Int32_array **)v59, v61, v62, v63, v64, v65, v66);
                *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
                return 1;
              }
            }
            svtNameLabel = _4__this->fields.svtNameLabel;
            if ( svtNameLabel )
            {
              name = (System_String_o *)StringLiteral_1;
LABEL_38:
              UILabel__set_text(svtNameLabel, name, 0LL);
              return 0;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B170D4();
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
  v3->fields._bulletinBoardMst_5__2 = (struct EventBulletinBoardMaster_o *)Master_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v3->fields._bulletinBoardMst_5__2,
    Master_WarQuestSelectionMaster,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !_4__this )
    goto LABEL_41;
  if ( v3->fields.isSetUp )
    v24 = 208LL;
  else
    v24 = 204LL;
  v25 = *(float *)((char *)&_4__this->klass + v24);
  v26 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v20, v21, v22, v23);
  UnityEngine_WaitForSeconds___ctor(v26, v25, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v3->fields.__2__current,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  result = 1;
  v3->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_Collections_IEnumerator_Reset(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_Collections_IEnumerator_get_Current(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_IDisposable_Dispose(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventBulletinBoardComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F781F & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1);
    byte_40F781F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall TitleInfoEventBulletinBoardComponent___c___ctor(
        TitleInfoEventBulletinBoardComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


EventBulletinBoardEntity_o *__fastcall TitleInfoEventBulletinBoardComponent___c___GetNextMessageId_b__57_0(
        TitleInfoEventBulletinBoardComponent___c_o *this,
        EventBulletinBoardEntity_o *a,
        EventBulletinBoardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  if ( a->fields.dispOrder >= b->fields.dispOrder )
    return b;
  else
    return a;
}


void __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___GetNextMessageId_b__1(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *this,
        EventBulletinBoardEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.dispOrder == this->fields.minDispOrderNum;
}


void __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___GetNextMessageId_b__2(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *this,
        EventBulletinBoardEntity_o *t,
        const MethodInfo *method)
{
  if ( (byte_40F7820 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, t);
    byte_40F7820 = 1;
  }
  if ( !t )
    sub_B170D4();
  return t->fields.id == this->fields.showStatus.fields.key;
}


void __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___LoadAssetData_b__0(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x8
  struct TitleInfoEventBulletinBoardComponent_o *v11; // x8
  int32_t eventId; // w20
  System_Action_o *callBack; // x19

  if ( (byte_40F7821 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, assetData);
    byte_40F7821 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.bulletinBoardAssetData = assetData,
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.bulletinBoardAssetData,
          (System_Int32_array **)assetData,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (v11 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  eventId = v11->fields.eventId;
  callBack = this->fields.callBack;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28584560(eventId, callBack, 1, 0LL);
}