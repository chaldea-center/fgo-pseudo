void __fastcall MenuListControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E870A & 1) == 0 )
  {
    sub_B5D5C4(&MenuListControl_TypeInfo, v1, v2, v3);
    byte_42E870A = 1;
  }
  MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM = 7;
  MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MenuListControl___ctor(MenuListControl_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  intptr_t v27; // w20
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  __int64 v30; // x1
  struct RestTimeNoticeControl_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_RuntimeTypeHandle_o v38; // 0:w0.4

  if ( (byte_42E8709 & 1) == 0 )
  {
    sub_B5D5C4(&MenuListControl_CombineKind_var, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Enum_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&RestTimeNoticeControl___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Type_TypeInfo, v17, v18, v19);
    byte_42E8709 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.setNoticeNumList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (int)MenuListControl_CombineKind_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v38.fields.value = v27;
  TypeFromHandle = System_Type__GetTypeFromHandle(v38, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0LL);
  if ( !Names )
    sub_B5D69C(0LL, v30);
  v31 = (struct RestTimeNoticeControl_array *)sub_B5D5DC(RestTimeNoticeControl___TypeInfo, Names->max_length);
  this->fields.restTimeNoticeList = v31;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.restTimeNoticeList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MenuListControl__CreateAlphaCalculator(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  MenuListControl_c *v7; // x0
  float v8; // s8
  System_Func_float__float__float__float__o *v9; // x19
  AlphaTransitionCalculator_o *v10; // x20

  if ( (byte_42E8704 & 1) == 0 )
  {
    sub_B5D5C4(&AlphaTransitionCalculator_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MenuListControl_TypeInfo, v4, v5, v6);
    byte_42E8704 = 1;
  }
  v7 = MenuListControl_TypeInfo;
  if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v7 = MenuListControl_TypeInfo;
  }
  v8 = ChangedFPSUtil__CovertFrameNumToSecond(v7->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v9 = ExtraEasing__AsymptoticSeriesFloat(
         MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
         0LL);
  v10 = (AlphaTransitionCalculator_o *)sub_B5D694(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v10, v8, v9, 0LL);
  return v10;
}


void __fastcall MenuListControl__InitMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
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
  void *gameObject; // x0
  __int64 v15; // x1
  int32_t childCount; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  struct System_Collections_Generic_List_EventNoticeControl__o **p_noticeList; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int v25; // w24
  int32_t v26; // w21
  int v27; // w8
  _DWORD *v28; // x22
  unsigned int v29; // w27
  char *v30; // x8
  EventNoticeControl_o *v31; // x23
  __int64 v32; // x0

  if ( (byte_42E86FD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_EventNoticeControl__TypeInfo, v11, v12, v13);
    byte_42E86FD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = this->fields.menuListGrid;
  if ( !gameObject )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0LL);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventNoticeControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v17;
  p_noticeList = &this->fields.noticeList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.noticeList,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      gameObject = this->fields.menuListGrid;
      if ( !gameObject )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_21;
      gameObject = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)gameObject, v26, 0LL);
      if ( !gameObject )
        goto LABEL_21;
      gameObject = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                     (UnityEngine_Component_o *)gameObject,
                     1,
                     (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_21;
      v27 = *((_DWORD *)gameObject + 6);
      v28 = gameObject;
      if ( v27 >= 1 )
        break;
LABEL_19:
      if ( ++v26 >= v25 )
        return;
    }
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= v27 )
      {
        v32 = sub_B5D6C8(gameObject);
        sub_B5D668(v32, 0LL);
      }
      v30 = (char *)&v28[2 * v29];
      v31 = (EventNoticeControl_o *)*((_QWORD *)v30 + 4);
      if ( !v31 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v30 + 4), 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      EventNoticeControl__Initialize(v31, 0LL);
      gameObject = *p_noticeList;
      if ( !*p_noticeList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventNoticeControl__Add__);
      v27 = v28[6];
      if ( (int)++v29 >= v27 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B5D69C(gameObject, v15);
  }
}


void __fastcall MenuListControl__ResetAlphaAnimTime(MenuListControl_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0

  this->fields.alphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  this->fields.alphaAnimTimeOld = realtimeSinceStartup;
  if ( fadeUIAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0LL);
}


