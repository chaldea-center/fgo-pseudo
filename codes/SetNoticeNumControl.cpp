void __fastcall SetNoticeNumControl___ctor(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SetNoticeNumControl__clear(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_noticeNumObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *noticeNumObj; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC3DA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC3DA = 1;
  }
  noticeNumObj = this->fields.noticeNumObj;
  p_noticeNumObj = (BattleServantConfConponent_o *)&this->fields.noticeNumObj;
  v4 = (UnityEngine_Object_o *)noticeNumObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_noticeNumObj->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_noticeNumObj->klass = 0LL;
    sub_B16F98(p_noticeNumObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetNoticeNumControl__setNoticeNum(
        SetNoticeNumControl_o *this,
        int32_t resNum,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *noticeNumberPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o **p_noticeNumObj; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_GameObject_o *noticeNumObj; // x0
  UnityEngine_Transform_o *v16; // x22
  int v17; // s0
  NoticeNumberComponent_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v22; // w1

  if ( (byte_40FC3D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&resNum);
    byte_40FC3D9 = 1;
  }
  SetNoticeNumControl__clear(this, *(const MethodInfo **)&resNum);
  if ( resNum < 1 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v22 = 0;
      goto LABEL_12;
    }
LABEL_13:
    sub_B170D4();
  }
  noticeNumberPrefab = this->fields.noticeNumberPrefab;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, noticeNumberPrefab, transform, 0LL, 0LL);
  p_noticeNumObj = &this->fields.noticeNumObj;
  this->fields.noticeNumObj = Object;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.noticeNumObj,
    (System_Int32_array **)Object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  noticeNumObj = this->fields.noticeNumObj;
  if ( !noticeNumObj )
    goto LABEL_13;
  v16 = UnityEngine_GameObject__get_transform(noticeNumObj, 0LL);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v16 )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  if ( !*p_noticeNumObj )
    goto LABEL_13;
  Component_srcLineSprite = (NoticeNumberComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         *p_noticeNumObj,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_13;
  NoticeNumberComponent__SetNumber(Component_srcLineSprite, resNum, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  v22 = 1;
LABEL_12:
  UnityEngine_GameObject__SetActive(gameObject, v22, 0LL);
}