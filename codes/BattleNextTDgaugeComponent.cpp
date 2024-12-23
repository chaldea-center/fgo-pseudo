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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  Il2CppObject *Component_object; // x0
  __int64 *v13; // x8

  v6 = this;
  if ( (byte_4B69B4E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&index);
    sub_1BE4ACC(&StringLiteral_20410/*"icon_count_01"*/, v7);
    sub_1BE4ACC(&StringLiteral_20412/*"icon_count_bg"*/, v8);
    this = (BattleNextTDgaugeComponent_o *)sub_1BE4ACC(&StringLiteral_20411/*"icon_count_02"*/, v9);
    byte_4B69B4E = 1;
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
                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v13 = &StringLiteral_20410/*"icon_count_01"*/;
              goto LABEL_20;
            }
          }
LABEL_21:
          sub_1BE4D28(Component_object, *(_QWORD *)&index);
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
                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v13 = &StringLiteral_20411/*"icon_count_02"*/;
LABEL_20:
              UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v13, 0LL);
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
                               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_object )
          {
            v13 = &StringLiteral_20412/*"icon_count_bg"*/;
            goto LABEL_20;
          }
        }
        goto LABEL_21;
      }
      sub_1BE4D30(this, *(_QWORD *)&index);
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
    sub_1BE4D28(gaugeFrontRoot, method);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x25
  __int64 v17; // x8
  unsigned __int64 v18; // x26
  UnityEngine_Object_o *v19; // x23
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  __int64 v21; // x8
  unsigned __int64 v22; // x27
  UnityEngine_Object_o *v23; // x25
  int64_t v24; // x2
  char v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v32; // w27
  bool v33; // w1
  System_Collections_Generic_List_object__o *v34; // x25
  System_Collections_Generic_List_object__o *v35; // x24
  int v36; // w28
  UnityEngine_GameObject_o *v37; // x26
  int64_t v38; // x2
  char v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  UnityEngine_GameObject_o *v48; // x26
  int64_t v49; // x2
  char v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Object_array *v59; // x0
  int64_t v60; // x2
  char v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int32_t v66; // w20
  System_Object_array *v67; // x0
  int64_t v68; // x2
  char v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  const MethodInfo *v74; // x2
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  v11 = this;
  if ( (byte_4B69B4C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, *(_QWORD *)&now);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v14);
    this = (BattleNextTDgaugeComponent_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v15);
    byte_4B69B4C = 1;
  }
  gaugeList = v11->fields.gaugeList;
  if ( gaugeList )
  {
    v17 = *(_QWORD *)&gaugeList->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      while ( v18 < (unsigned int)v17 )
      {
        v19 = (UnityEngine_Object_o *)gaugeList->m_Items[v18];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70452000(v19, 0LL);
        LODWORD(v17) = gaugeList->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_10;
      }
LABEL_54:
      sub_1BE4D30(this, *(_QWORD *)&now);
    }
  }
LABEL_10:
  gaugebackList = v11->fields.gaugebackList;
  if ( gaugebackList )
  {
    v21 = *(_QWORD *)&gaugebackList->max_length;
    if ( (int)v21 >= 1 )
    {
      v22 = 0LL;
      while ( v22 < (unsigned int)v21 )
      {
        v23 = (UnityEngine_Object_o *)gaugebackList->m_Items[v22];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70452000(v23, 0LL);
        LODWORD(v21) = gaugebackList->max_length;
        if ( (__int64)++v22 >= (int)v21 )
          goto LABEL_17;
      }
      goto LABEL_54;
    }
  }
