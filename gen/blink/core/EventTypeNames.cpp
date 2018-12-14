// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"

#include "EventTypeNames.h"

#include "wtf/StdLibExtras.h"

// Generated from:
// - events/EventTypeNames.in

namespace blink {
namespace EventTypeNames {

using namespace WTF;

const int kNameCount = 259;

void* NamesStorage[kNameCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& DOMActivate = reinterpret_cast<AtomicString*>(&NamesStorage)[0];
const AtomicString& DOMCharacterDataModified = reinterpret_cast<AtomicString*>(&NamesStorage)[1];
const AtomicString& DOMContentLoaded = reinterpret_cast<AtomicString*>(&NamesStorage)[2];
const AtomicString& DOMFocusIn = reinterpret_cast<AtomicString*>(&NamesStorage)[3];
const AtomicString& DOMFocusOut = reinterpret_cast<AtomicString*>(&NamesStorage)[4];
const AtomicString& DOMNodeInserted = reinterpret_cast<AtomicString*>(&NamesStorage)[5];
const AtomicString& DOMNodeInsertedIntoDocument = reinterpret_cast<AtomicString*>(&NamesStorage)[6];
const AtomicString& DOMNodeRemoved = reinterpret_cast<AtomicString*>(&NamesStorage)[7];
const AtomicString& DOMNodeRemovedFromDocument = reinterpret_cast<AtomicString*>(&NamesStorage)[8];
const AtomicString& DOMSubtreeModified = reinterpret_cast<AtomicString*>(&NamesStorage)[9];
const AtomicString& abort = reinterpret_cast<AtomicString*>(&NamesStorage)[10];
const AtomicString& activate = reinterpret_cast<AtomicString*>(&NamesStorage)[11];
const AtomicString& active = reinterpret_cast<AtomicString*>(&NamesStorage)[12];
const AtomicString& addsourcebuffer = reinterpret_cast<AtomicString*>(&NamesStorage)[13];
const AtomicString& addstream = reinterpret_cast<AtomicString*>(&NamesStorage)[14];
const AtomicString& addtrack = reinterpret_cast<AtomicString*>(&NamesStorage)[15];
const AtomicString& animationend = reinterpret_cast<AtomicString*>(&NamesStorage)[16];
const AtomicString& animationiteration = reinterpret_cast<AtomicString*>(&NamesStorage)[17];
const AtomicString& animationstart = reinterpret_cast<AtomicString*>(&NamesStorage)[18];
const AtomicString& audioend = reinterpret_cast<AtomicString*>(&NamesStorage)[19];
const AtomicString& audioprocess = reinterpret_cast<AtomicString*>(&NamesStorage)[20];
const AtomicString& audiostart = reinterpret_cast<AtomicString*>(&NamesStorage)[21];
const AtomicString& autocomplete = reinterpret_cast<AtomicString*>(&NamesStorage)[22];
const AtomicString& autocompleteerror = reinterpret_cast<AtomicString*>(&NamesStorage)[23];
const AtomicString& availablechange = reinterpret_cast<AtomicString*>(&NamesStorage)[24];
const AtomicString& beforecopy = reinterpret_cast<AtomicString*>(&NamesStorage)[25];
const AtomicString& beforecut = reinterpret_cast<AtomicString*>(&NamesStorage)[26];
const AtomicString& beforeinstallprompt = reinterpret_cast<AtomicString*>(&NamesStorage)[27];
const AtomicString& beforepaste = reinterpret_cast<AtomicString*>(&NamesStorage)[28];
const AtomicString& beforeunload = reinterpret_cast<AtomicString*>(&NamesStorage)[29];
const AtomicString& beginEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[30];
const AtomicString& blocked = reinterpret_cast<AtomicString*>(&NamesStorage)[31];
const AtomicString& blur = reinterpret_cast<AtomicString*>(&NamesStorage)[32];
const AtomicString& boundary = reinterpret_cast<AtomicString*>(&NamesStorage)[33];
const AtomicString& cached = reinterpret_cast<AtomicString*>(&NamesStorage)[34];
const AtomicString& cancel = reinterpret_cast<AtomicString*>(&NamesStorage)[35];
const AtomicString& canplay = reinterpret_cast<AtomicString*>(&NamesStorage)[36];
const AtomicString& canplaythrough = reinterpret_cast<AtomicString*>(&NamesStorage)[37];
const AtomicString& change = reinterpret_cast<AtomicString*>(&NamesStorage)[38];
const AtomicString& chargingchange = reinterpret_cast<AtomicString*>(&NamesStorage)[39];
const AtomicString& chargingtimechange = reinterpret_cast<AtomicString*>(&NamesStorage)[40];
const AtomicString& checking = reinterpret_cast<AtomicString*>(&NamesStorage)[41];
const AtomicString& click = reinterpret_cast<AtomicString*>(&NamesStorage)[42];
const AtomicString& close = reinterpret_cast<AtomicString*>(&NamesStorage)[43];
const AtomicString& complete = reinterpret_cast<AtomicString*>(&NamesStorage)[44];
const AtomicString& compositionend = reinterpret_cast<AtomicString*>(&NamesStorage)[45];
const AtomicString& compositionstart = reinterpret_cast<AtomicString*>(&NamesStorage)[46];
const AtomicString& compositionupdate = reinterpret_cast<AtomicString*>(&NamesStorage)[47];
const AtomicString& connect = reinterpret_cast<AtomicString*>(&NamesStorage)[48];
const AtomicString& connecting = reinterpret_cast<AtomicString*>(&NamesStorage)[49];
const AtomicString& contextlost = reinterpret_cast<AtomicString*>(&NamesStorage)[50];
const AtomicString& contextmenu = reinterpret_cast<AtomicString*>(&NamesStorage)[51];
const AtomicString& contextrestored = reinterpret_cast<AtomicString*>(&NamesStorage)[52];
const AtomicString& controllerchange = reinterpret_cast<AtomicString*>(&NamesStorage)[53];
const AtomicString& copy = reinterpret_cast<AtomicString*>(&NamesStorage)[54];
const AtomicString& crossoriginconnect = reinterpret_cast<AtomicString*>(&NamesStorage)[55];
const AtomicString& crossoriginmessage = reinterpret_cast<AtomicString*>(&NamesStorage)[56];
const AtomicString& cuechange = reinterpret_cast<AtomicString*>(&NamesStorage)[57];
const AtomicString& cut = reinterpret_cast<AtomicString*>(&NamesStorage)[58];
const AtomicString& datachannel = reinterpret_cast<AtomicString*>(&NamesStorage)[59];
const AtomicString& dblclick = reinterpret_cast<AtomicString*>(&NamesStorage)[60];
const AtomicString& defaultsessionstart = reinterpret_cast<AtomicString*>(&NamesStorage)[61];
const AtomicString& devicelight = reinterpret_cast<AtomicString*>(&NamesStorage)[62];
const AtomicString& devicemotion = reinterpret_cast<AtomicString*>(&NamesStorage)[63];
const AtomicString& deviceorientation = reinterpret_cast<AtomicString*>(&NamesStorage)[64];
const AtomicString& dischargingtimechange = reinterpret_cast<AtomicString*>(&NamesStorage)[65];
const AtomicString& disconnect = reinterpret_cast<AtomicString*>(&NamesStorage)[66];
const AtomicString& display = reinterpret_cast<AtomicString*>(&NamesStorage)[67];
const AtomicString& downloading = reinterpret_cast<AtomicString*>(&NamesStorage)[68];
const AtomicString& drag = reinterpret_cast<AtomicString*>(&NamesStorage)[69];
const AtomicString& dragend = reinterpret_cast<AtomicString*>(&NamesStorage)[70];
const AtomicString& dragenter = reinterpret_cast<AtomicString*>(&NamesStorage)[71];
const AtomicString& dragleave = reinterpret_cast<AtomicString*>(&NamesStorage)[72];
const AtomicString& dragover = reinterpret_cast<AtomicString*>(&NamesStorage)[73];
const AtomicString& dragstart = reinterpret_cast<AtomicString*>(&NamesStorage)[74];
const AtomicString& drop = reinterpret_cast<AtomicString*>(&NamesStorage)[75];
const AtomicString& durationchange = reinterpret_cast<AtomicString*>(&NamesStorage)[76];
const AtomicString& emptied = reinterpret_cast<AtomicString*>(&NamesStorage)[77];
const AtomicString& encrypted = reinterpret_cast<AtomicString*>(&NamesStorage)[78];
const AtomicString& end = reinterpret_cast<AtomicString*>(&NamesStorage)[79];
const AtomicString& endEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[80];
const AtomicString& ended = reinterpret_cast<AtomicString*>(&NamesStorage)[81];
const AtomicString& enter = reinterpret_cast<AtomicString*>(&NamesStorage)[82];
const AtomicString& error = reinterpret_cast<AtomicString*>(&NamesStorage)[83];
const AtomicString& exit = reinterpret_cast<AtomicString*>(&NamesStorage)[84];
const AtomicString& fetch = reinterpret_cast<AtomicString*>(&NamesStorage)[85];
const AtomicString& finish = reinterpret_cast<AtomicString*>(&NamesStorage)[86];
const AtomicString& focus = reinterpret_cast<AtomicString*>(&NamesStorage)[87];
const AtomicString& focusin = reinterpret_cast<AtomicString*>(&NamesStorage)[88];
const AtomicString& focusout = reinterpret_cast<AtomicString*>(&NamesStorage)[89];
const AtomicString& frametimingbufferfull = reinterpret_cast<AtomicString*>(&NamesStorage)[90];
const AtomicString& fullscreenchange = reinterpret_cast<AtomicString*>(&NamesStorage)[91];
const AtomicString& fullscreenerror = reinterpret_cast<AtomicString*>(&NamesStorage)[92];
const AtomicString& gamepadconnected = reinterpret_cast<AtomicString*>(&NamesStorage)[93];
const AtomicString& gamepaddisconnected = reinterpret_cast<AtomicString*>(&NamesStorage)[94];
const AtomicString& geofenceenter = reinterpret_cast<AtomicString*>(&NamesStorage)[95];
const AtomicString& geofenceleave = reinterpret_cast<AtomicString*>(&NamesStorage)[96];
const AtomicString& gesturelongpress = reinterpret_cast<AtomicString*>(&NamesStorage)[97];
const AtomicString& gesturescrollend = reinterpret_cast<AtomicString*>(&NamesStorage)[98];
const AtomicString& gesturescrollstart = reinterpret_cast<AtomicString*>(&NamesStorage)[99];
const AtomicString& gesturescrollupdate = reinterpret_cast<AtomicString*>(&NamesStorage)[100];
const AtomicString& gestureshowpress = reinterpret_cast<AtomicString*>(&NamesStorage)[101];
const AtomicString& gesturetap = reinterpret_cast<AtomicString*>(&NamesStorage)[102];
const AtomicString& gesturetapdown = reinterpret_cast<AtomicString*>(&NamesStorage)[103];
const AtomicString& gesturetapunconfirmed = reinterpret_cast<AtomicString*>(&NamesStorage)[104];
const AtomicString& gotpointercapture = reinterpret_cast<AtomicString*>(&NamesStorage)[105];
const AtomicString& hashchange = reinterpret_cast<AtomicString*>(&NamesStorage)[106];
const AtomicString& icecandidate = reinterpret_cast<AtomicString*>(&NamesStorage)[107];
const AtomicString& iceconnectionstatechange = reinterpret_cast<AtomicString*>(&NamesStorage)[108];
const AtomicString& inactive = reinterpret_cast<AtomicString*>(&NamesStorage)[109];
const AtomicString& input = reinterpret_cast<AtomicString*>(&NamesStorage)[110];
const AtomicString& install = reinterpret_cast<AtomicString*>(&NamesStorage)[111];
const AtomicString& invalid = reinterpret_cast<AtomicString*>(&NamesStorage)[112];
const AtomicString& keydown = reinterpret_cast<AtomicString*>(&NamesStorage)[113];
const AtomicString& keypress = reinterpret_cast<AtomicString*>(&NamesStorage)[114];
const AtomicString& keystatuseschange = reinterpret_cast<AtomicString*>(&NamesStorage)[115];
const AtomicString& keyup = reinterpret_cast<AtomicString*>(&NamesStorage)[116];
const AtomicString& languagechange = reinterpret_cast<AtomicString*>(&NamesStorage)[117];
const AtomicString& levelchange = reinterpret_cast<AtomicString*>(&NamesStorage)[118];
const AtomicString& load = reinterpret_cast<AtomicString*>(&NamesStorage)[119];
const AtomicString& loadeddata = reinterpret_cast<AtomicString*>(&NamesStorage)[120];
const AtomicString& loadedmetadata = reinterpret_cast<AtomicString*>(&NamesStorage)[121];
const AtomicString& loadend = reinterpret_cast<AtomicString*>(&NamesStorage)[122];
const AtomicString& loading = reinterpret_cast<AtomicString*>(&NamesStorage)[123];
const AtomicString& loadingdone = reinterpret_cast<AtomicString*>(&NamesStorage)[124];
const AtomicString& loadingerror = reinterpret_cast<AtomicString*>(&NamesStorage)[125];
const AtomicString& loadstart = reinterpret_cast<AtomicString*>(&NamesStorage)[126];
const AtomicString& lostpointercapture = reinterpret_cast<AtomicString*>(&NamesStorage)[127];
const AtomicString& mark = reinterpret_cast<AtomicString*>(&NamesStorage)[128];
const AtomicString& message = reinterpret_cast<AtomicString*>(&NamesStorage)[129];
const AtomicString& midimessage = reinterpret_cast<AtomicString*>(&NamesStorage)[130];
const AtomicString& mousedown = reinterpret_cast<AtomicString*>(&NamesStorage)[131];
const AtomicString& mouseenter = reinterpret_cast<AtomicString*>(&NamesStorage)[132];
const AtomicString& mouseleave = reinterpret_cast<AtomicString*>(&NamesStorage)[133];
const AtomicString& mousemove = reinterpret_cast<AtomicString*>(&NamesStorage)[134];
const AtomicString& mouseout = reinterpret_cast<AtomicString*>(&NamesStorage)[135];
const AtomicString& mouseover = reinterpret_cast<AtomicString*>(&NamesStorage)[136];
const AtomicString& mouseup = reinterpret_cast<AtomicString*>(&NamesStorage)[137];
const AtomicString& mousewheel = reinterpret_cast<AtomicString*>(&NamesStorage)[138];
const AtomicString& mute = reinterpret_cast<AtomicString*>(&NamesStorage)[139];
const AtomicString& negotiationneeded = reinterpret_cast<AtomicString*>(&NamesStorage)[140];
const AtomicString& nomatch = reinterpret_cast<AtomicString*>(&NamesStorage)[141];
const AtomicString& notificationclick = reinterpret_cast<AtomicString*>(&NamesStorage)[142];
const AtomicString& notificationerror = reinterpret_cast<AtomicString*>(&NamesStorage)[143];
const AtomicString& noupdate = reinterpret_cast<AtomicString*>(&NamesStorage)[144];
const AtomicString& obsolete = reinterpret_cast<AtomicString*>(&NamesStorage)[145];
const AtomicString& offline = reinterpret_cast<AtomicString*>(&NamesStorage)[146];
const AtomicString& online = reinterpret_cast<AtomicString*>(&NamesStorage)[147];
const AtomicString& open = reinterpret_cast<AtomicString*>(&NamesStorage)[148];
const AtomicString& orientationchange = reinterpret_cast<AtomicString*>(&NamesStorage)[149];
const AtomicString& pagehide = reinterpret_cast<AtomicString*>(&NamesStorage)[150];
const AtomicString& pageshow = reinterpret_cast<AtomicString*>(&NamesStorage)[151];
const AtomicString& paste = reinterpret_cast<AtomicString*>(&NamesStorage)[152];
const AtomicString& pause = reinterpret_cast<AtomicString*>(&NamesStorage)[153];
const AtomicString& periodicsync = reinterpret_cast<AtomicString*>(&NamesStorage)[154];
const AtomicString& play = reinterpret_cast<AtomicString*>(&NamesStorage)[155];
const AtomicString& playing = reinterpret_cast<AtomicString*>(&NamesStorage)[156];
const AtomicString& pointercancel = reinterpret_cast<AtomicString*>(&NamesStorage)[157];
const AtomicString& pointerdown = reinterpret_cast<AtomicString*>(&NamesStorage)[158];
const AtomicString& pointerenter = reinterpret_cast<AtomicString*>(&NamesStorage)[159];
const AtomicString& pointerleave = reinterpret_cast<AtomicString*>(&NamesStorage)[160];
const AtomicString& pointerlockchange = reinterpret_cast<AtomicString*>(&NamesStorage)[161];
const AtomicString& pointerlockerror = reinterpret_cast<AtomicString*>(&NamesStorage)[162];
const AtomicString& pointermove = reinterpret_cast<AtomicString*>(&NamesStorage)[163];
const AtomicString& pointerout = reinterpret_cast<AtomicString*>(&NamesStorage)[164];
const AtomicString& pointerover = reinterpret_cast<AtomicString*>(&NamesStorage)[165];
const AtomicString& pointerup = reinterpret_cast<AtomicString*>(&NamesStorage)[166];
const AtomicString& popstate = reinterpret_cast<AtomicString*>(&NamesStorage)[167];
const AtomicString& progress = reinterpret_cast<AtomicString*>(&NamesStorage)[168];
const AtomicString& push = reinterpret_cast<AtomicString*>(&NamesStorage)[169];
const AtomicString& ratechange = reinterpret_cast<AtomicString*>(&NamesStorage)[170];
const AtomicString& readystatechange = reinterpret_cast<AtomicString*>(&NamesStorage)[171];
const AtomicString& rejectionhandled = reinterpret_cast<AtomicString*>(&NamesStorage)[172];
const AtomicString& removesourcebuffer = reinterpret_cast<AtomicString*>(&NamesStorage)[173];
const AtomicString& removestream = reinterpret_cast<AtomicString*>(&NamesStorage)[174];
const AtomicString& removetrack = reinterpret_cast<AtomicString*>(&NamesStorage)[175];
const AtomicString& repeatEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[176];
const AtomicString& reset = reinterpret_cast<AtomicString*>(&NamesStorage)[177];
const AtomicString& resize = reinterpret_cast<AtomicString*>(&NamesStorage)[178];
const AtomicString& result = reinterpret_cast<AtomicString*>(&NamesStorage)[179];
const AtomicString& resume = reinterpret_cast<AtomicString*>(&NamesStorage)[180];
const AtomicString& scroll = reinterpret_cast<AtomicString*>(&NamesStorage)[181];
const AtomicString& search = reinterpret_cast<AtomicString*>(&NamesStorage)[182];
const AtomicString& securitypolicyviolation = reinterpret_cast<AtomicString*>(&NamesStorage)[183];
const AtomicString& seeked = reinterpret_cast<AtomicString*>(&NamesStorage)[184];
const AtomicString& seeking = reinterpret_cast<AtomicString*>(&NamesStorage)[185];
const AtomicString& select = reinterpret_cast<AtomicString*>(&NamesStorage)[186];
const AtomicString& selectionchange = reinterpret_cast<AtomicString*>(&NamesStorage)[187];
const AtomicString& selectstart = reinterpret_cast<AtomicString*>(&NamesStorage)[188];
const AtomicString& show = reinterpret_cast<AtomicString*>(&NamesStorage)[189];
const AtomicString& signalingstatechange = reinterpret_cast<AtomicString*>(&NamesStorage)[190];
const AtomicString& soundend = reinterpret_cast<AtomicString*>(&NamesStorage)[191];
const AtomicString& soundstart = reinterpret_cast<AtomicString*>(&NamesStorage)[192];
const AtomicString& sourceclose = reinterpret_cast<AtomicString*>(&NamesStorage)[193];
const AtomicString& sourceended = reinterpret_cast<AtomicString*>(&NamesStorage)[194];
const AtomicString& sourceopen = reinterpret_cast<AtomicString*>(&NamesStorage)[195];
const AtomicString& speechend = reinterpret_cast<AtomicString*>(&NamesStorage)[196];
const AtomicString& speechstart = reinterpret_cast<AtomicString*>(&NamesStorage)[197];
const AtomicString& stalled = reinterpret_cast<AtomicString*>(&NamesStorage)[198];
const AtomicString& start = reinterpret_cast<AtomicString*>(&NamesStorage)[199];
const AtomicString& statechange = reinterpret_cast<AtomicString*>(&NamesStorage)[200];
const AtomicString& storage = reinterpret_cast<AtomicString*>(&NamesStorage)[201];
const AtomicString& submit = reinterpret_cast<AtomicString*>(&NamesStorage)[202];
const AtomicString& success = reinterpret_cast<AtomicString*>(&NamesStorage)[203];
const AtomicString& suspend = reinterpret_cast<AtomicString*>(&NamesStorage)[204];
const AtomicString& sync = reinterpret_cast<AtomicString*>(&NamesStorage)[205];
const AtomicString& textInput = reinterpret_cast<AtomicString*>(&NamesStorage)[206];
const AtomicString& timeout = reinterpret_cast<AtomicString*>(&NamesStorage)[207];
const AtomicString& timeupdate = reinterpret_cast<AtomicString*>(&NamesStorage)[208];
const AtomicString& toggle = reinterpret_cast<AtomicString*>(&NamesStorage)[209];
const AtomicString& tonechange = reinterpret_cast<AtomicString*>(&NamesStorage)[210];
const AtomicString& touchcancel = reinterpret_cast<AtomicString*>(&NamesStorage)[211];
const AtomicString& touchend = reinterpret_cast<AtomicString*>(&NamesStorage)[212];
const AtomicString& touchmove = reinterpret_cast<AtomicString*>(&NamesStorage)[213];
const AtomicString& touchstart = reinterpret_cast<AtomicString*>(&NamesStorage)[214];
const AtomicString& transitionend = reinterpret_cast<AtomicString*>(&NamesStorage)[215];
const AtomicString& typechange = reinterpret_cast<AtomicString*>(&NamesStorage)[216];
const AtomicString& unhandledrejection = reinterpret_cast<AtomicString*>(&NamesStorage)[217];
const AtomicString& unload = reinterpret_cast<AtomicString*>(&NamesStorage)[218];
const AtomicString& unmute = reinterpret_cast<AtomicString*>(&NamesStorage)[219];
const AtomicString& update = reinterpret_cast<AtomicString*>(&NamesStorage)[220];
const AtomicString& updateend = reinterpret_cast<AtomicString*>(&NamesStorage)[221];
const AtomicString& updatefound = reinterpret_cast<AtomicString*>(&NamesStorage)[222];
const AtomicString& updateready = reinterpret_cast<AtomicString*>(&NamesStorage)[223];
const AtomicString& updatestart = reinterpret_cast<AtomicString*>(&NamesStorage)[224];
const AtomicString& upgradeneeded = reinterpret_cast<AtomicString*>(&NamesStorage)[225];
const AtomicString& versionchange = reinterpret_cast<AtomicString*>(&NamesStorage)[226];
const AtomicString& visibilitychange = reinterpret_cast<AtomicString*>(&NamesStorage)[227];
const AtomicString& voiceschanged = reinterpret_cast<AtomicString*>(&NamesStorage)[228];
const AtomicString& volumechange = reinterpret_cast<AtomicString*>(&NamesStorage)[229];
const AtomicString& waiting = reinterpret_cast<AtomicString*>(&NamesStorage)[230];
const AtomicString& waitingforkey = reinterpret_cast<AtomicString*>(&NamesStorage)[231];
const AtomicString& webglcontextcreationerror = reinterpret_cast<AtomicString*>(&NamesStorage)[232];
const AtomicString& webglcontextlost = reinterpret_cast<AtomicString*>(&NamesStorage)[233];
const AtomicString& webglcontextrestored = reinterpret_cast<AtomicString*>(&NamesStorage)[234];
const AtomicString& webkitAnimationEnd = reinterpret_cast<AtomicString*>(&NamesStorage)[235];
const AtomicString& webkitAnimationIteration = reinterpret_cast<AtomicString*>(&NamesStorage)[236];
const AtomicString& webkitAnimationStart = reinterpret_cast<AtomicString*>(&NamesStorage)[237];
const AtomicString& webkitBeforeTextInserted = reinterpret_cast<AtomicString*>(&NamesStorage)[238];
const AtomicString& webkitEditableContentChanged = reinterpret_cast<AtomicString*>(&NamesStorage)[239];
const AtomicString& webkitTransitionEnd = reinterpret_cast<AtomicString*>(&NamesStorage)[240];
const AtomicString& webkitfullscreenchange = reinterpret_cast<AtomicString*>(&NamesStorage)[241];
const AtomicString& webkitfullscreenerror = reinterpret_cast<AtomicString*>(&NamesStorage)[242];
const AtomicString& webkitkeyadded = reinterpret_cast<AtomicString*>(&NamesStorage)[243];
const AtomicString& webkitkeyerror = reinterpret_cast<AtomicString*>(&NamesStorage)[244];
const AtomicString& webkitkeymessage = reinterpret_cast<AtomicString*>(&NamesStorage)[245];
const AtomicString& webkitneedkey = reinterpret_cast<AtomicString*>(&NamesStorage)[246];
const AtomicString& webkitprerenderdomcontentloaded = reinterpret_cast<AtomicString*>(&NamesStorage)[247];
const AtomicString& webkitprerenderload = reinterpret_cast<AtomicString*>(&NamesStorage)[248];
const AtomicString& webkitprerenderstart = reinterpret_cast<AtomicString*>(&NamesStorage)[249];
const AtomicString& webkitprerenderstop = reinterpret_cast<AtomicString*>(&NamesStorage)[250];
const AtomicString& webkitresourcetimingbufferfull = reinterpret_cast<AtomicString*>(&NamesStorage)[251];
const AtomicString& webkitspeechchange = reinterpret_cast<AtomicString*>(&NamesStorage)[252];
const AtomicString& webkitvisibilitychange = reinterpret_cast<AtomicString*>(&NamesStorage)[253];
const AtomicString& wheel = reinterpret_cast<AtomicString*>(&NamesStorage)[254];
const AtomicString& write = reinterpret_cast<AtomicString*>(&NamesStorage)[255];
const AtomicString& writeend = reinterpret_cast<AtomicString*>(&NamesStorage)[256];
const AtomicString& writestart = reinterpret_cast<AtomicString*>(&NamesStorage)[257];
const AtomicString& zoom = reinterpret_cast<AtomicString*>(&NamesStorage)[258];

void init()
{
    struct NameEntry {
        const char* name;
        unsigned hash;
        unsigned char length;
    };

    static const NameEntry kNames[] = {
        { "DOMActivate", 1580932, 11 },
        { "DOMCharacterDataModified", 1747391, 24 },
        { "DOMContentLoaded", 10217403, 16 },
        { "DOMFocusIn", 13717889, 10 },
        { "DOMFocusOut", 14725020, 11 },
        { "DOMNodeInserted", 3305523, 15 },
        { "DOMNodeInsertedIntoDocument", 9765719, 27 },
        { "DOMNodeRemoved", 15338285, 14 },
        { "DOMNodeRemovedFromDocument", 16284219, 26 },
        { "DOMSubtreeModified", 6084203, 18 },
        { "abort", 15390287, 5 },
        { "activate", 8463533, 8 },
        { "active", 4650789, 6 },
        { "addsourcebuffer", 7452490, 15 },
        { "addstream", 15110493, 9 },
        { "addtrack", 3675244, 8 },
        { "animationend", 2356336, 12 },
        { "animationiteration", 4399371, 18 },
        { "animationstart", 1171773, 14 },
        { "audioend", 4005439, 8 },
        { "audioprocess", 7432340, 12 },
        { "audiostart", 12162534, 10 },
        { "autocomplete", 14667434, 12 },
        { "autocompleteerror", 412664, 17 },
        { "availablechange", 12524858, 15 },
        { "beforecopy", 15623218, 10 },
        { "beforecut", 6886552, 9 },
        { "beforeinstallprompt", 15019623, 19 },
        { "beforepaste", 5049674, 11 },
        { "beforeunload", 16009443, 12 },
        { "beginEvent", 3946429, 10 },
        { "blocked", 7188319, 7 },
        { "blur", 3880931, 4 },
        { "boundary", 8113195, 8 },
        { "cached", 2984957, 6 },
        { "cancel", 9877073, 6 },
        { "canplay", 10609174, 7 },
        { "canplaythrough", 3645779, 14 },
        { "change", 3980998, 6 },
        { "chargingchange", 12089746, 14 },
        { "chargingtimechange", 2233255, 18 },
        { "checking", 12242986, 8 },
        { "click", 10125525, 5 },
        { "close", 3222970, 5 },
        { "complete", 6079763, 8 },
        { "compositionend", 5906550, 14 },
        { "compositionstart", 16133899, 16 },
        { "compositionupdate", 7385090, 17 },
        { "connect", 12649850, 7 },
        { "connecting", 1432354, 10 },
        { "contextlost", 9876436, 11 },
        { "contextmenu", 14578063, 11 },
        { "contextrestored", 81548, 15 },
        { "controllerchange", 2370586, 16 },
        { "copy", 16438426, 4 },
        { "crossoriginconnect", 5771893, 18 },
        { "crossoriginmessage", 10776580, 18 },
        { "cuechange", 3496656, 9 },
        { "cut", 6810636, 3 },
        { "datachannel", 3404486, 11 },
        { "dblclick", 9054393, 8 },
        { "defaultsessionstart", 1473789, 19 },
        { "devicelight", 9022337, 11 },
        { "devicemotion", 1024162, 12 },
        { "deviceorientation", 12165871, 17 },
        { "dischargingtimechange", 16138730, 21 },
        { "disconnect", 13405069, 10 },
        { "display", 16245385, 7 },
        { "downloading", 576780, 11 },
        { "drag", 1532976, 4 },
        { "dragend", 11982793, 7 },
        { "dragenter", 10351130, 9 },
        { "dragleave", 11297414, 9 },
        { "dragover", 2973271, 8 },
        { "dragstart", 15174021, 9 },
        { "drop", 13413407, 4 },
        { "durationchange", 4541505, 14 },
        { "emptied", 15126627, 7 },
        { "encrypted", 5262076, 9 },
        { "end", 1590106, 3 },
        { "endEvent", 10314310, 8 },
        { "ended", 54732, 5 },
        { "enter", 3509546, 5 },
        { "error", 6654137, 5 },
        { "exit", 15251726, 4 },
        { "fetch", 10988466, 5 },
        { "finish", 15149124, 6 },
        { "focus", 1849182, 5 },
        { "focusin", 13489365, 7 },
        { "focusout", 13124807, 8 },
        { "frametimingbufferfull", 12192978, 21 },
        { "fullscreenchange", 4189571, 16 },
        { "fullscreenerror", 16209384, 15 },
        { "gamepadconnected", 3715619, 16 },
        { "gamepaddisconnected", 3966662, 19 },
        { "geofenceenter", 5978322, 13 },
        { "geofenceleave", 9484968, 13 },
        { "gesturelongpress", 3143202, 16 },
        { "gesturescrollend", 5471896, 16 },
        { "gesturescrollstart", 16516609, 18 },
        { "gesturescrollupdate", 11683597, 19 },
        { "gestureshowpress", 111807, 16 },
        { "gesturetap", 1938166, 10 },
        { "gesturetapdown", 8907849, 14 },
        { "gesturetapunconfirmed", 793435, 21 },
        { "gotpointercapture", 1398160, 17 },
        { "hashchange", 3959696, 10 },
        { "icecandidate", 16268761, 12 },
        { "iceconnectionstatechange", 9120814, 24 },
        { "inactive", 14538941, 8 },
        { "input", 10365436, 5 },
        { "install", 7743126, 7 },
        { "invalid", 2059736, 7 },
        { "keydown", 5301006, 7 },
        { "keypress", 13845508, 8 },
        { "keystatuseschange", 6044643, 17 },
        { "keyup", 1054547, 5 },
        { "languagechange", 3401938, 14 },
        { "levelchange", 4445458, 11 },
        { "load", 8207817, 4 },
        { "loadeddata", 13874190, 10 },
        { "loadedmetadata", 9550378, 14 },
        { "loadend", 15911784, 7 },
        { "loading", 13228638, 7 },
        { "loadingdone", 6190750, 11 },
        { "loadingerror", 5585167, 12 },
        { "loadstart", 5495169, 9 },
        { "lostpointercapture", 16324405, 18 },
        { "mark", 16508213, 4 },
        { "message", 11017471, 7 },
        { "midimessage", 3928734, 11 },
        { "mousedown", 5740218, 9 },
        { "mouseenter", 632853, 10 },
        { "mouseleave", 1144826, 10 },
        { "mousemove", 7356044, 9 },
        { "mouseout", 685204, 8 },
        { "mouseover", 12064397, 9 },
        { "mouseup", 8467273, 7 },
        { "mousewheel", 15891108, 10 },
        { "mute", 15335886, 4 },
        { "negotiationneeded", 7270370, 17 },
        { "nomatch", 8258898, 7 },
        { "notificationclick", 9870337, 17 },
        { "notificationerror", 12723301, 17 },
        { "noupdate", 8885664, 8 },
        { "obsolete", 12364910, 8 },
        { "offline", 8847130, 7 },
        { "online", 9492271, 6 },
        { "open", 13703631, 4 },
        { "orientationchange", 14664026, 17 },
        { "pagehide", 16640617, 8 },
        { "pageshow", 12320166, 8 },
        { "paste", 369957, 5 },
        { "pause", 5413740, 5 },
        { "periodicsync", 13404718, 12 },
        { "play", 10707022, 4 },
        { "playing", 12380358, 7 },
        { "pointercancel", 10214742, 13 },
        { "pointerdown", 3878957, 11 },
        { "pointerenter", 11845251, 12 },
        { "pointerleave", 10895050, 12 },
        { "pointerlockchange", 7047632, 17 },
        { "pointerlockerror", 16321958, 16 },
        { "pointermove", 14409529, 11 },
        { "pointerout", 11792654, 10 },
        { "pointerover", 10978871, 11 },
        { "pointerup", 5447091, 9 },
        { "popstate", 12585208, 8 },
        { "progress", 11461517, 8 },
        { "push", 4758933, 4 },
        { "ratechange", 9044681, 10 },
        { "readystatechange", 11011948, 16 },
        { "rejectionhandled", 7761403, 16 },
        { "removesourcebuffer", 13594278, 18 },
        { "removestream", 4604809, 12 },
        { "removetrack", 6131613, 11 },
        { "repeatEvent", 7182823, 11 },
        { "reset", 13674204, 5 },
        { "resize", 11716975, 6 },
        { "result", 15954886, 6 },
        { "resume", 3214184, 6 },
        { "scroll", 7626286, 6 },
        { "search", 6906057, 6 },
        { "securitypolicyviolation", 7930261, 23 },
        { "seeked", 16049377, 6 },
        { "seeking", 10757715, 7 },
        { "select", 210571, 6 },
        { "selectionchange", 8861459, 15 },
        { "selectstart", 5847864, 11 },
        { "show", 3191658, 4 },
        { "signalingstatechange", 14107818, 20 },
        { "soundend", 5959322, 8 },
        { "soundstart", 14237399, 10 },
        { "sourceclose", 10570717, 11 },
        { "sourceended", 16675086, 11 },
        { "sourceopen", 7526202, 10 },
        { "speechend", 15574659, 9 },
        { "speechstart", 10183406, 11 },
        { "stalled", 4001267, 7 },
        { "start", 1021290, 5 },
        { "statechange", 9232255, 11 },
        { "storage", 3034291, 7 },
        { "submit", 12328646, 6 },
        { "success", 15544773, 7 },
        { "suspend", 2237992, 7 },
        { "sync", 14643608, 4 },
        { "textInput", 12906447, 9 },
        { "timeout", 5983938, 7 },
        { "timeupdate", 10406103, 10 },
        { "toggle", 8404466, 6 },
        { "tonechange", 3007488, 10 },
        { "touchcancel", 5916858, 11 },
        { "touchend", 2956176, 8 },
        { "touchmove", 9499787, 9 },
        { "touchstart", 13231026, 10 },
        { "transitionend", 9031405, 13 },
        { "typechange", 5883421, 10 },
        { "unhandledrejection", 3461649, 18 },
        { "unload", 4411490, 6 },
        { "unmute", 1582770, 6 },
        { "update", 5546488, 6 },
        { "updateend", 13034123, 9 },
        { "updatefound", 15608898, 11 },
        { "updateready", 3196224, 11 },
        { "updatestart", 4286012, 11 },
        { "upgradeneeded", 492799, 13 },
        { "versionchange", 1334380, 13 },
        { "visibilitychange", 11206348, 16 },
        { "voiceschanged", 3637255, 13 },
        { "volumechange", 16288075, 12 },
        { "waiting", 10489636, 7 },
        { "waitingforkey", 6526383, 13 },
        { "webglcontextcreationerror", 2718866, 25 },
        { "webglcontextlost", 16605358, 16 },
        { "webglcontextrestored", 8624464, 20 },
        { "webkitAnimationEnd", 11845628, 18 },
        { "webkitAnimationIteration", 9040977, 24 },
        { "webkitAnimationStart", 4844440, 20 },
        { "webkitBeforeTextInserted", 5393700, 24 },
        { "webkitEditableContentChanged", 1212374, 28 },
        { "webkitTransitionEnd", 16021356, 19 },
        { "webkitfullscreenchange", 5579857, 22 },
        { "webkitfullscreenerror", 12520378, 21 },
        { "webkitkeyadded", 3238929, 14 },
        { "webkitkeyerror", 1430383, 14 },
        { "webkitkeymessage", 61860, 16 },
        { "webkitneedkey", 7858771, 13 },
        { "webkitprerenderdomcontentloaded", 14089645, 31 },
        { "webkitprerenderload", 15469365, 19 },
        { "webkitprerenderstart", 4709816, 20 },
        { "webkitprerenderstop", 7661225, 19 },
        { "webkitresourcetimingbufferfull", 14547041, 30 },
        { "webkitspeechchange", 11755315, 18 },
        { "webkitvisibilitychange", 440449, 22 },
        { "wheel", 5389519, 5 },
        { "write", 10020319, 5 },
        { "writeend", 6300360, 8 },
        { "writestart", 2198394, 10 },
        { "zoom", 6082914, 4 },
    };

    for (size_t i = 0; i < WTF_ARRAY_LENGTH(kNames); i++) {
        StringImpl* stringImpl = StringImpl::createStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
        void* address = reinterpret_cast<AtomicString*>(&NamesStorage) + i;
        new (address) AtomicString(stringImpl);
    }
}

} // EventTypeNames
} // namespace blink
