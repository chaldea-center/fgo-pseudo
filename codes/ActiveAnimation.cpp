void ActiveAnimation___ctor(ActiveAnimation_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CBAA3F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBAA3F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.onFinished, (int32_t)v3, v4, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields.mClip = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mClip, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ActiveAnimation__Finish(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v5; // x0
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_AnimationState_o *v16; // x0
  UnityEngine_AnimationState_c *v17; // x1
  UnityEngine_AnimationState_o *v18; // x21
  int32_t mLastDirection; // w8
  float length; // s0
  UnityEngine_Object_o *mAnimator; // x20
  float v22; // s0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x20
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( (byte_4CBAA38 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_AnimationState_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA38 = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    v5 = this->fields.mAnim;
    if ( v5 )
    {
      Enumerator = UnityEngine_Animation__GetEnumerator(v5, 0);
      if ( !Enumerator )
        sub_1C6BC60(0, v6);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v9;
            p_offset += 4;
            if ( !v9 )
              goto LABEL_12;
          }
          v11 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_12:
          v11 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(
                Enumerator,
                *(_QWORD *)(v11 + 8))
            & 1) == 0 )
          break;
        v12 = Enumerator->klass;
        v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
          while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v13;
            v14 += 2;
            if ( !v13 )
              goto LABEL_19;
          }
          v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
        }
        else
        {
LABEL_19:
          v15 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v16 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                                Enumerator,
                                                *(_QWORD *)(v15 + 8));
        v18 = v16;
        if ( v16 )
        {
          v17 = UnityEngine_AnimationState_TypeInfo;
          if ( v16->klass != UnityEngine_AnimationState_TypeInfo )
          {
            sub_1C6BFFC(v16);
LABEL_48:
            sub_1C6BC60(v16, v17);
          }
        }
        mLastDirection = this->fields.mLastDirection;
        if ( mLastDirection == -1 )
        {
          if ( !v16 )
            sub_1C6BC60(0, v17);
          UnityEngine_AnimationState__set_time(v16, 0.0, 0);
        }
        else if ( mLastDirection == 1 )
        {
          if ( !v16 )
            goto LABEL_48;
          length = UnityEngine_AnimationState__get_length(v16, 0);
          UnityEngine_AnimationState__set_time(v18, length, 0);
        }
      }
      v23 = sub_1C6BB44(Enumerator, System_IDisposable_TypeInfo);
      if ( v23 )
      {
        v24 = *(_QWORD *)v23;
        v25 = v23;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
        {
          v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_41;
          }
          v28 = v24 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_41:
          v28 = sub_1C41D90(v23, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
      }
      v5 = this->fields.mAnim;
      if ( v5 )
      {
        UnityEngine_Animation__Sample(v5, 0);
        return;
      }
    }
LABEL_50:
    sub_1C6BC60(v5, v4);
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    v5 = (UnityEngine_Animation_o *)this->fields.mAnimator;
    if ( !v5 )
      goto LABEL_50;
    v22 = 0.0;
    if ( this->fields.mLastDirection == 1 )
      v22 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v5, this->fields.mClip, 0, v22, 0);
  }
}


