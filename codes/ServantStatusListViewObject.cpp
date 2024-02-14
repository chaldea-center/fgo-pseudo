void __fastcall ServantStatusListViewObject___ctor(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewObject__Awake(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantStatusListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_42186E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemDraw___, method);
    byte_42186E4 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B0D97C(0LL);
  Component_srcLineSprite = (struct ServantStatusListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        dispObject,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ServantStatusListViewObject__SetBaseTransform(this, v11);
}


void __fastcall ServantStatusListViewObject__EventBattleStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct ServantStatusListViewItemDraw_o *v10; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_42186EA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186EA = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v10->klass->vtable._6_PlayBattle.method)(
      v10,
      this->fields.mainInfo,
      v10->klass->vtable._7_ModifyCommandCard.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__EventCommandStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct ServantStatusListViewItemDraw_o *v10; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_42186EB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186EB = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v10->klass->vtable._7_ModifyCommandCard.method)(
      v10,
      this->fields.mainInfo,
      v10->klass->vtable._8_ModifyFace.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__EventFaceStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct ServantStatusListViewItemDraw_o *v10; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_42186EC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186EC = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v10->klass->vtable._8_ModifyFace.method)(
      v10,
      this->fields.mainInfo,
      v10->klass->vtable._9_ModifyStatus.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__EventMoveEnd(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.classBoardSkillObj) = 0;
  *(_DWORD *)&p_callbackFunc[-1].fields.isOpenAfter = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__EventPortraitStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct ServantStatusListViewItemDraw_o *v10; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_42186EE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186EE = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v10->klass->vtable._10_ModifyPortrait.method)(
      v10,
      this->fields.mainInfo,
      v10->klass->vtable._11_ModifyServantQuest.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__EventRandomLimitCountSettingStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct ServantStatusListViewItemDraw_o *v10; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_42186F0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186F0 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, void *))v10->klass->vtable._13_ModifyRandomLimitCountSetting.method)(
      v10,
      this->fields.mainInfo,
      v10->klass[1]._1.image);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__EventRandomLimitCountSupportStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct ServantStatusListViewItemDraw_o *v10; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_42186EF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186EF = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v10->klass->vtable._12_ModifyRandomLimitCountSupport.method)(
      v10,
      this->fields.mainInfo,
      v10->klass->vtable._13_ModifyRandomLimitCountSetting.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__EventStatusStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct ServantStatusListViewItemDraw_o *v10; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_42186ED & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186ED = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v10->klass->vtable._9_ModifyStatus.method)(
      v10,
      this->fields.mainInfo,
      v10->klass->vtable._10_ModifyPortrait.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v12 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B0D840(p_callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v12, 0LL);
  }
}


int32_t __fastcall ServantStatusListViewObject__GetKind(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  struct ServantStatusListViewItemDraw_o *v4; // x0

  if ( (byte_42186E5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186E5 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    return 0;
  v4 = this->fields.itemDraw;
  if ( !v4 )
    sub_B0D97C(0LL);
  return ((__int64 (__fastcall *)(struct ServantStatusListViewItemDraw_o *, Il2CppMethodPointer))v4->klass->vtable._4_GetKind.method)(
           v4,
           v4->klass->vtable._5_SetItem.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewObject__GetSize(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v6; // x10
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  float v9; // s1

  if ( (byte_42186E6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_42186E6 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( Component_WebViewObject
    && (v6 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1),
        *(&Component_WebViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (UnityEngine_BoxCollider_c *)Component_WebViewObject->klass->_2.typeHierarchy[v6 - 1] == UnityEngine_BoxCollider_TypeInfo )
      v7 = (UnityEngine_Object_o *)Component_WebViewObject;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( !v8 )
    return 0;
  if ( !v7 )
    sub_B0D97C(v8);
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v7, 0LL);
  if ( v9 == INFINITY )
    return (int)-v9;
  else
    return (int)v9;
}


void __fastcall ServantStatusListViewObject__Init(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  BattleServantConfConponent_o *p_callbackFunc; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  MethodInfo *v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t v26; // w8
  int32_t v27; // w9
  System_Action_o *klass; // x19

  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ServantStatusListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  switch ( initMode )
  {
    case 0:
      ServantStatusListViewObject__SetInput(this, 0, v20);
      v26 = 0;
      goto LABEL_10;
    case 1:
      ServantStatusListViewObject__SetInput(this, 0, v20);
      v26 = 1;
      goto LABEL_10;
    case 2:
      ServantStatusListViewObject__SetInput(this, 0, v20);
      v26 = 2;
LABEL_10:
      this->fields.dispMode = v26;
      this->fields.state = 1;
      goto LABEL_11;
    case 3:
      ServantStatusListViewObject__SetInput(this, 1, v20);
      v27 = 3;
      goto LABEL_15;
    case 4:
      ServantStatusListViewObject__EventBattleStart(this, v19);
      return;
    case 5:
      ServantStatusListViewObject__EventCommandStart(this, v19);
      return;
    case 6:
      ServantStatusListViewObject__EventFaceStart(this, v19);
      return;
    case 7:
      ServantStatusListViewObject__EventStatusStart(this, v19);
      return;
    case 8:
      ServantStatusListViewObject__EventPortraitStart(this, v19);
      return;
    case 9:
      v27 = 1;
LABEL_15:
      this->fields.dispMode = 2;
      this->fields.state = v27;
      goto LABEL_16;
    case 10:
      ServantStatusListViewObject__EventRandomLimitCountSupportStart(this, v19);
      return;
    case 11:
      ServantStatusListViewObject__EventRandomLimitCountSettingStart(this, v19);
      return;
    default:
LABEL_11:
      if ( state && dispMode == this->fields.dispMode )
        goto LABEL_17;
LABEL_16:
      ServantStatusListViewObject__SetupDisp(this, v19);
LABEL_17:
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)v20, v21, v22, v23, v24, v25);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__Init_32074424(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__Init_32076096(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__Init_32076160(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall ServantStatusListViewObject__OnClick(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickListView(manager, this, v2);
}


void __fastcall ServantStatusListViewObject__OnClickBondLimitUp(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 17, v2);
}


void __fastcall ServantStatusListViewObject__OnClickButton(
        ServantStatusListViewObject_o *this,
        UICommonButton_o *tappedButton,
        ServantStatusListViewItemDrawButton_o *ownerObject,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickButton(manager, tappedButton, ownerObject, method);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 0, v2);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 1, v2);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 2, v2);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 3, v2);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 4, v2);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 5, v2);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 6, v2);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 7, v2);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel9(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 8, v2);
}


