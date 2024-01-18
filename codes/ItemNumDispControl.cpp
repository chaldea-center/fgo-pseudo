void __fastcall ItemNumDispControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_41870D2 & 1) == 0 )
  {
    sub_B2C35C(&ItemNumDispControl_TypeInfo, v1);
    byte_41870D2 = 1;
  }
  ItemNumDispControl_TypeInfo->static_fields->EVENT_ALPHA_ANIM_SPD_RATE = 0.5;
  ItemNumDispControl_TypeInfo->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL = 2.0;
}


void __fastcall ItemNumDispControl___ctor(ItemNumDispControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_41870D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_41870D1 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.SetAlphaDispInfoGroup = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.SetAlphaDispInfoGroup,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o **p_SetAlphaDispInfoGroup; // x21
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  struct UIWidget_o *alphaAnimRoot; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41870CD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, infoList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    byte_41870CD = 1;
  }
  memset(&v21, 0, sizeof(v21));
  this->fields.SetAlphaDispInfoGroup = infoList;
  p_SetAlphaDispInfoGroup = &this->fields.SetAlphaDispInfoGroup;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.SetAlphaDispInfoGroup,
    (System_Int32_array **)infoList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ItemNumDispControl__IsEventInfoGroups(this, v14) )
  {
    ItemNumDispControl__SetDispEventInfoGroup(this, 0, v16);
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
    sub_B2C434(alphaAnimRoot, v15);
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
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alphaAnimRoot,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v21.fields.current )
      sub_B2C434(0LL, v18);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v21.fields.current, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v20);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool __fastcall ItemNumDispControl__IsEventInfoGroups(ItemNumDispControl_o *this, const MethodInfo *method)
{
  ItemNumDispControl_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *SetAlphaDispInfoGroup; // x8

  v2 = this;
  if ( (byte_41870CE & 1) == 0 )
  {
    this = (ItemNumDispControl_o *)sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_41870CE = 1;
  }
  SetAlphaDispInfoGroup = v2->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup )
    sub_B2C434(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SetAlphaDispInfoGroup; // x0
  int32_t v11; // w8
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_GameObject__o *v15; // x20
  __int64 infoGroupIdx; // x19
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_41870CF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&group_id);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    byte_41870CF = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( (group_id & 0x80000000) != 0 )
  {
    SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.SetAlphaDispInfoGroup;
    v11 = this->fields.infoGroupIdx + 1;
    this->fields.infoGroupIdx = v11;
    if ( !SetAlphaDispInfoGroup )
      goto LABEL_22;
    if ( v11 >= SetAlphaDispInfoGroup->fields._size )
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
    &v17,
    SetAlphaDispInfoGroup,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B2C434(0LL, v12);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v18.fields.current, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v14);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v15 = this->fields.SetAlphaDispInfoGroup;
  if ( !v15 )
    goto LABEL_22;
  infoGroupIdx = this->fields.infoGroupIdx;
  if ( v15->fields._size <= (unsigned int)infoGroupIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15->fields._items->m_Items[infoGroupIdx];
  if ( !SetAlphaDispInfoGroup
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)SetAlphaDispInfoGroup, 0LL)) == 0LL )
  {
LABEL_22:
    sub_B2C434(SetAlphaDispInfoGroup, *(_QWORD *)&group_id);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *IsEventInfoGroups; // x0
  __int64 v9; // x1
  struct UIWidget_o *alphaAnimRoot; // x8
  UIWidget_c *klass; // x9
  long double v12; // q0
  float alphaAnimTgt; // s10
  float v14; // s8
  ItemNumDispControl_c *v15; // x0
  float EVENT_ALPHA_ANIM_SPD_RATE; // s11
  ItemNumDispControl_c *v17; // x0
  float alphaAnimTimeOld; // s12
  float v19; // s9
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_41870D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&ItemNumDispControl_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_41870D0 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  IsEventInfoGroups = (CommonUI_o *)ItemNumDispControl__IsEventInfoGroups(this, method);
  alphaAnimRoot = this->fields.alphaAnimRoot;
  if ( !alphaAnimRoot )
    goto LABEL_30;
  klass = alphaAnimRoot->klass;
  if ( ((unsigned __int8)IsEventInfoGroups & 1) != 0 )
  {
    v12 = ((long double (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer))klass->vtable._7_get_alpha.method)(
            this->fields.alphaAnimRoot,
            klass->vtable._8_set_alpha.methodPtr);
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v14 = *(float *)&v12;
    v15 = ItemNumDispControl_TypeInfo;
    if ( (BYTE3(ItemNumDispControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ItemNumDispControl_TypeInfo->_2.cctor_finished )
    {
      *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
      v15 = ItemNumDispControl_TypeInfo;
    }
    EVENT_ALPHA_ANIM_SPD_RATE = v15->static_fields->EVENT_ALPHA_ANIM_SPD_RATE;
    if ( !this->fields.isPauseEventAlphaAnim )
    {
      IsEventInfoGroups = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !IsEventInfoGroups )
        goto LABEL_30;
      if ( !CommonUI__IsActive_UserPresentBoxWindow(IsEventInfoGroups, 0LL) )
      {
        *(float *)&v12 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        v17 = ItemNumDispControl_TypeInfo;
        alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
        v19 = *(float *)&v12;
        if ( (BYTE3(ItemNumDispControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ItemNumDispControl_TypeInfo->_2.cctor_finished )
        {
          *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
          v17 = ItemNumDispControl_TypeInfo;
        }
        if ( (float)(v19 - alphaAnimTimeOld) >= v17->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
        {
          this->fields.alphaAnimTgt = 0.0;
          this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        }
      }
    }
    *(float *)&v12 = v14 + (float)((float)(alphaAnimTgt - v14) * EVENT_ALPHA_ANIM_SPD_RATE);
    if ( *(float *)&v12 <= 0.01 && this->fields.alphaAnimTgt <= 0.0 )
    {
      this->fields.alphaAnimTgt = 1.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      ItemNumDispControl__SetDispEventInfoGroup(this, -1, v20);
      LODWORD(v12) = 0;
    }
    IsEventInfoGroups = (CommonUI_o *)this->fields.alphaAnimRoot;
    if ( IsEventInfoGroups )
    {
      ((void (__fastcall *)(CommonUI_o *, Il2CppClass *, long double))IsEventInfoGroups->klass[1]._1.castClass)(
        IsEventInfoGroups,
        IsEventInfoGroups->klass[1]._1.declaringType,
        v12);
      return;
    }
LABEL_30:
    sub_B2C434(IsEventInfoGroups, v9);
  }
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))klass->vtable._8_set_alpha.method)(
    this->fields.alphaAnimRoot,
    klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  IsEventInfoGroups = (CommonUI_o *)this->fields.SetAlphaDispInfoGroup;
  if ( !IsEventInfoGroups )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsEventInfoGroups,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v24.fields.current )
      sub_B2C434(0LL, v21);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v24.fields.current, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v23);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}