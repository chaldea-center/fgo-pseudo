void __fastcall MenuListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4214E27 & 1) == 0 )
  {
    sub_B0D8A4(&MenuListControl_TypeInfo, v1);
    byte_4214E27 = 1;
  }
  MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM = 7;
  MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MenuListControl___ctor(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  intptr_t v16; // w20
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  struct RestTimeNoticeControl_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_RuntimeTypeHandle_o v26; // 0:w0.4

  if ( (byte_4214E26 & 1) == 0 )
  {
    sub_B0D8A4(&MenuListControl_CombineKind_var, method);
    sub_B0D8A4(&System_Enum_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo, v6);
    sub_B0D8A4(&RestTimeNoticeControl___TypeInfo, v7);
    sub_B0D8A4(&System_Type_TypeInfo, v8);
    byte_4214E26 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_SetNoticeNumControl__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.setNoticeNumList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (int)MenuListControl_CombineKind_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v26.fields.value = v16;
  TypeFromHandle = System_Type__GetTypeFromHandle(v26, 0LL);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0LL);
  if ( !Names )
    sub_B0D97C(0LL);
  v19 = (struct RestTimeNoticeControl_array *)sub_B0D8BC(RestTimeNoticeControl___TypeInfo, Names->max_length);
  this->fields.restTimeNoticeList = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.restTimeNoticeList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MenuListControl__CreateAlphaCalculator(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  MenuListControl_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  AlphaTransitionCalculator_o *v8; // x20

  if ( (byte_4214E21 & 1) == 0 )
  {
    sub_B0D8A4(&AlphaTransitionCalculator_TypeInfo, method);
    sub_B0D8A4(&MenuListControl_TypeInfo, v2);
    byte_4214E21 = 1;
  }
  v3 = MenuListControl_TypeInfo;
  if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v3 = MenuListControl_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
         0LL);
  v8 = (AlphaTransitionCalculator_o *)sub_B0D974(AlphaTransitionCalculator_TypeInfo, v6, v7);
  AlphaTransitionCalculator___ctor(v8, v4, v5, 0LL);
  return v8;
}


void __fastcall MenuListControl__InitMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *gameObject; // x0
  int32_t childCount; // w21
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  struct System_Collections_Generic_List_EventNoticeControl__o **p_noticeList; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // w24
  int32_t v19; // w21
  int v20; // w8
  _DWORD *v21; // x22
  unsigned int v22; // w27
  char *v23; // x8
  EventNoticeControl_o *v24; // x23
  __int64 v25; // x0

  if ( (byte_4214E1A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventNoticeControl__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_EventNoticeControl__TypeInfo, v5);
    byte_4214E1A = 1;
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
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventNoticeControl__TypeInfo,
                                                                                                  v8,
                                                                                                  v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v10;
  p_noticeList = &this->fields.noticeList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.noticeList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      gameObject = this->fields.menuListGrid;
      if ( !gameObject )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_21;
      gameObject = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)gameObject, v19, 0LL);
      if ( !gameObject )
        goto LABEL_21;
      gameObject = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                     (UnityEngine_Component_o *)gameObject,
                     1,
                     (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_21;
      v20 = *((_DWORD *)gameObject + 6);
      v21 = gameObject;
      if ( v20 >= 1 )
        break;
LABEL_19:
      if ( ++v19 >= v18 )
        return;
    }
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v20 )
      {
        v25 = sub_B0D9A8(gameObject);
        sub_B0D948(v25, 0LL);
      }
      v23 = (char *)&v21[2 * v22];
      v24 = (EventNoticeControl_o *)*((_QWORD *)v23 + 4);
      if ( !v24 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v23 + 4), 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      EventNoticeControl__Initialize(v24, 0LL);
      gameObject = *p_noticeList;
      if ( !*p_noticeList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventNoticeControl__Add__);
      v20 = v21[6];
      if ( (int)++v22 >= v20 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B0D97C(gameObject);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int v7; // w8
  unsigned __int64 v8; // x20
  signed __int64 v9; // x22
  __int64 i; // x23
  UnityEngine_Object_o *ComponentInChildren_UIWidget; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x28
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_4214E1B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4214E1B = 1;
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
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0LL) - 1;
  if ( v7 >= 1 )
  {
    v8 = 0LL;
    v9 = v7;
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
                                                 v8,
                                                 0LL);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      if ( !this->fields.setNoticeNumList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.setNoticeNumList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SetNoticeNumControl__Add__);
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
                                                 v8,
                                                 0LL);
      if ( !gameObject )
        break;
      ComponentInChildren_UIWidget = (UnityEngine_Object_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                               (UnityEngine_Component_o *)gameObject,
                                                               (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
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
          gameObject = (UnityEngine_GameObject_o *)sub_B0D964(
                                                     ComponentInChildren_UIWidget,
                                                     restTimeNoticeList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v20 = sub_B0D99C(0LL);
            sub_B0D948(v20, 0LL);
          }
        }
        if ( v8 >= restTimeNoticeList->max_length )
        {
          v19 = sub_B0D9A8(gameObject);
          sub_B0D948(v19, 0LL);
        }
        restTimeNoticeList->m_Items[v8] = (RestTimeNoticeControl_o *)ComponentInChildren_UIWidget;
        sub_B0D840(
          (BattleServantConfConponent_o *)((char *)restTimeNoticeList + i),
          (System_Int32_array **)ComponentInChildren_UIWidget,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
      if ( (__int64)++v8 >= v9 )
        return;
    }
LABEL_26:
    sub_B0D97C(gameObject);
  }
}