void __fastcall MenuListControl__SetBudgeNumNotice(MenuListControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  int v16; // w8
  unsigned __int64 v17; // x20
  signed __int64 v18; // x22
  __int64 i; // x23
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x28
  __int64 v28; // x0
  __int64 v29; // x0

  if ( (byte_42E86FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E86FE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
  if ( !gameObject )
    goto LABEL_26;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
  if ( !gameObject )
    goto LABEL_26;
  v16 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0LL) - 1;
  if ( v16 >= 1 )
  {
    v17 = 0LL;
    v18 = v16;
    for ( i = 32LL; ; i += 8LL )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 v17,
                                                 0LL);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      if ( !this->fields.setNoticeNumList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.setNoticeNumList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SetNoticeNumControl__Add__);
      gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 v17,
                                                 0LL);
      if ( !gameObject )
        break;
      ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               (UnityEngine_Component_o *)gameObject,
                                                               (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_UIWidget, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        restTimeNoticeList = this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( ComponentInChildren_UIWidget )
        {
          gameObject = (UnityEngine_GameObject_o *)sub_B5D684(
                                                     ComponentInChildren_UIWidget,
                                                     restTimeNoticeList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v29 = sub_B5D6BC(0LL);
            sub_B5D668(v29, 0LL);
          }
        }
        if ( v17 >= restTimeNoticeList->max_length )
        {
          v28 = sub_B5D6C8(gameObject);
          sub_B5D668(v28, 0LL);
        }
        restTimeNoticeList->m_Items[v17] = (RestTimeNoticeControl_o *)ComponentInChildren_UIWidget;
        sub_B5D560(
          (BattleServantConfConponent_o *)((char *)restTimeNoticeList + i),
          (System_Int32_array **)ComponentInChildren_UIWidget,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      if ( (__int64)++v17 >= v18 )
        return;
    }
LABEL_26:
    sub_B5D69C(gameObject, v15);
  }
}


void __fastcall MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x23
  int size; // w20
  int v10; // w21
  unsigned int v11; // w22
  EventNoticeControl_o *isActiveAndEnabled; // x0
  struct System_Collections_Generic_List_EventNoticeControl__o *v13; // x24
  struct System_Collections_Generic_List_EventNoticeControl__o *v14; // x24

  if ( (byte_42E8705 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v5, v6, v7);
    byte_42E8705 = 1;
  }
  noticeList = this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v10 = 1;
      do
      {
        v11 = v10 - 1;
        if ( noticeList->fields._size <= (unsigned int)(v10 - 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        isActiveAndEnabled = noticeList->fields._items->m_Items[v11];
        if ( !isActiveAndEnabled )
          break;
        isActiveAndEnabled = (EventNoticeControl_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                       (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                                       0LL);
        if ( ((unsigned __int8)isActiveAndEnabled & 1) != 0 )
        {
          v13 = this->fields.noticeList;
          if ( !v13 )
            break;
          if ( v13->fields._size <= v11 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          isActiveAndEnabled = v13->fields._items->m_Items[v11];
          if ( !isActiveAndEnabled )
            break;
          EventNoticeControl__UpdateEventNotice(isActiveAndEnabled, 0LL);
          v14 = this->fields.noticeList;
          if ( !v14 )
            break;
          if ( v14->fields._size <= v11 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          isActiveAndEnabled = v14->fields._items->m_Items[v11];
          if ( !isActiveAndEnabled )
            break;
          EventNoticeControl__ChangeEventInfo(isActiveAndEnabled, 0LL);
        }
        if ( v10 >= size )
          return;
        noticeList = this->fields.noticeList;
        ++v10;
      }
      while ( noticeList );
      sub_B5D69C(isActiveAndEnabled, method);
    }
  }
}


void __fastcall MenuListControl__SetMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MenuListControl__checkEventNotice(this, method);
  MenuListControl__SetEventNotice(this, v3);
}


void __fastcall MenuListControl__SetScrollBarValue(MenuListControl_o *this, float value, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v8; // x0
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x8
  UnityEngine_Object_o *v11; // x20
  struct UIScrollView_o *v12; // x8

  if ( (byte_42E8708 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8708 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v10 = this->fields.menuListScrollView;
    if ( !v10 )
      goto LABEL_16;
    v11 = *(UnityEngine_Object_o **)&v10->fields.showScrollBars;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      v12 = this->fields.menuListScrollView;
      if ( v12 )
      {
        v8 = *(UIProgressBar_o **)&v12->fields.showScrollBars;
        if ( v8 )
        {
          UIProgressBar__set_value(v8, value, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B5D69C(v8, v9);
    }
  }
}


void __fastcall MenuListControl__Update(MenuListControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t Time; // x0
  __int64 v9; // x1
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x21
  __int64 v11; // x8
  int64_t v12; // x19
  unsigned __int64 v13; // x22
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x0

  if ( (byte_42E86FC & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E86FC = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_19:
    sub_B5D69C(Time, v9);
  v11 = *(_QWORD *)&restTimeNoticeList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = Time;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v11 )
      {
        v15 = sub_B5D6C8(Time);
        sub_B5D668(v15, 0LL);
      }
      v14 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v13];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Time = UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
      if ( (Time & 1) == 0 )
      {
        if ( !v14 )
          goto LABEL_19;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v14, v12, 0LL);
      }
      LODWORD(v11) = restTimeNoticeList->max_length;
      ++v13;
    }
    while ( (__int64)v13 < (int)v11 );
  }
}


void __fastcall MenuListControl__UpdateAnim(MenuListControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  System_Int32_array **AlphaCalculator; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v23; // s8
  MenuListControl_c *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_42E8703 & 1) == 0 )
  {
    sub_B5D5C4(&MenuListControl_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TransitionCalculator_float__Update__, v5, v6, v7);
    sub_B5D5C4(&Method_TransitionCalculator_float__get_Current__, v8, v9, v10);
    byte_42E8703 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = (System_Int32_array **)MenuListControl__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = (struct AlphaTransitionCalculator_o *)AlphaCalculator;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fadeUIAlphaCalculator,
      AlphaCalculator,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_20;
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0LL);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_20;
  }
  TransitionCalculator_float___Update(
    (TransitionCalculator_float__o *)fadeUIAlphaCalculator,
    (const MethodInfo_264E3D0 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_20;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v23 = realtimeSinceStartup;
    v24 = MenuListControl_TypeInfo;
    if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
      v24 = MenuListControl_TypeInfo;
    }
    if ( (float)(v23 - alphaAnimTimeOld) >= v24->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
      if ( !*p_fadeUIAlphaCalculator )
        goto LABEL_20;
      AlphaTransitionCalculator__StartFadeOut(fadeUIAlphaCalculator, 0LL);
    }
  }
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_20;
  fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(
                                                           fadeUIAlphaCalculator,
                                                           0LL);
  if ( ((unsigned __int8)fadeUIAlphaCalculator & 1) != 0 )
  {
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_20;
    AlphaTransitionCalculator__StartFadeIn(fadeUIAlphaCalculator, 0LL);
    this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    MenuListControl__SetEventNotice(this, v25);
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_20:
    sub_B5D69C(fadeUIAlphaCalculator, v20);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v20);
}


