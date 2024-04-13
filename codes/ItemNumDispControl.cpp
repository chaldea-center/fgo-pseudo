void __fastcall ItemNumDispControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7D0F & 1) == 0 )
  {
    sub_B5D5C4(&ItemNumDispControl_TypeInfo, v1, v2, v3);
    byte_42E7D0F = 1;
  }
  ItemNumDispControl_TypeInfo->static_fields->EVENT_ALPHA_ANIM_SPD_RATE = 0.5;
  ItemNumDispControl_TypeInfo->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL = 2.0;
}


void __fastcall ItemNumDispControl___ctor(ItemNumDispControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7D0E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42E7D0E = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.SetAlphaDispInfoGroup = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SetAlphaDispInfoGroup,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_List_GameObject__o **p_SetAlphaDispInfoGroup; // x21
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  struct UIWidget_o *alphaAnimRoot; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7D0A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__,
      (_DWORD)infoList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v16, v17, v18);
    byte_42E7D0A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  this->fields.SetAlphaDispInfoGroup = infoList;
  p_SetAlphaDispInfoGroup = &this->fields.SetAlphaDispInfoGroup;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.SetAlphaDispInfoGroup,
    (System_Int32_array **)infoList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ItemNumDispControl__IsEventInfoGroups(this, v20) )
  {
    ItemNumDispControl__SetDispEventInfoGroup(this, 0, v22);
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
    sub_B5D69C(alphaAnimRoot, v21);
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
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)alphaAnimRoot,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v27.fields.current )
      sub_B5D69C(0LL, v24);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v27.fields.current, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v26);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool __fastcall ItemNumDispControl__IsEventInfoGroups(ItemNumDispControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ItemNumDispControl_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *SetAlphaDispInfoGroup; // x8

  v4 = this;
  if ( (byte_42E7D0B & 1) == 0 )
  {
    this = (ItemNumDispControl_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                     (_DWORD)method,
                                     v2,
                                     v3);
    byte_42E7D0B = 1;
  }
  SetAlphaDispInfoGroup = v4->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup )
    sub_B5D69C(this, method);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SetAlphaDispInfoGroup; // x0
  int32_t v22; // w8
  __int64 v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *v26; // x20
  __int64 infoGroupIdx; // x19
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E7D0C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, group_id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18, v19, v20);
    byte_42E7D0C = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( (group_id & 0x80000000) != 0 )
  {
    SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.SetAlphaDispInfoGroup;
    v22 = this->fields.infoGroupIdx + 1;
    this->fields.infoGroupIdx = v22;
    if ( !SetAlphaDispInfoGroup )
      goto LABEL_22;
    if ( v22 >= SetAlphaDispInfoGroup->fields._size )
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
    &v28,
    SetAlphaDispInfoGroup,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v29.fields.current )
      sub_B5D69C(0LL, v23);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v29.fields.current, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v25);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v26 = this->fields.SetAlphaDispInfoGroup;
  if ( !v26 )
    goto LABEL_22;
  infoGroupIdx = this->fields.infoGroupIdx;
  if ( v26->fields._size <= (unsigned int)infoGroupIdx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26->fields._items->m_Items[infoGroupIdx];
  if ( !SetAlphaDispInfoGroup
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)SetAlphaDispInfoGroup, 0LL)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(SetAlphaDispInfoGroup, *(_QWORD *)&group_id);
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
  CommonUI_o *IsEventInfoGroups; // x0
  __int64 v21; // x1
  struct UIWidget_o *alphaAnimRoot; // x8
  UIWidget_c *klass; // x9
  long double v24; // q0
  float alphaAnimTgt; // s10
  float v26; // s8
  ItemNumDispControl_c *v27; // x0
  float EVENT_ALPHA_ANIM_SPD_RATE; // s11
  ItemNumDispControl_c *v29; // x0
  float alphaAnimTimeOld; // s12
  float v31; // s9
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E7D0D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&ItemNumDispControl_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    byte_42E7D0D = 1;
  }
  memset(&v36, 0, sizeof(v36));
  IsEventInfoGroups = (CommonUI_o *)ItemNumDispControl__IsEventInfoGroups(this, method);
  alphaAnimRoot = this->fields.alphaAnimRoot;
  if ( !alphaAnimRoot )
    goto LABEL_30;
  klass = alphaAnimRoot->klass;
  if ( ((unsigned __int8)IsEventInfoGroups & 1) != 0 )
  {
    v24 = ((long double (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer))klass->vtable._7_get_alpha.method)(
            this->fields.alphaAnimRoot,
            klass->vtable._8_set_alpha.methodPtr);
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v26 = *(float *)&v24;
    v27 = ItemNumDispControl_TypeInfo;
    if ( (BYTE3(ItemNumDispControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ItemNumDispControl_TypeInfo->_2.cctor_finished )
    {
      *(__n128 *)&v24 = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
      v27 = ItemNumDispControl_TypeInfo;
    }
    EVENT_ALPHA_ANIM_SPD_RATE = v27->static_fields->EVENT_ALPHA_ANIM_SPD_RATE;
    if ( !this->fields.isPauseEventAlphaAnim )
    {
      IsEventInfoGroups = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !IsEventInfoGroups )
        goto LABEL_30;
      if ( !CommonUI__IsActive_UserPresentBoxWindow(IsEventInfoGroups, 0LL) )
      {
        *(float *)&v24 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        v29 = ItemNumDispControl_TypeInfo;
        alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
        v31 = *(float *)&v24;
        if ( (BYTE3(ItemNumDispControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ItemNumDispControl_TypeInfo->_2.cctor_finished )
        {
          *(__n128 *)&v24 = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
          v29 = ItemNumDispControl_TypeInfo;
        }
        if ( (float)(v31 - alphaAnimTimeOld) >= v29->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
        {
          this->fields.alphaAnimTgt = 0.0;
          this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        }
      }
    }
    *(float *)&v24 = v26 + (float)((float)(alphaAnimTgt - v26) * EVENT_ALPHA_ANIM_SPD_RATE);
    if ( *(float *)&v24 <= 0.01 && this->fields.alphaAnimTgt <= 0.0 )
    {
      this->fields.alphaAnimTgt = 1.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      ItemNumDispControl__SetDispEventInfoGroup(this, -1, v32);
      LODWORD(v24) = 0;
    }
    IsEventInfoGroups = (CommonUI_o *)this->fields.alphaAnimRoot;
    if ( IsEventInfoGroups )
    {
      ((void (__fastcall *)(CommonUI_o *, Il2CppClass *, long double))IsEventInfoGroups->klass[1]._1.castClass)(
        IsEventInfoGroups,
        IsEventInfoGroups->klass[1]._1.declaringType,
        v24);
      return;
    }
LABEL_30:
    sub_B5D69C(IsEventInfoGroups, v21);
  }
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))klass->vtable._8_set_alpha.method)(
    this->fields.alphaAnimRoot,
    klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  IsEventInfoGroups = (CommonUI_o *)this->fields.SetAlphaDispInfoGroup;
  if ( !IsEventInfoGroups )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsEventInfoGroups,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v36.fields.current )
      sub_B5D69C(0LL, v33);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v36.fields.current, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v35);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}