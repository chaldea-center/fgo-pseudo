void __fastcall BattleNextTDgaugeComponent___ctor(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.width = 13.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__changeGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t index,
        int32_t type,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v6; // x21
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  Il2CppObject *Component_object; // x0
  __int64 *v10; // x8

  v6 = this;
  if ( (byte_4BDF51C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&StringLiteral_20483/*"icon_count_01"*/);
    sub_1C21E38(&StringLiteral_20485/*"icon_count_bg"*/);
    this = (BattleNextTDgaugeComponent_o *)sub_1C21E38(&StringLiteral_20484/*"icon_count_02"*/);
    byte_4BDF51C = 1;
  }
  gaugeList = v6->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( (int)max_length > index )
    {
      if ( type == 1 )
      {
        if ( max_length > index )
        {
          Component_object = (Il2CppObject *)gaugeList->m_Items[index];
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v10 = &StringLiteral_20483/*"icon_count_01"*/;
              goto LABEL_20;
            }
          }
LABEL_21:
          sub_1C22094(Component_object, *(_QWORD *)&index);
        }
      }
      else if ( type == 2 )
      {
        if ( max_length > index )
        {
          Component_object = (Il2CppObject *)gaugeList->m_Items[index];
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v10 = &StringLiteral_20484/*"icon_count_02"*/;
LABEL_20:
              UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v10, 0LL);
              return;
            }
          }
          goto LABEL_21;
        }
      }
      else if ( max_length > index )
      {
        Component_object = (Il2CppObject *)gaugeList->m_Items[index];
        if ( Component_object )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Component_object,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_object )
          {
            v10 = &StringLiteral_20485/*"icon_count_bg"*/;
            goto LABEL_20;
          }
        }
        goto LABEL_21;
      }
      sub_1C2209C(this, *(_QWORD *)&index);
    }
  }
}


void __fastcall BattleNextTDgaugeComponent__setHide(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeFrontRoot; // x0

  gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
  if ( !gaugeFrontRoot
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL),
        (gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeBackRoot) == 0LL)
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL )
  {
    sub_1C22094(gaugeFrontRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setInitGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t now,
        int32_t max,
        bool isTDSeraled,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleNextTDgaugeComponent_o *v11; // x19
  struct UnityEngine_GameObject_array *gaugeList; // x25
  __int64 v13; // x8
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x23
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  __int64 v17; // x8
  unsigned __int64 v18; // x27
  UnityEngine_Object_o *v19; // x25
  int64_t v20; // x2
  char v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v28; // w27
  bool v29; // w1
  System_Collections_Generic_List_object__o *v30; // x25
  System_Collections_Generic_List_object__o *v31; // x24
  int v32; // w28
  UnityEngine_GameObject_o *v33; // x26
  int64_t v34; // x2
  char v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  UnityEngine_GameObject_o *v44; // x26
  int64_t v45; // x2
  char v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  System_Object_array *v55; // x0
  int64_t v56; // x2
  char v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int32_t v62; // w20
  System_Object_array *v63; // x0
  int64_t v64; // x2
  char v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  const MethodInfo *v70; // x2
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  v11 = this;
  if ( (byte_4BDF51A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    this = (BattleNextTDgaugeComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF51A = 1;
  }
  gaugeList = v11->fields.gaugeList;
  if ( gaugeList )
  {
    v13 = *(_QWORD *)&gaugeList->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      while ( v14 < (unsigned int)v13 )
      {
        v15 = (UnityEngine_Object_o *)gaugeList->m_Items[v14];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(v15, 0LL);
        LODWORD(v13) = gaugeList->max_length;
        if ( (__int64)++v14 >= (int)v13 )
          goto LABEL_10;
      }
LABEL_54:
      sub_1C2209C(this, *(_QWORD *)&now);
    }
  }
LABEL_10:
  gaugebackList = v11->fields.gaugebackList;
  if ( gaugebackList )
  {
    v17 = *(_QWORD *)&gaugebackList->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      while ( v18 < (unsigned int)v17 )
      {
        v19 = (UnityEngine_Object_o *)gaugebackList->m_Items[v18];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(v19, 0LL);
        LODWORD(v17) = gaugebackList->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_17;
      }
      goto LABEL_54;
    }
  }
LABEL_17:
  v11->fields.gaugeList = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v11->fields.gaugeList,
    0LL,
    *(int64_t *)&max,
    isTDSeraled,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v11->fields.gaugebackList = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->fields.gaugebackList, 0LL, v20, v21, v22, v23, v24, v25);
  gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v28 = 0;
  else
    v28 = max;
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  if ( v28 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    v29 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    v29 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v29, 0LL);
  v30 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v28 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v11,
                                                    v11->fields.gaugeIcon,
                                                    v11->fields.gaugeFrontRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v33 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v33, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v71.fields.y = 0.0;
      v71.fields.z = 0.0;
      v71.fields.x = v11->fields.width * (float)v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v71, 0LL);
      if ( !v30 )
        goto LABEL_53;
      items = v30->fields._items;
      v41 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v30->fields._version;
      if ( !items )
        goto LABEL_53;
      size = v30->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)v33,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v30->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v33;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v33, v34, v35, v36, v37, v38, v39);
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v11,
                                                    v11->fields.gaugebackIcon,
                                                    v11->fields.gaugeBackRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v44 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v44, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v72.fields.y = 0.0;
      v72.fields.z = 0.0;
      v72.fields.x = v11->fields.width * (float)v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v72, 0LL);
      if ( !v31 )
        goto LABEL_53;
      v51 = v31->fields._items;
      v52 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v31->fields._version;
      if ( !v51 )
        goto LABEL_53;
      v53 = v31->fields._size;
      if ( (unsigned int)v53 >= v51->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)v44,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &v51->obj.klass + v53;
        v31->fields._size = v53 + 1;
        v54[4] = (Il2CppClass *)v44;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v44, v45, v46, v47, v48, v49, v50);
      }
      if ( v28 == ++v32 )
        goto LABEL_48;
    }
  }
  if ( !v30 )
    goto LABEL_53;