void __fastcall MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8707 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__, v11, v12, v13);
    byte_42E8707 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  noticeList = this->fields.noticeList;
  if ( !noticeList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)noticeList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v16.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void __fastcall MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x22
  int size; // w20
  unsigned int v10; // w21
  EventNoticeControl_o *v11; // x0

  if ( (byte_42E8706 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v5, v6, v7);
    byte_42E8706 = 1;
  }
  noticeList = this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v10 = 0;
      do
      {
        if ( noticeList->fields._size <= v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v11 = noticeList->fields._items->m_Items[v10];
        if ( !v11 )
          break;
        EventNoticeControl__SetAlpha(v11, this->fields.alphaAnimNow, 0LL);
        if ( (int)++v10 >= size )
          return;
        noticeList = this->fields.noticeList;
      }
      while ( noticeList );
      sub_B5D69C(v11, method);
    }
  }
  else
  {
    MenuListControl__InitMenuEventNotice(this, method);
  }
}


void __fastcall MenuListControl__checkEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MenuListControl_o *v4; // x19
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
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_combineEventList; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x22
  int max_length; // w8
  __int64 v62; // x23
  EventEntity_o *v63; // x8
  __int64 v64; // x23
  __int64 v65; // x0
  __int64 v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **current; // x1
  __int64 v74; // x0
  __int64 v75; // x1
  int v76; // w28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v77; // x24
  MenuListControl_o *v78; // x0
  const MethodInfo *v79; // x3
  EventInfoData_o *v80; // x0
  __int64 v81; // x1
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x24
  __int64 v83; // x23
  EventInfoData_o *v84; // x22
  EventNoticeControl_o *v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  struct System_Collections_Generic_List_EventNoticeControl__o *v88; // x24
  UnityEngine_Component_o *v89; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x0
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_42E86FF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_EventEntity__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_EventEntity__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventInfoData___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_EventInfoData__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__, v44, v45, v46);
    this = (MenuListControl_o *)sub_B5D5C4(&MenuListControl___c__DisplayClass20_0_TypeInfo, v47, v48, v49);
    byte_42E86FF = 1;
  }
  memset(&v95, 0, sizeof(v95));
  combineData = v4->fields.combineData;
  if ( !combineData )
    goto LABEL_34;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v52,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v4->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v52;
    p_combineEventList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v4->fields.combineEventList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.combineEventList,
      (System_Int32_array **)v52,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v60,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v62 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v62 >= max_length )
        {
          v93 = sub_B5D6C8(this);
          sub_B5D668(v93, 0LL);
        }
        v63 = combineEventList->m_Items[v62];
        if ( !v63 )
          break;
        this = (MenuListControl_o *)v4->fields.combineData;
        if ( !this )
          break;
        this = (MenuListControl_o *)CombineInitData__getCombineEventData((CombineInitData_o *)this, v63->fields.id, 0LL);
        if ( this )
        {
          if ( !v60 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v60,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        }
        max_length = combineEventList->max_length;
        if ( (int)++v62 >= max_length )
          goto LABEL_14;
      }
