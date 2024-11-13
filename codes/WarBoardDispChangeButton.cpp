void __fastcall WarBoardDispChangeButton___ctor(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardDispChangeButton__ApplyFsOffsetAdjustment(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *fsOffset; // x20
  __int64 v5; // x1
  FSOffset_o *v6; // x0

  if ( (byte_4B14111 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14111 = 1;
  }
  fsOffset = (UnityEngine_Object_o *)this->fields.fsOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(fsOffset, 0LL, 0LL) )
  {
    v6 = this->fields.fsOffset;
    if ( !v6 || (FSOffset__AddOffsetX(v6, 0LL), (v6 = this->fields.fsOffset) == 0LL) )
      sub_1BCAA3C(v6, v5);
    FSOffset__AddBottomY(v6, 0LL);
  }
}


void __fastcall WarBoardDispChangeButton__Awake(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields._DispChangeIsTouch_k__BackingField = 0;
}


void __fastcall WarBoardDispChangeButton__OnClickButton(WarBoardDispChangeButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  long double v10; // q0
  __int64 v11; // x0
  __int64 v12; // x0
  WarBoardManager_o *v13; // x0

  if ( (byte_4B14110 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method, v2);
    sub_1BCA7E0(&Method_WarBoardDispChangeButton_OnClickButton__, v4, v5);
    byte_4B14110 = 1;
  }
  v6 = Method_WarBoardDispChangeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_WarBoardDispChangeButton_OnClickButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_WarBoardDispChangeButton_OnClickButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  this->fields._DispChangeIsTouch_k__BackingField = 1;
  WarBoardDispChangeButton__SetDispUIRoot(this, 0, v8);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v10);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(v10);
  v13 = **(WarBoardManager_o ***)(v12 + 184);
  if ( !v13 )
    sub_1BCAA3C(0LL, v9);
  WarBoardManager__ChangeMapUIStateDelayCall(v13, 1, 0LL);
}


void __fastcall WarBoardDispChangeButton__SetActive(
        WarBoardDispChangeButton_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardDispChangeButton__SetDispUIRoot(
        WarBoardDispChangeButton_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x0
  void *transform; // x0
  WarBoardManager_o **v10; // x8
  WarBoardManager_o *v11; // x20
  const MethodInfo *v12; // x2
  WarBoardDispChangeComponent_o *v13; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  bool IsPlayerTurn; // w0

  if ( (byte_4B14112 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___, isDisp, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v6, v7);
    byte_4B14112 = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1C6BC(v3);
  transform = *(void **)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*((_BYTE *)transform + 309) & 1) == 0 )
    transform = (void *)sub_1C1C6BC(v3);
  v10 = (WarBoardManager_o **)*((_QWORD *)transform + 23);
  v11 = *v10;
  if ( !*v10
    || (WarBoardManager__WarBoardObjectSetBoxCollider(*v10, isDisp, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)transform,
                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardDispChangeComponent___)) == 0LL )
  {
    sub_1BCAA3C(transform, isDisp);
  }
  v13 = (WarBoardDispChangeComponent_o *)transform;
  WarBoardDispChangeComponent__SetUiRootAlpha((WarBoardDispChangeComponent_o *)transform, isDisp, v12);
  if ( !isDisp )
  {
    if ( WarBoardManager__get_isSelectedPiece(v11, 0LL) )
      WarBoardManager__DeselectPiece(v11, 1, 0LL, 0LL);
    goto LABEL_17;
  }
  WarBoardDispChangeComponent__SetBackKeyObject(v13, v14);
  if ( WarBoardManager__EnableAction(v11, 0LL) )
  {
LABEL_17:
    IsPlayerTurn = 0;
    goto LABEL_18;
  }
  IsPlayerTurn = WarBoardManager__IsPlayerTurn(v11, 0LL);
LABEL_18:
  WarBoardDispChangeComponent__SetDispChangeBlink(v13, IsPlayerTurn, v15);
}


void __fastcall WarBoardDispChangeButton__SetUpPositionForConfigurationMode(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForConfigurationMode, 0LL);
  WarBoardDispChangeButton__ApplyFsOffsetAdjustment(this, v5);
}


void __fastcall WarBoardDispChangeButton__SetUpPositionForPlayMode(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_Transform__set_localPosition(transform, this->fields.positionForPlayMode, 0LL);
  WarBoardDispChangeButton__ApplyFsOffsetAdjustment(this, v5);
}


bool __fastcall WarBoardDispChangeButton__get_DispChangeIsTouch(
        WarBoardDispChangeButton_o *this,
        const MethodInfo *method)
{
  return this->fields._DispChangeIsTouch_k__BackingField;
}


void __fastcall WarBoardDispChangeButton__set_DispChangeIsTouch(
        WarBoardDispChangeButton_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._DispChangeIsTouch_k__BackingField = value;
}