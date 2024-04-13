void __fastcall TitleInfoEventTimeImgListComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6C11 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTimeImgListComponent_TypeInfo, v1, v2, v3);
    byte_42E6C11 = 1;
  }
  TitleInfoEventTimeImgListComponent_TypeInfo->static_fields->TIME_STATUS_ICON_MOVE_TIME = 0.5;
  TitleInfoEventTimeImgListComponent_TypeInfo->static_fields->TIME_STATUS_STEP_MAX = 4;
}


void __fastcall TitleInfoEventTimeImgListComponent___ctor(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTimeImgListComponent__AddTimeAnime(
        TitleInfoEventTimeImgListComponent_o *this,
        System_Action_o *changeDayCallback,
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
  __int64 v15; // x19
  UnityEngine_Component_o *grid; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  TitleInfoEventTimeImgListComponent_o *v30; // x0
  const MethodInfo *v31; // x2
  int32_t timeStep; // w8
  TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x1
  UnityEngine_GameObject_o *v34; // x21
  struct UIGrid_o *v35; // x8
  TweenPosition_o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  EventDelegate_Callback_o *v43; // x21
  UnityEngine_Vector3_o v44; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42E6C0F & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)changeDayCallback, (_DWORD)method, v3);
    sub_B5D5C4(&TitleInfoEventTimeImgListComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_TitleInfoEventTimeImgListComponent___c__DisplayClass19_0__AddTimeAnime_b__0__, v9, v10, v11);
    sub_B5D5C4(&TitleInfoEventTimeImgListComponent___c__DisplayClass19_0_TypeInfo, v12, v13, v14);
    byte_42E6C0F = 1;
  }
  v15 = sub_B5D694(TitleInfoEventTimeImgListComponent___c__DisplayClass19_0_TypeInfo);
  TitleInfoEventTimeImgListComponent___c__DisplayClass19_0___ctor(
    (TitleInfoEventTimeImgListComponent___c__DisplayClass19_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_15;
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = changeDayCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)changeDayCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  timeStep = this->fields.timeStep;
  if ( timeStep < this->fields.maxTimeStep )
  {
    stateList = this->fields.stateList;
    this->fields.timeStep = timeStep + 1;
    if ( timeStep + 1 == TitleInfoEventTimeImgListComponent__GetChangeDayStep(v30, stateList, v31) )
      ActionExtensions__Call(*(System_Action_o **)(v15 + 24), 0LL);
    grid = (UnityEngine_Component_o *)this->fields.grid;
    if ( grid )
    {
      grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0LL);
      v34 = (UnityEngine_GameObject_o *)grid;
      if ( (BYTE3(TitleInfoEventTimeImgListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventTimeImgListComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTimeImgListComponent_TypeInfo);
      }
      v35 = this->fields.grid;
      if ( v35 )
      {
        v44.fields.z = 0.0;
        v44.fields.y = *(float *)&v35->fields.animateSmoothly * (float)this->fields.timeStep;
        v44.fields.x = 0.0;
        v36 = TweenPosition__Begin(
                v34,
                TitleInfoEventTimeImgListComponent_TypeInfo->static_fields->TIME_STATUS_ICON_MOVE_TIME,
                v44,
                0LL);
        grid = (UnityEngine_Component_o *)UnityEngine_AnimationCurve__EaseInOut(0.0, 0.0, 1.0, 1.0, 0LL);
        if ( v36 )
        {
          v36->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)grid;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v36->fields.animationCurve,
            (System_Int32_array **)grid,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          v36->fields.ignoreTimeScale = 0;
          v43 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(
            v43,
            (Il2CppObject *)v15,
            Method_TitleInfoEventTimeImgListComponent___c__DisplayClass19_0__AddTimeAnime_b__0__,
            0LL);
          UITweener__SetOnFinished((UITweener_o *)v36, v43, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_B5D69C(grid, v17);
  }
}


void __fastcall TitleInfoEventTimeImgListComponent__CreateIcon(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t state,
        float y,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UnityEngine_GameObject_o *iconPrefab; // x21
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *grid; // x1
  UnityEngine_GameObject_o *v17; // x20
  TitleInfoEventTimeImgListViewObject_o *Component_srcLineSprite; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_42E6C0E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___,
      state,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E6C0E = 1;
  }
  iconPrefab = this->fields.iconPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)iconPrefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  v17 = v15;
  GameObjectExtensions__SafeSetParent(v15, grid, 0LL);
  GameObjectExtensions__SetLocalPositionY(v17, y, 0LL);
  if ( !v17
    || (Component_srcLineSprite = (TitleInfoEventTimeImgListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v17,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___)) == 0LL )
  {
    sub_B5D69C(Component_srcLineSprite, v19);
  }
  TitleInfoEventTimeImgListViewObject__Init(Component_srcLineSprite, state, v20);
}


void __fastcall TitleInfoEventTimeImgListComponent__CreateIconList(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x8
  unsigned __int64 v5; // x20
  unsigned __int64 max_length; // x9
  struct UIGrid_o *grid; // x9
  __int64 v8; // x0

  stateList = this->fields.stateList;
  if ( !stateList )
LABEL_7:
    sub_B5D69C(this, method);
  v5 = 0LL;
  while ( 1 )
  {
    max_length = stateList->max_length;
    if ( (__int64)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
    {
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
    }
    grid = this->fields.grid;
    if ( grid )
    {
      TitleInfoEventTimeImgListComponent__CreateIcon(
        this,
        stateList->m_Items[v5 + 1],
        *(float *)&grid->fields.animateSmoothly * (float)(int)v5,
        v2);
      stateList = this->fields.stateList;
      ++v5;
      if ( stateList )
        continue;
    }
    goto LABEL_7;
  }
}


int32_t __fastcall TitleInfoEventTimeImgListComponent__GetChangeDayStep(
        TitleInfoEventTimeImgListComponent_o *this,
        TitleInfoEventTimeImgListComponent_TimeState_array *list,
        const MethodInfo *method)
{
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x0
  _BOOL4 v5; // w11
  int32_t v6; // w12
  _BOOL4 v7; // w12
  bool v8; // zf
  __int64 v9; // x0

  if ( list && (int)*(_QWORD *)&list->max_length >= 1 )
  {
    v3 = (unsigned int)*(_QWORD *)&list->max_length;
    v4 = 0LL;
    v5 = 0;
    while ( 1 )
    {
      if ( v4 >= v3 )
      {
        v9 = sub_B5D6C8(v4);
        sub_B5D668(v9, 0LL);
      }
      v6 = list->m_Items[v4 + 1];
      if ( v6 == 2 )
      {
        v7 = 1;
      }
      else
      {
        v8 = v6 == 3;
        v7 = v6 == 3;
        if ( !v8 && v5 )
          return v4;
      }
      ++v4;
      v5 = v7;
      if ( (__int64)v4 >= (int)v3 )
        return v4;
    }
  }
  LODWORD(v4) = 0;
  return v4;
}


TitleInfoEventTimeImgListComponent_TimeState_array *__fastcall TitleInfoEventTimeImgListComponent__GetStateList(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t start,
        const MethodInfo *method)
{
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
  System_Array_o *v17; // x0
  __int64 *v18; // x8
  TitleInfoEventTimeImgListComponent_TimeState_array *v19; // x19
  __int64 v20; // x1

  if ( (byte_42E6C10 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, start, (_DWORD)method, v3);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__05DC715F8E536C7C410383B0D77EB649831DF1DFAD839486E54FFC948EA3E3B2,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__08B06BA91C8EC8563FBA7CD4038FA9699D8AD7B3FD34E52E42FDBCBBDA783FFD,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE,
      v14,
      v15,
      v16);
    byte_42E6C10 = 1;
  }
  switch ( start )
  {
    case 0:
      v17 = (System_Array_o *)sub_B5D5DC(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4LL);
      v18 = &Field__PrivateImplementationDetails__7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D;
      goto LABEL_9;
    case 1:
      v17 = (System_Array_o *)sub_B5D5DC(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4LL);
      v18 = &Field__PrivateImplementationDetails__F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE;
      goto LABEL_9;
    case 2:
      v17 = (System_Array_o *)sub_B5D5DC(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4LL);
      v18 = &Field__PrivateImplementationDetails__05DC715F8E536C7C410383B0D77EB649831DF1DFAD839486E54FFC948EA3E3B2;
      goto LABEL_9;
    case 3:
      v17 = (System_Array_o *)sub_B5D5DC(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4LL);
      v18 = &Field__PrivateImplementationDetails__08B06BA91C8EC8563FBA7CD4038FA9699D8AD7B3FD34E52E42FDBCBBDA783FFD;
LABEL_9:
      v20 = *v18;
      v19 = (TitleInfoEventTimeImgListComponent_TimeState_array *)v17;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(
        v17,
        (System_RuntimeFieldHandle_o)v20,
        0LL);
      break;
    default:
      v19 = 0LL;
      break;
  }
  return v19;
}


int32_t __fastcall TitleInfoEventTimeImgListComponent__GetStepCount(
        TitleInfoEventTimeImgListComponent_o *this,
        TitleInfoEventTimeImgListComponent_TimeState_array *list,
        int32_t end,
        const MethodInfo *method)
{
  signed int max_length; // w8
  __int64 v5; // x0
  __int64 v6; // x0

  if ( !list )
    sub_B5D69C(this, 0LL);
  max_length = list->max_length;
  if ( max_length < 1 )
  {
    LODWORD(v5) = 0;
  }
  else
  {
    v5 = 0LL;
    do
    {
      if ( (unsigned int)v5 >= max_length )
      {
        v6 = sub_B5D6C8(v5);
        sub_B5D668(v6, 0LL);
      }
      if ( list->m_Items[(int)v5 + 1] == end )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (int)v5 < max_length );
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeImgListComponent__Init(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t start,
        int32_t end,
        const MethodInfo *method)
{
  struct TitleInfoEventTimeImgListComponent_TimeState_array *StateList; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  this->fields.startState = start;
  this->fields.endState = end;
  StateList = TitleInfoEventTimeImgListComponent__GetStateList(this, start, *(const MethodInfo **)&end);
  this->fields.stateList = StateList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.stateList,
    (System_Int32_array **)StateList,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  TitleInfoEventTimeImgListComponent__CreateIconList(this, v12);
}


void __fastcall TitleInfoEventTimeImgListComponent__SetupTimeAnime(
        TitleInfoEventTimeImgListComponent_o *this,
        System_Action_o *changeDayCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x1
  int32_t endState; // w2
  int32_t StepCount; // w0
  const MethodInfo *v9; // x2

  stateList = this->fields.stateList;
  endState = this->fields.endState;
  this->fields.timeStep = 0;
  StepCount = TitleInfoEventTimeImgListComponent__GetStepCount(this, stateList, endState, v3);
  this->fields.maxTimeStep = StepCount;
  if ( StepCount )
    TitleInfoEventTimeImgListComponent__AddTimeAnime(this, changeDayCallback, v9);
  else
    ActionExtensions__Call(changeDayCallback, 0LL);
}


int32_t __fastcall TitleInfoEventTimeImgListComponent__get_EndState(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.endState;
}


int32_t __fastcall TitleInfoEventTimeImgListComponent__get_StartState(
        TitleInfoEventTimeImgListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.startState;
}


void __fastcall TitleInfoEventTimeImgListComponent___c__DisplayClass19_0___ctor(
        TitleInfoEventTimeImgListComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTimeImgListComponent___c__DisplayClass19_0___AddTimeAnime_b__0(
        TitleInfoEventTimeImgListComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTimeImgListComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  TitleInfoEventTimeImgListComponent__AddTimeAnime(_4__this, this->fields.changeDayCallback, 0LL);
}