LABEL_34:
      sub_B5D69C(this, method);
    }
LABEL_14:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v60,
                                  0LL);
    if ( !this )
      goto LABEL_34;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v94,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v95 = v94;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v95,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v64 = sub_B5D694(MenuListControl___c__DisplayClass20_0_TypeInfo);
      MenuListControl___c__DisplayClass20_0___ctor((MenuListControl___c__DisplayClass20_0_o *)v64, 0LL);
      if ( !v64 )
        sub_B5D69C(v65, v66);
      current = (System_Int32_array **)v95.fields.current;
      *(_QWORD *)(v64 + 16) = v95.fields.current;
      sub_B5D560((BattleServantConfConponent_o *)(v64 + 16), current, v67, v68, v69, v70, v71, v72);
      if ( !*(_QWORD *)(v64 + 16) )
        sub_B5D69C(v74, v75);
      v76 = *(_DWORD *)(*(_QWORD *)(v64 + 16) + 20LL) - 1;
      if ( (unsigned int)v76 < 0x21 && ((0x1840782BBuLL >> v76) & 1) != 0 )
      {
        v77 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v77,
          (Il2CppObject *)v64,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_EventEntity__bool___ctor__);
        v78 = (MenuListControl_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                                     (System_Func_TSource__bool__o *)v77,
                                     (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v80 = MenuListControl__setEventInfo(v78, *(EventCampaignEntity_o **)(v64 + 16), (EventEntity_o *)v78, v79);
        noticeList = v4->fields.noticeList;
        if ( !noticeList )
          sub_B5D69C(v80, v81);
        v83 = dword_32A2D70[v76];
        v84 = v80;
        if ( noticeList->fields._size <= (unsigned int)v83 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v85 = noticeList->fields._items->m_Items[v83];
        if ( !v85 )
          sub_B5D69C(0LL, v81);
        EventNoticeControl__SetCombineEventData(v85, v84, 0LL);
        v88 = v4->fields.noticeList;
        if ( !v88 )
          sub_B5D69C(v86, v87);
        if ( v88->fields._size <= (unsigned int)v83 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v89 = (UnityEngine_Component_o *)v88->fields._items->m_Items[v83];
        if ( !v89 )
          sub_B5D69C(0LL, v87);
        gameObject = UnityEngine_Component__get_gameObject(v89, 0LL);
        if ( !gameObject )
          sub_B5D69C(0LL, v91);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_combineEventList )
          sub_B5D69C(0LL, v92);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_combineEventList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoData__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v95,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
}


System_Collections_Generic_List_EventInfoData__o *__fastcall MenuListControl__getCombineEventList(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEventList;
}


float __fastcall MenuListControl__get_AlphaAnimNow(MenuListControl_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


float __fastcall MenuListControl__get_ScrollBarValue(MenuListControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v6; // x0
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x8
  UnityEngine_Object_o *v9; // x20
  struct UIScrollView_o *v10; // x8

  if ( (byte_42E86FB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E86FB = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v8 = this->fields.menuListScrollView;
    if ( !v8 )
      goto LABEL_16;
    v9 = *(UnityEngine_Object_o **)&v8->fields.showScrollBars;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v10 = this->fields.menuListScrollView;
      if ( v10 )
      {
        v6 = *(UIProgressBar_o **)&v10->fields.showScrollBars;
        if ( v6 )
          return UIProgressBar__get_value(v6, 0LL);
      }
LABEL_16:
      sub_B5D69C(v6, v7);
    }
  }
  return 0.0;
}


void __fastcall MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))menuListScrollView->klass->vtable._9_SetDragAmount.method)(
    menuListScrollView,
    0LL,
    menuListScrollView->klass->vtable._10_MoveRelative.methodPtr,
    0.0,
    0.0);
}