void __fastcall MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x23
  int size; // w20
  int v6; // w21
  unsigned int v7; // w22
  EventNoticeControl_o *isActiveAndEnabled; // x0
  struct System_Collections_Generic_List_EventNoticeControl__o *v9; // x24
  struct System_Collections_Generic_List_EventNoticeControl__o *v10; // x24

  if ( (byte_4214E22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_4214E22 = 1;
  }
  noticeList = this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v6 = 1;
      do
      {
        v7 = v6 - 1;
        if ( noticeList->fields._size <= (unsigned int)(v6 - 1) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        isActiveAndEnabled = noticeList->fields._items->m_Items[v7];
        if ( !isActiveAndEnabled )
          break;
        isActiveAndEnabled = (EventNoticeControl_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                       (UnityEngine_Behaviour_o *)isActiveAndEnabled,
                                                       0LL);
        if ( ((unsigned __int8)isActiveAndEnabled & 1) != 0 )
        {
          v9 = this->fields.noticeList;
          if ( !v9 )
            break;
          if ( v9->fields._size <= v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          isActiveAndEnabled = v9->fields._items->m_Items[v7];
          if ( !isActiveAndEnabled )
            break;
          EventNoticeControl__UpdateEventNotice(isActiveAndEnabled, 0LL);
          v10 = this->fields.noticeList;
          if ( !v10 )
            break;
          if ( v10->fields._size <= v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          isActiveAndEnabled = v10->fields._items->m_Items[v7];
          if ( !isActiveAndEnabled )
            break;
          EventNoticeControl__ChangeEventInfo(isActiveAndEnabled, 0LL);
        }
        if ( v6 >= size )
          return;
        noticeList = this->fields.noticeList;
        ++v6;
      }
      while ( noticeList );
      sub_B0D97C(isActiveAndEnabled);
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
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v6; // x0
  struct UIScrollView_o *v7; // x8
  UnityEngine_Object_o *v8; // x20
  struct UIScrollView_o *v9; // x8

  if ( (byte_4214E25 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214E25 = 1;
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
    v7 = this->fields.menuListScrollView;
    if ( !v7 )
      goto LABEL_16;
    v8 = *(UnityEngine_Object_o **)&v7->fields.showScrollBars;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v9 = this->fields.menuListScrollView;
      if ( v9 )
      {
        v6 = *(UIProgressBar_o **)&v9->fields.showScrollBars;
        if ( v6 )
        {
          UIProgressBar__set_value(v6, value, 0LL);
          return;
        }
      }
LABEL_16:
      sub_B0D97C(v6);
    }
  }
}


void __fastcall MenuListControl__Update(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x21
  __int64 v6; // x8
  int64_t v7; // x19
  unsigned __int64 v8; // x22
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x0

  if ( (byte_4214E19 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4214E19 = 1;
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
    sub_B0D97C(Time);
  v6 = *(_QWORD *)&restTimeNoticeList->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = Time;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
      {
        v10 = sub_B0D9A8(Time);
        sub_B0D948(v10, 0LL);
      }
      v9 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Time = UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
      if ( (Time & 1) == 0 )
      {
        if ( !v9 )
          goto LABEL_19;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v9, v7, 0LL);
      }
      LODWORD(v6) = restTimeNoticeList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v6 );
  }
}


void __fastcall MenuListControl__UpdateAnim(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  System_Int32_array **AlphaCalculator; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v16; // s8
  MenuListControl_c *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4214E20 & 1) == 0 )
  {
    sub_B0D8A4(&MenuListControl_TypeInfo, method);
    sub_B0D8A4(&Method_TransitionCalculator_float__Update__, v3);
    sub_B0D8A4(&Method_TransitionCalculator_float__get_Current__, v4);
    byte_4214E20 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = (System_Int32_array **)MenuListControl__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = (struct AlphaTransitionCalculator_o *)AlphaCalculator;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.fadeUIAlphaCalculator,
      AlphaCalculator,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    (const MethodInfo_2686910 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_20;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v16 = realtimeSinceStartup;
    v17 = MenuListControl_TypeInfo;
    if ( (BYTE3(MenuListControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
      v17 = MenuListControl_TypeInfo;
    }
    if ( (float)(v16 - alphaAnimTimeOld) >= v17->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    MenuListControl__SetEventNotice(this, v19);
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_20:
    sub_B0D97C(fadeUIAlphaCalculator);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v18);
}


void __fastcall MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4214E24 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__, v5);
    byte_4214E24 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  noticeList = this->fields.noticeList;
  if ( !noticeList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)noticeList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v7.fields.current )
      sub_B0D97C(0LL);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v7.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void __fastcall MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x22
  int size; // w20
  unsigned int v6; // w21
  EventNoticeControl_o *v7; // x0

  if ( (byte_4214E23 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_4214E23 = 1;
  }
  noticeList = this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v6 = 0;
      do
      {
        if ( noticeList->fields._size <= v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v7 = noticeList->fields._items->m_Items[v6];
        if ( !v7 )
          break;
        EventNoticeControl__SetAlpha(v7, this->fields.alphaAnimNow, 0LL);
        if ( (int)++v6 >= size )
          return;
        noticeList = this->fields.noticeList;
      }
      while ( noticeList );
      sub_B0D97C(v7);
    }
  }
  else
  {
    MenuListControl__InitMenuEventNotice(this, method);
  }
}


void __fastcall MenuListControl__checkEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MenuListControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
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
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_combineEventList; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  int max_length; // w8
  __int64 v33; // x23
  EventEntity_o *v34; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x23
  __int64 v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **current; // x1
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  int v49; // w28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x24
  MenuListControl_o *v51; // x0
  const MethodInfo *v52; // x3
  EventInfoData_o *v53; // x0
  struct System_Collections_Generic_List_EventNoticeControl__o *noticeList; // x24
  __int64 v55; // x23
  EventInfoData_o *v56; // x22
  EventNoticeControl_o *v57; // x0
  __int64 v58; // x0
  struct System_Collections_Generic_List_EventNoticeControl__o *v59; // x24
  UnityEngine_Component_o *v60; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v62; // x0
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_4214E1C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v6);
    sub_B0D8A4(&Method_System_Func_EventEntity__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_EventEntity__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoData___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoData__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__, v17);
    this = (MenuListControl_o *)sub_B0D8A4(&MenuListControl___c__DisplayClass20_0_TypeInfo, v18);
    byte_4214E1C = 1;
  }
  memset(&v64, 0, sizeof(v64));
  combineData = v3->fields.combineData;
  if ( !combineData )
    goto LABEL_34;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventInfoData__TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v21,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v3->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v21;
    p_combineEventList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v3->fields.combineEventList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v3->fields.combineEventList,
      (System_Int32_array **)v21,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                    v29,
                                                                                                    v30);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v33 >= max_length )
        {
          v62 = sub_B0D9A8(this);
          sub_B0D948(v62, 0LL);
        }
        v34 = combineEventList->m_Items[v33];
        if ( !v34 )
          break;
        this = (MenuListControl_o *)v3->fields.combineData;
        if ( !this )
          break;
        this = (MenuListControl_o *)CombineInitData__getCombineEventData((CombineInitData_o *)this, v34->fields.id, 0LL);
        if ( this )
        {
          if ( !v31 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v31,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
        }
        max_length = combineEventList->max_length;
        if ( (int)++v33 >= max_length )
          goto LABEL_14;
      }
