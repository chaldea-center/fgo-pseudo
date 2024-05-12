void __fastcall ItemNumDispControl___cctor(const MethodInfo *method)
{
  if ( (byte_438A744 & 1) == 0 )
  {
    sub_B775C4(&ItemNumDispControl_TypeInfo);
    byte_438A744 = 1;
  }
  ItemNumDispControl_TypeInfo->static_fields->EVENT_ALPHA_ANIM_SPD_RATE = 0.5;
  ItemNumDispControl_TypeInfo->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL = 2.0;
}


void __fastcall ItemNumDispControl___ctor(ItemNumDispControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438A743 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_438A743 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.SetAlphaDispInfoGroup = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.SetAlphaDispInfoGroup,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemNumDispControl__InitEventAlphaAnim(
        ItemNumDispControl_o *this,
        System_Collections_Generic_List_GameObject__o *infoList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Collections_Generic_List_GameObject__o **p_SetAlphaDispInfoGroup; // x21
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  struct UIWidget_o *alphaAnimRoot; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438A73F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_438A73F = 1;
  }
  memset(&v18, 0, sizeof(v18));
  this->fields.SetAlphaDispInfoGroup = infoList;
  p_SetAlphaDispInfoGroup = &this->fields.SetAlphaDispInfoGroup;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.SetAlphaDispInfoGroup,
    (System_Int32_array **)infoList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ItemNumDispControl__IsEventInfoGroups(this, v11) )
  {
    ItemNumDispControl__SetDispEventInfoGroup(this, 0, v13);
    alphaAnimRoot = this->fields.alphaAnimRoot;
    this->fields.alphaAnimTgt = 1.0;
    if ( alphaAnimRoot )
    {
      ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))alphaAnimRoot->klass->vtable._8_set_alpha.method)(
        alphaAnimRoot,
        alphaAnimRoot->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        1.0);
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      return;
    }
LABEL_17:
    sub_B7769C(alphaAnimRoot, v12);
  }
  alphaAnimRoot = this->fields.alphaAnimRoot;
  if ( !alphaAnimRoot )
    goto LABEL_17;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))alphaAnimRoot->klass->vtable._8_set_alpha.method)(
    alphaAnimRoot,
    alphaAnimRoot->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  alphaAnimRoot = (struct UIWidget_o *)*p_SetAlphaDispInfoGroup;
  if ( !*p_SetAlphaDispInfoGroup )
    goto LABEL_17;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alphaAnimRoot,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B7769C(0LL, v15);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v18.fields.current, 0LL);
    if ( !gameObject )
      sub_B7769C(0LL, v17);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool __fastcall ItemNumDispControl__IsEventInfoGroups(ItemNumDispControl_o *this, const MethodInfo *method)
{
  ItemNumDispControl_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *SetAlphaDispInfoGroup; // x8

  v2 = this;
  if ( (byte_438A740 & 1) == 0 )
  {
    this = (ItemNumDispControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_438A740 = 1;
  }
  SetAlphaDispInfoGroup = v2->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup )
    sub_B7769C(this, method);
  return SetAlphaDispInfoGroup->fields._size > 1;
}


void __fastcall ItemNumDispControl__NextDispEventInfoGroup(ItemNumDispControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemNumDispControl__SetDispEventInfoGroup(this, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemNumDispControl__SetDispEventInfoGroup(
        ItemNumDispControl_o *this,
        int32_t group_id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SetAlphaDispInfoGroup; // x0
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_GameObject__o *v10; // x20
  __int64 infoGroupIdx; // x19
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_438A741 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_438A741 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( (group_id & 0x80000000) != 0 )
  {
    SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.SetAlphaDispInfoGroup;
    v6 = this->fields.infoGroupIdx + 1;
    this->fields.infoGroupIdx = v6;
    if ( !SetAlphaDispInfoGroup )
      goto LABEL_22;
    if ( v6 >= SetAlphaDispInfoGroup->fields._size )
      this->fields.infoGroupIdx = 0;
  }
  else
  {
    SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.SetAlphaDispInfoGroup;
    this->fields.infoGroupIdx = group_id;
    if ( !SetAlphaDispInfoGroup )
      goto LABEL_22;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    SetAlphaDispInfoGroup,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v13.fields.current )
      sub_B7769C(0LL, v7);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v13.fields.current, 0LL);
    if ( !gameObject )
      sub_B7769C(0LL, v9);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v10 = this->fields.SetAlphaDispInfoGroup;
  if ( !v10 )
    goto LABEL_22;
  infoGroupIdx = this->fields.infoGroupIdx;
  if ( v10->fields._size <= (unsigned int)infoGroupIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v10->fields._items->m_Items[infoGroupIdx];
  if ( !SetAlphaDispInfoGroup
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)SetAlphaDispInfoGroup, 0LL)) == 0LL )
  {
LABEL_22:
    sub_B7769C(SetAlphaDispInfoGroup, *(_QWORD *)&group_id);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SetAlphaDispInfoGroup, 1, 0LL);
}