void __fastcall MenuListControl__setBannerIcon(
        MenuListControl_o *this,
        UISprite_o *targetSprite,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42E8701 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)targetSprite, (_DWORD)eventEntity, method);
    byte_42E8701 = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0LL);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0LL)) == 0LL )
  {
    sub_B5D69C(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MenuListControl_o *v5; // x20
  struct System_Collections_Generic_List_SetNoticeNumControl__o *setNoticeNumList; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v7; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v8; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v9; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v10; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v11; // x20

  v5 = this;
  if ( (byte_42E8702 & 1) == 0 )
  {
    this = (MenuListControl_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__,
                                  (_DWORD)enableData,
                                  (_DWORD)method,
                                  v3);
    byte_42E8702 = 1;
  }
  setNoticeNumList = v5->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_29;
  if ( setNoticeNumList->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  if ( !enableData )
    goto LABEL_29;
  this = (MenuListControl_o *)setNoticeNumList->fields._items->m_Items[1];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.skillUpEnableNum, 0LL);
  v7 = v5->fields.setNoticeNumList;
  if ( !v7 )
    goto LABEL_29;
  if ( v7->fields._size <= 3u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (MenuListControl_o *)v7->fields._items->m_Items[3];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.limitUpEnableNum, 0LL);
  v8 = v5->fields.setNoticeNumList;
  if ( !v8 )
    goto LABEL_29;
  if ( v8->fields._size <= 5u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (MenuListControl_o *)v8->fields._items->m_Items[5];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.friendshipExceedEnableNum, 0LL);
  v9 = v5->fields.setNoticeNumList;
  if ( !v9 )
    goto LABEL_29;
  if ( v9->fields._size <= 9u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (MenuListControl_o *)v9->fields._items->m_Items[9];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.npUpEnableNum, 0LL);
  v10 = v5->fields.setNoticeNumList;
  if ( !v10 )
    goto LABEL_29;
  if ( v10->fields._size <= 0xAu )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (MenuListControl_o *)v10->fields._items->m_Items[10];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.lvExceedEnableNum, 0LL);
  v11 = v5->fields.setNoticeNumList;
  if ( !v11 )
    goto LABEL_29;
  if ( v11->fields._size <= 0xBu )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  this = (MenuListControl_o *)v11->fields._items->m_Items[11];
  if ( !this )
LABEL_29:
    sub_B5D69C(this, enableData);
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.costumeCombineEnableNum, 0LL);
}


EventInfoData_o *__fastcall MenuListControl__setEventInfo(
        MenuListControl_o *this,
        EventCampaignEntity_o *combineEventEnt,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **targetIds; // x1
  System_Int32_array **EventName; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **detail; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42E8700 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoData_TypeInfo, (_DWORD)combineEventEnt, (_DWORD)eventEnt, method);
    byte_42E8700 = 1;
  }
  v6 = sub_B5D694(EventInfoData_TypeInfo);
  EventInfoData___ctor((EventInfoData_o *)v6, 0LL);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_B5D69C(v7, v8);
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  targetIds = (System_Int32_array **)combineEventEnt->fields.targetIds;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), targetIds, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = (System_Int32_array **)EventEntity__getEventName(eventEnt, 0LL);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), EventName, v17, v18, v19, v20, v21, v22);
  detail = (System_Int32_array **)eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 48), detail, v24, v25, v26, v27, v28, v29);
  *(float *)(v6 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_QWORD *)(v6 + 64) = eventEnt->fields.startedAt;
  *(_QWORD *)(v6 + 72) = eventEnt->fields.endedAt;
  *(_QWORD *)(v6 + 80) = eventEnt;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 80), (System_Int32_array **)eventEnt, v30, v31, v32, v33, v34, v35);
  return (EventInfoData_o *)v6;
}


void __fastcall MenuListControl___c__DisplayClass20_0___ctor(
        MenuListControl___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MenuListControl___c__DisplayClass20_0___checkEventNotice_b__0(
        MenuListControl___c__DisplayClass20_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEntity; // x8

  if ( !entity || (eventCampaignEntity = this->fields.eventCampaignEntity) == 0LL )
    sub_B5D69C(this, entity);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}