LABEL_34:
      sub_B0D97C(this);
    }
LABEL_14:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v31,
                                  0LL);
    if ( !this )
      goto LABEL_34;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v63,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v64 = v63;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v64,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v37 = sub_B0D974(MenuListControl___c__DisplayClass20_0_TypeInfo, v35, v36);
      MenuListControl___c__DisplayClass20_0___ctor((MenuListControl___c__DisplayClass20_0_o *)v37, 0LL);
      if ( !v37 )
        sub_B0D97C(v38);
      current = (System_Int32_array **)v64.fields.current;
      *(_QWORD *)(v37 + 16) = v64.fields.current;
      sub_B0D840((BattleServantConfConponent_o *)(v37 + 16), current, v39, v40, v41, v42, v43, v44);
      if ( !*(_QWORD *)(v37 + 16) )
        sub_B0D97C(v46);
      v49 = *(_DWORD *)(*(_QWORD *)(v37 + 16) + 20LL) - 1;
      if ( (unsigned int)v49 < 0x21 && ((0x1840782BBuLL >> v49) & 1) != 0 )
      {
        v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_EventEntity__bool__TypeInfo,
                                                                                   v47,
                                                                                   v48);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v50,
          (Il2CppObject *)v37,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_EventEntity__bool___ctor__);
        v51 = (MenuListControl_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                                     (System_Func_TSource__bool__o *)v50,
                                     (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v53 = MenuListControl__setEventInfo(v51, *(EventCampaignEntity_o **)(v37 + 16), (EventEntity_o *)v51, v52);
        noticeList = v3->fields.noticeList;
        if ( !noticeList )
          sub_B0D97C(v53);
        v55 = dword_3203D80[v49];
        v56 = v53;
        if ( noticeList->fields._size <= (unsigned int)v55 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v57 = noticeList->fields._items->m_Items[v55];
        if ( !v57 )
          sub_B0D97C(0LL);
        EventNoticeControl__SetCombineEventData(v57, v56, 0LL);
        v59 = v3->fields.noticeList;
        if ( !v59 )
          sub_B0D97C(v58);
        if ( v59->fields._size <= (unsigned int)v55 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v60 = (UnityEngine_Component_o *)v59->fields._items->m_Items[v55];
        if ( !v60 )
          sub_B0D97C(0LL);
        gameObject = UnityEngine_Component__get_gameObject(v60, 0LL);
        if ( !gameObject )
          sub_B0D97C(0LL);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_combineEventList )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_combineEventList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoData__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v64,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v4; // x0
  struct UIScrollView_o *v5; // x8
  UnityEngine_Object_o *v6; // x20
  struct UIScrollView_o *v7; // x8

  if ( (byte_4214E18 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214E18 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v5 = this->fields.menuListScrollView;
    if ( !v5 )
      goto LABEL_16;
    v6 = *(UnityEngine_Object_o **)&v5->fields.showScrollBars;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v7 = this->fields.menuListScrollView;
      if ( v7 )
      {
        v4 = *(UIProgressBar_o **)&v7->fields.showScrollBars;
        if ( v4 )
          return UIProgressBar__get_value(v4, 0LL);
      }
LABEL_16:
      sub_B0D97C(v4);
    }
  }
  return 0.0;
}


void __fastcall MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_B0D97C(0LL);
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

  if ( (byte_4214E1E & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, targetSprite);
    byte_4214E1E = 1;
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0LL);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0LL)) == 0LL )
  {
    sub_B0D97C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  MenuListControl_o *v4; // x20
  struct System_Collections_Generic_List_SetNoticeNumControl__o *setNoticeNumList; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v6; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v7; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v8; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v9; // x21
  struct System_Collections_Generic_List_SetNoticeNumControl__o *v10; // x20

  v4 = this;
  if ( (byte_4214E1F & 1) == 0 )
  {
    this = (MenuListControl_o *)sub_B0D8A4(
                                  &Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__,
                                  enableData);
    byte_4214E1F = 1;
  }
  setNoticeNumList = v4->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_29;
  if ( setNoticeNumList->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  if ( !enableData )
    goto LABEL_29;
  this = (MenuListControl_o *)setNoticeNumList->fields._items->m_Items[1];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.skillUpEnableNum, 0LL);
  v6 = v4->fields.setNoticeNumList;
  if ( !v6 )
    goto LABEL_29;
  if ( v6->fields._size <= 3u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (MenuListControl_o *)v6->fields._items->m_Items[3];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.limitUpEnableNum, 0LL);
  v7 = v4->fields.setNoticeNumList;
  if ( !v7 )
    goto LABEL_29;
  if ( v7->fields._size <= 5u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (MenuListControl_o *)v7->fields._items->m_Items[5];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.friendshipExceedEnableNum, 0LL);
  v8 = v4->fields.setNoticeNumList;
  if ( !v8 )
    goto LABEL_29;
  if ( v8->fields._size <= 9u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (MenuListControl_o *)v8->fields._items->m_Items[9];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.npUpEnableNum, 0LL);
  v9 = v4->fields.setNoticeNumList;
  if ( !v9 )
    goto LABEL_29;
  if ( v9->fields._size <= 0xAu )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (MenuListControl_o *)v9->fields._items->m_Items[10];
  if ( !this )
    goto LABEL_29;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)this, enableData->fields.lvExceedEnableNum, 0LL);
  v10 = v4->fields.setNoticeNumList;
  if ( !v10 )
    goto LABEL_29;
  if ( v10->fields._size <= 0xBu )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (MenuListControl_o *)v10->fields._items->m_Items[11];
  if ( !this )