void __fastcall ItemNumDispControl__Update(ItemNumDispControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( ItemNumDispControl__IsEventInfoGroups(this, method) )
    ItemNumDispControl__UpdateEventAlphaAnim(this, v3);
}


void __fastcall ItemNumDispControl__UpdateEventAlphaAnim(ItemNumDispControl_o *this, const MethodInfo *method)
{
  CommonUI_o *IsEventInfoGroups; // x0
  __int64 v4; // x1
  struct UIWidget_o *alphaAnimRoot; // x8
  UIWidget_c *klass; // x9
  long double v7; // q0
  float alphaAnimTgt; // s10
  float v9; // s8
  ItemNumDispControl_c *v10; // x0
  float EVENT_ALPHA_ANIM_SPD_RATE; // s11
  ItemNumDispControl_c *v12; // x0
  float alphaAnimTimeOld; // s12
  float v14; // s9
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438A742 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&ItemNumDispControl_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A742 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  IsEventInfoGroups = (CommonUI_o *)ItemNumDispControl__IsEventInfoGroups(this, method);
  alphaAnimRoot = this->fields.alphaAnimRoot;
  if ( !alphaAnimRoot )
    goto LABEL_30;
  klass = alphaAnimRoot->klass;
  if ( ((unsigned __int8)IsEventInfoGroups & 1) != 0 )
  {
    v7 = ((long double (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer))klass->vtable._7_get_alpha.method)(
           this->fields.alphaAnimRoot,
           klass->vtable._8_set_alpha.methodPtr);
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v9 = *(float *)&v7;
    v10 = ItemNumDispControl_TypeInfo;
    if ( (BYTE3(ItemNumDispControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ItemNumDispControl_TypeInfo->_2.cctor_finished )
    {
      *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
      v10 = ItemNumDispControl_TypeInfo;
    }
    EVENT_ALPHA_ANIM_SPD_RATE = v10->static_fields->EVENT_ALPHA_ANIM_SPD_RATE;
    if ( !this->fields.isPauseEventAlphaAnim )
    {
      IsEventInfoGroups = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !IsEventInfoGroups )
        goto LABEL_30;
      if ( !CommonUI__IsActive_UserPresentBoxWindow(IsEventInfoGroups, 0LL) )
      {
        *(float *)&v7 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        v12 = ItemNumDispControl_TypeInfo;
        alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
        v14 = *(float *)&v7;
        if ( (BYTE3(ItemNumDispControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ItemNumDispControl_TypeInfo->_2.cctor_finished )
        {
          *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
          v12 = ItemNumDispControl_TypeInfo;
        }
        if ( (float)(v14 - alphaAnimTimeOld) >= v12->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
        {
          this->fields.alphaAnimTgt = 0.0;
          this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        }
      }
    }
    *(float *)&v7 = v9 + (float)((float)(alphaAnimTgt - v9) * EVENT_ALPHA_ANIM_SPD_RATE);
    if ( *(float *)&v7 <= 0.01 && this->fields.alphaAnimTgt <= 0.0 )
    {
      this->fields.alphaAnimTgt = 1.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      ItemNumDispControl__SetDispEventInfoGroup(this, -1, v15);
      LODWORD(v7) = 0;
    }
    IsEventInfoGroups = (CommonUI_o *)this->fields.alphaAnimRoot;
    if ( IsEventInfoGroups )
    {
      ((void (__fastcall *)(CommonUI_o *, Il2CppClass *, long double))IsEventInfoGroups->klass[1]._1.castClass)(
        IsEventInfoGroups,
        IsEventInfoGroups->klass[1]._1.declaringType,
        v7);
      return;
    }
LABEL_30:
    sub_B7769C(IsEventInfoGroups, v4);
  }
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))klass->vtable._8_set_alpha.method)(
    this->fields.alphaAnimRoot,
    klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  IsEventInfoGroups = (CommonUI_o *)this->fields.SetAlphaDispInfoGroup;
  if ( !IsEventInfoGroups )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsEventInfoGroups,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B7769C(0LL, v16);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v19.fields.current, 0LL);
    if ( !gameObject )
      sub_B7769C(0LL, v18);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}