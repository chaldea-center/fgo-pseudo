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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  Il2CppObject *Component_object; // x0
  __int64 *v16; // x8

  v6 = this;
  if ( (byte_4B190E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&index, *(_QWORD *)&type);
    sub_1BCA7E0(&StringLiteral_20342/*"icon_count_01"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20344/*"icon_count_bg"*/, v9, v10);
    this = (BattleNextTDgaugeComponent_o *)sub_1BCA7E0(&StringLiteral_20343/*"icon_count_02"*/, v11, v12);
    byte_4B190E0 = 1;
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
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v16 = &StringLiteral_20342/*"icon_count_01"*/;
              goto LABEL_20;
            }
          }
LABEL_21:
          sub_1BCAA3C(Component_object, *(_QWORD *)&index);
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
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v16 = &StringLiteral_20343/*"icon_count_02"*/;
LABEL_20:
              UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v16, 0LL);
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
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_object )
          {
            v16 = &StringLiteral_20344/*"icon_count_bg"*/;
            goto LABEL_20;
          }
        }
        goto LABEL_21;
      }
      sub_1BCAA44(this, *(_QWORD *)&index);
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
    sub_1BCAA3C(gaugeFrontRoot, method);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct UnityEngine_GameObject_array *gaugeList; // x25
  __int64 v21; // x8
  unsigned __int64 v22; // x26
  UnityEngine_Object_o *v23; // x23
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  __int64 v25; // x8
  unsigned __int64 v26; // x27
  UnityEngine_Object_o *v27; // x25
  int64_t v28; // x2
  char v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v36; // w27
  bool v37; // w1
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x25
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x24
  int v46; // w28
  UnityEngine_GameObject_o *v47; // x26
  int64_t v48; // x2
  char v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  UnityEngine_GameObject_o *v58; // x26
  int64_t v59; // x2
  char v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  System_Object_array *v69; // x0
  int64_t v70; // x2
  char v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int32_t v76; // w20
  System_Object_array *v77; // x0
  int64_t v78; // x2
  char v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  const MethodInfo *v84; // x2
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  v11 = this;
  if ( (byte_4B190DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, *(_QWORD *)&now, *(_QWORD *)&max);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v16, v17);
    this = (BattleNextTDgaugeComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    byte_4B190DE = 1;
  }
  gaugeList = v11->fields.gaugeList;
  if ( gaugeList )
  {
    v21 = *(_QWORD *)&gaugeList->max_length;
    if ( (int)v21 >= 1 )
    {
      v22 = 0LL;
      while ( v22 < (unsigned int)v21 )
      {
        v23 = (UnityEngine_Object_o *)gaugeList->m_Items[v22];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
        UnityEngine_Object__Destroy_70154244(v23, 0LL);
        LODWORD(v21) = gaugeList->max_length;
        if ( (__int64)++v22 >= (int)v21 )
          goto LABEL_10;
      }
LABEL_54:
      sub_1BCAA44(this, *(_QWORD *)&now);
    }
  }
LABEL_10:
  gaugebackList = v11->fields.gaugebackList;
  if ( gaugebackList )
  {
    v25 = *(_QWORD *)&gaugebackList->max_length;
    if ( (int)v25 >= 1 )
    {
      v26 = 0LL;
      while ( v26 < (unsigned int)v25 )
      {
        v27 = (UnityEngine_Object_o *)gaugebackList->m_Items[v26];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
        UnityEngine_Object__Destroy_70154244(v27, 0LL);
        LODWORD(v25) = gaugebackList->max_length;
        if ( (__int64)++v26 >= (int)v25 )
          goto LABEL_17;
      }
      goto LABEL_54;
    }
  }
