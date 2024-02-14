void __fastcall TitleInfoEventTimeImgListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421306B & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventTimeImgListComponent_TypeInfo, v1);
    byte_421306B = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  UnityEngine_Component_o *grid; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  TitleInfoEventTimeImgListComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  int32_t timeStep; // w8
  TitleInfoEventTimeImgListComponent_TimeState_array *stateList; // x1
  UnityEngine_GameObject_o *v26; // x21
  struct UIGrid_o *v27; // x8
  TweenPosition_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  EventDelegate_Callback_o *v37; // x21
  UnityEngine_Vector3_o v38; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4213069 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, changeDayCallback);
    sub_B0D8A4(&TitleInfoEventTimeImgListComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_TitleInfoEventTimeImgListComponent___c__DisplayClass19_0__AddTimeAnime_b__0__, v6);
    sub_B0D8A4(&TitleInfoEventTimeImgListComponent___c__DisplayClass19_0_TypeInfo, v7);
    byte_4213069 = 1;
  }
  v8 = sub_B0D974(TitleInfoEventTimeImgListComponent___c__DisplayClass19_0_TypeInfo, changeDayCallback, method);
  TitleInfoEventTimeImgListComponent___c__DisplayClass19_0___ctor(
    (TitleInfoEventTimeImgListComponent___c__DisplayClass19_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_15;
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = changeDayCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v8 + 24),
    (System_Int32_array **)changeDayCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  timeStep = this->fields.timeStep;
  if ( timeStep < this->fields.maxTimeStep )
  {
    stateList = this->fields.stateList;
    this->fields.timeStep = timeStep + 1;
    if ( timeStep + 1 == TitleInfoEventTimeImgListComponent__GetChangeDayStep(v22, stateList, v23) )
      ActionExtensions__Call(*(System_Action_o **)(v8 + 24), 0LL);
    grid = (UnityEngine_Component_o *)this->fields.grid;
    if ( grid )
    {
      grid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(grid, 0LL);
      v26 = (UnityEngine_GameObject_o *)grid;
      if ( (BYTE3(TitleInfoEventTimeImgListComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventTimeImgListComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTimeImgListComponent_TypeInfo);
      }
      v27 = this->fields.grid;
      if ( v27 )
      {
        v38.fields.z = 0.0;
        v38.fields.y = *(float *)&v27->fields.animateSmoothly * (float)this->fields.timeStep;
        v38.fields.x = 0.0;
        v28 = TweenPosition__Begin(
                v26,
                TitleInfoEventTimeImgListComponent_TypeInfo->static_fields->TIME_STATUS_ICON_MOVE_TIME,
                v38,
                0LL);
        grid = (UnityEngine_Component_o *)UnityEngine_AnimationCurve__EaseInOut(0.0, 0.0, 1.0, 1.0, 0LL);
        if ( v28 )
        {
          v28->fields.animationCurve = (struct UnityEngine_AnimationCurve_o *)grid;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v28->fields.animationCurve,
            (System_Int32_array **)grid,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          v28->fields.ignoreTimeScale = 0;
          v37 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v35, v36);
          EventDelegate_Callback___ctor(
            v37,
            (Il2CppObject *)v8,
            Method_TitleInfoEventTimeImgListComponent___c__DisplayClass19_0__AddTimeAnime_b__0__,
            0LL);
          UITweener__SetOnFinished((UITweener_o *)v28, v37, 0LL);
          return;
        }
      }
    }
LABEL_15:
    sub_B0D97C(grid);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeImgListComponent__CreateIcon(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t state,
        float y,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_GameObject_o *iconPrefab; // x21
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *grid; // x1
  UnityEngine_GameObject_o *v12; // x20
  TitleInfoEventTimeImgListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v14; // x2

  if ( (byte_4213068 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___, *(_QWORD *)&state);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4213068 = 1;
  }
  iconPrefab = this->fields.iconPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)iconPrefab,
                                      (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  v12 = v10;
  GameObjectExtensions__SafeSetParent(v10, grid, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, y, 0LL);
  if ( !v12
    || (Component_srcLineSprite = (TitleInfoEventTimeImgListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             v12,
                                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTimeImgListViewObject___)) == 0LL )
  {
    sub_B0D97C(Component_srcLineSprite);
  }
  TitleInfoEventTimeImgListViewObject__Init(Component_srcLineSprite, state, v14);
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
    sub_B0D97C(this);
  v5 = 0LL;
  while ( 1 )
  {
    max_length = stateList->max_length;
    if ( (__int64)v5 >= (int)max_length )
      break;
    if ( v5 >= max_length )
    {
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
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
        v9 = sub_B0D9A8(v4);
        sub_B0D948(v9, 0LL);
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


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTimeImgListComponent_TimeState_array *__fastcall TitleInfoEventTimeImgListComponent__GetStateList(
        TitleInfoEventTimeImgListComponent_o *this,
        int32_t start,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Array_o *v8; // x0
  __int64 *v9; // x8
  TitleInfoEventTimeImgListComponent_TimeState_array *v10; // x19
  __int64 v11; // x1

  if ( (byte_421306A & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, *(_QWORD *)&start);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__05DC715F8E536C7C410383B0D77EB649831DF1DFAD839486E54FFC948EA3E3B2,
      v4);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__08B06BA91C8EC8563FBA7CD4038FA9699D8AD7B3FD34E52E42FDBCBBDA783FFD,
      v5);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D,
      v6);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE,
      v7);
    byte_421306A = 1;
  }
  switch ( start )
  {
    case 0:
      v8 = (System_Array_o *)sub_B0D8BC(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4LL);
      v9 = &Field__PrivateImplementationDetails__7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D;
      goto LABEL_9;
    case 1:
      v8 = (System_Array_o *)sub_B0D8BC(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4LL);
      v9 = &Field__PrivateImplementationDetails__F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE;
      goto LABEL_9;
    case 2:
      v8 = (System_Array_o *)sub_B0D8BC(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4LL);
      v9 = &Field__PrivateImplementationDetails__05DC715F8E536C7C410383B0D77EB649831DF1DFAD839486E54FFC948EA3E3B2;
      goto LABEL_9;
    case 3:
      v8 = (System_Array_o *)sub_B0D8BC(TitleInfoEventTimeImgListComponent_TimeState___TypeInfo, 4LL);
      v9 = &Field__PrivateImplementationDetails__08B06BA91C8EC8563FBA7CD4038FA9699D8AD7B3FD34E52E42FDBCBBDA783FFD;
LABEL_9:
      v11 = *v9;
      v10 = (TitleInfoEventTimeImgListComponent_TimeState_array *)v8;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(
        v8,
        (System_RuntimeFieldHandle_o)v11,
        0LL);
      break;
    default:
      v10 = 0LL;
      break;
  }
  return v10;
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
    sub_B0D97C(this);
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
        v6 = sub_B0D9A8(v5);
        sub_B0D948(v6, 0LL);
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
  sub_B0D840(
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
    sub_B0D97C(0LL);
  TitleInfoEventTimeImgListComponent__AddTimeAnime(_4__this, this->fields.changeDayCallback, 0LL);
}