LABEL_17:
  v11->fields.gaugeList = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v11->fields.gaugeList,
    0LL,
    *(int64_t *)&max,
    isTDSeraled,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v11->fields.gaugebackList = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v11->fields.gaugebackList, 0LL, v24, v25, v26, v27, v28, v29);
  gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v32 = 0;
  else
    v32 = max;
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  if ( v32 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    v33 = 0;
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
    v33 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v33, 0LL);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v32 >= 1 )
  {
    v36 = 0;
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
      v37 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v75.fields.y = 0.0;
      v75.fields.z = 0.0;
      v75.fields.x = v11->fields.width * (float)v36;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v75, 0LL);
      if ( !v34 )
        goto LABEL_53;
      items = v34->fields._items;
      v45 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v34->fields._version;
      if ( !items )
        goto LABEL_53;
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v37,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v37;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v37, v38, v39, v40, v41, v42, v43);
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v11,
                                                    v11->fields.gaugebackIcon,
                                                    v11->fields.gaugeBackRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v48 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v48, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v76.fields.y = 0.0;
      v76.fields.z = 0.0;
      v76.fields.x = v11->fields.width * (float)v36;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v76, 0LL);
      if ( !v35 )
        goto LABEL_53;
      v55 = v35->fields._items;
      v56 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v35->fields._version;
      if ( !v55 )
        goto LABEL_53;
      v57 = v35->fields._size;
      if ( (unsigned int)v57 >= v55->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          (Il2CppObject *)v48,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &v55->obj.klass + v57;
        v35->fields._size = v57 + 1;
        v58[4] = (Il2CppClass *)v48;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v48, v49, v50, v51, v52, v53, v54);
      }
      if ( v32 == ++v36 )
        goto LABEL_48;
    }
  }
  if ( !v34 )
    goto LABEL_53;
LABEL_48:
  v59 = System_Collections_Generic_List_object___ToArray(
          v34,
          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v11->fields.gaugeList = (struct UnityEngine_GameObject_array *)v59;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v11->fields.gaugeList, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  if ( !v35 )
LABEL_53:
    sub_1BE4D28(gaugeFrontRoot, v30);
  if ( isTDSeraled )
    v66 = 0;
  else
    v66 = now;
  v67 = System_Collections_Generic_List_object___ToArray(
          v35,
          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v11->fields.gaugebackList = (struct UnityEngine_GameObject_array *)v67;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v11->fields.gaugebackList, (int64_t)v67, v68, v69, v70, v71, v72, v73);
  BattleNextTDgaugeComponent__setValue(v11, v66, v74);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x8
  struct UnityEngine_GameObject_array *v9; // x8
  int32_t v10; // w21
  int32_t v11; // w22
  int32_t v12; // w2
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_Object_o *v14; // x21
  Il2CppObject *Component_object; // x20
  int v16; // w8
  bool v17; // w1
  UnityEngine_Behaviour_o *v18; // x0

  if ( (byte_4B69B4D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, *(_QWORD *)&nextVal);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    byte_4B69B4D = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    v9 = *(struct UnityEngine_GameObject_array **)&gaugeList->max_length;
    if ( v9 )
    {
      if ( (int)v9 >= 1 )
      {
        v10 = 0;
        v11 = (_DWORD)v9 - nextVal;
        while ( 1 )
        {
          v12 = v11 == (_DWORD)v9 ? 2 : v11 > v10;
          BattleNextTDgaugeComponent__changeGauge(this, v10, v12, v3);
          v9 = this->fields.gaugeList;
          if ( !v9 )
            break;
          LODWORD(v9) = v9->max_length;
          if ( ++v10 >= (int)v9 )
            goto LABEL_12;
        }
LABEL_32:
        sub_1BE4D28(gaugeFrontRoot, *(_QWORD *)&nextVal);
      }
LABEL_12:
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_32;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_32;
      v14 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                           (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
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
            v16 = 1060320051;
          }
          else
          {
            if ( nextVal )
            {
              if ( !v14 )
                goto LABEL_32;
              gaugeFrontRoot = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v14->klass[1]._1.castClass)(
                                                            v14,
                                                            v14->klass[1]._1.declaringType,
                                                            1.0);
              if ( !Component_object )
                goto LABEL_32;
              v18 = (UnityEngine_Behaviour_o *)Component_object;
              v17 = 0;
              goto LABEL_31;
            }
            if ( !Component_object )
              goto LABEL_32;
            v16 = 1050253722;
          }
          v17 = 1;
          LODWORD(Component_object[3].monitor) = v16;
          v18 = (UnityEngine_Behaviour_o *)Component_object;
LABEL_31:
          UnityEngine_Behaviour__set_enabled(v18, v17, 0LL);
        }
      }
    }
  }
}