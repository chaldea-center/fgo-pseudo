void SetNoticeNumControl___ctor(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SetNoticeNumControl__clear(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_noticeNumObj; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *noticeNumObj; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596A391 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A391 = 1;
  }
  noticeNumObj = this->fields.noticeNumObj;
  p_noticeNumObj = (MissionNaviTransitionBoardItem_o *)&this->fields.noticeNumObj;
  v5 = (UnityEngine_Object_o *)noticeNumObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_noticeNumObj->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_noticeNumObj->klass = 0;
    sub_2213A04(p_noticeNumObj, 0, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void SetNoticeNumControl__setNoticeNum(SetNoticeNumControl_o *this, int32_t resNum, const MethodInfo *method)
{
  UnityEngine_GameObject_o *noticeNumberPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  struct UnityEngine_GameObject_o **p_noticeNumObj; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v17; // x22
  bool v18; // w1

  if ( (byte_596A390 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    byte_596A390 = 1;
  }
  SetNoticeNumControl__clear(this, *(const MethodInfo **)&resNum);
  if ( resNum < 1 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      v18 = 0;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(gameObject, v15);
  }
  noticeNumberPrefab = this->fields.noticeNumberPrefab;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, noticeNumberPrefab, transform, 0, 0);
  this->fields.noticeNumObj = Object;
  p_noticeNumObj = &this->fields.noticeNumObj;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.noticeNumObj,
    (int32_t)Object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  gameObject = this->fields.noticeNumObj;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v17 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5969AE0 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v17 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = *p_noticeNumObj;
  if ( !*p_noticeNumObj )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
  if ( !gameObject )
    goto LABEL_15;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)gameObject, resNum, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  v18 = 1;
LABEL_14:
  UnityEngine_GameObject__SetActive(gameObject, v18, 0);
}