void ActiveAnimation__Play(
        ActiveAnimation_o *this,
        System_String_o *clipName,
        int32_t playDirection,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x21
  __int64 v8; // x1
  struct UnityEngine_Animation_o *IsNullOrEmpty; // x0
  UnityEngine_Object_o *mAnimator; // x21
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_IEnumerator_c *v18; // x8
  __int64 v19; // x9
  System_Collections_IEnumerator_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_AnimationState_c **v22; // x0
  UnityEngine_AnimationState_o *v23; // x23
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_String_o *name; // x0
  float v27; // s0
  float time; // s0
  float length; // s0
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x21
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  struct System_String_o **p_mClip; // x19
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  float v39; // s0

  if ( (byte_4CBAA3C & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_AnimationState_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA3C = 1;
  }
  if ( !playDirection )
  {
    if ( this->fields.mLastDirection == 1 )
      playDirection = -1;
    else
      playDirection = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    IsNullOrEmpty = this->fields.mAnim;
    if ( !IsNullOrEmpty )
      goto LABEL_72;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)IsNullOrEmpty, 0, 0);
    IsNullOrEmpty = (struct UnityEngine_Animation_o *)System_String__IsNullOrEmpty(clipName, 0);
    if ( !this->fields.mAnim )
      goto LABEL_72;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !UnityEngine_Animation__get_isPlaying(this->fields.mAnim, 0) )
      {
        IsNullOrEmpty = this->fields.mAnim;
        if ( !IsNullOrEmpty )
          goto LABEL_72;
        UnityEngine_Animation__Play(IsNullOrEmpty, 0);
      }
    }
    else if ( !UnityEngine_Animation__IsPlaying(this->fields.mAnim, clipName, 0) )
    {
      IsNullOrEmpty = this->fields.mAnim;
      if ( !IsNullOrEmpty )
        goto LABEL_72;
      UnityEngine_Animation__Play_71403152(IsNullOrEmpty, clipName, 0);
    }
    IsNullOrEmpty = this->fields.mAnim;
    if ( !IsNullOrEmpty )
LABEL_72:
      sub_1C6BC60(IsNullOrEmpty, v8);
    Enumerator = UnityEngine_Animation__GetEnumerator(IsNullOrEmpty, 0);
    if ( !Enumerator )
      sub_1C6BC60(0, v12);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          p_offset += 4;
          if ( !v15 )
            goto LABEL_32;
        }
        v17 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_32:
        v17 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
              Enumerator,
              *(_QWORD *)(v17 + 8))
          & 1) == 0 )
      {
        v30 = sub_1C6BB44(Enumerator, System_IDisposable_TypeInfo);
        if ( v30 )
        {
          v31 = *(_QWORD *)v30;
          v32 = v30;
          v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
          {
            v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
            {
              --v33;
              v34 += 4;
              if ( !v33 )
                goto LABEL_59;
            }
            v35 = v31 + 16LL * *v34 + 312;
          }
          else
          {
LABEL_59:
            v35 = sub_1C41D90(v30, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
        }
        IsNullOrEmpty = this->fields.mAnim;
        this->fields.mLastDirection = playDirection;
        this->fields.mNotify = 1;
        if ( IsNullOrEmpty )
        {
          UnityEngine_Animation__Sample(IsNullOrEmpty, 0);
          return;
        }
        goto LABEL_72;
      }
      v18 = Enumerator->klass;
      v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_39;
        }
        v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1];
      }
      else
      {
LABEL_39:
        v21 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v22 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                               Enumerator,
                                               *(_QWORD *)(v21 + 8));
      v23 = (UnityEngine_AnimationState_o *)v22;
      if ( v22 && *v22 != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1C6BFFC(v22);
LABEL_70:
        sub_1C6BC60(v24, v25);
      }
      v24 = System_String__IsNullOrEmpty(clipName, 0);
      if ( v24 )
      {
        if ( !v23 )
          goto LABEL_70;
LABEL_48:
        v27 = fabsf(UnityEngine_AnimationState__get_speed(v23, 0)) * (float)playDirection;
        UnityEngine_AnimationState__set_speed(v23, v27, 0);
        if ( playDirection == -1 )
        {
          if ( UnityEngine_AnimationState__get_time(v23, 0) == 0.0 )
          {
            length = UnityEngine_AnimationState__get_length(v23, 0);
            UnityEngine_AnimationState__set_time(v23, length, 0);
          }
        }
        else if ( playDirection == 1 )
        {
          time = UnityEngine_AnimationState__get_time(v23, 0);
          if ( time == UnityEngine_AnimationState__get_length(v23, 0) )
            UnityEngine_AnimationState__set_time(v23, 0.0, 0);
        }
      }
      else
      {
        if ( !v23 )
          sub_1C6BC60(v24, v25);
        name = UnityEngine_AnimationState__get_name(v23, 0);
        if ( System_String__op_Equality(name, clipName, 0) )
          goto LABEL_48;
      }
    }
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
      && ActiveAnimation__get_isPlaying(this, v11)
      && System_String__op_Equality(this->fields.mClip, clipName, 0) )
    {
      this->fields.mLastDirection = playDirection;
      return;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    this->fields.mClip = clipName;
    p_mClip = &this->fields.mClip;
    *((_BYTE *)p_mClip - 16) = 1;
    *((_DWORD *)p_mClip - 6) = playDirection;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_mClip, (int32_t)clipName, v37, v38);
    IsNullOrEmpty = (struct UnityEngine_Animation_o *)*(p_mClip - 1);
    if ( !IsNullOrEmpty )
      goto LABEL_72;
    v39 = 1.0;
    if ( playDirection == 1 )
      v39 = 0.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)IsNullOrEmpty, *p_mClip, 0, v39, 0);
  }
}


