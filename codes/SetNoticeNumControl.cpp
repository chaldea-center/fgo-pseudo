void SetNoticeNumControl___ctor(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SetNoticeNumControl__clear(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_noticeNumObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *noticeNumObj; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4D26770 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26770 = 1;
  }
  noticeNumObj = this->fields.noticeNumObj;
  p_noticeNumObj = &this->fields.noticeNumObj;
  v4 = (UnityEngine_Object_o *)noticeNumObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_noticeNumObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(v6, 0);
    *p_noticeNumObj = 0;
    sub_1C9403C(p_noticeNumObj, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SetNoticeNumControl__setNoticeNum(SetNoticeNumControl_o *this, int32_t resNum, const MethodInfo *method)
{
  UnityEngine_GameObject_o *noticeNumberPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  struct UnityEngine_GameObject_o **p_noticeNumObj; // x21
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v11; // x22
  bool v12; // w1

  if ( (byte_4D2676F & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    byte_4D2676F = 1;
  }
  SetNoticeNumControl__clear(this, *(const MethodInfo **)&resNum);
  if ( resNum < 1 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      v12 = 0;
      goto LABEL_14;
    }
LABEL_15:
    sub_1C942F0(gameObject, v9);
  }
  noticeNumberPrefab = this->fields.noticeNumberPrefab;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, noticeNumberPrefab, transform, 0, 0);
  this->fields.noticeNumObj = Object;
  p_noticeNumObj = &this->fields.noticeNumObj;
  sub_1C9403C(&this->fields.noticeNumObj, Object);
  gameObject = this->fields.noticeNumObj;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v11 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4D25F19 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = *p_noticeNumObj;
  if ( !*p_noticeNumObj )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
  if ( !gameObject )
    goto LABEL_15;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)gameObject, resNum, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  v12 = 1;
LABEL_14:
  UnityEngine_GameObject__SetActive(gameObject, v12, 0);
}