LABEL_48:
  v55 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v11->fields.gaugeList = (struct UnityEngine_GameObject_array *)v55;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->fields.gaugeList, (int64_t)v55, v56, v57, v58, v59, v60, v61);
  if ( !v31 )
LABEL_53:
    sub_1C22094(gaugeFrontRoot, v26);
  if ( isTDSeraled )
    v62 = 0;
  else
    v62 = now;
  v63 = System_Collections_Generic_List_object___ToArray(
          v31,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v11->fields.gaugebackList = (struct UnityEngine_GameObject_array *)v63;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->fields.gaugebackList, (int64_t)v63, v64, v65, v66, v67, v68, v69);
  BattleNextTDgaugeComponent__setValue(v11, v62, v70);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UnityEngine_GameObject_array *gaugeList; // x8
  struct UnityEngine_GameObject_array *v7; // x8
  int32_t v8; // w21
  int32_t v9; // w22
  int32_t v10; // w2
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_Object_o *v12; // x21
  Il2CppObject *Component_object; // x20
  int v14; // w8
  bool v15; // w1
  UnityEngine_Behaviour_o *v16; // x0

  if ( (byte_4BDF51B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF51B = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    v7 = *(struct UnityEngine_GameObject_array **)&gaugeList->max_length;
    if ( v7 )
    {
      if ( (int)v7 >= 1 )
      {
        v8 = 0;
        v9 = (_DWORD)v7 - nextVal;
        while ( 1 )
        {
          v10 = v9 == (_DWORD)v7 ? 2 : v9 > v8;
          BattleNextTDgaugeComponent__changeGauge(this, v8, v10, v3);
          v7 = this->fields.gaugeList;
          if ( !v7 )
            break;
          LODWORD(v7) = v7->max_length;
          if ( ++v8 >= (int)v7 )
            goto LABEL_12;
        }
LABEL_32:
        sub_1C22094(gaugeFrontRoot, *(_QWORD *)&nextVal);
      }
LABEL_12:
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_32;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_32;
      v12 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_object,
                                                      0LL,
                                                      0LL);
        if ( ((unsigned __int8)gaugeFrontRoot & 1) != 0 )
        {
          if ( nextVal == 1 )
          {
            if ( !Component_object )
              goto LABEL_32;
            v14 = 1060320051;
          }
          else
          {
            if ( nextVal )
            {
              if ( !v12 )
                goto LABEL_32;
              gaugeFrontRoot = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v12->klass[1]._1.castClass)(
                                                            v12,
                                                            v12->klass[1]._1.declaringType,
                                                            1.0);
              if ( !Component_object )
                goto LABEL_32;
              v16 = (UnityEngine_Behaviour_o *)Component_object;
              v15 = 0;
              goto LABEL_31;
            }
            if ( !Component_object )
              goto LABEL_32;
            v14 = 1050253722;
          }
          v15 = 1;
          LODWORD(Component_object[3].monitor) = v14;
          v16 = (UnityEngine_Behaviour_o *)Component_object;
LABEL_31:
          UnityEngine_Behaviour__set_enabled(v16, v15, 0LL);
        }
      }
    }
  }
}