LABEL_17:
  v11->fields.gaugeList = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v11->fields.gaugeList,
    0LL,
    *(int64_t *)&max,
    isTDSeraled,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v11->fields.gaugebackList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.gaugebackList, 0LL, v28, v29, v30, v31, v32, v33);
  gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v36 = 0;
  else
    v36 = max;
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
  if ( !gaugeFrontRoot )
    goto LABEL_53;
  if ( v36 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_53;
    v37 = 0;
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
    v37 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v37, 0LL);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v36 >= 1 )
  {
    v46 = 0;
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
      v47 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v47, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v85.fields.y = 0.0;
      v85.fields.z = 0.0;
      v85.fields.x = v11->fields.width * (float)v46;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v85, 0LL);
      if ( !v41 )
        goto LABEL_53;
      items = v41->fields._items;
      v55 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v41->fields._version;
      if ( !items )
        goto LABEL_53;
      size = v41->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v41,
          (Il2CppObject *)v47,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v41->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v47;
        sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v47, v48, v49, v50, v51, v52, v53);
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v11,
                                                    v11->fields.gaugebackIcon,
                                                    v11->fields.gaugeBackRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v58 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v58, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_53;
      v86.fields.y = 0.0;
      v86.fields.z = 0.0;
      v86.fields.x = v11->fields.width * (float)v46;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v86, 0LL);
      if ( !v45 )
        goto LABEL_53;
      v65 = v45->fields._items;
      v66 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v45->fields._version;
      if ( !v65 )
        goto LABEL_53;
      v67 = v45->fields._size;
      if ( (unsigned int)v67 >= v65->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          (Il2CppObject *)v58,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &v65->obj.klass + v67;
        v45->fields._size = v67 + 1;
        v68[4] = (Il2CppClass *)v58;
        sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), (int64_t)v58, v59, v60, v61, v62, v63, v64);
      }
      if ( v36 == ++v46 )
        goto LABEL_48;
    }
  }
  if ( !v41 )
    goto LABEL_53;
LABEL_48:
  v69 = System_Collections_Generic_List_object___ToArray(
          v41,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v11->fields.gaugeList = (struct UnityEngine_GameObject_array *)v69;
  sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.gaugeList, (int64_t)v69, v70, v71, v72, v73, v74, v75);
  if ( !v45 )
LABEL_53:
    sub_1BCAA3C(gaugeFrontRoot, v34);
  if ( isTDSeraled )
    v76 = 0;
  else
    v76 = now;
  v77 = System_Collections_Generic_List_object___ToArray(
          v45,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v11->fields.gaugebackList = (struct UnityEngine_GameObject_array *)v77;
  sub_1BCA784((PartyOrganizationUtility_o *)&v11->fields.gaugebackList, (int64_t)v77, v78, v79, v80, v81, v82, v83);
  BattleNextTDgaugeComponent__setValue(v11, v76, v84);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct UnityEngine_GameObject_array *gaugeList; // x8
  struct UnityEngine_GameObject_array *v11; // x8
  int32_t v12; // w21
  int32_t v13; // w22
  int32_t v14; // w2
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  Il2CppObject *Component_object; // x20
  __int64 v19; // x1
  int v20; // w8
  bool v21; // w1
  UnityEngine_Behaviour_o *v22; // x0

  if ( (byte_4B190DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, *(_QWORD *)&nextVal, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B190DF = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    v11 = *(struct UnityEngine_GameObject_array **)&gaugeList->max_length;
    if ( v11 )
    {
      if ( (int)v11 >= 1 )
      {
        v12 = 0;
        v13 = (_DWORD)v11 - nextVal;
        while ( 1 )
        {
          v14 = v13 == (_DWORD)v11 ? 2 : v13 > v12;
          BattleNextTDgaugeComponent__changeGauge(this, v12, v14, v3);
          v11 = this->fields.gaugeList;
          if ( !v11 )
            break;
          LODWORD(v11) = v11->max_length;
          if ( ++v12 >= (int)v11 )
            goto LABEL_12;
        }
LABEL_32:
        sub_1BCAA3C(gaugeFrontRoot, *(_QWORD *)&nextVal);
      }
LABEL_12:
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_32;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_32;
      v16 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
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
            v20 = 1060320051;
          }
          else
          {
            if ( nextVal )
            {
              if ( !v16 )
                goto LABEL_32;
              gaugeFrontRoot = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v16->klass[1]._1.castClass)(
                                                            v16,
                                                            v16->klass[1]._1.declaringType,
                                                            1.0);
              if ( !Component_object )
                goto LABEL_32;
              v22 = (UnityEngine_Behaviour_o *)Component_object;
              v21 = 0;
              goto LABEL_31;
            }
            if ( !Component_object )
              goto LABEL_32;
            v20 = 1050253722;
          }
          v21 = 1;
          LODWORD(Component_object[3].monitor) = v20;
          v22 = (UnityEngine_Behaviour_o *)Component_object;
LABEL_31:
          UnityEngine_Behaviour__set_enabled(v22, v21, 0LL);
        }
      }
    }
  }
}