ActiveAnimation_o *ActiveAnimation__Play_49551424(
        UnityEngine_Animation_o *anim,
        System_String_o *clipName,
        int32_t playDirection,
        int32_t enableBeforePlay,
        int32_t disableCondition,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v10; // x22
  UnityEngine_GameObject_o *gameObject; // x24
  char *Component_object; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Animation_o **v15; // x24
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  int32_t v18; // w2
  int v19; // w9
  UnityEngine_Object_o *v20; // x19
  UnityEngine_GameObject_o *v21; // x23
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v23; // x23
  int v24; // w24
  int v25; // w25
  __int64 v26; // x0
  UnityEngine_Object_o *v27; // x19

  v10 = (UnityEngine_Component_o *)anim;
  if ( (byte_4CBAA3D & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C6BA08(&NGUITools_TypeInfo);
    anim = (UnityEngine_Animation_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA3D = 1;
  }
  if ( !v10 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(v10, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( !NGUITools__GetActive_49647220(gameObject, 0) )
  {
    if ( enableBeforePlay != 1 )
      return 0;
    v21 = UnityEngine_Component__get_gameObject(v10, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetActive(v21, 1, 0);
    anim = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(v10, 0);
    if ( !anim )
      goto LABEL_39;
    anim = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                        (UnityEngine_GameObject_o *)anim,
                                        (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___);
    if ( !anim )
      goto LABEL_39;
    klass = anim[1].klass;
    v23 = anim;
    v24 = (_DWORD)klass - 1;
    if ( (int)klass >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        anim = (UnityEngine_Animation_o *)*((_QWORD *)&v23[1].monitor + v25);
        if ( !anim )
          goto LABEL_39;
        UIPanel__Refresh((UIPanel_o *)anim, 0);
        if ( v24 == v25 )
          break;
        if ( (unsigned int)++v25 >= LODWORD(v23[1].klass) )
          sub_1C6BC68(v26);
      }
    }
  }
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               v10,
                               (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  anim = (UnityEngine_Animation_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)anim & 1) != 0 )
  {
    anim = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(v10, 0);
    if ( !anim )
      goto LABEL_39;
    anim = (UnityEngine_Animation_o *)UnityEngine_GameObject__AddComponent_object_(
                                        (UnityEngine_GameObject_o *)anim,
                                        (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    Component_object = (char *)anim;
  }
  if ( !Component_object
    || (*((_QWORD *)Component_object + 7) = v10,
        v15 = (UnityEngine_Animation_o **)(Component_object + 56),
        sub_1C6B9AC((CGThumbnailListItem_o *)(Component_object + 56), (int32_t)v10, v13, v14),
        v17 = *((_QWORD *)Component_object + 4),
        *((_DWORD *)Component_object + 17) = disableCondition,
        !v17) )
  {
LABEL_39:
    sub_1C6BC60(anim, clipName);
  }
  v18 = *(_DWORD *)(v17 + 24);
  v19 = *(_DWORD *)(v17 + 28) + 1;
  *(_DWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 28) = v19;
  if ( v18 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v17 + 16), 0, v18, 0);
  ActiveAnimation__Play((ActiveAnimation_o *)Component_object, clipName, playDirection, v16);
  v20 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    anim = *v15;
    if ( *v15 )
    {
      UnityEngine_Animation__Sample(anim, 0);
      return (ActiveAnimation_o *)Component_object;
    }
    goto LABEL_39;
  }
  v27 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 10);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
  {
    anim = (UnityEngine_Animation_o *)*((_QWORD *)Component_object + 10);
    if ( anim )
    {
      UnityEngine_Animator__Update((UnityEngine_Animator_o *)anim, 0.0, 0);
      return (ActiveAnimation_o *)Component_object;
    }
    goto LABEL_39;
  }
  return (ActiveAnimation_o *)Component_object;
}


ActiveAnimation_o *ActiveAnimation__Play_49567340(
        UnityEngine_Animation_o *anim,
        System_String_o *clipName,
        int32_t playDirection,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return ActiveAnimation__Play_49551424(anim, clipName, playDirection, 0, 0, v4);
}


ActiveAnimation_o *ActiveAnimation__Play_49567352(
        UnityEngine_Animation_o *anim,
        int32_t playDirection,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ActiveAnimation__Play_49551424(anim, 0, playDirection, 0, 0, v3);
}


ActiveAnimation_o *ActiveAnimation__Play_49567372(
        UnityEngine_Animator_o *anim,
        System_String_o *clipName,
        int32_t playDirection,
        int32_t enableBeforePlay,
        int32_t disableCondition,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v10; // x22
  UnityEngine_GameObject_o *gameObject; // x24
  char *Component_object; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Animator_o **v15; // x24
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  int32_t v18; // w2
  int v19; // w9
  UnityEngine_Object_o *v20; // x19
  UnityEngine_Animator_o *v21; // x19
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_Animator_c *klass; // x8
  UnityEngine_Animator_o *v24; // x23
  int v25; // w24
  int v26; // w25

  v10 = (UnityEngine_Component_o *)anim;
  if ( (byte_4CBAA3E & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C6BA08(&NGUITools_TypeInfo);
    anim = (UnityEngine_Animator_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA3E = 1;
  }
  if ( enableBeforePlay == 2 )
  {
LABEL_4:
    if ( !v10 )
      goto LABEL_42;
  }
  else
  {
    if ( !v10 )
      goto LABEL_42;
    gameObject = UnityEngine_Component__get_gameObject(v10, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( !NGUITools__GetActive_49647220(gameObject, 0) )
    {
      if ( enableBeforePlay != 1 )
        return 0;
      v22 = UnityEngine_Component__get_gameObject(v10, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetActive(v22, 1, 0);
      anim = (UnityEngine_Animator_o *)UnityEngine_Component__get_gameObject(v10, 0);
      if ( !anim
        || (anim = (UnityEngine_Animator_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                               (UnityEngine_GameObject_o *)anim,
                                               (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___)) == 0 )
      {
LABEL_42:
        sub_1C6BC60(anim, clipName);
      }
      klass = anim[1].klass;
      v24 = anim;
      v25 = (_DWORD)klass - 1;
      if ( (int)klass >= 1 )
      {
        v26 = 0;
        while ( 1 )
        {
          anim = (UnityEngine_Animator_o *)*((_QWORD *)&v24[1].monitor + v26);
          if ( !anim )
            goto LABEL_42;
          UIPanel__Refresh((UIPanel_o *)anim, 0);
          if ( v25 == v26 )
            goto LABEL_4;
          if ( (unsigned int)++v26 >= LODWORD(v24[1].klass) )
            sub_1C6BC68(anim);
        }
      }
    }
  }
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               v10,
                               (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  anim = (UnityEngine_Animator_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)anim & 1) != 0 )
  {
    anim = (UnityEngine_Animator_o *)UnityEngine_Component__get_gameObject(v10, 0);
    if ( !anim )
      goto LABEL_42;
    anim = (UnityEngine_Animator_o *)UnityEngine_GameObject__AddComponent_object_(
                                       (UnityEngine_GameObject_o *)anim,
                                       (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    Component_object = (char *)anim;
  }
  if ( !Component_object )
    goto LABEL_42;
  *((_QWORD *)Component_object + 10) = v10;
  v15 = (UnityEngine_Animator_o **)(Component_object + 80);
  sub_1C6B9AC((CGThumbnailListItem_o *)(Component_object + 80), (int32_t)v10, v13, v14);
  v17 = *((_QWORD *)Component_object + 4);
  *((_DWORD *)Component_object + 17) = disableCondition;
  if ( !v17 )
    goto LABEL_42;
  v18 = *(_DWORD *)(v17 + 24);
  v19 = *(_DWORD *)(v17 + 28) + 1;
  *(_DWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 28) = v19;
  if ( v18 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v17 + 16), 0, v18, 0);
  ActiveAnimation__Play((ActiveAnimation_o *)Component_object, clipName, playDirection, v16);
  v20 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    anim = (UnityEngine_Animator_o *)*((_QWORD *)Component_object + 7);
    if ( !anim )
      goto LABEL_42;
    UnityEngine_Animation__Sample((UnityEngine_Animation_o *)anim, 0);
  }
  else
  {
    v21 = *v15;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0) )
    {
      anim = *v15;
      if ( !*v15 )
        goto LABEL_42;
      UnityEngine_Animator__Update(anim, 0.0, 0);
    }
  }
  return (ActiveAnimation_o *)Component_object;
}


void ActiveAnimation__Reset(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  __int64 v4; // x1
  UnityEngine_Animator_o *v5; // x0
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_AnimationState_o *v16; // x0
  UnityEngine_AnimationState_c *v17; // x1
  UnityEngine_AnimationState_o *v18; // x21
  int32_t mLastDirection; // w8
  float length; // s0
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  UnityEngine_Object_o *mAnimator; // x20
  float v28; // s0

  if ( (byte_4CBAA39 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_AnimationState_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA39 = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
      return;
    v5 = this->fields.mAnimator;
    if ( v5 )
    {
      v28 = 0.0;
      if ( this->fields.mLastDirection == -1 )
        v28 = 1.0;
      UnityEngine_Animator__Play(v5, this->fields.mClip, 0, v28, 0);
      return;
    }
LABEL_49:
    sub_1C6BC60(v5, v4);
  }
  v5 = (UnityEngine_Animator_o *)this->fields.mAnim;
  if ( !v5 )
    goto LABEL_49;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v5, 0);
  if ( !Enumerator )
    sub_1C6BC60(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_12;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v11 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(Enumerator, *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_19;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_19:
      v15 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                            Enumerator,
                                            *(_QWORD *)(v15 + 8));
    v18 = v16;
    if ( v16 )
    {
      v17 = UnityEngine_AnimationState_TypeInfo;
      if ( v16->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1C6BFFC(v16);
LABEL_47:
        sub_1C6BC60(v16, v17);
      }
    }
    mLastDirection = this->fields.mLastDirection;
    if ( mLastDirection == -1 )
    {
      if ( !v16 )
        sub_1C6BC60(0, v17);
      length = UnityEngine_AnimationState__get_length(v16, 0);
      UnityEngine_AnimationState__set_time(v18, length, 0);
    }
    else if ( mLastDirection == 1 )
    {
      if ( !v16 )
        goto LABEL_47;
      UnityEngine_AnimationState__set_time(v16, 0.0, 0);
    }
  }
  v21 = sub_1C6BB44(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_34;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_34:
      v26 = sub_1C41D90(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}


void ActiveAnimation__Start(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventReceiver; // x21
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CBAA3A & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA3A = 1;
  }
  eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0) )
  {
    onFinished = this->fields.onFinished;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    if ( EventDelegate__IsValid_49551196(onFinished, v4) )
    {
      this->fields.eventReceiver = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.eventReceiver, 0, v6, v7);
      this->fields.callWhenFinished = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callWhenFinished, 0, v8, v9);
    }
  }
}


void ActiveAnimation__Update(ActiveAnimation_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  UnityEngine_Object_o *mAnimator; // x20
  float v5; // s8
  __int64 v6; // x1
  UnityEngine_Animator_o *v7; // x0
  float v8; // s0
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *mAnim; // x20
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  char v13; // w24
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_IEnumerator_c *v18; // x8
  __int64 v19; // x9
  System_Collections_IEnumerator_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_AnimationState_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_AnimationState_o *v24; // x21
  UnityEngine_Animation_o *v25; // x22
  System_String_o *name; // x0
  float v27; // s9
  float v28; // s0
  float time; // s0
  float length; // s0
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x20
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  UnityEngine_Object_o *current; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  UnityEngine_Object_o *eventReceiver; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t mDisableDirection; // w8
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4CBAA3B & 1) == 0 )
  {
    sub_1C6BA08(&ActiveAnimation_TypeInfo);
    sub_1C6BA08(&UnityEngine_AnimationState_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&NGUITools_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA3B = 1;
  }
  deltaTime = RealTime__get_deltaTime(0);
  if ( deltaTime == 0.0 )
    return;
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  v5 = deltaTime;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    v7 = this->fields.mAnimator;
    if ( !v7 )
      goto LABEL_75;
    v8 = -v5;
    if ( this->fields.mLastDirection != -1 )
      v8 = v5;
    UnityEngine_Animator__Update(v7, v8, 0);
    if ( !ActiveAnimation__get_isPlaying(this, v9) )
    {
      v7 = this->fields.mAnimator;
      if ( v7 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, 0, 0);
        goto LABEL_53;
      }
      goto LABEL_75;
    }
    return;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    return;
  }
  v7 = (UnityEngine_Animator_o *)this->fields.mAnim;
  if ( !v7 )
    goto LABEL_75;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v7, 0);
  if ( !Enumerator )
    sub_1C6BC60(0, v11);
  v13 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_23;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_23:
      v17 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(Enumerator, *(_QWORD *)(v17 + 8))
        & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 2;
        if ( !v19 )
          goto LABEL_30;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1];
    }
    else
    {
LABEL_30:
      v21 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v22 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                            Enumerator,
                                            *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      goto LABEL_73;
    if ( v22->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C6BFFC(v22);
LABEL_73:
      sub_1C6BC60(v22, v23);
    }
    v25 = this->fields.mAnim;
    name = UnityEngine_AnimationState__get_name(v22, 0);
    if ( !v25 )
      sub_1C6BC60(name, name);
    if ( UnityEngine_Animation__IsPlaying(v25, name, 0) )
    {
      v27 = v5 * UnityEngine_AnimationState__get_speed(v24, 0);
      v28 = v27 + UnityEngine_AnimationState__get_time(v24, 0);
      UnityEngine_AnimationState__set_time(v24, v28, 0);
      if ( v27 >= 0.0 )
      {
        time = UnityEngine_AnimationState__get_time(v24, 0);
        if ( time < UnityEngine_AnimationState__get_length(v24, 0) )
        {
LABEL_41:
          v13 = 1;
        }
        else
        {
          length = UnityEngine_AnimationState__get_length(v24, 0);
          UnityEngine_AnimationState__set_time(v24, length, 0);
        }
      }
      else
      {
        if ( UnityEngine_AnimationState__get_time(v24, 0) > 0.0 )
          goto LABEL_41;
        UnityEngine_AnimationState__set_time(v24, 0.0, 0);
      }
    }
  }
  v31 = sub_1C6BB44(Enumerator, System_IDisposable_TypeInfo);
  if ( v31 )
  {
    v32 = *(_QWORD *)v31;
    v33 = v31;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_48;
      }
      v36 = v32 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_48:
      v36 = sub_1C41D90(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  }
  v7 = (UnityEngine_Animator_o *)this->fields.mAnim;
  if ( !v7 )
    goto LABEL_75;
  UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v7, 0);
  if ( (v13 & 1) == 0 )
  {
LABEL_53:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    if ( this->fields.mNotify )
    {
      this->fields.mNotify = 0;
      current = (UnityEngine_Object_o *)ActiveAnimation_TypeInfo->static_fields->current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(current, 0, 0) )
      {
        ActiveAnimation_TypeInfo->static_fields->current = this;
        sub_1C6B9AC((CGThumbnailListItem_o *)ActiveAnimation_TypeInfo->static_fields, (int32_t)this, v38, v39);
        onFinished = this->fields.onFinished;
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Execute_49522624(onFinished, v40);
        eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
          && !System_String__IsNullOrEmpty(this->fields.callWhenFinished, 0) )
        {
          v7 = (UnityEngine_Animator_o *)this->fields.eventReceiver;
          if ( v7 )
          {
            UnityEngine_GameObject__SendMessage((UnityEngine_GameObject_o *)v7, this->fields.callWhenFinished, 1, 0);
            goto LABEL_65;
          }
LABEL_75:
          sub_1C6BC60(v7, v6);
        }
LABEL_65:
        ActiveAnimation_TypeInfo->static_fields->current = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)ActiveAnimation_TypeInfo->static_fields, 0, v43, v44);
      }
      mDisableDirection = this->fields.mDisableDirection;
      if ( mDisableDirection && this->fields.mLastDirection == mDisableDirection )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        NGUITools__SetActive(gameObject, 0, 0);
      }
    }
  }
}