void __fastcall ServantStatusListViewObject__OnClickEquip1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickListViewEquip1(manager, method);
}


void __fastcall ServantStatusListViewObject__OnClickEquipExp(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickListViewEquipExp(manager, method);
}


void __fastcall ServantStatusListViewObject__OnClickExp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickListViewExp(manager, method);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 0, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel10(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 9, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel11(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 10, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel12(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 11, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 1, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 2, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 3, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 4, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 5, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 6, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 7, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel9(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 8, v2);
}


void __fastcall ServantStatusListViewObject__OnClickFriendship(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickListViewFriendship(manager, method);
}


void __fastcall ServantStatusListViewObject__OnClickLevelExceedServant(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 22, v2);
}


void __fastcall ServantStatusListViewObject__OnClickLimitCountUpServant(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 16, v2);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 0, v2);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 1, v2);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 2, v2);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 3, v2);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 4, v2);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 5, v2);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 6, v2);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 7, v2);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel9(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 8, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 4, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 5, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 6, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 7, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 8, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 9, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 10, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 11, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCount1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 0, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCount2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 1, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCount3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 2, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCount4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 3, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCountOtherSettingMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 3, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCountSelectSupportMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 2, v2);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCountSettingMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 1, v2);
}


void __fastcall ServantStatusListViewObject__OnClickReflectOwnSetting(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, -1, v2);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceAppendSkill(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 20, v2);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceCommandCard(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 19, v2);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceEquip(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 14, v2);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceNp(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 21, v2);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceServant(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 13, v2);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceSkill(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 15, v2);
}


void __fastcall ServantStatusListViewObject__OnClickServantQuest(
        ServantStatusListViewObject_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickServantQuest(manager, questId, method);
}


void __fastcall ServantStatusListViewObject__OnClickServantTdSpeedActual(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickServantTdSpeed(manager, 1, v2);
}


void __fastcall ServantStatusListViewObject__OnClickServantTdSpeedFree(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickServantTdSpeed(manager, 0, v2);
}


void __fastcall ServantStatusListViewObject__OnClickServantTdSpeedTwice(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickServantTdSpeed(manager, 2, v2);
}


void __fastcall ServantStatusListViewObject__OnClickSetCodeCommandCard(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCombine(manager, 18, v2);
}


void __fastcall ServantStatusListViewObject__OnClickSwitchRandomLimitCountOwn(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(manager, method);
}


void __fastcall ServantStatusListViewObject__OnClickSwitchRandomLimitCountSupport(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(manager, method);
}


void __fastcall ServantStatusListViewObject__OnDestroy(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusListViewObject__OnLongPushEquip1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnLongPushListViewEquip1(manager, method);
}


void __fastcall ServantStatusListViewObject__SetBaseTransform(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Transform_o *parent; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0LL),
        this->fields.baseParent = parent,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.baseParent,
          (System_Int32_array **)parent,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(transform);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__SetInput(
        ServantStatusListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v7; // x0

  if ( (byte_42186E8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42186E8 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_WebViewObject )
      sub_B0D97C(v7);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__SetItem(
        ServantStatusListViewObject_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  this->fields.mainInfo = item;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)item,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  zero = UnityEngine_Vector3__get_zero(0LL);
  ServantStatusListViewObject__Init(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__SetManager(
        ServantStatusListViewObject_o *this,
        ServantStatusListViewManager_o *manager,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ServantStatusListViewManager_o **p_manager; // x20
  const MethodInfo *v10; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_manager + 12) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    ServantStatusListViewObject__Init(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__SetTransform(
        ServantStatusListViewObject_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  v8.fields.x = x;
  v8.fields.y = y;
  v8.fields.z = z;
  UnityEngine_Transform__set_position(transform, v8, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__SetVisible(
        ServantStatusListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_42186E7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isVisible);
    byte_42186E7 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v6 = this->fields.dispObject;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, isVisible, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__SetupDisp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  struct ServantStatusListViewItemDraw_o *v5; // x0

  if ( (byte_42186E9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42186E9 = 1;
  }
  ServantStatusListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._5_SetItem.method)(
      v5,
      this->fields.mainInfo,
      (unsigned int)this->fields.dispMode,
      v5->klass->vtable._6_PlayBattle.methodPtr);
  }
}


void __fastcall ServantStatusListViewObject__add_callbackFunc(
        ServantStatusListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42186E2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_42186E2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
  ServantStatusListViewObject__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall ServantStatusListViewObject__get_Index(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.index;
}


bool __fastcall ServantStatusListViewObject__get_IsBusy(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


void __fastcall ServantStatusListViewObject__remove_callbackFunc(
        ServantStatusListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42186E3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_42186E3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
  ServantStatusListViewObject__Awake(v11, v12);
}


void __fastcall ServantStatusListViewObject__touchCommandCard(
        ServantStatusListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_B0D97C(0LL);
  ServantStatusListViewManager__OnClickCommandCode(manager, index - 1, method);
}