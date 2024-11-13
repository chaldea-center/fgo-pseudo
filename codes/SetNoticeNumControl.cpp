void __fastcall SetNoticeNumControl___ctor(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SetNoticeNumControl__clear(SetNoticeNumControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_noticeNumObj; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *noticeNumObj; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B19E94 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19E94 = 1;
  }
  noticeNumObj = this->fields.noticeNumObj;
  p_noticeNumObj = (PartyOrganizationUtility_o *)&this->fields.noticeNumObj;
  v5 = (UnityEngine_Object_o *)noticeNumObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_noticeNumObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_noticeNumObj->klass = 0LL;
    sub_1BCA784(p_noticeNumObj, 0LL, v9, v10, v11, v12, v13, v14);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x22
  bool v19; // w1

  if ( (byte_4B19E93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&resNum, method);
    byte_4B19E93 = 1;
  }
  SetNoticeNumControl__clear(this, *(const MethodInfo **)&resNum);
  if ( resNum < 1 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v19 = 0;
      goto LABEL_14;
    }
LABEL_15:
    sub_1BCAA3C(gameObject, v15);
  }
  noticeNumberPrefab = this->fields.noticeNumberPrefab;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, noticeNumberPrefab, transform, 0LL, 0LL);
  this->fields.noticeNumObj = Object;
  p_noticeNumObj = &this->fields.noticeNumObj;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.noticeNumObj, (int64_t)Object, v9, v10, v11, v12, v13, v14);
  gameObject = this->fields.noticeNumObj;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v18 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v15, v17);
    byte_4B109C1 = 1;
  }
  if ( !v18 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = *p_noticeNumObj;
  if ( !*p_noticeNumObj )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
  if ( !gameObject )
    goto LABEL_15;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)gameObject, resNum, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  v19 = 1;
LABEL_14:
  UnityEngine_GameObject__SetActive(gameObject, v19, 0LL);
}