bool ActiveAnimation__get_isPlaying(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x19
  __int64 v4; // x1
  UnityEngine_Object_o *mAnimator; // x19
  const MethodInfo *v6; // x1
  int32_t mLastDirection; // w19
  float playbackTime; // s0
  bool v9; // w21
  UnityEngine_Animation_o *v10; // x0
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_AnimationState_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_AnimationState_o *v23; // x21
  UnityEngine_Animation_o *v24; // x22
  System_String_o *name; // x0
  int32_t v26; // w8
  float time; // s0
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x19
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4CBAA37 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_AnimationState_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA37 = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mAnim, 0, 0) )
  {
    mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
    {
      mLastDirection = this->fields.mLastDirection;
      playbackTime = ActiveAnimation__get_playbackTime(this, v6);
      if ( mLastDirection == -1 )
      {
        if ( playbackTime != 0.0 )
          return 1;
      }
      else if ( playbackTime != 1.0 )
      {
        return 1;
      }
    }
    return 0;
  }
  v10 = this->fields.mAnim;
  if ( !v10 )
    goto LABEL_53;
  Enumerator = UnityEngine_Animation__GetEnumerator(v10, 0);
  if ( !Enumerator )
    sub_1C6BC60(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v16 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(Enumerator, *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_25;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1];
    }
    else
    {
LABEL_25:
      v20 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v21 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                            Enumerator,
                                            *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1C6BC60(0, v22);
    if ( v21->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C6BFFC(v21);
LABEL_53:
      sub_1C6BC60(v10, v4);
    }
    v24 = this->fields.mAnim;
    name = UnityEngine_AnimationState__get_name(v21, 0);
    if ( !v24 )
      sub_1C6BC60(name, name);
    if ( UnityEngine_Animation__IsPlaying(v24, name, 0) )
    {
      v26 = this->fields.mLastDirection;
      if ( v26 == -1 )
      {
        if ( UnityEngine_AnimationState__get_time(v23, 0) > 0.0 )
          goto LABEL_36;
      }
      else if ( v26 != 1
             || (time = UnityEngine_AnimationState__get_time(v23, 0),
                 time < UnityEngine_AnimationState__get_length(v23, 0)) )
      {
LABEL_36:
        v9 = 1;
        goto LABEL_38;
      }
    }
  }
  v9 = 0;
LABEL_38:
  v28 = sub_1C6BB44(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_43;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_43:
      v33 = sub_1C41D90(v28, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  return v9;
}


float ActiveAnimation__get_playbackTime(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Animator_o *mAnimator; // x0
  float normalizedTime; // s0
  bool v4; // nf
  float result; // s0
  UnityEngine_AnimatorStateInfo_o v6; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_AnimatorStateInfo_o v7; // [xsp+30h] [xbp-40h] BYREF

  memset(&v7, 0, sizeof(v7));
  mAnimator = this->fields.mAnimator;
  if ( !mAnimator )
    sub_1C6BC60(0, method);
  UnityEngine_Animator__GetCurrentAnimatorStateInfo(&v6, mAnimator, 0, 0);
  v7 = v6;
  normalizedTime = UnityEngine_AnimatorStateInfo__get_normalizedTime(&v7, 0);
  v4 = normalizedTime < 0.0;
  result = fminf(normalizedTime, 1.0);
  if ( v4 )
    return 0.0;
  return result;
}