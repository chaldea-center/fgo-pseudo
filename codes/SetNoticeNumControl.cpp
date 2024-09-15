void __fastcall SetNoticeNumControl___ctor(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SetNoticeNumControl__clear(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_noticeNumObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *noticeNumObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A31A15 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A31A15 = 1;
  }
  noticeNumObj = this->fields.noticeNumObj;
  p_noticeNumObj = (ServantStatusBattleListViewItem_o *)&this->fields.noticeNumObj;
  v4 = (UnityEngine_Object_o *)noticeNumObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_noticeNumObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69287408(klass, 0LL);
    p_noticeNumObj->klass = 0LL;
    sub_1B76164(p_noticeNumObj, 0, v7, v8);
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
  struct UnityEngine_GameObject_o **p_noticeNumObj; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v13; // x22
  bool v14; // w1

  if ( (byte_4A31A14 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&resNum);
    byte_4A31A14 = 1;
  }
  SetNoticeNumControl__clear(this, *(const MethodInfo **)&resNum);
  if ( resNum < 1 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v14 = 0;
      goto LABEL_14;
    }
LABEL_15:
    sub_1B7641C(gameObject, v11);
  }
  noticeNumberPrefab = this->fields.noticeNumberPrefab;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, noticeNumberPrefab, transform, 0LL, 0LL);
  this->fields.noticeNumObj = Object;
  p_noticeNumObj = &this->fields.noticeNumObj;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.noticeNumObj, (int32_t)Object, v9, v10);
  gameObject = this->fields.noticeNumObj;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v13 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A28BB1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4A28BB1 = 1;
  }
  if ( !v13 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = *p_noticeNumObj;
  if ( !*p_noticeNumObj )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
  if ( !gameObject )
    goto LABEL_15;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)gameObject, resNum, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  v14 = 1;
LABEL_14:
  UnityEngine_GameObject__SetActive(gameObject, v14, 0LL);
}