LABEL_29:
    sub_B0D97C(this);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **targetIds; // x1
  System_Int32_array **EventName; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **detail; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4214E1D & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoData_TypeInfo, combineEventEnt);
    byte_4214E1D = 1;
  }
  v6 = sub_B0D974(EventInfoData_TypeInfo, combineEventEnt, eventEnt);
  EventInfoData___ctor((EventInfoData_o *)v6, 0LL);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_B0D97C(v7);
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  targetIds = (System_Int32_array **)combineEventEnt->fields.targetIds;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_B0D840((BattleServantConfConponent_o *)(v6 + 32), targetIds, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = (System_Int32_array **)EventEntity__getEventName(eventEnt, 0LL);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_B0D840((BattleServantConfConponent_o *)(v6 + 40), EventName, v16, v17, v18, v19, v20, v21);
  detail = (System_Int32_array **)eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_B0D840((BattleServantConfConponent_o *)(v6 + 48), detail, v23, v24, v25, v26, v27, v28);
  *(float *)(v6 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_QWORD *)(v6 + 64) = eventEnt->fields.startedAt;
  *(_QWORD *)(v6 + 72) = eventEnt->fields.endedAt;
  *(_QWORD *)(v6 + 80) = eventEnt;
  sub_B0D840((BattleServantConfConponent_o *)(v6 + 80), (System_Int32_array **)eventEnt, v29, v30, v31, v32, v33, v34);
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
    sub_B0D97C(this);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}