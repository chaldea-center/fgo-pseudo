void ExRoomStateTop___ctor(ExRoomStateTop_o *this, ExRoomRootComponent_o *exRoom, const MethodInfo *method)
{
  ExRoomStateTop_o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  v4 = this;
  *(_QWORD *)&this->fields.titleBackKind = 0x6400000002LL;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.root = exRoom;
  v4 = (ExRoomStateTop_o *)((char *)v4 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v4, (int32_t)exRoom, v5, v6, v7, v8, v9, v10);
  v4->fields.root = (struct ExRoomRootComponent_o *)0x7300000064LL;
}


void ExRoomStateTop__OnEnter(ExRoomStateTop_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *root; // x20
  ExRoomTopComponent_o *v5; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct ExRoomRootComponent_o *v8; // x8
  UnityEngine_Object_o *TopDisp_k__BackingField; // x20
  struct ExRoomRootComponent_o *v10; // x8
  struct ExRoomRootComponent_o *v11; // x8

  if ( (byte_5932D99 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932D99 = 1;
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (ExRoomTopComponent_o *)UnityEngine_Object__op_Equality(root, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    v8 = this->fields.root;
    if ( !v8 )
      goto LABEL_16;
    TopDisp_k__BackingField = (UnityEngine_Object_o *)v8->fields._TopDisp_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v5 = (ExRoomTopComponent_o *)UnityEngine_Object__op_Equality(TopDisp_k__BackingField, 0, 0);
    if ( ((unsigned __int8)v5 & 1) == 0 )
    {
      v10 = this->fields.root;
      if ( v10 )
      {
        v5 = v10->fields._TopDisp_k__BackingField;
        if ( v5 )
        {
          ExRoomTopComponent__Init(v5, v6);
          v11 = this->fields.root;
          if ( v11 )
          {
            v5 = v11->fields._TopDisp_k__BackingField;
            if ( v5 )
            {
              ExRoomTopComponent__SlideIn(v5, v6);
              MainMenuBar__FrameIn(0, 0);
              goto LABEL_15;
            }
          }
        }
      }
LABEL_16:
      sub_21FFECC(v5, v6);
    }
  }
LABEL_15:
  this->fields._OnEndEnter_k__BackingField = 1;
}


void ExRoomStateTop__OnExit(ExRoomStateTop_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *root; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct ExRoomRootComponent_o *v8; // x8
  UnityEngine_Object_o *TopDisp_k__BackingField; // x20
  struct ExRoomRootComponent_o *v10; // x8
  ExRoomTopComponent_o *v11; // x20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2
  struct ExRoomRootComponent_o *v14; // x8

  if ( (byte_5932D9A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExRoomStateTop__OnExit_b__2_0__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932D9A = 1;
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(root, 0, 0);
  if ( !v5 )
    goto LABEL_15;
  v8 = this->fields.root;
  if ( !v8 )
    goto LABEL_17;
  TopDisp_k__BackingField = (UnityEngine_Object_o *)v8->fields._TopDisp_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v5 = UnityEngine_Object__op_Inequality(TopDisp_k__BackingField, 0, 0);
  if ( !v5 )
  {
LABEL_15:
    this->fields._OnEndExit_k__BackingField = 1;
    return;
  }
  v10 = this->fields.root;
  if ( !v10
    || (v11 = v10->fields._TopDisp_k__BackingField,
        v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ExRoomStateTop__OnExit_b__2_0__, 0),
        !v11)
    || (ExRoomTopComponent__SlideOut(v11, v12, v13), (v14 = this->fields.root) == 0) )
  {
LABEL_17:
    sub_21FFECC(v5, v6);
  }
  if ( v14->fields.currentState == 2 )
    MainMenuBar__FrameOut(0, 0);
}


void ExRoomStateTop___OnExit_b__2_0(ExRoomStateTop_o *this, const MethodInfo *method)
{
  this->fields._OnEndExit_k__BackingField = 1;
}